/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238437
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] &= ((/* implicit */unsigned int) (unsigned char)255);
        var_11 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_0]))));
        var_12 ^= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))) ? (((/* implicit */int) (!(var_0)))) : (arr_1 [i_0])));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) /* same iter space */
        {
            var_13 = ((/* implicit */short) (+(((/* implicit */int) arr_0 [i_0 - 2] [7U]))));
            var_14 = ((/* implicit */signed char) (+(arr_6 [i_0 - 3])));
            var_15 = (-(((/* implicit */int) arr_3 [i_1])));
        }
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) /* same iter space */
        {
            var_16 = ((/* implicit */unsigned short) ((var_3) ? (((/* implicit */long long int) arr_1 [i_0])) : (arr_6 [i_0])));
            /* LoopSeq 2 */
            for (unsigned short i_3 = 1; i_3 < 10; i_3 += 1) 
            {
                arr_12 [i_0] [(unsigned short)7] [i_3] = ((unsigned int) arr_5 [i_0 - 1] [i_2 + 1] [i_2 + 1]);
                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((unsigned int) arr_1 [i_0 - 3])))));
                arr_13 [i_3] = ((/* implicit */unsigned int) (+((-(((/* implicit */int) arr_8 [(signed char)1] [i_2 + 1] [i_2 + 1]))))));
            }
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_18 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_10 [i_0 + 1] [i_4] [i_2 + 1] [i_2 + 1]))));
                var_19 ^= ((/* implicit */unsigned short) arr_7 [i_0] [i_4]);
            }
        }
    }
    var_20 &= ((/* implicit */unsigned char) var_2);
}
