/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207594
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
    var_15 = ((/* implicit */long long int) var_2);
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (long long int i_2 = 1; i_2 < 19; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    for (long long int i_4 = 0; i_4 < 20; i_4 += 2) 
                    {
                        {
                            var_16 = (!(arr_0 [i_0 - 3]));
                            arr_13 [(_Bool)1] [(_Bool)1] [i_1] [i_3] [(_Bool)1] = arr_4 [i_1] [i_1];
                            var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((long long int) arr_3 [i_4] [i_2 - 1] [i_0 - 3])))));
                            var_18 = ((/* implicit */long long int) ((arr_5 [i_2] [i_1]) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) arr_0 [i_2 - 1]))));
                            var_19 &= ((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_0 - 2] [i_1] [i_1] [i_3] [i_3] [i_0 - 2])) % (((var_11) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1))))));
                        }
                    } 
                } 
            } 
            var_20 |= (+(var_7));
        }
        var_21 ^= ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))));
    }
}
