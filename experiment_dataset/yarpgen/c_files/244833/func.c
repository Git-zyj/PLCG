/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244833
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
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) var_10))) ? (((/* implicit */int) (short)-1)) : ((+(((/* implicit */int) var_17))))));
    var_19 -= ((/* implicit */long long int) ((unsigned short) ((unsigned int) var_10)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 2; i_1 < 7; i_1 += 1) 
        {
            arr_6 [i_0] [i_0] [i_1 - 1] = ((/* implicit */unsigned int) ((long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (4668798014637095416LL))));
            var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) -1))) ? (-724304220347952106LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_1 - 2]))))))));
            var_21 = ((/* implicit */short) ((((long long int) var_10)) % (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -1050293214)) && (((/* implicit */_Bool) (unsigned char)59))))))));
            /* LoopSeq 1 */
            for (unsigned short i_2 = 3; i_2 < 9; i_2 += 3) 
            {
                arr_10 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-2)) ? (((/* implicit */int) (short)14608)) : (((/* implicit */int) (unsigned char)128))));
                arr_11 [i_2] = ((/* implicit */unsigned int) var_13);
                var_22 = ((/* implicit */long long int) arr_3 [i_0] [i_0] [i_0]);
            }
            arr_12 [i_0] [i_1] = ((/* implicit */long long int) ((short) 536870911));
        }
        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) (~(arr_5 [i_0] [i_0]))))));
        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))));
    }
}
