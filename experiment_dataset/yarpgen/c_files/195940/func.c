/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195940
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
    for (signed char i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_3) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_0])))))))) ? (4014978574U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_3 [(short)7])), (var_7))))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        {
                            var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)48131)) ? (((/* implicit */long long int) 2013265920)) : (6250092979061202999LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)42))) : (((13397422321170857647ULL) >> (((((/* implicit */int) (short)-12754)) + (12768))))));
                            var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) var_0))));
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_2] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [15] [i_1 - 1] [i_1 - 1])) && (((/* implicit */_Bool) max((((/* implicit */long long int) 399256255U)), (-6250092979061203009LL))))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1851883804)) && (((/* implicit */_Bool) var_1))))), (((((/* implicit */_Bool) 6250092979061203003LL)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)27)))))))));
                            arr_14 [i_0] [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_2]))))) ? (-6250092979061203009LL) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_3])))));
                        }
                    } 
                } 
                var_17 = 399256255U;
                var_18 = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)67))))) & ((~(625945253U))))) & (((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (signed char)-22)))) & ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-125))) : (arr_11 [i_1] [i_0])))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) var_5);
    var_20 = ((/* implicit */signed char) ((var_9) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-15462)) ? (((/* implicit */unsigned int) -1371980713)) : (58594831U))))));
    var_21 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (_Bool)0)), (min((((/* implicit */long long int) min((((/* implicit */unsigned short) var_14)), (var_8)))), (max((6250092979061203009LL), (((/* implicit */long long int) var_5))))))));
}
