/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24040
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
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 24; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((long long int) 535822336U)) >> (((((((/* implicit */int) (signed char)121)) + (var_3))) + (294932926)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)121))))) : (((/* implicit */int) ((unsigned short) ((signed char) (unsigned short)30947))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) (!(((((/* implicit */_Bool) (signed char)116)) || (((((/* implicit */_Bool) (signed char)121)) && (((/* implicit */_Bool) var_2)))))))))));
                                arr_14 [16U] [16U] [(unsigned char)14] [16U] [(_Bool)1] [i_3] = ((/* implicit */unsigned char) arr_5 [i_1] [i_1]);
                                var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) arr_12 [i_2] [i_2] [i_2] [i_2] [i_2]))));
                            }
                        } 
                    } 
                    arr_15 [i_1] = ((/* implicit */long long int) ((max((var_2), (var_7))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)114)) ? (((/* implicit */int) arr_13 [i_2] [i_0 + 1] [2ULL] [i_2] [10ULL])) : (((/* implicit */int) arr_13 [i_2] [i_0 - 1] [2LL] [(_Bool)1] [(_Bool)1])))))));
                    var_14 = ((/* implicit */unsigned int) max((((((((/* implicit */_Bool) arr_12 [i_2] [i_2] [i_2] [i_2] [8ULL])) ? (((/* implicit */int) (signed char)121)) : (((/* implicit */int) (signed char)0)))) >> (((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (signed char)121)) - (94))))))), (min((((/* implicit */int) var_0)), (-7)))));
                }
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    arr_19 [i_0] [i_0] [12LL] = ((/* implicit */signed char) arr_5 [i_0] [i_0]);
                    var_15 = ((/* implicit */unsigned long long int) var_9);
                    arr_20 [i_0] [3ULL] [i_0] [(unsigned short)1] = ((/* implicit */unsigned short) ((unsigned char) arr_8 [i_1] [i_1]));
                    var_16 = ((/* implicit */unsigned long long int) ((unsigned int) min((var_2), (((/* implicit */unsigned int) -1913651050)))));
                    var_17 ^= ((/* implicit */unsigned short) var_7);
                }
                arr_21 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-115)) + (2147483647))) >> (((((/* implicit */int) (signed char)-102)) + (113)))));
            }
        } 
    } 
    var_18 = ((/* implicit */int) var_9);
    var_19 = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) * (((/* implicit */int) (signed char)101))))) ? (((/* implicit */unsigned long long int) var_5)) : (((18446744073709551615ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))));
    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) var_9))));
    /* LoopSeq 4 */
    for (unsigned short i_6 = 1; i_6 < 16; i_6 += 1) 
    {
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((_Bool) var_2)))));
        arr_25 [(signed char)1] [(signed char)1] = ((/* implicit */unsigned short) arr_0 [i_6]);
    }
    for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 1) /* same iter space */
    {
        var_22 += ((/* implicit */unsigned long long int) ((((arr_26 [i_7]) >> (((arr_27 [i_7]) - (790803972U))))) * ((((_Bool)1) ? (((/* implicit */int) max((((/* implicit */unsigned char) arr_10 [i_7] [2ULL] [(unsigned short)0] [(unsigned short)8])), (arr_23 [17U])))) : (((/* implicit */int) arr_29 [(unsigned short)5] [(unsigned short)5]))))));
        arr_30 [(_Bool)1] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */unsigned int) ((int) ((((/* implicit */int) var_1)) >> (((var_10) - (1049004385))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [4ULL]))) * (1228508376U)))));
    }
    for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 12; i_9 += 1) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    {
                        arr_40 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */unsigned short) var_7);
                        arr_41 [9ULL] [0U] [(unsigned short)1] [6] [i_8] [(unsigned short)1] = ((/* implicit */_Bool) var_8);
                        var_23 = ((/* implicit */unsigned short) ((unsigned char) (!((!(((/* implicit */_Bool) (signed char)4)))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned short i_12 = 0; i_12 < 12; i_12 += 1) 
        {
            var_24 = ((/* implicit */signed char) (+(var_5)));
            var_25 ^= ((/* implicit */unsigned long long int) (unsigned short)4);
        }
    }
    for (unsigned long long int i_13 = 0; i_13 < 12; i_13 += 1) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_32 [i_13] [i_13]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) : (((((arr_10 [4U] [18U] [(_Bool)1] [18U]) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) >> (((((var_10) / (((/* implicit */int) var_8)))) - (36019)))))));
        /* LoopNest 2 */
        for (unsigned long long int i_14 = 0; i_14 < 12; i_14 += 1) 
        {
            for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
            {
                {
                    var_27 = ((/* implicit */_Bool) var_7);
                    var_28 *= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_11 [2ULL] [16ULL] [24U] [2LL] [2ULL] [2ULL])) ? (((((/* implicit */_Bool) arr_51 [8U] [8U])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_13] [(unsigned short)2]))) : (arr_47 [(unsigned short)4]))) : (((/* implicit */unsigned int) arr_26 [9ULL])))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) 3066458921U)) ? (((/* implicit */unsigned long long int) var_2)) : (var_4)))) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 131071ULL)) || (((/* implicit */_Bool) 3066458919U)))))))) - (4165829238U)))));
                }
            } 
        } 
        var_29 += ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_3))))), ((~(-357859131103063944LL)))));
    }
}
