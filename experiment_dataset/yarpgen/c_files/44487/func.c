/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44487
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
    var_12 = ((/* implicit */signed char) (((~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) > (var_4)))))) / (((/* implicit */int) var_10))));
    var_13 = (((+(var_4))) + (((/* implicit */unsigned int) ((/* implicit */int) var_0))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned char) arr_3 [i_0]);
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (long long int i_3 = 1; i_3 < 18; i_3 += 3) 
                    {
                        for (long long int i_4 = 1; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_15 += ((/* implicit */int) ((((/* implicit */int) min((arr_4 [i_0 - 1]), ((signed char)84)))) <= (((/* implicit */int) ((((/* implicit */int) arr_6 [i_0 - 1] [i_0 - 1] [(signed char)4])) < (((/* implicit */int) arr_4 [i_0 - 1])))))));
                                arr_14 [i_0 + 1] [9U] [i_0] [i_0] [i_1] = ((/* implicit */signed char) (unsigned char)224);
                                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) arr_6 [i_3 + 1] [i_4 + 2] [i_1]))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) arr_4 [i_2])) : (((/* implicit */int) arr_8 [i_0] [i_2] [(unsigned char)7] [i_4]))))) ? (arr_0 [i_2] [12U]) : (((((/* implicit */int) (unsigned char)32)) - (((/* implicit */int) (unsigned char)224)))))) : (((((/* implicit */_Bool) ((unsigned char) arr_4 [i_4]))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)27)) || (((/* implicit */_Bool) 6143922470687185500LL))))) : (((/* implicit */int) min((arr_5 [8U]), (arr_7 [(signed char)8] [(unsigned char)4] [18U] [i_3 - 1]))))))));
                                var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)24)) ^ (var_7)));
                                var_18 = ((/* implicit */unsigned char) arr_2 [13U]);
                            }
                        } 
                    } 
                } 
                var_19 += ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)26)) + (((/* implicit */int) var_6))))) ? (max((((((/* implicit */int) (signed char)-91)) + (((/* implicit */int) (signed char)14)))), (((/* implicit */int) (signed char)91)))) : (((/* implicit */int) var_6)));
            }
        } 
    } 
}
