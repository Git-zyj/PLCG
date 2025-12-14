/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28728
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
    var_20 = ((/* implicit */short) ((((long long int) var_15)) | (((/* implicit */long long int) ((/* implicit */int) var_15)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) var_16);
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (+((-(((/* implicit */int) arr_1 [i_0])))))))));
    }
    for (long long int i_1 = 0; i_1 < 24; i_1 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned int) ((_Bool) var_9));
        /* LoopSeq 1 */
        for (unsigned int i_2 = 1; i_2 < 22; i_2 += 1) 
        {
            var_23 = ((/* implicit */short) (-(12762032464290818095ULL)));
            /* LoopNest 2 */
            for (long long int i_3 = 2; i_3 < 20; i_3 += 2) 
            {
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    {
                        arr_15 [i_1] [i_2] [i_2 + 1] [i_1] [i_4] = ((((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) var_0)))))) ? (var_0) : (((/* implicit */int) arr_14 [i_1] [i_2 + 2] [i_3] [i_4 - 1])));
                        var_24 = ((/* implicit */long long int) var_4);
                        var_25 = ((/* implicit */signed char) arr_9 [i_1] [i_1]);
                    }
                } 
            } 
        }
    }
    for (long long int i_5 = 0; i_5 < 24; i_5 += 1) /* same iter space */
    {
        arr_19 [i_5] [i_5] = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_14)), (arr_10 [i_5] [i_5] [i_5])))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_5])) % (((/* implicit */int) (unsigned char)6))))));
        var_26 |= ((/* implicit */int) (!(((((((/* implicit */_Bool) var_18)) && (((/* implicit */_Bool) arr_9 [i_5] [i_5])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)21)) ? (127) : (((/* implicit */int) arr_17 [i_5])))))))));
        var_27 = ((/* implicit */unsigned int) var_9);
    }
}
