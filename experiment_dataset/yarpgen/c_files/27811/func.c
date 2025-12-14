/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27811
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 3; i_3 < 19; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                arr_15 [i_0] [i_1 - 1] [i_2] [i_2] [i_4] [i_0] [i_4] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_8))));
                                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_1 + 1] [i_3] [i_4]))))) ? ((-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_13 [5U])) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_2])))))) : (((/* implicit */int) arr_10 [(_Bool)1] [(_Bool)1] [i_4] [i_2] [i_4] [i_3 + 2]))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_19 [i_2] [19] [i_2] [i_5] [i_5] = ((/* implicit */int) (unsigned short)39682);
                        var_21 = ((/* implicit */unsigned short) (signed char)(-127 - 1));
                    }
                }
                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_17 [i_1] [6ULL] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_19))) : (max((((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_1] [i_0] [i_1] [4LL])), (10138690898224264838ULL)))))) ? (7817850043633109326LL) : (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) var_19)) > (((/* implicit */int) (unsigned char)60))))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) max((var_23), (var_18)));
}
