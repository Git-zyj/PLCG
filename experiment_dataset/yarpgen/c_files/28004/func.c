/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28004
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 16; i_1 += 1) 
        {
            {
                var_14 = ((unsigned long long int) (!(arr_3 [i_1 + 1] [i_1 - 3])));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 15; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (int i_4 = 1; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_1 + 2] [i_1 + 1] [i_1])) ? (arr_7 [i_1 - 1] [i_1 + 1] [i_1 + 1]) : (arr_7 [i_1 - 2] [i_1 - 1] [i_1])))) * (((((/* implicit */unsigned long long int) ((arr_7 [i_0] [i_0] [i_0]) / (-571473452)))) / (((((/* implicit */_Bool) var_5)) ? (arr_0 [i_4 - 1]) : (arr_11 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])))))));
                                var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) max((min((((/* implicit */unsigned long long int) ((arr_10 [i_0] [i_0] [i_0] [i_0]) >> (((arr_7 [i_0] [i_0] [i_0]) + (708810565)))))), ((+(var_2))))), (((((/* implicit */_Bool) max((((/* implicit */long long int) 4101328140U)), (arr_5 [i_0] [i_0] [i_0] [i_0])))) ? (((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) & (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_2 [i_4] [i_2]), ((signed char)-73))))))))))));
                            }
                        } 
                    } 
                } 
                var_17 = (+(((unsigned long long int) ((((/* implicit */_Bool) 3332696274610941537LL)) ? (arr_8 [i_1 + 1]) : (((/* implicit */int) arr_3 [i_0] [i_0]))))));
                var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 3332696274610941556LL))));
                arr_13 [i_0] = ((/* implicit */unsigned long long int) (~(((int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0])) ? (1722795204U) : (arr_12 [i_1] [i_0]))))));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) var_8);
}
