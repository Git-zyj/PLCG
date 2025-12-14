/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40747
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
    var_13 = ((/* implicit */signed char) ((_Bool) var_3));
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 11; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_14 &= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [(unsigned short)12]))) >= (((((((/* implicit */_Bool) -673126824801420215LL)) ? (-673126824801420215LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [(_Bool)1]))))) | (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))))));
                    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_3 [i_1]), (var_6)))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 3] [i_1 - 1])) : (((/* implicit */int) arr_2 [i_0] [i_0 - 3] [i_1 - 2])))) : (((((/* implicit */_Bool) min((arr_7 [i_1]), (((/* implicit */unsigned int) var_11))))) ? (((/* implicit */int) min((arr_5 [i_0] [i_1] [i_1]), (arr_2 [i_1 + 1] [i_1 + 1] [i_0])))) : (((/* implicit */int) var_9))))));
                    /* LoopNest 2 */
                    for (short i_3 = 4; i_3 < 10; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned int) max(((-((~(-673126824801420226LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)126)) ? (((/* implicit */int) ((unsigned char) var_9))) : (((((/* implicit */_Bool) (unsigned char)112)) ? (var_11) : (((/* implicit */int) var_8)))))))));
                                arr_12 [i_2] [i_2] [i_2] [i_1] [i_1] [i_3 + 3] [i_1] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)209))) == (673126824801420238LL)));
                            }
                        } 
                    } 
                    arr_13 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */short) (~(((((/* implicit */_Bool) 1073741823U)) ? (((/* implicit */int) arr_1 [i_0 - 2])) : (((/* implicit */int) var_10))))));
                }
            } 
        } 
    } 
}
