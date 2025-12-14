/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206948
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
    var_19 = ((/* implicit */unsigned int) (short)31896);
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] = ((unsigned char) (short)32767);
                var_20 = ((/* implicit */long long int) (short)-32760);
                arr_7 [i_1] [i_0 + 2] = ((/* implicit */unsigned char) 362714373U);
            }
        } 
    } 
    var_21 -= ((/* implicit */unsigned int) ((max((-1LL), (((/* implicit */long long int) (short)-25773)))) / (((/* implicit */long long int) ((/* implicit */int) max((var_2), ((unsigned short)49179)))))));
}
