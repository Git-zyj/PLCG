/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189911
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_12 += ((/* implicit */short) (!(((/* implicit */_Bool) var_8))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                arr_10 [9] [i_2] [(signed char)19] = ((/* implicit */unsigned char) ((_Bool) max((((/* implicit */unsigned short) min((arr_2 [(_Bool)0] [(short)12] [(_Bool)1]), (((/* implicit */unsigned char) var_5))))), ((unsigned short)65524))));
                                var_13 += ((/* implicit */unsigned int) arr_8 [(_Bool)1] [6LL] [(unsigned char)16] [18LL] [(_Bool)1] [i_4]);
                            }
                        } 
                    } 
                    var_14 *= ((/* implicit */long long int) ((short) (~(((/* implicit */int) ((((/* implicit */int) arr_6 [7LL] [(short)16])) <= (((/* implicit */int) arr_9 [(unsigned char)10] [(_Bool)1] [(unsigned char)0] [20LL] [(short)16] [(short)17] [(_Bool)1]))))))));
                }
                /* vectorizable */
                for (unsigned long long int i_5 = 1; i_5 < 17; i_5 += 4) 
                {
                    var_15 |= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) -1696691415)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-108))) : (-5033557992898712293LL)))));
                    arr_13 [i_5] = ((/* implicit */unsigned short) arr_2 [(unsigned char)14] [i_5 + 3] [(unsigned char)16]);
                }
                /* LoopSeq 3 */
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    arr_18 [(unsigned char)6] [i_6] [i_6] [18U] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (var_9) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [(signed char)14]))) / (2514988378U)))))));
                    var_16 *= ((/* implicit */signed char) arr_2 [i_6 - 1] [i_6 - 1] [i_6 - 1]);
                    var_17 &= ((/* implicit */int) min((((/* implicit */unsigned long long int) arr_2 [19] [2] [(unsigned short)7])), (((unsigned long long int) var_8))));
                    var_18 += ((/* implicit */_Bool) ((((/* implicit */_Bool) -7029129207557695334LL)) ? (-1632754797823443561LL) : (((/* implicit */long long int) 1149803071U))));
                    var_19 = ((/* implicit */unsigned short) (((_Bool)1) ? (((((/* implicit */_Bool) arr_5 [9U] [7LL] [i_6] [4LL])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)38))) : (2305842871774740480LL))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)93)))));
                }
                for (long long int i_7 = 3; i_7 < 20; i_7 += 2) 
                {
                    var_20 = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) (signed char)-55)) : (((/* implicit */int) (signed char)105))));
                    arr_21 [(signed char)2] [(_Bool)1] [12LL] [2LL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((_Bool) var_4))), (arr_0 [(unsigned char)15])))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))) : (((((/* implicit */int) (!((_Bool)1)))) >> (((/* implicit */int) ((_Bool) arr_8 [6LL] [(signed char)16] [14U] [4] [8LL] [i_1])))))));
                }
                for (signed char i_8 = 3; i_8 < 20; i_8 += 4) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_9 = 3; i_9 < 18; i_9 += 3) 
                    {
                        arr_26 [(_Bool)1] [(unsigned char)18] [14LL] [(signed char)2] [4LL] [(short)19] &= ((/* implicit */signed char) (~(((/* implicit */int) arr_25 [(short)16] [6LL] [4ULL] [18LL]))));
                        arr_27 [3] [(unsigned char)18] = ((/* implicit */_Bool) (~(-1082684627)));
                        arr_28 [16LL] [(unsigned short)20] [(signed char)9] [6U] = ((/* implicit */long long int) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))));
                    }
                    for (long long int i_10 = 0; i_10 < 21; i_10 += 4) 
                    {
                        arr_31 [(signed char)2] [(unsigned short)13] [11] = ((/* implicit */signed char) ((((((/* implicit */_Bool) min((((/* implicit */short) (signed char)-6)), (arr_25 [(_Bool)1] [10] [(short)19] [12ULL])))) ? (arr_29 [9LL] [(unsigned short)12] [9LL]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)15))) : (var_6)))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-25092)))));
                        var_21 += ((/* implicit */long long int) (+(((/* implicit */int) arr_3 [5U]))));
                        var_22 = ((/* implicit */long long int) ((signed char) arr_16 [i_10] [18] [(signed char)12] [(_Bool)1]));
                        var_23 = ((/* implicit */signed char) ((short) (~(((/* implicit */int) arr_19 [i_8 - 1] [i_8 - 2] [(unsigned short)9])))));
                    }
                    var_24 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */long long int) ((((/* implicit */int) var_0)) >> (((18446744073709551614ULL) - (18446744073709551586ULL)))))) & (((long long int) arr_2 [(unsigned short)11] [(_Bool)1] [(_Bool)1])))));
                }
            }
        } 
    } 
}
