/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200293
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = var_9;
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_8 [i_2] = ((/* implicit */short) -4282474260054703221LL);
                    arr_9 [i_0] [i_1] [(_Bool)1] = min((4282474260054703237LL), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-39)) && (((/* implicit */_Bool) 9223372036854775807LL))))));
                    var_11 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 6544354189305202522LL))));
                }
            } 
        } 
        var_12 = ((/* implicit */signed char) var_7);
    }
    for (int i_3 = 1; i_3 < 24; i_3 += 3) 
    {
        var_13 = ((/* implicit */_Bool) ((int) ((((/* implicit */int) var_1)) <= (((/* implicit */int) arr_11 [i_3 + 1])))));
        var_14 = ((/* implicit */unsigned char) (-((+(((/* implicit */int) var_4))))));
    }
    var_15 = ((/* implicit */short) var_6);
}
