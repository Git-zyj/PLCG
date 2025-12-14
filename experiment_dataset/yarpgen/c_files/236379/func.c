/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236379
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
    var_12 = ((/* implicit */unsigned int) var_4);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned short)65535))));
                var_13 = max(((unsigned short)65535), (((/* implicit */unsigned short) (_Bool)1)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 23; i_2 += 3) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                var_14 = ((/* implicit */_Bool) (-(((/* implicit */int) (short)-25716))));
                var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) arr_12 [i_2]))));
            }
        } 
    } 
}
