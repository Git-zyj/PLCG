/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227777
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((int) var_2)) : (((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) % (var_11)))))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_0] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) ((unsigned char) var_4))) ? (((/* implicit */int) arr_4 [i_0 - 1])) : (((/* implicit */int) min((var_9), (((/* implicit */unsigned char) (signed char)-73))))))));
                    arr_10 [i_0] = ((/* implicit */_Bool) min((min((min((((/* implicit */unsigned long long int) arr_5 [(unsigned short)13] [i_1])), (arr_8 [i_0] [i_0] [2U] [i_0]))), (((/* implicit */unsigned long long int) arr_5 [i_0 - 2] [i_1])))), (((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_12)))) ^ (((/* implicit */int) arr_1 [i_0])))))));
                    var_15 *= ((/* implicit */signed char) min(((+(((/* implicit */int) (unsigned short)17778)))), (((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)17778))) - (4272108898U)))))));
                    arr_11 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (-(((/* implicit */int) var_12))))), ((((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)0))))) : (min((((/* implicit */unsigned int) (unsigned short)47761)), (4272108916U)))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_16 -= ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) var_13)) + (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_12 [i_4]))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
                                var_17 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) min(((signed char)-110), (((/* implicit */signed char) (_Bool)0))))), (((unsigned int) ((var_13) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) var_1))));
    var_19 = ((signed char) 1762488167U);
}
