/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50436
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
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (int i_2 = 3; i_2 < 12; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                arr_15 [i_1] [i_1] [i_1] [i_3] [i_0 + 1] = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */int) var_3)) * (((/* implicit */int) (unsigned char)249))))) ? (((/* implicit */unsigned int) arr_13 [i_0 + 1] [i_2] [i_2] [i_2 + 1])) : (4294967295U))) >= (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_0 [i_3])) : (2147483647)))))));
                                arr_16 [i_0] [(unsigned char)11] [i_3] [i_0] [i_3] = ((/* implicit */unsigned char) ((unsigned short) (unsigned char)126));
                                arr_17 [i_1] [i_1] [8] |= ((/* implicit */unsigned char) max((2508408544U), (((/* implicit */unsigned int) (unsigned char)150))));
                            }
                        } 
                    } 
                    arr_18 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)150))));
                    arr_19 [i_0] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2 + 1] [i_2 + 1] [i_0] [i_0] [i_0 - 1] [i_0 + 1])) ? (var_9) : (arr_9 [i_0] [i_0 - 1] [i_0] [i_2 - 1] [i_0] [i_2 - 2])))) || ((!(((/* implicit */_Bool) 1U))))));
                    arr_20 [i_0] [i_0] = ((/* implicit */int) arr_14 [i_2] [i_2] [i_2] [i_2 + 1] [i_2] [i_2] [i_2]);
                }
            } 
        } 
    } 
    var_10 = ((/* implicit */int) var_0);
    var_11 = ((/* implicit */long long int) (-((-(((int) -1104911241))))));
}
