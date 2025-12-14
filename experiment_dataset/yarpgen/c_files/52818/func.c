/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52818
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
    var_13 = ((/* implicit */long long int) min((((/* implicit */int) ((unsigned short) var_6))), ((-(min((268435456), (((/* implicit */int) (unsigned short)65528))))))));
    var_14 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) max((((/* implicit */short) (signed char)127)), ((short)-12656)))) : (min((((/* implicit */int) (unsigned short)1008)), (var_10))))));
    var_15 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)12651)) : (((/* implicit */int) var_4))))) ? (min((((/* implicit */unsigned long long int) (signed char)12)), (var_9))) : (((/* implicit */unsigned long long int) var_2))))));
    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) min((var_8), (var_8))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_17 = ((/* implicit */short) var_2);
        var_18 = ((/* implicit */int) max(((-(0U))), (((/* implicit */unsigned int) ((_Bool) (!(((/* implicit */_Bool) (short)-12656))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)12661)) ? (((arr_3 [i_0]) | (arr_3 [i_0]))) : (arr_3 [i_0])));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_1 + 1]))))) ? (((((/* implicit */_Bool) arr_7 [i_1] [i_1 + 1])) ? (arr_7 [i_1] [i_1 + 1]) : (arr_7 [i_1] [i_1 + 1]))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [i_1])))))));
        arr_9 [i_1] = ((/* implicit */unsigned char) var_1);
        /* LoopSeq 2 */
        for (long long int i_2 = 2; i_2 < 9; i_2 += 1) /* same iter space */
        {
            arr_12 [i_1] = ((/* implicit */unsigned int) (short)12672);
            var_19 = ((/* implicit */short) max((((((_Bool) (short)-7313)) ? (((((/* implicit */_Bool) var_12)) ? (3855576774U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1] [i_1] [i_1 + 1]))))) : (((((/* implicit */_Bool) -768077405)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-12672))) : (var_1))))), (16128U)));
            var_20 -= ((/* implicit */short) ((unsigned char) ((3855576779U) << (((/* implicit */int) (_Bool)1)))));
            var_21 = (-(min((arr_3 [i_1 + 1]), (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)0)), (arr_5 [i_2])))))));
            var_22 = ((/* implicit */int) max((var_22), (((((((/* implicit */_Bool) arr_10 [i_1 + 1] [(unsigned short)4])) ? (((/* implicit */int) arr_10 [i_1 + 1] [(unsigned char)2])) : (((/* implicit */int) arr_10 [i_1 + 1] [6])))) | (((/* implicit */int) (!(((/* implicit */_Bool) (short)12661)))))))));
        }
        /* vectorizable */
        for (long long int i_3 = 2; i_3 < 9; i_3 += 1) /* same iter space */
        {
            arr_15 [i_1] [i_1] = ((int) arr_7 [i_1 + 1] [i_3 + 1]);
            var_23 = ((((/* implicit */_Bool) ((arr_2 [i_3]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-12663))))) ? (((int) (unsigned char)13)) : (((((/* implicit */_Bool) 2059846171U)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)42809)))));
            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) -9223372036854775787LL)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) >= (var_3)))) : (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (_Bool)1)) : (1416392396)))));
            var_25 = (-(arr_13 [i_1 + 1] [i_1 + 1] [i_1]));
        }
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 4) 
    {
        var_26 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) 281474976710655ULL))) ? (((arr_2 [i_4]) ? (var_3) : (((/* implicit */int) (short)12661)))) : (((-1017567207) / (((/* implicit */int) arr_2 [i_4]))))));
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 19; i_5 += 1) 
        {
            for (int i_6 = 0; i_6 < 19; i_6 += 1) 
            {
                {
                    var_27 = ((/* implicit */_Bool) ((((/* implicit */long long int) -1017567207)) + (arr_20 [i_6] [i_4] [i_4])));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 19; i_7 += 2) 
                    {
                        for (int i_8 = 0; i_8 < 19; i_8 += 1) 
                        {
                            {
                                arr_27 [i_4] [i_5] [i_6] [i_7] [i_5] [4] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_21 [i_6] [i_5] [i_6] [i_8])) ? (((/* implicit */int) arr_23 [i_8] [i_7] [i_5] [i_4])) : (((/* implicit */int) arr_23 [i_5] [i_5] [i_6] [i_6]))));
                                var_28 += (-(((/* implicit */int) arr_23 [i_4] [i_4] [i_6] [i_8])));
                            }
                        } 
                    } 
                    arr_28 [(short)12] [i_4] [i_4] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_17 [i_4]) : (((/* implicit */unsigned long long int) arr_21 [i_4] [i_4] [i_5] [i_6]))));
                }
            } 
        } 
        arr_29 [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-12686)) ? (((/* implicit */int) arr_25 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])) : (((/* implicit */int) arr_25 [i_4] [i_4] [i_4] [i_4] [i_4] [10LL] [i_4]))));
    }
}
