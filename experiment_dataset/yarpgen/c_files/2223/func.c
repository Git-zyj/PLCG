/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2223
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
    var_18 = ((/* implicit */_Bool) (-((-(((/* implicit */int) var_0))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 3; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned int i_3 = 2; i_3 < 17; i_3 += 2) 
                    {
                        {
                            var_19 += ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((((/* implicit */int) var_17)) | (((/* implicit */int) var_3)))) | (((((/* implicit */_Bool) 10ULL)) ? (((/* implicit */int) arr_8 [i_1] [i_1] [i_2 - 1] [i_2 - 1])) : (((/* implicit */int) var_11))))))), (((0U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31744)))))));
                            var_20 *= ((/* implicit */signed char) min((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_2 - 2])), (arr_1 [i_0])))) ? (max((((/* implicit */unsigned long long int) var_1)), (arr_1 [i_0 + 1]))) : (((/* implicit */unsigned long long int) arr_2 [i_1] [i_3] [i_3 + 2])))), (((/* implicit */unsigned long long int) arr_0 [i_3]))));
                            var_21 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_5 [i_1] [i_2 + 2] [i_3 + 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) 17857371001665177501ULL)) ? (arr_1 [i_2]) : (17791999572458316437ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (arr_3 [i_2])))))))));
                        }
                    } 
                } 
                var_22 &= ((/* implicit */short) 589373072044374124ULL);
            }
        } 
    } 
    var_23 += ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) != (var_7))))))), (((((/* implicit */_Bool) var_3)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)73))))))))));
}
