/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20609
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
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? ((~(((27ULL) >> (((/* implicit */int) var_6)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 1; i_3 < 7; i_3 += 1) 
                    {
                        {
                            arr_9 [i_0] [i_0] [i_0] [i_0] [(short)8] |= max((((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_1 [i_3 + 3]), (((/* implicit */long long int) (unsigned char)1))))) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_1])) : (((/* implicit */int) var_14))))), (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_3 + 1] [i_2] [i_1]))) / (arr_1 [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_3] [i_3 + 2] [i_2 - 1]))) : (arr_6 [i_0]))));
                            arr_10 [i_1] [(short)2] [i_2] [i_3 + 3] = ((((((/* implicit */unsigned long long int) arr_1 [i_2 - 1])) == (((unsigned long long int) arr_3 [i_3] [i_1] [i_0])))) ? ((-(((arr_2 [i_1]) / (arr_5 [1]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_3 - 1] [i_3 - 1] [i_3] [i_3 + 2] [5LL] [i_3 + 1])) ? (((/* implicit */int) arr_0 [i_0] [(short)6])) : (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) var_4)))))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */long long int) (unsigned char)108);
                var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (((~(((((/* implicit */int) arr_4 [i_1] [i_1] [i_0])) ^ (((/* implicit */int) var_13)))))) ^ (((/* implicit */int) arr_4 [i_0] [i_0] [i_1])))))));
                arr_11 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1])))))) * (((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [(unsigned short)5] [i_1]))) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)147))) : ((-9223372036854775807LL - 1LL))))))));
                arr_12 [i_0] [i_1] = ((/* implicit */unsigned long long int) max(((short)(-32767 - 1)), (((/* implicit */short) (_Bool)1))));
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) var_14))));
}
