/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48115
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
    for (short i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (unsigned short i_1 = 3; i_1 < 12; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */unsigned short) (-((-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)-67)) : (((/* implicit */int) (_Bool)1))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        arr_11 [i_1 - 3] [i_1] [i_1 + 2] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-84)) ? (8767183799185460390LL) : (340199396265396574LL)));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 1; i_4 < 11; i_4 += 4) /* same iter space */
                        {
                            arr_16 [i_0 - 1] [i_0 - 1] [i_2] [(_Bool)1] [i_4 + 3] = ((/* implicit */_Bool) (short)23719);
                            arr_17 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-91)) ? (((/* implicit */int) arr_14 [i_0 + 3] [i_1 - 3] [i_2] [i_3] [11])) : (((/* implicit */int) var_3))))) ? ((+(((/* implicit */int) var_3)))) : ((~(((/* implicit */int) (unsigned short)27028))))));
                            arr_18 [i_4] [i_2] [i_0] [i_0] = ((((/* implicit */_Bool) (signed char)-96)) ? (((((/* implicit */_Bool) var_3)) ? (arr_9 [(signed char)10] [i_1] [i_1 + 2] [i_1]) : (((/* implicit */int) var_2)))) : (((/* implicit */int) (signed char)42)));
                        }
                        for (unsigned long long int i_5 = 1; i_5 < 11; i_5 += 4) /* same iter space */
                        {
                            arr_22 [i_1] [i_2] [i_3] [i_2] = ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_0] [i_3])) ? (arr_9 [i_1 + 1] [i_2] [i_5] [i_1 + 1]) : (((/* implicit */int) arr_21 [i_5 + 3] [(signed char)0] [(signed char)0] [i_5 - 1] [i_5 + 1])));
                            var_11 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_5)))))));
                        }
                        for (unsigned long long int i_6 = 1; i_6 < 11; i_6 += 4) /* same iter space */
                        {
                            var_12 ^= ((/* implicit */long long int) 1676126952);
                            var_13 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_6 + 1] [7ULL] [i_2] [i_0 + 1])) ? (((/* implicit */int) arr_4 [i_6 - 1])) : (((/* implicit */int) var_5))));
                        }
                        arr_25 [i_0 + 2] [i_1] [i_2] [(unsigned short)5] [i_3] [i_3] = ((/* implicit */unsigned long long int) arr_14 [i_0 - 1] [i_0] [i_0] [i_0] [(short)3]);
                        var_14 = ((/* implicit */unsigned long long int) (unsigned char)87);
                        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_1 - 2] [i_1 - 1] [i_0 + 2] [3] [i_0 + 3])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_3] [i_1 - 3] [i_2]))))) : (((/* implicit */int) arr_4 [i_0])))))));
                    }
                    for (unsigned short i_7 = 1; i_7 < 13; i_7 += 4) 
                    {
                        arr_28 [i_0] = ((/* implicit */int) var_1);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_8 = 2; i_8 < 13; i_8 += 4) 
                        {
                            arr_31 [i_0] [i_1] [i_2] [i_0] [(short)13] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_7]))));
                            var_16 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_8 [i_0 + 1] [i_1 + 2] [i_7] [(_Bool)1]))));
                        }
                        for (signed char i_9 = 0; i_9 < 14; i_9 += 4) 
                        {
                            arr_35 [i_0 - 1] [i_1 + 2] [i_1 + 2] [i_0] = ((/* implicit */_Bool) (-(-3335939435016071274LL)));
                            var_17 = ((/* implicit */int) max((var_17), ((+(((/* implicit */int) (unsigned short)28934))))));
                        }
                        var_18 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_3))));
                        var_19 -= ((/* implicit */unsigned short) ((unsigned int) arr_32 [(unsigned char)0] [i_0 - 1] [i_1] [i_1 + 2] [i_1 - 2] [i_1 - 1] [i_7 - 1]));
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_10 = 1; i_10 < 13; i_10 += 1) 
                    {
                        arr_38 [i_0] [i_1] [i_2] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)95)) ? (((/* implicit */long long int) 1068852101)) : (1339664026880035928LL)));
                        arr_39 [7] [i_1 - 2] [i_2] [i_10 + 1] = ((/* implicit */signed char) ((_Bool) (-(((/* implicit */int) var_7)))));
                        var_20 ^= ((/* implicit */int) (-(arr_29 [(unsigned short)5] [i_10] [i_0] [i_10 + 1] [i_10 + 1] [i_1] [i_0])));
                    }
                    var_21 = ((/* implicit */signed char) ((unsigned char) arr_14 [(_Bool)1] [i_1] [11ULL] [i_2] [i_2]));
                    var_22 *= ((/* implicit */short) (-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_26 [i_0] [i_1 - 2] [i_2] [i_2])) : (((/* implicit */int) (unsigned short)59241))))));
                }
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 14; i_11 += 4) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        {
                            var_23 -= max((((/* implicit */int) max((arr_8 [i_1 - 1] [i_0 + 2] [i_0 + 2] [i_12]), (((/* implicit */short) (_Bool)1))))), (((arr_40 [i_1 + 2] [i_0 - 1] [i_11]) ? (((/* implicit */int) arr_40 [i_1 + 2] [i_0 + 1] [i_0])) : (((/* implicit */int) arr_8 [i_1 + 1] [i_0 + 3] [i_0] [(unsigned short)2])))));
                            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_21 [i_0] [i_1] [1U] [i_0 + 2] [i_1 - 2])) ? (((/* implicit */int) max((arr_21 [i_0 - 1] [i_0] [i_1 - 2] [i_11] [i_11]), (((/* implicit */unsigned short) (short)24375))))) : (((/* implicit */int) var_9)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) (signed char)-106))));
    var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3))))), (var_6)))) ? (((/* implicit */int) var_5)) : (((int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)20)))))));
}
