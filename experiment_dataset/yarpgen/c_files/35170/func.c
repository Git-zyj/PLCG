/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35170
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
    var_12 = var_1;
    var_13 = ((signed char) ((((/* implicit */_Bool) (signed char)-53)) && (((/* implicit */_Bool) (signed char)4))));
    var_14 = var_7;
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            var_15 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)46)) + (((/* implicit */int) (signed char)45))));
            /* LoopSeq 1 */
            for (signed char i_2 = 2; i_2 < 19; i_2 += 3) 
            {
                var_16 = arr_2 [i_0] [i_1];
                var_17 = min(((signed char)-52), ((signed char)-46));
            }
        }
        var_18 = arr_5 [i_0] [(signed char)8] [i_0];
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 12; i_3 += 4) 
    {
        var_19 = (signed char)-68;
        var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10)))))));
        var_21 = arr_7 [i_3] [i_3];
        arr_9 [i_3] = arr_0 [i_3];
        var_22 = ((/* implicit */signed char) (((-(((/* implicit */int) arr_1 [(signed char)5])))) + ((-(((/* implicit */int) (signed char)51))))));
    }
}
