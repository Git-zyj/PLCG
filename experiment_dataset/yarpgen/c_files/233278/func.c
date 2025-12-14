/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233278
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
    var_19 ^= -1684097979;
    var_20 |= min((var_8), (var_14));
    var_21 = -1;
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 19; i_0 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */int) max((var_22), (arr_1 [17])));
        var_23 = arr_2 [i_0] [i_0];
        arr_4 [i_0] = ((arr_1 [i_0]) - (arr_1 [i_0]));
        var_24 = ((((arr_0 [i_0]) ^ (arr_3 [i_0]))) - ((-2147483647 - 1)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19; i_1 += 4) /* same iter space */
    {
        var_25 = ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_1])) && (((/* implicit */_Bool) -997704377))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 1354692650))))));
        var_26 |= ((-524288) | (arr_3 [i_1]));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            for (int i_3 = 0; i_3 < 19; i_3 += 3) 
            {
                for (int i_4 = 0; i_4 < 19; i_4 += 2) 
                {
                    {
                        var_27 = ((/* implicit */int) min((var_27), (((arr_8 [i_1]) + (arr_9 [i_4] [i_2] [i_4] [i_4])))));
                        arr_15 [i_3] [i_2] [i_3] [13] [i_4] = ((((/* implicit */_Bool) arr_6 [i_1])) ? (arr_6 [i_2]) : (-997704375));
                        arr_16 [i_1] [i_1] [i_3] [i_4] [i_4] [i_4] = ((((/* implicit */_Bool) 2147483646)) ? (180250004) : (-997704377));
                        arr_17 [15] [i_2] = (+(arr_8 [i_1]));
                        var_28 ^= (~(arr_6 [7]));
                    }
                } 
            } 
        } 
    }
}
