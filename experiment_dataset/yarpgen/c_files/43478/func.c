/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43478
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
    var_17 &= ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) (short)-2843)), (var_12))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */int) (short)-32761)) * (((/* implicit */int) (short)15509)))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 8; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 6; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) var_7))));
                                arr_14 [i_0] [2U] [i_2] [i_3] [2U] = ((/* implicit */unsigned int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) var_11)), (var_13))))) + (7115154429142017362ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((7115154429142017351ULL) > (11331589644567534236ULL))))) > (((unsigned int) var_15)))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((((/* implicit */unsigned int) arr_7 [i_0] [i_0])) & (var_15))) > (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_1 + 1])))))) * (((int) arr_3 [i_0 - 2] [i_0] [i_0]))));
                    var_20 -= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_3 [i_0] [i_0] [i_0]) << (((2406973563991999838ULL) - (2406973563991999838ULL)))))) ? (((((/* implicit */_Bool) arr_7 [i_0 - 2] [i_0 - 2])) ? (arr_11 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [(short)9] [i_1]))))) : (((/* implicit */long long int) ((/* implicit */int) max((var_13), (((/* implicit */short) var_6)))))))))));
                }
            } 
        } 
    } 
}
