/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36528
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
    var_19 -= ((/* implicit */unsigned int) var_18);
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_20 &= ((((/* implicit */int) arr_3 [i_0])) == (((/* implicit */int) (short)14409)));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_0] [i_2] [i_2])) ? (arr_6 [(_Bool)1] [i_2] [(_Bool)1] [i_3]) : ((+((-(arr_6 [(signed char)14] [i_2] [(signed char)14] [i_3]))))))))));
                            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_3 [i_0 - 1]), (arr_3 [i_0 + 2])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_4 [i_3] [i_0 - 1] [i_3])) : (((/* implicit */int) arr_4 [i_3] [(short)18] [i_3]))))) : (arr_1 [i_0]))))));
                            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) min((arr_6 [(signed char)16] [i_3] [i_2] [(signed char)2]), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_3])) ? (var_9) : (arr_6 [i_0] [i_3] [i_2] [(signed char)8])))) ? (((/* implicit */int) arr_7 [i_2])) : ((~(((/* implicit */int) var_4))))))))))));
                            var_24 = ((/* implicit */long long int) (!(var_3)));
                        }
                    } 
                } 
            }
        } 
    } 
}
