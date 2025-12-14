/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41065
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
    var_20 += ((/* implicit */unsigned int) var_19);
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) (short)(-32767 - 1));
                var_22 = ((/* implicit */signed char) (~((-9223372036854775807LL - 1LL))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 14; i_2 += 1) 
    {
        for (long long int i_3 = 0; i_3 < 14; i_3 += 3) 
        {
            {
                var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (!(((/* implicit */_Bool) max((103235218U), (((/* implicit */unsigned int) arr_5 [i_3] [i_2]))))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 2) 
                {
                    for (signed char i_5 = 2; i_5 < 10; i_5 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_15 [i_2] [i_3] [i_2] [i_3])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -9223372036854775804LL)))))) : (((((/* implicit */_Bool) arr_15 [i_2] [i_3] [i_4] [i_5])) ? (var_3) : (((/* implicit */unsigned long long int) arr_15 [(_Bool)1] [i_3] [i_4] [i_5]))))));
                            var_25 *= ((/* implicit */signed char) ((unsigned char) (-(max((arr_8 [(_Bool)1]), (((/* implicit */unsigned int) arr_2 [i_3])))))));
                            arr_19 [i_2] [i_3] [i_3] [9LL] = ((/* implicit */long long int) ((unsigned long long int) 1276189501U));
                            var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (1276189501U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-4))))))));
                        }
                    } 
                } 
                var_27 = ((/* implicit */unsigned long long int) min((var_27), (((((/* implicit */_Bool) (~(var_17)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_19))) : (var_3)))) ? (((((/* implicit */_Bool) var_18)) ? (arr_18 [i_2] [i_3] [i_2] [i_3]) : (((/* implicit */unsigned long long int) arr_13 [i_2] [i_3])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -6455925908417564051LL)) ? (9223372036854775801LL) : (((/* implicit */long long int) 4265691946U))))))) : (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_5)) ? (arr_7 [4LL]) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))))))));
            }
        } 
    } 
}
