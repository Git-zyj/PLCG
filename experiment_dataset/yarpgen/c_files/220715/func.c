/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220715
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
    var_16 ^= ((/* implicit */unsigned char) var_9);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 4; i_2 < 21; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) arr_10 [i_0 + 1] [i_2] [i_2] [i_2 + 3])) < (max((((/* implicit */unsigned long long int) var_8)), (arr_9 [i_0 + 1] [i_0 + 1] [i_1] [i_2] [i_3]))))))));
                            arr_12 [i_0] [i_1] [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) (((-((+(((/* implicit */int) var_7)))))) % (((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) 869821735))))), (((unsigned short) 869821735)))))));
                            arr_13 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */short) (((+(var_5))) != (min((((((/* implicit */long long int) var_0)) - (arr_3 [i_3] [21LL] [(_Bool)1]))), (((/* implicit */long long int) max(((short)-13802), (((/* implicit */short) (_Bool)1)))))))));
                        }
                    } 
                } 
                arr_14 [i_0] [i_0 + 1] [i_0] |= ((/* implicit */_Bool) (-(((((/* implicit */int) ((((/* implicit */_Bool) arr_6 [17] [i_1] [i_1] [i_1])) && (((/* implicit */_Bool) arr_1 [i_1] [i_1]))))) + (((/* implicit */int) var_1))))));
                var_18 = ((/* implicit */unsigned char) arr_1 [i_0 + 1] [i_0 + 1]);
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) (-(var_11)));
    var_20 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_8)), (2436263749112123089ULL)))))) ? (min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (var_0)))))) : (var_9)));
}
