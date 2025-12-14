/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43750
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
    var_13 = ((/* implicit */_Bool) var_5);
    var_14 = ((/* implicit */signed char) var_2);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_0] [i_0] [i_3] [i_4] = ((/* implicit */signed char) ((min((var_2), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_8))))))) != (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)33)) * (((/* implicit */int) (_Bool)1)))))));
                                arr_14 [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_1 + 1])) < (var_2))))));
                            }
                        } 
                    } 
                } 
                arr_15 [i_0] [i_1 - 1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) var_3)) : (arr_0 [i_0])))) ? (min((arr_0 [i_0]), (((/* implicit */unsigned int) (signed char)-34)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))));
                arr_16 [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */long long int) (+(((/* implicit */int) arr_12 [i_1 - 1] [i_0] [i_1 + 1] [i_1 - 1]))))), (min((arr_11 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 + 1]), (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_1])))))))));
                var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_1] [i_1] [i_1])) ? (var_2) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8))))))))));
                arr_17 [i_0] [i_0] = ((/* implicit */short) (-(max((((/* implicit */long long int) var_7)), (arr_6 [i_1 + 1] [i_1] [i_0])))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) var_2);
}
