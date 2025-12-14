/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191388
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
    var_10 = ((/* implicit */_Bool) min((((/* implicit */int) var_4)), (((((/* implicit */_Bool) -187558623)) ? (-187558623) : (187558622)))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) /* same iter space */
    {
        var_11 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [(short)1]))), (((/* implicit */int) ((short) 187558623)))));
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) (short)0);
        var_12 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) var_3)))));
        var_13 = ((/* implicit */unsigned char) arr_1 [(unsigned char)14]);
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 15; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 15; i_2 += 3) 
        {
            arr_10 [(unsigned char)13] = ((/* implicit */unsigned short) 134217712);
            /* LoopSeq 1 */
            for (long long int i_3 = 0; i_3 < 15; i_3 += 3) 
            {
                var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) (signed char)77))));
                arr_13 [i_3] [i_2] [i_2] [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) -187558628))));
            }
            arr_14 [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((unsigned long long int) arr_6 [i_1] [8ULL] [i_2]));
        }
        arr_15 [(signed char)6] [i_1] = ((/* implicit */signed char) ((unsigned short) arr_9 [i_1] [i_1]));
        var_15 ^= ((/* implicit */unsigned short) arr_9 [i_1] [i_1]);
    }
}
