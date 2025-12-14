/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200091
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
    var_11 = var_0;
    var_12 = ((/* implicit */signed char) var_6);
    var_13 = ((/* implicit */signed char) (+((-(min((589723642418259017LL), (((/* implicit */long long int) (signed char)68))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 6; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(max((-1636184587743209849LL), (-589723642418259016LL)))))) ? (min((((/* implicit */long long int) (-(arr_2 [i_1])))), (-426333135346100209LL))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_3 [i_0] [i_1] [i_0 - 2]) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-69)))))))));
                arr_6 [i_1] = ((/* implicit */unsigned int) (+(((long long int) arr_1 [i_0]))));
                var_14 = ((/* implicit */short) (-((+(((/* implicit */int) (short)4061))))));
            }
        } 
    } 
}
