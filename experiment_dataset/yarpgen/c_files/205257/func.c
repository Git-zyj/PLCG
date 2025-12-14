/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205257
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
    var_17 = ((/* implicit */signed char) ((unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)231))) == (var_3))) ? (min((var_10), (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)59498)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)205)))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */short) min((((/* implicit */long long int) 4294967295U)), (9223372036854775807LL)));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) ((3365912796330830161ULL) / (((/* implicit */unsigned long long int) -9161630982032135765LL))));
                                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((_Bool) var_2)))));
                                var_21 -= ((/* implicit */short) ((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned long long int) arr_11 [i_0 + 1] [i_4] [i_4] [i_4]))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_11 [i_0 + 1] [(short)8] [i_4] [i_3])))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_8 [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) arr_11 [i_0 + 1] [i_1 + 1] [i_4] [i_1 + 1]))))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_0 - 1] [9ULL] = ((/* implicit */unsigned short) var_16);
                }
            } 
        } 
    } 
}
