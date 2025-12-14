/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216935
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 1; i_2 < 17; i_2 += 4) 
                {
                    var_19 ^= ((/* implicit */unsigned char) var_13);
                    /* LoopSeq 1 */
                    for (long long int i_3 = 2; i_3 < 16; i_3 += 1) 
                    {
                        arr_12 [i_0] [i_1] [i_2] [(short)0] [i_2] [i_3] = ((/* implicit */unsigned char) ((short) var_3));
                        arr_13 [i_0] [i_2] = ((/* implicit */unsigned long long int) ((long long int) ((short) var_6)));
                        /* LoopSeq 2 */
                        for (short i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            var_20 = ((/* implicit */long long int) var_15);
                            var_21 = var_15;
                        }
                        for (short i_5 = 1; i_5 < 15; i_5 += 1) 
                        {
                            var_22 = ((/* implicit */long long int) ((unsigned long long int) ((unsigned long long int) ((long long int) var_11))));
                            arr_18 [i_0] [i_2] [i_0] = ((/* implicit */signed char) ((short) ((unsigned int) 284398452906733578LL)));
                            var_23 ^= ((long long int) ((unsigned char) (short)-9398));
                        }
                        var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) var_11))));
                    }
                }
                var_25 = ((short) var_15);
                var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((unsigned int) ((unsigned char) ((long long int) var_6)))))));
                var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) var_5))));
            }
        } 
    } 
    var_28 = ((/* implicit */short) ((unsigned long long int) var_0));
    var_29 = ((/* implicit */short) var_17);
}
