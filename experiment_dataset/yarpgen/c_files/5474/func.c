/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5474
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 4; i_3 < 23; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_18 ^= ((/* implicit */unsigned long long int) (~(965317680U)));
                                arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_5 [i_4] [i_4 + 1] [i_4 + 1]);
                                arr_11 [i_3 - 2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((!(var_3))) ? (((((/* implicit */_Bool) var_11)) ? (3329649615U) : (965317680U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_4 [i_4 + 1] [i_3] [i_2] [i_0])) : (((/* implicit */int) arr_9 [i_0] [i_1] [i_2])))))))) ? ((+(((/* implicit */int) var_3)))) : ((~(((/* implicit */int) arr_6 [i_4 + 1]))))));
                                var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_1 [i_4 + 1])))) ? (max((2934724387325282907ULL), ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_2] [0ULL]))) : (arr_7 [i_0] [i_1] [i_1]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_2])) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)103))) <= (3294564694U)))) : ((-(((/* implicit */int) arr_8 [(_Bool)1] [(_Bool)1]))))))))))));
                            }
                        } 
                    } 
                } 
                arr_12 [i_1] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0]))))) ? ((((_Bool)1) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_1 [i_0])))) : (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_1 [i_0]))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) ((var_3) ? (((((/* implicit */_Bool) min((var_1), (((/* implicit */long long int) var_8))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_12)), (var_15))))) : (5086873969989794686LL))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
    var_21 &= ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-17))));
    /* LoopNest 3 */
    for (signed char i_5 = 2; i_5 < 11; i_5 += 2) 
    {
        for (signed char i_6 = 0; i_6 < 15; i_6 += 2) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    var_22 += ((/* implicit */int) (!(((/* implicit */_Bool) min((((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) arr_8 [i_5] [i_5])))), (1139451901))))));
                    arr_23 [i_5] [i_6] [i_7] = ((/* implicit */unsigned long long int) arr_1 [i_6]);
                }
            } 
        } 
    } 
}
