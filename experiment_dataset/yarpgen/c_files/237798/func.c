/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237798
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_13 -= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0] [i_1]))))) ? ((+(((/* implicit */int) arr_1 [i_1] [i_0])))) : (((((/* implicit */int) arr_2 [i_1] [i_1])) >> (((((/* implicit */int) arr_2 [i_1] [i_1])) - (17825)))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_5 [i_0])) ? (((unsigned long long int) arr_2 [i_0] [i_0])) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)163))))))) / ((~(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) arr_5 [i_0])) : (18446744073709551615ULL)))))));
                var_14 = ((/* implicit */unsigned char) var_8);
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 4) 
            {
                {
                    var_15 -= ((/* implicit */unsigned long long int) ((int) arr_15 [i_2] [i_2] [i_3 + 2] [(unsigned char)10]));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        for (unsigned int i_6 = 2; i_6 < 11; i_6 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned int) max((((((/* implicit */int) arr_3 [i_6 - 1] [i_2])) ^ (((/* implicit */int) arr_3 [i_6 + 1] [i_2])))), (((/* implicit */int) arr_21 [i_2] [i_3] [i_3] [i_4] [i_5] [i_6 - 2]))));
                                var_17 = arr_15 [i_2] [i_2] [i_4] [i_4];
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_2] [i_2])) ? (((((/* implicit */_Bool) arr_3 [i_2] [i_2])) ? (((/* implicit */int) arr_18 [i_2] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_2])) : (((/* implicit */int) arr_18 [i_2] [i_2] [i_2] [i_3] [i_3 - 1] [i_2])))) : (((/* implicit */int) max((arr_1 [i_4] [i_3 + 3]), (arr_1 [i_4] [i_3 + 2]))))));
                    var_19 ^= ((/* implicit */int) (-(((((/* implicit */_Bool) ((unsigned int) arr_17 [i_2] [i_3] [i_3] [i_4]))) ? (min((arr_12 [i_2]), (((/* implicit */unsigned int) arr_16 [i_2] [i_3] [(unsigned char)9] [i_4])))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [12U] [i_4])))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) var_11);
}
