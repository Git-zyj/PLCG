/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46659
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
    var_12 = ((/* implicit */long long int) (((-(((/* implicit */int) max((var_0), (var_1)))))) != (((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_11)) ^ (((/* implicit */int) var_8))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 17; i_2 += 4) 
            {
                {
                    var_13 *= ((/* implicit */unsigned char) (+(-224177346891251106LL)));
                    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) (-(arr_3 [i_0] [i_1] [i_2]))))));
                    arr_8 [i_0] [i_2 + 2] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((unsigned char) min((4294967295U), (((/* implicit */unsigned int) arr_0 [i_0] [i_0])))))), (arr_3 [i_0] [i_0] [i_2])));
                }
            } 
        } 
    } 
    var_15 = ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((unsigned int) var_6))))) / (((((long long int) 2634159726U)) << (((((var_3) & (((/* implicit */int) var_11)))) - (17706))))));
}
