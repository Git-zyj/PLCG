/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216421
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
    var_20 = ((/* implicit */int) 7586270895327886318LL);
    var_21 = ((/* implicit */short) ((_Bool) -1));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_9 [i_0] [15] [i_2] [i_2] = ((/* implicit */signed char) arr_4 [i_0] [i_0]);
                            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */int) (!((_Bool)1)))) << (((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_3 [i_1 - 2] [i_3])) : (((/* implicit */int) arr_3 [i_2] [i_2])))) - (28998))))))));
                        }
                    } 
                } 
                var_23 &= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) max((((/* implicit */unsigned short) (unsigned char)0)), ((unsigned short)33535)))))) != ((~(arr_2 [i_1 - 1])))));
                arr_10 [i_0] [i_0] |= ((/* implicit */short) ((((/* implicit */_Bool) -6778524380318198178LL)) ? (((/* implicit */int) (short)-31026)) : (((/* implicit */int) (_Bool)0))));
                arr_11 [i_1 + 1] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) var_18))));
            }
        } 
    } 
    var_24 = ((/* implicit */_Bool) (~(var_14)));
}
