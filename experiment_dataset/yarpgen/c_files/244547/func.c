/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244547
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                arr_4 [i_0] |= ((/* implicit */signed char) (-(max((((/* implicit */long long int) ((((/* implicit */_Bool) 4088452240U)) ? (0U) : (arr_0 [i_0] [i_0])))), (max((4610560118520545280LL), (((/* implicit */long long int) var_6))))))));
                /* LoopNest 3 */
                for (long long int i_2 = 3; i_2 < 21; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (short i_4 = 2; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_11 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6))))))) ? (((unsigned int) min((var_9), (((/* implicit */unsigned short) var_6))))) : (max((((/* implicit */unsigned int) ((short) arr_3 [i_0] [i_0]))), ((+(3208346358U)))))));
                                arr_13 [i_2] = (i_2 % 2 == zero) ? (((/* implicit */unsigned int) (+(((((/* implicit */int) arr_11 [i_4 + 3] [i_2] [i_4] [i_4] [i_4 - 2])) >> (((((/* implicit */int) arr_11 [i_4 - 1] [i_2] [i_2] [i_4] [i_4 + 1])) - (31803)))))))) : (((/* implicit */unsigned int) (+(((((((/* implicit */int) arr_11 [i_4 + 3] [i_2] [i_4] [i_4] [i_4 - 2])) + (2147483647))) >> (((((((/* implicit */int) arr_11 [i_4 - 1] [i_2] [i_2] [i_4] [i_4 + 1])) - (31803))) + (44623))))))));
                                var_12 = ((/* implicit */_Bool) var_4);
                                var_13 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_6 [i_2 - 1] [i_0] [i_2 - 2] [i_2 - 3])))) ? (arr_12 [i_0]) : (((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned short) var_4))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_14 |= ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_7))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_6)))))));
    var_15 = var_8;
}
