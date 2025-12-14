/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44760
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
    var_13 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? ((-(var_6))) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 4; i_1 < 19; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((min((arr_1 [i_0]), (arr_1 [i_0]))) ? (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_1 - 4] [i_0] [i_0]))))), (max((var_1), (((/* implicit */unsigned long long int) arr_0 [i_0])))))) : (((/* implicit */unsigned long long int) (((!(arr_1 [i_1]))) ? ((+(((/* implicit */int) var_5)))) : (((/* implicit */int) (!(var_9))))))))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_12)))) ? ((~(((/* implicit */int) (signed char)-1)))) : (((/* implicit */int) ((signed char) var_4)))))) ? (((unsigned long long int) arr_6 [9LL] [14U])) : (((/* implicit */unsigned long long int) (~(1240769611U))))));
                            arr_11 [i_0] [i_1] [i_0] [i_0] [(unsigned short)4] [i_3] = ((/* implicit */_Bool) (~(((((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])))) ? (((((/* implicit */_Bool) (signed char)4)) ? (8388607LL) : (1624017944901224690LL))) : (((((/* implicit */_Bool) var_3)) ? (-8388607LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1])))))))));
                            var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1 - 1] [i_1 - 4] [i_1 - 4] [i_1 - 4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1 - 3] [i_1 - 3] [i_1 - 4] [i_1 - 2]))) : (var_3))))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))));
                /* LoopNest 3 */
                for (unsigned int i_4 = 1; i_4 < 19; i_4 += 3) 
                {
                    for (unsigned long long int i_5 = 2; i_5 < 18; i_5 += 3) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_22 [i_6] [i_5] [i_4] [i_1] [i_0] = ((/* implicit */_Bool) (-(max((max((var_1), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0])))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_21 [i_0] [i_1] [(unsigned char)17] [(signed char)14] [i_6])))))))));
                                var_17 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)65535))))), (-1788915635109425668LL)));
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */int) 8388605LL);
            }
        } 
    } 
}
