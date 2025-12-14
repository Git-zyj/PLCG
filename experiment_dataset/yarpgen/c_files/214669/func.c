/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214669
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_1] [i_2] = ((/* implicit */unsigned int) ((((unsigned long long int) var_3)) * ((-(var_7)))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                var_13 += ((/* implicit */signed char) ((unsigned short) (-(arr_10 [i_0] [i_1] [i_2] [i_3] [i_4]))));
                                var_14 = ((/* implicit */_Bool) var_9);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_15 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) - (((long long int) var_5))));
        var_16 = ((/* implicit */unsigned int) var_0);
    }
    var_17 = ((/* implicit */unsigned char) ((((max((var_7), (var_0))) % (((((/* implicit */unsigned long long int) var_12)) | (var_7))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_2) + (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? ((+(var_10))) : (((var_2) + (((/* implicit */unsigned int) var_5)))))))));
}
