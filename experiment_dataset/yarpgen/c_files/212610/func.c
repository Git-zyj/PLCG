/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212610
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
    var_20 &= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (short)16384))) < (-7222460678843795531LL)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 6; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) var_18);
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((+(((/* implicit */int) (unsigned short)0)))), (((/* implicit */int) min((var_0), (((/* implicit */short) var_10)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0 - 1] [i_1 - 1] [i_0]))))) : ((~(((/* implicit */int) var_10))))));
                }
            } 
        } 
    } 
}
