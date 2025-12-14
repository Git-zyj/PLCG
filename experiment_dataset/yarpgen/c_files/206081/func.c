/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206081
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
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (int i_4 = 1; i_4 < 9; i_4 += 2) 
                        {
                            {
                                arr_14 [i_4] [(unsigned char)4] [i_2] [(unsigned char)4] [i_1 - 1] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) (+(var_5)))) / ((-(var_1))))) / (((((/* implicit */unsigned long long int) min((3118301055U), (((/* implicit */unsigned int) var_9))))) * (min((((/* implicit */unsigned long long int) (_Bool)1)), (2223526102898558301ULL)))))));
                                var_17 = min((max((((arr_9 [i_4] [i_1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), (min((var_1), (((/* implicit */unsigned long long int) (signed char)15)))))), (((/* implicit */unsigned long long int) (-(max((((/* implicit */long long int) var_7)), (2588500215343250496LL)))))));
                                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [5U]))))), ((~(var_1))))), (((/* implicit */unsigned long long int) (~((~(arr_6 [i_2])))))))))));
                                var_19 |= ((/* implicit */unsigned long long int) max(((((~(1176666238U))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_16)))))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(arr_6 [i_0])))))))));
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */long long int) min(((+(((/* implicit */int) ((((/* implicit */int) arr_8 [i_0] [(unsigned char)6] [1ULL] [6LL])) == (((/* implicit */int) var_15))))))), ((+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)237)) && (((/* implicit */_Bool) (signed char)97)))))))));
                var_21 = ((/* implicit */_Bool) min((min(((~(arr_6 [i_1]))), ((+(((/* implicit */int) (_Bool)1)))))), (min((((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [5LL]))))), ((+(((/* implicit */int) arr_0 [i_0] [1ULL]))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) (~(max(((-(((/* implicit */int) var_4)))), (((/* implicit */int) (!(var_10))))))));
}
