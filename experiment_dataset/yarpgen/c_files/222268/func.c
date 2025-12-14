/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222268
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
    var_12 = ((min(((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8)))), (((/* implicit */int) var_3)))) > (((/* implicit */int) var_2)));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        arr_8 [i_0] = ((/* implicit */int) (((+(((unsigned int) var_7)))) | (((((/* implicit */unsigned int) min((arr_7 [i_3] [i_2] [i_0] [i_0] [i_0]), (arr_7 [i_0] [i_0] [i_1] [i_0] [i_3])))) * (min((arr_6 [i_0] [i_0] [i_1] [i_2] [i_3] [i_3]), (((/* implicit */unsigned int) (unsigned char)176))))))));
                        var_13 += ((/* implicit */_Bool) (-(((/* implicit */int) var_0))));
                    }
                    for (signed char i_4 = 2; i_4 < 15; i_4 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 4) 
                        {
                            arr_14 [i_4] = ((/* implicit */short) arr_6 [i_4 - 1] [i_4 - 1] [i_4 - 2] [i_4 + 1] [i_4 - 1] [i_4 - 2]);
                            arr_15 [i_0] [i_4] [i_4] = ((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_4] [i_5]);
                            var_14 *= ((/* implicit */short) var_0);
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_19 [i_0] [i_1] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned short) (signed char)-30))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)3996))) : ((~(arr_4 [i_0])))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-39))))) ? ((~(arr_6 [i_0] [i_1] [i_2] [i_1] [i_2] [i_6]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_4 + 1] [i_6] [i_4 + 1]))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_17 [i_0] [i_1] [i_2] [i_4 + 1] [i_6]))))));
                            var_15 += ((/* implicit */unsigned long long int) max(((-(((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_2] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_12 [i_2] [i_2] [i_2] [i_4 - 1] [i_4 + 1]))))), ((+(arr_2 [i_4 + 1])))));
                            arr_20 [i_4] [i_1] [i_2] [i_4] [i_6] = ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (1476466081) : (((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_0))))) : (((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (arr_6 [i_0] [i_1] [i_1] [i_4] [i_1] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) - (arr_3 [i_0] [i_0] [i_2]))));
                        }
                        var_16 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == ((-(((var_11) + (arr_3 [i_0] [(unsigned char)11] [(unsigned char)11])))))));
                    }
                    var_17 |= ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) (unsigned short)15)) ? (arr_3 [i_0] [i_0] [4LL]) : (arr_3 [i_0] [i_1] [i_2]))));
                    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) min(((~(arr_4 [i_0]))), (((((/* implicit */_Bool) 17541943882487349023ULL)) ? (arr_4 [i_0]) : (arr_4 [i_0]))))))));
                    arr_21 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */signed char) var_10);
                }
            } 
        } 
    } 
}
