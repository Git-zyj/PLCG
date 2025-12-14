/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203929
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
    var_16 = ((/* implicit */signed char) ((min((((/* implicit */long long int) var_8)), (((((/* implicit */_Bool) var_3)) ? (33554424LL) : (var_13))))) ^ (((/* implicit */long long int) min((((/* implicit */unsigned int) min((var_4), ((unsigned short)65532)))), (var_3))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (short i_4 = 4; i_4 < 9; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)65532))));
                                var_18 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_13 [i_4 - 4] [i_4 - 4] [i_4 - 1] [i_4 - 4] [i_4 - 1] [i_4 - 4])))) ? (min((max((arr_7 [i_1] [i_0]), (((/* implicit */long long int) arr_14 [i_4] [i_1] [i_2] [i_3] [i_4])))), (min((((/* implicit */long long int) arr_3 [i_0])), (var_13))))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                                var_19 = ((/* implicit */unsigned int) ((long long int) ((arr_6 [i_0] [i_0] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) var_10))))));
                                arr_18 [i_4] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2])) ? (((/* implicit */int) (unsigned short)1434)) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_3])))) < ((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1] [i_3])))))))));
                                var_20 = ((/* implicit */long long int) max((((((/* implicit */_Bool) max((((/* implicit */int) var_8)), (var_7)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_5 [i_3])))) : ((-(var_2))))), (((/* implicit */unsigned int) arr_2 [i_0] [i_4 - 1]))));
                            }
                        } 
                    } 
                    arr_19 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-30565))) % (arr_4 [(unsigned char)6] [i_0] [i_0])));
                }
            } 
        } 
    } 
}
