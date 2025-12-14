/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225676
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                arr_4 [i_0] [0] = ((/* implicit */short) (~(arr_1 [i_1] [i_0])));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2] [i_2] [i_3] = (i_2 % 2 == 0) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) arr_7 [i_0] [i_0] [i_0] [i_0]))) << (((arr_10 [i_2]) - (11737544333321519638ULL)))))) : (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) arr_7 [i_0] [i_0] [i_0] [i_0]))) << (((((arr_10 [i_2]) - (11737544333321519638ULL))) - (6735453178411523660ULL))))));
                            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */unsigned int) arr_3 [i_3])) : ((-(3817351622U)))))) ? (arr_10 [i_2]) : (((/* implicit */unsigned long long int) ((((((var_2) + (2147483647))) << (((262143LL) - (262143LL))))) & ((~(((/* implicit */int) var_14)))))))));
                            arr_12 [i_3] [i_2] [i_1] [i_2] [i_0] = ((/* implicit */unsigned int) -262143LL);
                            var_21 = ((/* implicit */int) (_Bool)1);
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((int) arr_5 [i_1])) : ((~(((((/* implicit */_Bool) var_1)) ? (arr_3 [i_1]) : (-1595856443)))))));
                /* LoopNest 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned char i_5 = 1; i_5 < 18; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 1; i_6 < 18; i_6 += 3) 
                        {
                            {
                                arr_21 [i_6] [(short)18] [i_4] [i_1] [i_0] = ((/* implicit */short) min((262143LL), (((/* implicit */long long int) (short)32767))));
                                var_23 = ((/* implicit */unsigned char) min((262156LL), (((/* implicit */long long int) ((arr_14 [i_0] [i_6 + 3] [i_6] [i_5 - 1]) < (arr_9 [i_5 + 3] [i_5 + 3] [i_5 - 1] [i_6 + 1]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */short) var_7);
}
