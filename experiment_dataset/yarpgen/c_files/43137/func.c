/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43137
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 6; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] = ((/* implicit */unsigned long long int) (unsigned short)64982);
                                var_19 = ((((/* implicit */_Bool) -1128036287)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_2 [i_1] [i_4])))) : (((unsigned long long int) var_2)));
                                var_20 = ((/* implicit */int) 3974759017U);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 2; i_5 < 9; i_5 += 3) 
                    {
                        for (int i_6 = 0; i_6 < 10; i_6 += 3) 
                        {
                            {
                                arr_21 [i_0] [4] [0ULL] [i_2 + 2] [i_1] [i_1] [i_0] = ((/* implicit */int) min(((~(((((/* implicit */_Bool) arr_15 [i_1] [(unsigned short)1] [i_0])) ? (arr_8 [i_0] [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_2] [i_0]))))))), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_5] [i_5])) ? (((/* implicit */long long int) arr_7 [i_0] [i_0])) : (arr_19 [i_0] [i_0] [i_2])))) / (max((7321392978757400850ULL), (((/* implicit */unsigned long long int) var_3))))))));
                                var_21 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_2 + 2] [i_5] [i_5 - 2] [i_5 - 1])) ? (((/* implicit */int) var_14)) : (arr_11 [i_2 + 3] [i_2 + 1] [i_5 - 1] [i_5 - 2])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_2] [i_5] [i_6])) ? (var_6) : (((/* implicit */unsigned long long int) -1893942608))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) : (var_5))))));
                                arr_22 [i_0] [i_1] [i_2 - 1] [i_5] [(short)5] [i_6] = ((/* implicit */int) arr_1 [i_0]);
                                arr_23 [i_0] = ((/* implicit */unsigned long long int) (~(min((((/* implicit */int) (signed char)-77)), (1893942608)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) var_15))));
}
