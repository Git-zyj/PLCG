/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48432
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
    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (~(((((/* implicit */int) var_4)) * (((/* implicit */int) var_8)))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned int i_2 = 3; i_2 < 8; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0] [5ULL] [(short)5] [i_0] [i_0] [10] [i_0] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) arr_9 [i_2 - 1] [i_0] [i_2 - 3])) || (((/* implicit */_Bool) var_4)))));
                                var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) arr_5 [i_3]))));
                            }
                        } 
                    } 
                    var_18 = ((((/* implicit */_Bool) min((max((-1981087154926511807LL), (((/* implicit */long long int) var_13)))), (((/* implicit */long long int) (-(((/* implicit */int) var_14)))))))) ? (((((9957813318520627832ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))))) << (((max((15ULL), (((/* implicit */unsigned long long int) var_11)))) - (18446744073709531458ULL))))) : (18446744073709551601ULL));
                }
            } 
        } 
    } 
    var_19 = min((((((/* implicit */_Bool) (+(((/* implicit */int) var_15))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) - (((/* implicit */int) var_7))))) : (8488930755188923780ULL))), ((~(min((((/* implicit */unsigned long long int) -1LL)), (10759807521085413025ULL))))));
}
