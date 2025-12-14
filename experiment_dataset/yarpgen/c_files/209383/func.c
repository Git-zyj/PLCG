/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209383
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(max((-5929791473519150697LL), (-2744289352906633173LL)))))) ? ((-(-2744289352906633199LL))) : (((/* implicit */long long int) ((/* implicit */int) var_19)))));
                    arr_7 [i_0] [i_0] [(unsigned char)9] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [3U] [i_2] [i_1] [i_0])) || (((/* implicit */_Bool) (unsigned char)90))));
                }
                arr_8 [i_0] [i_1] = (unsigned char)90;
            }
        } 
    } 
    var_21 -= var_13;
}
