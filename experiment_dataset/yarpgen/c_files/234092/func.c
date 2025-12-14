/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234092
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
    var_14 = ((/* implicit */short) (unsigned char)255);
    var_15 = ((/* implicit */short) (_Bool)1);
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 24; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_16 -= ((/* implicit */short) (-((-(((/* implicit */int) (_Bool)1))))));
                var_17 = ((/* implicit */_Bool) (+(((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)-32758))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 3; i_3 < 23; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_18 = min(((unsigned char)132), ((unsigned char)28));
                                var_19 += ((/* implicit */unsigned char) (short)-1);
                                arr_13 [(_Bool)1] [(_Bool)1] [(unsigned char)14] [i_2] [i_4] = ((/* implicit */_Bool) max(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (short)-17180))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 -= var_11;
    var_21 += var_4;
}
