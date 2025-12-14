/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240228
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
    var_18 = ((/* implicit */_Bool) min((var_8), (var_11)));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 7; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? (((((/* implicit */int) arr_5 [i_1])) & (((/* implicit */int) arr_1 [2LL])))) : (arr_0 [i_0 - 2]))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0 + 4])))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (unsigned int i_3 = 4; i_3 < 9; i_3 += 1) 
                    {
                        {
                            arr_11 [(unsigned char)3] = ((/* implicit */long long int) 3863262578U);
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)9693)) / (((/* implicit */int) arr_1 [i_1]))))) ? (arr_7 [i_0 - 2] [i_1] [i_3 - 3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_3 + 2])))))) ? (((var_14) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_3 [i_2] [i_3])), (arr_10 [i_0 + 2] [i_0 + 3] [i_0 + 3] [i_0] [1LL])))) : (var_16))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)148)))));
                            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) arr_0 [i_0 + 4]))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 += ((/* implicit */short) ((((/* implicit */int) var_12)) * (((/* implicit */int) var_6))));
    var_23 += (+(((((/* implicit */_Bool) var_0)) ? ((~(-1LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))))));
}
