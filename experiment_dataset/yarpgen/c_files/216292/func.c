/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216292
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
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 2; i_2 < 16; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                arr_12 [17ULL] [i_0] [i_1] [i_0] [i_0] [17ULL] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9303624175865438817ULL)) ? (1664501670) : (-1627227308)))), (((((/* implicit */_Bool) -931488513673959374LL)) ? (35184372088800ULL) : (((/* implicit */unsigned long long int) arr_0 [i_0] [i_1]))))))) ? (((((/* implicit */unsigned long long int) (-(var_11)))) - (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) arr_8 [i_0])) : (var_13))))) : (((((/* implicit */_Bool) arr_0 [i_2 + 1] [i_0 + 1])) ? (var_7) : (((/* implicit */unsigned long long int) arr_0 [i_2 + 3] [i_0 - 1]))))));
                                arr_13 [i_0] [i_1] [i_2 - 2] [i_3] [i_4] = ((/* implicit */int) (+((-(((((/* implicit */_Bool) arr_7 [i_2 + 1] [i_2] [i_2 - 1] [i_2])) ? (((/* implicit */long long int) var_19)) : (-3029799656159643934LL)))))));
                                var_20 = max((max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_0] [8] [i_3] [i_4]))))), (arr_4 [i_0 + 1] [i_2 + 3]))), (var_4));
                            }
                        } 
                    } 
                } 
                arr_14 [i_0 + 1] [i_0] [i_0 + 1] = 35184372088825ULL;
                var_21 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_11)))) ? (arr_4 [i_0 + 2] [i_1]) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_10)) : (var_3))))) & ((~(((((/* implicit */unsigned long long int) arr_6 [i_0] [i_0])) & (arr_2 [i_0 + 3])))))));
                arr_15 [i_1] [i_0] = (+(min((((((/* implicit */_Bool) var_14)) ? (arr_7 [i_0] [i_0] [i_0 + 2] [i_1]) : (((/* implicit */unsigned long long int) var_17)))), ((-(var_13))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_5 = 4; i_5 < 20; i_5 += 1) 
    {
        for (int i_6 = 0; i_6 < 22; i_6 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 22; i_7 += 4) 
                {
                    for (long long int i_8 = 0; i_8 < 22; i_8 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */signed char) var_3);
                            arr_24 [i_5 + 2] [i_6] [i_7] [i_5] [i_5] = ((/* implicit */unsigned long long int) var_14);
                        }
                    } 
                } 
                var_23 = min(((((!(((/* implicit */_Bool) var_18)))) ? (((/* implicit */unsigned long long int) max((var_1), (((/* implicit */long long int) var_12))))) : (((((/* implicit */_Bool) var_13)) ? (arr_16 [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))), (min((var_4), (((/* implicit */unsigned long long int) ((signed char) var_15))))));
                arr_25 [i_5] [i_5] = ((/* implicit */signed char) min((var_7), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_18 [i_6])))))));
            }
        } 
    } 
    var_24 = (~((-(((((/* implicit */_Bool) -488307587)) ? (18119030716058382470ULL) : (15442736521922079854ULL))))));
    /* LoopNest 2 */
    for (int i_9 = 2; i_9 < 19; i_9 += 3) 
    {
        for (long long int i_10 = 0; i_10 < 20; i_10 += 4) 
        {
            {
                arr_32 [i_9] [i_9] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))))), (arr_30 [i_9 + 1] [i_9])));
                arr_33 [i_9] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_30 [i_9] [i_9])) ? (arr_30 [i_9 - 1] [i_9]) : (arr_30 [i_9] [i_9]))) != (((/* implicit */unsigned long long int) ((int) ((long long int) var_8))))));
            }
        } 
    } 
}
