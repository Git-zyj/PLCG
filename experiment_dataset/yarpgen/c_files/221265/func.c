/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221265
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
    var_14 = ((((/* implicit */_Bool) ((((_Bool) -25)) ? (((unsigned long long int) var_11)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 1845596106)) ? (((/* implicit */int) max((((/* implicit */short) var_1)), (var_13)))) : (((/* implicit */int) var_11))))));
    var_15 = ((/* implicit */signed char) var_13);
    /* LoopSeq 3 */
    for (long long int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        arr_3 [i_0] [(signed char)12] = ((/* implicit */short) ((int) 1925812995));
        var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((arr_1 [i_0 + 1] [(unsigned char)12]), (((/* implicit */unsigned short) var_4)))))));
    }
    for (short i_1 = 3; i_1 < 10; i_1 += 2) 
    {
        arr_6 [i_1 - 3] = ((/* implicit */unsigned int) arr_1 [i_1] [i_1]);
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            for (unsigned short i_3 = 0; i_3 < 12; i_3 += 4) 
            {
                {
                    var_17 = ((/* implicit */short) min((max((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6)))))), (((/* implicit */int) min((arr_1 [i_1] [i_1 + 1]), (((/* implicit */unsigned short) (unsigned char)247)))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_4 = 2; i_4 < 10; i_4 += 1) 
                    {
                        var_18 = ((/* implicit */int) (-(1507718976725226637LL)));
                        arr_15 [(unsigned char)10] [i_2] [i_3] [(_Bool)1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_1] [i_2] [i_2] [(unsigned char)6])))))));
                        var_19 += ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_1 - 2] [i_2]))))) == (var_3)))), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_5)), (var_2)))) ? (((/* implicit */unsigned long long int) max((var_3), (((/* implicit */int) var_1))))) : (((unsigned long long int) arr_12 [7LL] [i_2] [(short)9] [i_4 + 2]))))));
                        var_20 = ((/* implicit */long long int) var_4);
                    }
                    for (signed char i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        var_21 += ((/* implicit */signed char) (~(((/* implicit */int) ((short) (signed char)1)))));
                        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (var_7) : (((/* implicit */int) arr_1 [i_1] [i_2]))))) < (((arr_8 [i_1 - 2] [(unsigned short)11] [(unsigned short)1]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1] [i_2] [(unsigned char)1] [(unsigned char)10]))))))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_11))))) : (min((arr_9 [i_1 - 3]), (arr_18 [i_1 - 3] [i_2] [i_3] [i_5] [i_2] [i_5]))))))));
                    }
                    /* LoopSeq 3 */
                    for (signed char i_6 = 1; i_6 < 9; i_6 += 4) 
                    {
                        var_23 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)12))));
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) arr_5 [(unsigned short)3] [i_2]))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)23)), ((unsigned char)113))))) : ((+(arr_8 [i_1] [i_1] [4])))))) ^ (max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) < (var_9)))), (arr_4 [i_3] [i_3])))));
                    }
                    for (unsigned char i_7 = 0; i_7 < 12; i_7 += 4) 
                    {
                        arr_24 [i_1] [0] [i_3] [i_7] [i_7] [i_2] = ((/* implicit */int) max((((/* implicit */long long int) arr_16 [i_1 - 2] [i_1 + 2] [(unsigned short)7] [i_1] [i_1 - 3] [i_3])), (arr_8 [i_1] [i_1] [i_1])));
                        arr_25 [i_7] [i_3] [i_3] [i_1] &= ((/* implicit */unsigned short) (~(min(((~(((/* implicit */int) (unsigned short)6)))), ((~(1416207037)))))));
                        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (~(((/* implicit */int) var_5)))))));
                        arr_26 [i_2] [i_2] [10] = ((/* implicit */short) (-(((/* implicit */int) var_1))));
                    }
                    for (unsigned char i_8 = 1; i_8 < 8; i_8 += 1) 
                    {
                        var_26 = max(((unsigned short)2), (((/* implicit */unsigned short) (unsigned char)235)));
                        arr_30 [i_2] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) min((var_8), (var_8)))) < (((/* implicit */int) arr_11 [i_1] [i_1] [i_1 + 1] [i_8 + 4])))))));
                        var_27 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)131)) << (((2110587484) - (2110587479)))));
                    }
                }
            } 
        } 
    }
    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
    {
        arr_34 [(unsigned short)1] [i_9] = ((/* implicit */unsigned short) max((var_9), (((((/* implicit */_Bool) arr_31 [i_9] [i_9])) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_8)) : (arr_0 [i_9]))) : (((/* implicit */int) max((((/* implicit */short) arr_33 [i_9] [i_9])), (var_10))))))));
        var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((arr_2 [i_9]) * (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_33 [i_9 - 1] [i_9 - 1])), ((~(((/* implicit */int) var_10))))))))))));
    }
    /* LoopNest 2 */
    for (short i_10 = 1; i_10 < 7; i_10 += 4) 
    {
        for (int i_11 = 0; i_11 < 11; i_11 += 4) 
        {
            {
                var_29 = ((/* implicit */int) arr_22 [i_10] [i_10] [i_10] [i_11] [i_11]);
                var_30 = min((((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_39 [i_11] [2] [i_11])) : (var_9))))), (var_2));
                var_31 = ((/* implicit */signed char) min((((arr_19 [(signed char)4] [i_11] [3] [(unsigned short)6] [i_10]) ? (var_2) : (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) max((min((((/* implicit */int) var_4)), (arr_31 [i_10] [i_10]))), (((/* implicit */int) arr_40 [i_10])))))));
                arr_41 [i_10] [9LL] &= ((/* implicit */unsigned long long int) ((unsigned int) (-(((/* implicit */int) var_10)))));
                var_32 *= ((/* implicit */unsigned long long int) arr_27 [i_10 + 1] [i_11]);
            }
        } 
    } 
}
