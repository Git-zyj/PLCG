/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241641
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
    var_13 = ((/* implicit */long long int) (~(((/* implicit */int) var_5))));
    var_14 = ((/* implicit */_Bool) min(((~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_11))))), (((/* implicit */long long int) ((_Bool) (+(var_1)))))));
    var_15 = ((/* implicit */unsigned char) var_9);
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            var_16 = ((/* implicit */long long int) ((_Bool) arr_3 [i_1] [i_0]));
            var_17 = ((/* implicit */unsigned int) arr_2 [i_0] [i_1] [i_1]);
            var_18 -= ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) var_3)))));
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */signed char) 1690943038U);
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (short i_3 = 1; i_3 < 21; i_3 += 1) 
                {
                    {
                        arr_13 [12U] [6U] [i_2] [20U] [i_1] &= ((/* implicit */_Bool) ((arr_9 [i_3] [(unsigned char)6] [(short)21] [7LL]) & (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2] [i_3 + 1])))));
                        /* LoopSeq 1 */
                        for (short i_4 = 2; i_4 < 18; i_4 += 4) 
                        {
                            arr_16 [i_4] [i_0] [i_2] [i_0] [(_Bool)1] = ((/* implicit */short) (-(((/* implicit */int) var_12))));
                            var_19 = ((/* implicit */long long int) (+(((/* implicit */int) var_12))));
                            var_20 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(1690943047U)))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned char)127)))) : (arr_4 [i_4 + 4] [i_4])));
                        }
                    }
                } 
            } 
        }
        arr_17 [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)-3))));
    }
}
