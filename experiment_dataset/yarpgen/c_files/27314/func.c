/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27314
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_10 |= ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [(signed char)6] [i_1] [i_1])))))) <= (var_1))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 3; i_3 < 8; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                arr_13 [i_3] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_8 [i_3 - 1] [i_3] [i_3 - 3] [i_3])) ? (((/* implicit */int) arr_8 [i_3 + 1] [i_3] [i_3 - 1] [i_3])) : (((/* implicit */int) arr_8 [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3]))))));
                                var_11 -= ((/* implicit */_Bool) min(((((~(0ULL))) | (((/* implicit */unsigned long long int) -11213401)))), (((/* implicit */unsigned long long int) ((signed char) arr_2 [i_0])))));
                                var_12 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_9)) ? (((((/* implicit */unsigned long long int) 2253372098U)) - (var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1))))))), (arr_4 [5LL] [i_2] [9ULL])));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 2; i_6 < 9; i_6 += 3) 
                        {
                            {
                                arr_20 [1] [i_5] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)-2)) ? (((int) arr_3 [(signed char)0] [(short)6])) : (((/* implicit */int) (signed char)106)))) ^ (min((arr_18 [i_1] [i_2] [i_2] [i_5] [i_5] [i_6 - 2]), (((/* implicit */int) arr_0 [i_0] [i_0]))))));
                                var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) min((arr_16 [i_6 + 1] [i_1 + 1] [i_6 + 1] [i_1 + 1]), (arr_16 [i_6 + 1] [i_2] [i_2] [i_1 + 1])))) == (min((arr_10 [i_6]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) (short)1))))))))))));
                                arr_21 [i_5] = ((((/* implicit */_Bool) arr_5 [i_2] [i_2] [i_2])) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1)));
                                arr_22 [i_0] [i_1] [9] [i_5] [i_6] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 18446744073709551600ULL)) && (((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_0] [i_1] [i_1]))));
                            }
                        } 
                    } 
                    var_14 -= ((/* implicit */unsigned short) min((((var_2) != (((/* implicit */long long int) arr_1 [i_0] [i_1 - 1])))), (((_Bool) max((var_9), (((/* implicit */unsigned long long int) var_6)))))));
                    arr_23 [9] [i_1 + 1] [i_1 + 1] [i_1 + 1] = ((((unsigned long long int) ((_Bool) arr_6 [i_0] [i_0]))) << (((/* implicit */int) min((arr_9 [i_2] [i_2]), (arr_9 [i_2] [i_1 - 1])))));
                }
            } 
        } 
    } 
    var_15 = var_0;
    /* LoopNest 2 */
    for (unsigned int i_7 = 0; i_7 < 16; i_7 += 4) 
    {
        for (unsigned short i_8 = 0; i_8 < 16; i_8 += 3) 
        {
            {
                arr_30 [i_8] = ((/* implicit */unsigned long long int) arr_26 [i_7] [(unsigned short)12] [i_8]);
                var_16 = (~(var_0));
                var_17 = ((/* implicit */signed char) ((max((-964289875), (((/* implicit */int) var_8)))) == (((/* implicit */int) ((signed char) arr_27 [i_7] [i_8] [i_7])))));
                arr_31 [i_8] = ((/* implicit */signed char) ((arr_24 [14ULL] [i_8]) | (((int) arr_27 [i_7] [i_7] [i_7]))));
            }
        } 
    } 
    var_18 = ((/* implicit */int) (+((~(var_9)))));
}
