/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19694
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
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) ((var_2) || (((/* implicit */_Bool) var_6))))) | ((~(((/* implicit */int) (short)18404))))))) || (((/* implicit */_Bool) var_15))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (short i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) var_18))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned long long int) (unsigned char)0);
                                arr_13 [i_3] [i_1] [i_2] [i_2] [i_4 + 1] = ((/* implicit */_Bool) (signed char)16);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1))));
    }
    var_23 = ((/* implicit */unsigned long long int) ((int) var_4));
}
