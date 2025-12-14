/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246452
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
    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)-99)) : (((/* implicit */int) ((((var_2) / (((/* implicit */unsigned long long int) var_15)))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_0] [i_1]))))), (((((/* implicit */_Bool) arr_3 [i_0] [7] [i_1])) ? (arr_4 [i_1] [i_0]) : (((/* implicit */unsigned long long int) -1001696579)))))), (((/* implicit */unsigned long long int) arr_2 [i_1] [i_0] [i_0]))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_6))) ^ (-4650697005972871459LL)))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_0))))) : (arr_9 [i_0] [i_1] [i_3] [(signed char)11])))) ? ((~(((/* implicit */int) arr_12 [(short)5] [i_1] [(unsigned short)0] [i_1] [i_1] [i_1])))) : (((/* implicit */int) max((arr_1 [i_1] [i_2]), (((/* implicit */signed char) var_0)))))));
                                var_19 -= arr_1 [i_1] [i_1];
                                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (-2147483647 - 1)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) min((var_7), (((/* implicit */unsigned short) var_8)))))) : (2310302481621114467LL)))) ? ((+(var_15))) : (((/* implicit */int) var_10)))))));
}
