/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230527
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
    for (unsigned long long int i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                arr_6 [i_1] [i_0] = ((/* implicit */unsigned long long int) var_9);
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    arr_9 [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_0 + 1] [i_1]))));
                    var_10 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)24)) ? (((/* implicit */long long int) ((/* implicit */int) (short)1920))) : (-820824617381379940LL))));
                }
                var_11 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((820824617381379932LL) == (((/* implicit */long long int) 268435456U)))) && (((/* implicit */_Bool) (+(arr_0 [i_0 - 2] [i_1]))))))) << (((((820824617381379940LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)66))))) - (12436736626990595LL)))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(-7431693071867163676LL))))));
}
