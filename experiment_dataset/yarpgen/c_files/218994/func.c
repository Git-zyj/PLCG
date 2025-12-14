/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218994
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
    for (signed char i_0 = 4; i_0 < 14; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */int) arr_3 [i_0] [i_0]);
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        {
                            arr_10 [i_0 - 2] [i_0] [i_0 + 1] [i_0 - 4] [i_0 - 4] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned short) var_7)))));
                            var_19 = ((/* implicit */unsigned short) min((((/* implicit */int) var_15)), (((((/* implicit */_Bool) (signed char)105)) ? (((/* implicit */int) arr_7 [i_0 + 1] [i_0 - 1] [i_0 + 1])) : (((/* implicit */int) var_6))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_4 = 0; i_4 < 15; i_4 += 3) 
                {
                    for (short i_5 = 0; i_5 < 15; i_5 += 2) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 15; i_6 += 4) 
                        {
                            {
                                arr_20 [i_4] [i_1] [i_1] [i_1] [i_4] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_12 [i_0 - 1] [i_1] [i_4] [i_5]))))) ? (max((var_5), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_12 [i_0] [i_1] [i_4] [i_5])) : (var_5))))) : (((/* implicit */int) var_4))));
                                arr_21 [i_0] [i_0 - 1] [i_1] [i_4] [i_5] [i_4] [i_0 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) min((var_14), (((/* implicit */int) (unsigned short)255))))) ? (var_3) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-68)) ? (var_0) : (((/* implicit */int) var_11)))))))));
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */unsigned short) (((+(((/* implicit */int) var_1)))) - ((-((-(((/* implicit */int) var_8))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) ((unsigned char) (!(((/* implicit */_Bool) 6070498156985087725LL)))))), (var_17)));
    var_22 ^= ((/* implicit */unsigned char) (signed char)72);
}
