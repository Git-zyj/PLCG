/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203844
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 2; i_2 < 22; i_2 += 3) 
                {
                    for (short i_3 = 2; i_3 < 21; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) (!(((arr_5 [i_0] [i_2 - 2] [i_3 + 3]) > (arr_5 [i_0] [i_2 - 2] [i_3 + 3]))))))));
                                arr_13 [i_3 + 1] = min((((/* implicit */unsigned int) (~((~(((/* implicit */int) var_12))))))), (2931408229U));
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) min((arr_12 [i_1 - 1] [23] [i_1 - 1] [i_1 - 1] [i_1]), (arr_9 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])))), (max((((/* implicit */unsigned long long int) (short)-6558)), (5264631959111659293ULL)))));
                arr_15 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_2 [i_1 - 1] [i_1 - 1] [i_0])), (arr_10 [i_1 - 1] [i_1] [i_1] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 13182112114597892345ULL)))) : (max((9189929611331185015ULL), (((/* implicit */unsigned long long int) arr_10 [i_1 - 1] [i_1] [i_0] [i_0]))))));
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_6)) ? (var_7) : (var_7))));
}
