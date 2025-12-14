/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220722
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
    var_17 = ((/* implicit */signed char) var_4);
    var_18 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_9))) / (1830788582403382202LL)));
    var_19 = ((/* implicit */long long int) var_2);
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_2] [i_2] [(signed char)6] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_2] [i_2]))) & (max((arr_2 [i_0 + 1] [i_1]), (-1830788582403382203LL)))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                arr_14 [i_2] [(signed char)11] [i_2] = ((/* implicit */unsigned long long int) max((((max((-1830788582403382203LL), (-1830788582403382202LL))) / (arr_2 [i_4] [i_1]))), (((/* implicit */long long int) (~(-893252428))))));
                                arr_15 [i_2] [i_1] [i_0] [i_3] [i_4] [i_2] = ((/* implicit */unsigned short) max((arr_0 [i_0 - 2] [i_0]), (((((/* implicit */_Bool) arr_3 [i_0 - 3])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) ((signed char) var_5)))))));
                                arr_16 [i_0] [(unsigned short)4] = ((/* implicit */short) ((int) (+(((/* implicit */int) ((1830788582403382203LL) > (1830788582403382202LL)))))));
                                arr_17 [i_2] [(short)14] = ((/* implicit */unsigned char) (unsigned short)57718);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) var_15)) * (max(((-(((/* implicit */int) (signed char)120)))), (((/* implicit */int) ((short) 3081844726U)))))));
}
