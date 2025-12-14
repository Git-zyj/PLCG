/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2527
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] = (((-(((((/* implicit */_Bool) arr_0 [i_0])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_18))))))) >> ((((+(((int) 3221225472U)))) + (1073741833))));
                arr_5 [i_0] [i_1] = ((/* implicit */signed char) min((arr_2 [i_1 + 1] [(signed char)3]), (min((((/* implicit */int) var_5)), (var_13)))));
                var_19 *= ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) arr_1 [i_0])))))) || (((/* implicit */_Bool) var_6))));
                var_20 = ((/* implicit */int) var_5);
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 22; i_2 += 4) 
    {
        for (signed char i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            for (int i_4 = 0; i_4 < 24; i_4 += 4) 
            {
                {
                    var_21 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_8)) ? (var_0) : (1073741835U)))))) + (3221225457U)));
                    var_22 = min((min((arr_9 [i_2 - 1] [i_3]), (((/* implicit */int) var_5)))), (arr_11 [i_2] [15] [i_4]));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */int) var_3);
}
