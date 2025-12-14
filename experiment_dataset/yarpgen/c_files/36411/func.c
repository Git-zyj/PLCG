/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36411
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_6 [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_5 [i_2] [i_1] [i_0]);
                    arr_7 [(unsigned char)14] [i_1] = 35175782154240ULL;
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 4) 
        {
            arr_12 [i_3] [i_4] = ((/* implicit */unsigned int) 18446708897927397375ULL);
            /* LoopSeq 1 */
            for (unsigned int i_5 = 0; i_5 < 12; i_5 += 3) 
            {
                arr_17 [i_5] [i_3] [i_3] [i_3] = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) 819365581U)) ? (3823889046U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))));
                arr_18 [i_3] [i_3] [i_4] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446708897927397375ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_4)))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) 819365581U)) : (18446708897927397391ULL))) : (((/* implicit */unsigned long long int) ((unsigned int) (signed char)24)))));
                arr_19 [i_5] [i_5] [i_3] = ((/* implicit */signed char) (~(18446708897927397359ULL)));
                var_16 = ((/* implicit */long long int) (signed char)101);
            }
            var_17 = ((/* implicit */long long int) 18446708897927397376ULL);
        }
        var_18 = ((/* implicit */unsigned int) ((_Bool) min((((unsigned int) var_15)), (((/* implicit */unsigned int) var_0)))));
    }
    var_19 = ((/* implicit */signed char) var_9);
}
