/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235348
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
    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((unsigned long long int) ((unsigned long long int) (-(-6119288564868695406LL))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 12; i_1 += 1) 
        {
            {
                var_21 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) (-(((/* implicit */int) var_7))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 10; i_2 += 2) 
                {
                    for (signed char i_3 = 3; i_3 < 12; i_3 += 4) 
                    {
                        {
                            var_22 = (~(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) var_2)))))));
                            arr_9 [i_0] [i_2] [2ULL] = ((/* implicit */short) (+((+(((/* implicit */int) ((_Bool) -450699891618726409LL)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
