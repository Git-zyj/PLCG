/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219333
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
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */int) 4294967295U);
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        var_19 = ((/* implicit */_Bool) (-(((/* implicit */int) var_13))));
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            var_20 = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) -6LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)51884))) : (5422381885870207309LL))));
                            var_21 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 22U)) && (((/* implicit */_Bool) arr_2 [i_1 - 1])))) && (((/* implicit */_Bool) max((arr_8 [i_1] [(_Bool)1] [(_Bool)1] [i_4]), (((/* implicit */short) ((((/* implicit */_Bool) 0U)) || (((/* implicit */_Bool) var_11))))))))));
                            arr_14 [i_1] = ((/* implicit */unsigned int) arr_2 [i_4 - 1]);
                            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) (((((+(arr_1 [i_0]))) + (9223372036854775807LL))) >> (((((((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) (short)25798)))) ? (max((var_9), (((/* implicit */long long int) var_0)))) : (((/* implicit */long long int) ((/* implicit */int) (short)25782))))) - (24623LL))))))));
                        }
                    }
                    var_23 -= ((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 1]))))) ? (((arr_10 [i_0] [i_1]) + (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_7))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */short) max((((((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)-25814)) : (((/* implicit */int) (signed char)60)))) + (2147483647))) >> ((((-(((/* implicit */int) (short)18331)))) + (18358))))), (((/* implicit */int) var_12))));
}
