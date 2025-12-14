/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47964
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
    var_12 = var_10;
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) ((unsigned char) var_9)))) >> (((var_4) + (166472042)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            {
                arr_4 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)8879)) % (((/* implicit */int) arr_0 [i_1 + 1] [i_0]))));
                var_14 = ((/* implicit */short) var_6);
                var_15 -= ((/* implicit */signed char) (unsigned char)207);
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((int) (unsigned char)27))) ? (((/* implicit */int) ((unsigned short) (unsigned char)239))) : (((/* implicit */int) var_10)))) > (((/* implicit */int) (unsigned short)5914))));
                                arr_13 [i_1] [i_3] [i_1] = -815434772;
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned char) arr_12 [i_2] [i_2] [i_2] [i_2] [i_1 - 1] [i_1] [i_1]);
                    arr_14 [i_1] = ((/* implicit */short) var_1);
                }
            }
        } 
    } 
}
