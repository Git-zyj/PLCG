/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203987
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
    var_17 = ((/* implicit */long long int) min((((((/* implicit */_Bool) 18446744073709551610ULL)) ? (5ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-32766)) & (((/* implicit */int) (short)9))))), (((var_5) ? (((/* implicit */unsigned long long int) 264241152U)) : (var_6)))))));
    var_18 = ((/* implicit */unsigned int) (short)32765);
    var_19 = ((/* implicit */long long int) var_0);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 16; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        var_20 = arr_9 [i_0] [i_0] [i_0] [i_0];
                        arr_10 [13U] [i_0] [i_2] [13U] [i_0] [15ULL] = ((/* implicit */unsigned char) min((((unsigned int) (unsigned char)134)), (((/* implicit */unsigned int) var_15))));
                    }
                    for (short i_4 = 0; i_4 < 17; i_4 += 3) 
                    {
                        var_21 = ((/* implicit */unsigned char) (_Bool)1);
                        var_22 &= ((/* implicit */int) max((3497902352U), (min((arr_4 [i_0] [i_2 - 2] [i_4]), (arr_4 [i_2 + 1] [i_2 - 1] [i_4])))));
                        arr_14 [i_0] [i_0] [i_0] [i_4] = ((/* implicit */unsigned int) ((max((arr_1 [i_0]), (arr_8 [i_2] [i_0] [i_0] [i_2 + 1]))) >= (arr_1 [i_0])));
                        arr_15 [i_1] [i_2] [i_2] [i_0] &= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-2))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (max((arr_9 [i_2 - 1] [6U] [i_2] [6U]), (arr_9 [i_2 - 2] [i_2 - 2] [i_2] [i_4])))));
                        arr_16 [i_4] [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) 2093329516187830322ULL);
                    }
                    arr_17 [i_0] [i_0] [i_0] = ((/* implicit */short) var_2);
                }
            } 
        } 
    } 
}
