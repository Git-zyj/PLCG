/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205914
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
    var_14 |= ((/* implicit */unsigned short) ((unsigned char) min((((/* implicit */unsigned short) max((var_3), (var_3)))), (max((var_8), (var_9))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_2] [12ULL] [i_3] [i_1] [i_3] = ((/* implicit */int) max((((unsigned int) ((unsigned long long int) var_13))), (((/* implicit */unsigned int) var_0))));
                                arr_16 [i_4] [i_1] [i_3 + 1] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) ((signed char) ((int) min((var_0), (((/* implicit */int) var_3))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 3) 
                    {
                        arr_19 [i_1] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */long long int) ((int) ((short) ((_Bool) var_4))));
                        arr_20 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) max((((long long int) ((signed char) var_10))), (((/* implicit */long long int) var_4))));
                    }
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */signed char) var_4);
}
