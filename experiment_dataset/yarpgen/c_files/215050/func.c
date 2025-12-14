/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215050
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
    var_11 = ((/* implicit */unsigned short) (+((-((-(((/* implicit */int) var_5))))))));
    var_12 |= ((/* implicit */long long int) ((((var_8) ? (3112443723U) : (var_10))) >> ((((+(var_2))) - (910515922274510222LL)))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_4] &= ((/* implicit */unsigned short) min(((+(3112443723U))), (((/* implicit */unsigned int) (unsigned short)64463))));
                                var_13 = (+(((/* implicit */int) (unsigned short)1072)));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */int) max((((/* implicit */unsigned long long int) max(((~(((/* implicit */int) arr_1 [i_0])))), (((((/* implicit */_Bool) (unsigned char)206)) ? (((/* implicit */int) (unsigned char)202)) : (((/* implicit */int) (unsigned char)220))))))), (0ULL)));
                }
            } 
        } 
    } 
}
