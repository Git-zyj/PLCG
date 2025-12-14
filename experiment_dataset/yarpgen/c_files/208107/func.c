/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208107
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
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned int) (((_Bool)0) && (((/* implicit */_Bool) ((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))) * (((arr_0 [i_0]) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-110))))))))));
                var_16 = ((/* implicit */unsigned int) (_Bool)1);
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        {
                            arr_8 [i_2] = ((((/* implicit */_Bool) min((((/* implicit */long long int) (-(((/* implicit */int) (signed char)(-127 - 1)))))), (((arr_0 [i_0 + 3]) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((((/* implicit */_Bool) ((arr_1 [(_Bool)1]) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (arr_6 [i_1 - 1] [i_3] [i_2] [i_0]) : (arr_6 [i_0 - 1] [i_1] [i_2] [i_1 - 2]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [13])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_7 [i_0] [6U] [i_2] [i_2] [i_3]))))) ? (((var_10) / (16777216))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_0)), (var_9)))))));
                            var_17 = ((/* implicit */int) min((arr_5 [i_2] [i_2]), (var_11)));
                            var_18 *= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_0 [(_Bool)1])) ? (arr_6 [i_0] [i_1] [i_1] [i_3]) : (65535)))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_2))) - (((unsigned int) (_Bool)1))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) max((((((/* implicit */int) max((((/* implicit */unsigned short) (signed char)(-127 - 1))), (var_11)))) / (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((signed char) ((((/* implicit */int) (signed char)(-127 - 1))) >= (((/* implicit */int) var_14))))))));
}
