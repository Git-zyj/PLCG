/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24538
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
    for (int i_0 = 0; i_0 < 14; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : ((-(((/* implicit */int) ((signed char) arr_2 [i_0]))))));
        arr_5 [i_0] = (+(-10));
        arr_6 [9] [i_0] = ((/* implicit */signed char) arr_3 [i_0]);
        var_12 = var_7;
    }
    for (int i_1 = 0; i_1 < 14; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (signed char i_2 = 0; i_2 < 14; i_2 += 1) /* same iter space */
        {
            var_13 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (signed char)-30)) : (-1411638701)))) ? (((/* implicit */int) arr_8 [(signed char)4] [i_2])) : (max((((/* implicit */int) var_9)), (1043099676)))));
            var_14 = ((/* implicit */signed char) max((arr_0 [i_1]), (((/* implicit */int) (signed char)-11))));
        }
        for (signed char i_3 = 0; i_3 < 14; i_3 += 1) /* same iter space */
        {
            arr_15 [i_1] [i_1] [i_1] = (+(((((/* implicit */_Bool) ((signed char) 5))) ? ((~(25))) : (1411638704))));
            /* LoopNest 3 */
            for (signed char i_4 = 0; i_4 < 14; i_4 += 3) 
            {
                for (int i_5 = 0; i_5 < 14; i_5 += 3) 
                {
                    for (signed char i_6 = 0; i_6 < 14; i_6 += 3) 
                    {
                        {
                            arr_24 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((int) (-(((/* implicit */int) arr_16 [i_5] [i_6])))));
                            var_15 -= ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) max((((/* implicit */int) arr_16 [i_4] [i_3])), (arr_23 [12] [i_3] [i_3] [i_3] [i_6])))) ? (max((((/* implicit */int) (signed char)116)), ((-2147483647 - 1)))) : (var_2))));
                        }
                    } 
                } 
            } 
        }
        var_16 = ((((int) var_3)) & (((int) (+(arr_22 [12] [i_1] [12] [i_1] [i_1])))));
        var_17 = ((/* implicit */signed char) arr_11 [i_1] [i_1] [i_1]);
    }
    var_18 ^= ((/* implicit */signed char) var_7);
    var_19 = ((/* implicit */int) var_11);
    var_20 = ((/* implicit */signed char) 0);
    var_21 = var_9;
}
