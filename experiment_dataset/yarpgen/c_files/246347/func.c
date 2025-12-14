/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246347
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
    var_10 = ((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (signed char)-122)) : (((/* implicit */int) (signed char)-1))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (signed char)-113)) ? (((/* implicit */int) (signed char)-113)) : (((/* implicit */int) (_Bool)1))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    var_12 = ((signed char) (+(((/* implicit */int) var_0))));
                    var_13 = ((_Bool) ((arr_3 [i_0] [i_0]) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (signed char)-113))));
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((signed char) ((signed char) arr_4 [i_0] [i_1] [i_2])));
                }
            } 
        } 
        arr_9 [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) var_3)))));
    }
    for (signed char i_3 = 2; i_3 < 21; i_3 += 1) 
    {
        arr_12 [i_3] = ((/* implicit */_Bool) min((((/* implicit */int) (signed char)113)), (((((/* implicit */_Bool) (signed char)-114)) ? (((/* implicit */int) ((signed char) (_Bool)0))) : (((/* implicit */int) (_Bool)1))))));
        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((arr_11 [i_3]) ? (((/* implicit */int) (signed char)113)) : (((/* implicit */int) arr_1 [i_3]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)113))))) : ((~(((/* implicit */int) (_Bool)0))))));
        var_15 = ((/* implicit */signed char) max((((/* implicit */int) ((_Bool) (~(((/* implicit */int) (signed char)54)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */int) arr_2 [i_3] [i_3 - 1])) : (((/* implicit */int) arr_3 [i_3] [i_3]))))) ? (((/* implicit */int) min((((/* implicit */signed char) var_7)), ((signed char)113)))) : ((~(((/* implicit */int) var_2))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_4 = 1; i_4 < 21; i_4 += 2) 
        {
            arr_16 [i_3] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */int) arr_5 [i_4])) : (((/* implicit */int) var_2))))));
            var_16 = ((signed char) ((signed char) var_8));
            var_17 = ((/* implicit */_Bool) ((signed char) (!((_Bool)1))));
        }
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), ((signed char)110)))) ? (((/* implicit */int) ((_Bool) min((((/* implicit */signed char) (_Bool)1)), ((signed char)110))))) : (((/* implicit */int) (signed char)0))));
        var_19 = ((/* implicit */_Bool) min(((~(((((/* implicit */_Bool) arr_14 [i_5])) ? (((/* implicit */int) arr_6 [i_5] [i_5] [i_5])) : (((/* implicit */int) var_1)))))), (((/* implicit */int) min(((_Bool)1), (((_Bool) (_Bool)1)))))));
    }
}
