/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192026
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
    var_10 = ((/* implicit */short) (_Bool)1);
    var_11 = ((/* implicit */unsigned short) (!(var_0)));
    var_12 = ((/* implicit */unsigned char) var_2);
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            {
                var_13 *= ((/* implicit */unsigned short) ((_Bool) ((int) -913701598)));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 20; i_2 += 2) 
                {
                    for (short i_3 = 4; i_3 < 20; i_3 += 1) 
                    {
                        {
                            var_14 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) % (min((((((/* implicit */_Bool) (unsigned short)61939)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10924))) : (var_3))), (12997243311150383547ULL)))));
                            arr_9 [i_0] [i_1] [i_0] [i_3] [i_0] = min((((/* implicit */unsigned int) var_4)), (2479841588U));
                        }
                    } 
                } 
            }
        } 
    } 
}
