/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200483
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
    var_12 &= ((/* implicit */short) (-(((int) ((_Bool) var_0)))));
    var_13 = ((/* implicit */short) (+((+(((/* implicit */int) ((unsigned char) var_6)))))));
    var_14 = ((/* implicit */short) ((unsigned short) ((signed char) (-(((/* implicit */int) var_10))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (signed char i_4 = 2; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) ((signed char) ((_Bool) ((signed char) var_10))));
                                var_16 *= ((/* implicit */signed char) (-((-(((int) arr_9 [i_0] [i_1 - 1] [i_0] [i_4]))))));
                                var_17 -= ((/* implicit */_Bool) (+(((int) ((unsigned char) 895585604)))));
                            }
                        } 
                    } 
                    var_18 |= ((/* implicit */short) (-((~(((/* implicit */int) ((unsigned short) arr_8 [i_0] [i_0] [i_0])))))));
                }
            } 
        } 
    } 
}
