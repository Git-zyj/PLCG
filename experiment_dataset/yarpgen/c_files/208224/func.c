/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208224
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
    var_18 = ((/* implicit */unsigned short) 6361999653587710384ULL);
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */short) max(((+(((/* implicit */int) (unsigned char)156)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))));
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0]);
            }
        } 
    } 
}
