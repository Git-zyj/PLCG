/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20009
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
    var_11 = ((/* implicit */unsigned char) max((var_4), (((/* implicit */unsigned int) var_9))));
    var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) var_9)), (var_0))) * (max((((/* implicit */unsigned long long int) var_4)), (max((var_0), (((/* implicit */unsigned long long int) var_1)))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 14; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */signed char) ((arr_8 [i_2] [i_2] [i_1] [i_2 + 1]) == (((/* implicit */int) (unsigned char)133))));
                            arr_9 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
                            var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) max((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_5 [i_0] [i_2] [i_2])) ? (((/* implicit */int) arr_2 [i_0] [i_1] [i_3])) : (arr_8 [4U] [4U] [i_2] [i_0]))), (((/* implicit */int) arr_3 [i_2 - 1]))))), (max((((/* implicit */unsigned long long int) min((((/* implicit */short) arr_3 [i_3])), (arr_4 [(unsigned short)2] [i_1] [5U])))), (arr_1 [i_0]))))))));
                            var_15 ^= max((((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_2] [i_1] [i_2])) && (((/* implicit */_Bool) (unsigned short)56072))))), (arr_8 [i_0] [i_1] [i_3] [8U]));
                            var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) min((min((arr_6 [i_2 - 1] [i_2 - 2] [i_3]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [2ULL] [i_2] [i_2])) ? (arr_8 [4] [(_Bool)1] [i_3] [i_3]) : (arr_8 [i_3] [i_2] [i_2] [i_0])))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) arr_4 [i_0] [i_2 - 1] [i_2])), (arr_5 [i_3] [i_0] [i_2 - 2])))))))));
                        }
                    } 
                } 
                var_17 = arr_2 [i_0] [i_1] [i_1];
                arr_10 [i_0] [i_0] [i_1] = ((/* implicit */signed char) arr_4 [i_1] [1ULL] [i_0]);
            }
        } 
    } 
}
