/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207833
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
    for (unsigned long long int i_0 = 3; i_0 < 19; i_0 += 2) /* same iter space */
    {
        var_13 = ((/* implicit */long long int) (!(((arr_1 [i_0]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
        var_14 = ((/* implicit */_Bool) arr_1 [i_0 - 1]);
        var_15 = ((/* implicit */long long int) var_0);
        /* LoopSeq 2 */
        for (long long int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            var_16 = ((/* implicit */unsigned long long int) var_5);
            var_17 ^= ((/* implicit */long long int) arr_2 [i_0 - 2]);
            var_18 *= ((/* implicit */signed char) ((_Bool) (+(((unsigned int) arr_5 [10LL])))));
        }
        for (int i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)245)) != (((/* implicit */int) arr_9 [i_0 - 3] [7ULL]))))) : (var_11)));
            var_20 = ((/* implicit */_Bool) -1LL);
            var_21 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_0] [i_2])) * (((/* implicit */int) arr_9 [i_2] [i_2]))))) ? ((+(var_8))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)11))))) / (((/* implicit */long long int) ((/* implicit */int) var_10)))));
        }
    }
    for (unsigned long long int i_3 = 3; i_3 < 19; i_3 += 2) /* same iter space */
    {
        arr_12 [i_3] [i_3] |= ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_3])) / (((/* implicit */int) var_0))))) / ((-(4192502308215542156LL)))));
        arr_13 [i_3] [i_3] |= ((/* implicit */signed char) 1307786700881634687LL);
        arr_14 [i_3] [(unsigned char)19] = arr_8 [(_Bool)1] [0ULL];
        var_22 = ((((/* implicit */_Bool) arr_11 [i_3] [i_3])) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (990771773118628139LL))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))));
    }
    var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) var_10))));
    var_24 += ((/* implicit */_Bool) ((long long int) (!(((/* implicit */_Bool) var_8)))));
    var_25 = ((/* implicit */unsigned char) var_8);
}
