/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45779
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
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (~(arr_3 [i_1 + 2] [i_1 - 1] [i_1 + 2]))))));
                arr_5 [i_0] = ((/* implicit */short) ((signed char) -2075935078));
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)188)) < (-1416493960)));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) var_5);
}
