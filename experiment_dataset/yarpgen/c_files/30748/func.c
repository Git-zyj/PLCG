/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30748
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
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 2; i_2 < 14; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned short) arr_12 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4]);
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) max((var_3), (((/* implicit */int) (unsigned char)255)))))) ? (((((/* implicit */_Bool) arr_9 [i_2] [i_2] [i_2 + 3] [i_2 + 2])) ? (((/* implicit */int) arr_6 [i_2] [i_1] [i_2 + 4])) : (((/* implicit */int) arr_6 [(unsigned short)10] [i_1] [i_2 - 2])))) : (((/* implicit */int) ((signed char) min(((unsigned short)65535), (var_0)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_5 = 0; i_5 < 18; i_5 += 4) 
                {
                    for (signed char i_6 = 0; i_6 < 18; i_6 += 3) 
                    {
                        for (unsigned short i_7 = 4; i_7 < 17; i_7 += 1) 
                        {
                            {
                                arr_20 [i_1] [i_6] [i_5] [(short)17] [(unsigned short)6] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_1]))))) : (((((/* implicit */_Bool) 28ULL)) ? (((/* implicit */int) (signed char)-115)) : (-1))))) - (((((/* implicit */_Bool) arr_16 [i_1 - 1] [i_7])) ? (((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) var_1))))));
                                arr_21 [i_0] [i_1] [9] [i_7] = ((/* implicit */int) min(((-(18446744073709551614ULL))), (((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_18 [i_1])) / (var_3))))))));
                                var_14 = ((/* implicit */short) min((var_14), (max((((/* implicit */short) (!(((/* implicit */_Bool) arr_16 [i_0] [i_1 - 1]))))), (min((arr_17 [i_0] [i_6] [i_5]), (arr_15 [i_0] [(unsigned short)13] [i_1 + 1] [i_6])))))));
                                var_15 = ((/* implicit */short) arr_4 [i_0] [i_1 - 1]);
                                arr_22 [i_0] [i_1] [i_1] [i_5] [i_1] [i_6] [i_7 + 1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)199))));
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) arr_3 [i_1] [i_1])) : (((long long int) var_4))))) ? (((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_1]))) : (9223372036854775807LL))) : (((0LL) >> (((((/* implicit */int) (unsigned short)65521)) - (65466))))))) : (((long long int) var_7))));
            }
        } 
    } 
    var_17 = ((/* implicit */short) ((_Bool) ((signed char) min((var_8), (((/* implicit */short) var_1))))));
    var_18 = ((/* implicit */unsigned short) var_8);
}
