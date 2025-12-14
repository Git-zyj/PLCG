/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22113
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (!(((/* implicit */_Bool) max((var_18), (((/* implicit */unsigned int) (signed char)-39))))))))));
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_21 += ((/* implicit */signed char) arr_0 [i_2]);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_0] [i_4] = ((/* implicit */unsigned long long int) ((unsigned int) ((arr_0 [(short)7]) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_18)))))));
                                var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)251))))) ? (((/* implicit */int) max((arr_4 [i_1 + 2] [i_1 - 1]), (arr_4 [i_1 + 2] [i_1 - 1])))) : ((-(((/* implicit */int) arr_4 [i_1 + 2] [i_1 - 1]))))));
                                arr_14 [i_0] [i_1 - 1] [i_2] [i_2] [i_0] &= ((/* implicit */signed char) min((((/* implicit */unsigned char) ((arr_3 [i_1 - 1] [i_1 + 2]) > (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)16)))))))), (max((arr_10 [i_0] [i_0]), (arr_10 [i_4] [i_4])))));
                            }
                        } 
                    } 
                    var_23 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((+(arr_9 [i_0] [i_0] [i_0] [i_1] [i_1] [i_0]))), (((/* implicit */long long int) var_1))))) ? ((~(arr_3 [i_1 - 1] [i_1 + 1]))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-9)))));
                }
            } 
        } 
    }
    var_24 = min((var_0), (var_10));
}
