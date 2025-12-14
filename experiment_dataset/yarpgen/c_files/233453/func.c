/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233453
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
    for (unsigned short i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_0] = (~(((((/* implicit */_Bool) 3740033266824300776LL)) ? (-3740033266824300758LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) 14690151425050838072ULL)) ? (((/* implicit */int) (signed char)-35)) : (((/* implicit */int) (unsigned char)255))))))));
                arr_8 [i_0] [i_0] = ((/* implicit */unsigned char) arr_4 [i_0] [(_Bool)1] [(signed char)15]);
                arr_9 [(unsigned char)19] [i_0] = (((-(-1595013272))) - (((((/* implicit */int) (_Bool)0)) - ((-(((/* implicit */int) (_Bool)1)))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_2 = 0; i_2 < 18; i_2 += 3) 
    {
        for (unsigned int i_3 = 0; i_3 < 18; i_3 += 4) 
        {
            for (unsigned short i_4 = 1; i_4 < 17; i_4 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 2) 
                    {
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_22 [i_2] [i_3] [4LL] [i_5] [(unsigned char)3] [i_2] = ((/* implicit */unsigned int) arr_21 [i_6 - 1] [i_3]);
                                arr_23 [i_2] [i_3] [i_4 + 1] [i_5] [(signed char)1] = ((/* implicit */_Bool) ((unsigned char) (_Bool)1));
                                arr_24 [i_2] = ((/* implicit */signed char) (+(((((/* implicit */int) ((unsigned short) arr_2 [1ULL]))) | (((((/* implicit */_Bool) (short)-20658)) ? (((/* implicit */int) arr_5 [i_2])) : (((/* implicit */int) arr_6 [i_2] [i_3] [i_4 - 1]))))))));
                                arr_25 [i_2] [(_Bool)1] [i_4 + 1] [i_6 - 1] [i_6 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) -3740033266824300736LL))) ? (((/* implicit */int) arr_5 [i_6 - 1])) : (((arr_5 [i_6 - 1]) ? (((/* implicit */int) arr_5 [i_6 - 1])) : (((/* implicit */int) arr_5 [i_6 - 1]))))));
                            }
                        } 
                    } 
                    arr_26 [(short)11] [i_2] [i_4 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_21 [i_2] [i_3]))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_20 [i_4 + 1] [i_4 - 1] [i_2] [10ULL] [i_2] [(unsigned char)10] [i_2]))));
                    arr_27 [(signed char)7] [i_3] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)42831))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) min((var_16), (((/* implicit */unsigned int) ((((-2052101022) + (2147483647))) << (2U))))));
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (var_15) : (((/* implicit */unsigned long long int) ((var_6) % (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))));
}
