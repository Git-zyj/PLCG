/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26576
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
    for (unsigned long long int i_0 = 4; i_0 < 14; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 15; i_1 += 2) 
        {
            {
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) max((min((arr_0 [i_0 + 2]), (arr_0 [i_0 - 3]))), (arr_0 [i_0 - 1])));
                var_18 = ((/* implicit */long long int) arr_4 [i_1] [(_Bool)1] [(_Bool)1]);
                var_19 = ((/* implicit */signed char) min((-2122452281492526180LL), (((/* implicit */long long int) max((max((((/* implicit */unsigned int) arr_2 [i_0] [(unsigned char)7])), (653051334U))), (((/* implicit */unsigned int) 1066445698)))))));
                var_20 = ((/* implicit */signed char) min((arr_0 [i_1]), (min((arr_0 [i_0 - 4]), (arr_0 [i_0 - 2])))));
                var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) min((2122452281492526180LL), (((/* implicit */long long int) 3641915962U)))))));
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) min((var_12), (((/* implicit */short) var_5)))))));
}
