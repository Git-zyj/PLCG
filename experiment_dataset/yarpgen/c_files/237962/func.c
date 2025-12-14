/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237962
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
    var_14 = var_8;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_2 = 3; i_2 < 12; i_2 += 2) /* same iter space */
                {
                    var_15 = ((/* implicit */long long int) (~(var_11)));
                    var_16 = ((/* implicit */short) var_1);
                }
                for (int i_3 = 3; i_3 < 12; i_3 += 2) /* same iter space */
                {
                    var_17 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((-8529327183994690623LL) * (((/* implicit */long long int) ((/* implicit */int) var_13)))))) ? (((arr_0 [i_0]) / (((/* implicit */long long int) ((/* implicit */int) var_12))))) : (max((6703469900325869132LL), (arr_0 [i_0])))))));
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 1; i_4 < 14; i_4 += 2) 
                    {
                        for (short i_5 = 0; i_5 < 16; i_5 += 4) 
                        {
                            {
                                arr_15 [i_3 - 3] [i_0] [i_0 + 1] = ((/* implicit */short) var_8);
                                var_18 = ((/* implicit */unsigned short) var_9);
                                var_19 = (i_0 % 2 == zero) ? (((/* implicit */_Bool) (((~(arr_11 [i_0]))) << (((((((arr_11 [i_0]) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)35465))))) + (2045626592588429429LL))) - (45LL)))))) : (((/* implicit */_Bool) (((~(arr_11 [i_0]))) << (((((((((((arr_11 [i_0]) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)35465))))) + (2045626592588429429LL))) - (45LL))) + (3758206062095544706LL))) - (36LL))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 14; i_6 += 1) 
                    {
                        for (unsigned short i_7 = 3; i_7 < 15; i_7 += 1) 
                        {
                            {
                                var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_1 + 1] [i_1 + 1])) ? (arr_1 [i_3] [i_6 + 1]) : (((/* implicit */long long int) arr_22 [i_1 + 1] [i_6]))))) ? (((((/* implicit */_Bool) arr_1 [i_6 - 1] [i_6 - 1])) ? (arr_1 [i_0] [i_6 + 2]) : (arr_1 [(_Bool)1] [i_6 + 1]))) : (((/* implicit */long long int) max((arr_22 [i_1 + 1] [i_1 + 1]), (((/* implicit */int) arr_7 [i_0 + 1] [i_1 + 1] [i_6 + 2]))))));
                                arr_24 [i_0] [i_1 + 1] [i_0] [i_6 + 2] [i_1 + 1] = arr_14 [(short)15] [i_0];
                                var_21 &= ((/* implicit */int) ((((((/* implicit */_Bool) arr_16 [5] [i_0 + 1] [i_6 + 2] [i_7])) ? (arr_16 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_1]) : (arr_16 [i_0] [i_0 + 1] [i_0] [i_6]))) == (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)21377)))))));
                            }
                        } 
                    } 
                }
                var_22 = (-(arr_16 [(_Bool)1] [i_1] [i_0] [i_0]));
                var_23 *= ((/* implicit */_Bool) (~((~((-(arr_0 [4])))))));
            }
        } 
    } 
}
