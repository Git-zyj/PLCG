/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52170
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
    for (short i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */short) (unsigned char)41);
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned short) ((((_Bool) (_Bool)0)) ? (((((/* implicit */_Bool) (unsigned char)238)) ? (((/* implicit */int) (unsigned char)213)) : (((/* implicit */int) (signed char)-123)))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-123)) && (((/* implicit */_Bool) (signed char)34)))))));
                            /* LoopSeq 1 */
                            for (unsigned short i_4 = 0; i_4 < 12; i_4 += 2) 
                            {
                                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (short)20720))));
                                arr_14 [i_3] [(unsigned short)9] [i_1] [i_0] = ((/* implicit */unsigned short) (unsigned char)44);
                                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (unsigned short)46442))));
                                arr_15 [i_0] [i_1] [i_1] [i_2] [i_0] [i_3] [(short)0] = ((/* implicit */short) ((unsigned char) ((((/* implicit */int) (unsigned char)15)) >= (((/* implicit */int) (unsigned char)28)))));
                                arr_16 [(_Bool)1] [(_Bool)1] [i_2] [i_3] [i_3] [i_4] [i_4] = ((/* implicit */unsigned char) ((short) (_Bool)1));
                            }
                            arr_17 [i_0] [i_0] [(short)1] [i_0] = ((/* implicit */short) (unsigned short)59794);
                            var_19 = ((_Bool) (unsigned char)238);
                        }
                    } 
                } 
                arr_18 [i_0] [i_1] = ((/* implicit */short) ((((_Bool) (((_Bool)1) || ((_Bool)1)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (short)-4137))));
}
