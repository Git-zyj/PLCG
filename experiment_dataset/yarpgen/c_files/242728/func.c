/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242728
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
    var_15 = ((/* implicit */short) var_3);
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)3))) - (12417666200692293334ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_14) <= (var_1)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_11)));
    var_17 |= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) min((var_0), (var_0)))), (var_14)))) ? (var_14) : (((/* implicit */int) (short)256))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((signed char) ((arr_4 [i_0] [0LL]) || (((arr_4 [i_1 - 1] [i_0]) || (((/* implicit */_Bool) (signed char)-118)))))));
                /* LoopSeq 2 */
                for (unsigned short i_2 = 1; i_2 < 11; i_2 += 3) 
                {
                    arr_8 [i_2] = ((/* implicit */int) arr_1 [i_2 + 1] [i_0]);
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_4] [i_2] [i_3] [i_2 - 1] [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) arr_10 [i_0] [i_1] [i_3] [i_4]))) - (((((/* implicit */_Bool) (~(((/* implicit */int) (short)-257))))) ? (min((((/* implicit */int) arr_11 [i_0] [i_1 - 1] [i_2] [i_0] [i_4])), (var_1))) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0]))))));
                                arr_15 [i_0] [i_0] [6LL] [i_3] [i_4] &= ((/* implicit */unsigned char) arr_0 [i_2 - 1]);
                                arr_16 [i_2] [i_1 + 1] [i_2] [i_3] [i_2] = ((/* implicit */signed char) ((long long int) (((!(arr_10 [i_2] [i_2] [i_2] [i_2]))) ? (((/* implicit */int) arr_12 [i_1 + 3] [i_0] [i_0] [i_0])) : (((((/* implicit */int) (short)256)) | (1504221558))))));
                                var_18 = ((/* implicit */int) arr_1 [i_1 + 3] [i_2]);
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (short i_5 = 0; i_5 < 12; i_5 += 1) 
                {
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_1 + 2] [i_1] [i_1 + 2] [i_1 + 2] [i_5])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1])))));
                    var_20 = ((/* implicit */long long int) (-(((/* implicit */int) arr_11 [i_0] [i_1 - 1] [6ULL] [i_1 - 1] [i_1 + 2]))));
                }
                arr_21 [i_0] = ((/* implicit */short) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_3 [i_1 + 1] [i_1 + 2] [i_1 - 1])), (arr_12 [i_1 + 1] [i_1 + 1] [i_1 + 3] [i_1 + 1])))) & (((/* implicit */int) ((unsigned char) ((((/* implicit */int) (signed char)-92)) * (0)))))));
            }
        } 
    } 
}
