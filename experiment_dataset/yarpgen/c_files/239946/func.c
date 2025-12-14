/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239946
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_14 = ((/* implicit */signed char) (~(((/* implicit */int) arr_0 [i_0]))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 10; i_1 += 1) /* same iter space */
        {
            var_15 = ((/* implicit */signed char) ((((_Bool) (unsigned char)57)) ? (((((/* implicit */_Bool) 9644836018505312336ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)108))) : (8801908055204239280ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) % (((/* implicit */int) (_Bool)1)))))));
            /* LoopSeq 2 */
            for (short i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                var_16 = (~(((/* implicit */int) ((8801908055204239280ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0])))))));
                var_17 = ((/* implicit */unsigned short) arr_4 [i_1]);
                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((arr_5 [i_2] [i_1] [i_0]) || (((/* implicit */_Bool) var_1)))))));
                arr_8 [i_2] [i_1] [i_0] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) var_12))));
                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (~(0LL))))));
            }
            for (int i_3 = 0; i_3 < 10; i_3 += 4) 
            {
                arr_12 [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [(short)6] [i_3])) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (short)18559))))))));
                var_20 = (!(((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1])));
            }
            var_21 = arr_7 [i_0] [i_1] [i_0];
        }
        for (short i_4 = 0; i_4 < 10; i_4 += 1) /* same iter space */
        {
            var_22 = ((/* implicit */int) (unsigned short)60841);
            var_23 = ((/* implicit */long long int) arr_3 [i_0] [i_0]);
        }
        var_24 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) (short)16376)) && ((!(((/* implicit */_Bool) -1411287723))))))), (arr_14 [i_0])));
    }
    var_25 = ((/* implicit */signed char) min((-1411287723), (((/* implicit */int) var_9))));
}
