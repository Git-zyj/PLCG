/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43653
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (long long int i_2 = 4; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_7 [i_0 + 3] [i_1] [i_1] = ((((/* implicit */_Bool) ((arr_0 [i_0 - 1]) % (arr_0 [i_0 - 1])))) || (((/* implicit */_Bool) arr_0 [i_0 - 1])));
                    arr_8 [i_0] [i_1] [i_2] [0U] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_2 - 3] [i_2] [i_0 + 3])))))) ^ (arr_4 [i_2 - 3] [i_1] [i_0 - 1])));
                    arr_9 [i_1] [i_1] [i_0 - 1] = var_13;
                }
            } 
        } 
    } 
    var_15 &= ((/* implicit */unsigned int) var_5);
    var_16 = var_4;
    /* LoopSeq 2 */
    for (long long int i_3 = 2; i_3 < 20; i_3 += 2) 
    {
        arr_12 [i_3] = var_14;
        arr_13 [(_Bool)1] [i_3] = ((/* implicit */_Bool) var_12);
        /* LoopNest 2 */
        for (long long int i_4 = 4; i_4 < 19; i_4 += 1) 
        {
            for (long long int i_5 = 0; i_5 < 21; i_5 += 1) 
            {
                {
                    var_17 += ((/* implicit */_Bool) arr_16 [i_3] [i_5]);
                    arr_19 [i_4 - 3] [i_4 - 3] [i_4] = ((/* implicit */short) var_14);
                }
            } 
        } 
        arr_20 [i_3] = ((/* implicit */short) (-(((/* implicit */int) arr_17 [i_3] [20U] [i_3]))));
        arr_21 [i_3 - 2] [i_3 - 2] = ((/* implicit */long long int) arr_16 [i_3] [i_3]);
    }
    /* vectorizable */
    for (unsigned int i_6 = 2; i_6 < 18; i_6 += 2) 
    {
        arr_25 [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_15 [i_6] [i_6]))));
        var_18 = ((/* implicit */long long int) ((unsigned int) arr_24 [i_6 + 2] [i_6 - 1]));
    }
}
