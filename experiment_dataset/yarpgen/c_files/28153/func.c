/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28153
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 16; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */int) (+((~(min((((/* implicit */unsigned int) arr_1 [i_0])), (arr_7 [11U] [i_1] [i_2] [i_3] [11U])))))));
                            var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) max((var_16), (var_1)))) ? (((/* implicit */unsigned long long int) (-(arr_4 [i_0] [i_0] [i_0] [i_0])))) : (((unsigned long long int) arr_8 [i_0] [i_0] [i_0] [17LL])))))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) min((arr_6 [i_1 + 1] [i_1 - 2] [i_1 - 2]), (arr_6 [i_1 + 1] [i_1 - 2] [i_1 - 2])))), (var_12)));
                arr_9 [i_0] = ((/* implicit */signed char) ((max((arr_4 [(short)10] [(short)10] [i_1 + 1] [(short)10]), (arr_7 [i_1] [i_1] [i_1 + 1] [i_1] [i_1]))) > (((((/* implicit */_Bool) arr_7 [i_1] [i_1 - 1] [i_1 - 2] [i_1] [i_1 - 2])) ? (arr_7 [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1] [i_1 - 2]) : (var_3)))));
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) (-((~(((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_15)))))));
    var_21 = ((/* implicit */unsigned long long int) ((((min((var_2), (((/* implicit */unsigned long long int) var_6)))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_9)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_3)))) ? (max((var_16), (((/* implicit */long long int) var_10)))) : (((/* implicit */long long int) ((/* implicit */int) var_14))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (((/* implicit */long long int) var_10)) : (min((var_15), (var_13)))))));
    var_22 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) var_6))) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_7))))))) > (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) min((var_16), (var_13)))) : (((((/* implicit */_Bool) var_5)) ? (var_2) : (((/* implicit */unsigned long long int) var_10))))))));
}
