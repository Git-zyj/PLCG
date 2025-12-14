/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45132
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_11 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_1])))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_12 -= ((/* implicit */_Bool) arr_5 [i_3]);
                            var_13 ^= ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [(unsigned char)14] [i_1] [i_0])) ? (((/* implicit */int) arr_10 [i_3] [i_3] [4LL] [i_3] [i_3] [i_0])) : (-1739131339))), (((((/* implicit */int) var_0)) >> (((/* implicit */int) arr_10 [i_2] [(unsigned char)0] [i_2] [10] [i_2] [i_0]))))));
                        }
                    } 
                } 
                arr_11 [i_0] [i_0] = ((/* implicit */signed char) (-(((arr_8 [i_0] [i_0] [i_0] [i_0]) + (arr_8 [i_1] [i_1] [i_1] [(_Bool)1])))));
                var_14 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0])) && (((/* implicit */_Bool) var_0))))), ((+(arr_7 [i_0] [i_1] [i_0])))));
            }
        } 
    } 
    var_15 |= ((/* implicit */int) (short)14634);
    var_16 &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4))));
    var_17 += ((/* implicit */short) (~((~(((/* implicit */int) (signed char)63))))));
}
