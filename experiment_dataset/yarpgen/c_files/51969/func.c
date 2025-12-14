/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51969
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
    var_12 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)1257)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                arr_5 [(unsigned short)10] [i_0] [(_Bool)1] = ((/* implicit */unsigned char) var_3);
                /* LoopSeq 4 */
                for (short i_2 = 0; i_2 < 25; i_2 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        arr_10 [i_0] [i_3] [i_2] = ((/* implicit */unsigned char) var_4);
                        arr_11 [i_3] [12LL] [i_3] [i_0] [i_3] = ((/* implicit */_Bool) var_1);
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 25; i_4 += 1) 
                    {
                        for (long long int i_5 = 0; i_5 < 25; i_5 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */int) ((_Bool) (unsigned char)0));
                                arr_19 [i_0] [i_1] [i_2] [i_4] [i_4] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) max(((unsigned char)128), (((/* implicit */unsigned char) (signed char)-107))))) ? ((~(((/* implicit */int) (unsigned short)8)))) : (((/* implicit */int) arr_18 [2LL] [12ULL] [12ULL] [i_4] [12ULL]))))));
                                arr_20 [(unsigned short)14] [i_4] [i_2] [i_4] [i_0] = ((/* implicit */unsigned long long int) (signed char)-88);
                                var_14 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) var_2)) ? (var_10) : (((/* implicit */long long int) arr_3 [i_0] [i_1] [i_1])))) - ((-(-7173783853472138731LL))))) + (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_1] [i_1] [(unsigned short)19] [i_1] [i_1])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_6 = 1; i_6 < 24; i_6 += 3) 
                    {
                        for (short i_7 = 0; i_7 < 25; i_7 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) arr_14 [i_6] [i_6] [i_6 + 1] [i_6]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)83)) ? (((/* implicit */int) (signed char)-117)) : (((/* implicit */int) arr_14 [i_6] [i_2] [i_2] [i_6]))))) : (var_0)));
                                var_16 = ((/* implicit */unsigned char) arr_23 [i_0] [5ULL] [i_0] [i_0] [i_0] [i_0]);
                                arr_25 [12U] [12U] [(_Bool)1] [i_6] [(unsigned char)18] = min(((+(((/* implicit */int) var_7)))), (((/* implicit */int) ((signed char) arr_24 [3LL] [i_6] [(unsigned char)3] [i_6 - 1] [3LL]))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (short i_8 = 0; i_8 < 25; i_8 += 2) /* same iter space */
                {
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (short)-13193))) | (((long long int) var_0))));
                    var_18 = ((/* implicit */int) (signed char)-22);
                    arr_28 [20] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((arr_0 [i_8]) + (arr_0 [i_0])));
                }
                for (unsigned short i_9 = 0; i_9 < 25; i_9 += 1) /* same iter space */
                {
                    var_19 -= ((/* implicit */unsigned char) arr_0 [i_0]);
                    arr_31 [i_9] [i_9] [24U] = max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [(short)20] [(short)20] [i_9] [i_1])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_16 [16])))))))), (((long long int) ((unsigned short) -2118161655))));
                    var_20 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_22 [i_9])) ? (((/* implicit */int) arr_13 [i_9] [(signed char)19] [i_1] [(unsigned char)6])) : (((((/* implicit */int) var_6)) * (((/* implicit */int) var_6))))))));
                    var_21 ^= ((/* implicit */signed char) (unsigned char)190);
                }
                for (unsigned short i_10 = 0; i_10 < 25; i_10 += 1) /* same iter space */
                {
                    arr_34 [i_10] [i_1] [i_10] = ((/* implicit */unsigned short) ((short) arr_1 [i_0]));
                    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) max((((/* implicit */long long int) (unsigned char)236)), (-3299252225049970399LL))))));
                    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [(signed char)22] [i_1] [(unsigned char)22] [i_10] [i_10] [10LL])) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_15 [i_0] [i_1] [i_1] [i_10] [11] [i_10])) : (((/* implicit */int) arr_15 [i_1] [i_1] [i_1] [(signed char)15] [i_0] [i_1])))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1])) : (((/* implicit */int) arr_2 [i_10]))))));
                    arr_35 [i_0] [i_10] = ((/* implicit */signed char) (+(((/* implicit */int) var_7))));
                }
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) ((unsigned long long int) 14300088750704414101ULL));
    var_25 = ((/* implicit */int) var_3);
}
