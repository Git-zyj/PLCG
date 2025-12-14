/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42688
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
    var_12 = ((/* implicit */unsigned char) var_0);
    var_13 = ((/* implicit */long long int) (short)-11628);
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 17; i_2 += 3) 
            {
                {
                    var_14 = (~(7706109617041474009ULL));
                    var_15 = ((/* implicit */signed char) var_7);
                    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) min((var_9), (1092129962U))))));
                    var_17 = ((/* implicit */signed char) max((((unsigned long long int) ((short) 10740634456668077606ULL))), (((/* implicit */unsigned long long int) min((min((-7946248431901445162LL), (((/* implicit */long long int) var_4)))), (((/* implicit */long long int) ((((/* implicit */int) var_6)) + (((/* implicit */int) (short)32767))))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) (+(((/* implicit */int) var_2))));
    var_19 = ((/* implicit */unsigned char) max((((/* implicit */long long int) (+(((/* implicit */int) min((var_2), (((/* implicit */unsigned short) (short)13696)))))))), (-8147025589937864759LL)));
}
