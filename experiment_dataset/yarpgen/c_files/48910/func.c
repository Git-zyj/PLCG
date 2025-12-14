/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48910
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
    for (long long int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 7; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) arr_0 [i_1]))));
                    arr_8 [i_1] [i_1] [i_2] &= ((/* implicit */_Bool) arr_7 [i_0] [i_2 + 1] [i_0]);
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (signed char i_3 = 0; i_3 < 11; i_3 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_4 = 1; i_4 < 8; i_4 += 1) 
        {
            var_21 &= ((/* implicit */unsigned short) arr_7 [i_4 + 1] [i_4 + 1] [i_4 + 2]);
            var_22 = ((/* implicit */int) ((unsigned char) (-(arr_2 [i_3] [i_3] [i_3]))));
            var_23 ^= ((/* implicit */_Bool) (+(arr_1 [i_4 + 2])));
        }
        var_24 ^= ((/* implicit */signed char) arr_10 [i_3] [i_3]);
    }
    for (signed char i_5 = 0; i_5 < 11; i_5 += 1) /* same iter space */
    {
        arr_17 [i_5] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) - ((+(1892971110U)))));
        arr_18 [i_5] = ((/* implicit */int) ((_Bool) (-((+(((/* implicit */int) arr_5 [i_5] [i_5] [i_5])))))));
    }
}
