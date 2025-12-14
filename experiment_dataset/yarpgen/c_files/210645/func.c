/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210645
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
    var_16 = max((var_6), (var_0));
    var_17 ^= (unsigned char)242;
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        arr_2 [i_0] = arr_1 [i_0];
        arr_3 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_13))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_18 = arr_8 [i_0] [i_1] [i_2];
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) arr_8 [i_0] [i_1] [i_0]))) == (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0)))))));
                    arr_10 [i_0] [i_1] [i_0] = ((unsigned char) (unsigned char)16);
                    arr_11 [(unsigned char)7] [i_1] [i_2] = (unsigned char)0;
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 2) 
    {
        var_20 = var_2;
        arr_16 [i_3] [i_3] = arr_13 [i_3];
        var_21 ^= arr_13 [i_3];
    }
}
