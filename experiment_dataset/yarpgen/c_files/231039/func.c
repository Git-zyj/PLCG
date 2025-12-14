/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231039
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
    var_15 = ((/* implicit */signed char) var_11);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                arr_4 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (-(((max((((/* implicit */long long int) 511U)), (2147450880LL))) & (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 76815014))))))));
                /* LoopNest 3 */
                for (signed char i_2 = 2; i_2 < 12; i_2 += 1) 
                {
                    for (int i_3 = 3; i_3 < 12; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                arr_15 [i_3] [i_3] [i_3] [7ULL] [i_3 - 3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_5), (var_5)))) ? (((((/* implicit */_Bool) var_0)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_4]))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_2] [i_1] [i_2]))))))))) ? (max((((/* implicit */long long int) arr_14 [i_2 + 1] [i_3] [i_2] [(short)10] [(short)10])), (arr_0 [i_2 + 1] [i_2 + 1]))) : (((/* implicit */long long int) (~(max((var_8), (((/* implicit */int) arr_3 [i_1] [i_4])))))))));
                                arr_16 [i_0] [i_1] [i_2 + 1] [(unsigned char)2] [i_4] [i_2 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((var_7) - (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_2 - 1])))))) : (((((/* implicit */unsigned long long int) var_13)) - (max((((/* implicit */unsigned long long int) arr_2 [1ULL] [i_4])), (var_9)))))));
                                arr_17 [i_0] [i_1] [i_0] [i_2 - 2] [i_3] [i_4] [12ULL] = var_2;
                                arr_18 [i_0] [i_0] = ((/* implicit */unsigned short) min((((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [12LL] [i_0])) : (((/* implicit */int) var_5)))) & (((/* implicit */int) var_10)))), (((/* implicit */int) max((arr_6 [i_0] [i_0] [i_0]), (var_5))))));
                                arr_19 [i_0] [1LL] [i_2] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (unsigned char)28)), (5737231264454944422ULL)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) (signed char)49))) ? (var_14) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10)))))));
}
