/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/328
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) ((arr_1 [i_0] [i_0]) + (((/* implicit */long long int) arr_0 [i_0] [i_0]))))) ? ((+(18446744073709551613ULL))) : (((/* implicit */unsigned long long int) (-(arr_1 [i_0] [i_0])))))));
        var_13 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1023)) ? (((/* implicit */int) (unsigned short)54560)) : (((/* implicit */int) (signed char)11))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 3) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned char) ((25ULL) % (((/* implicit */unsigned long long int) 3779837640571370300LL))));
        var_14 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) arr_3 [i_1])) : (var_1)))));
    }
    /* LoopNest 3 */
    for (unsigned short i_2 = 0; i_2 < 23; i_2 += 4) 
    {
        for (long long int i_3 = 0; i_3 < 23; i_3 += 1) 
        {
            for (unsigned char i_4 = 0; i_4 < 23; i_4 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) (!(((8ULL) < (((/* implicit */unsigned long long int) -827647282294712181LL))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        for (short i_6 = 4; i_6 < 20; i_6 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551603ULL)) ? (((/* implicit */int) arr_12 [i_3] [18ULL] [i_5] [i_6])) : (((/* implicit */int) arr_12 [i_2] [i_3] [i_4] [i_6 + 3]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) | (((/* implicit */int) arr_12 [i_2] [i_3] [i_4] [i_2]))))) : (((arr_12 [i_2] [i_2] [i_4] [i_2]) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_2] [(short)6] [i_6 - 1] [i_5])))))));
                                var_17 = ((/* implicit */int) ((11ULL) << (((((/* implicit */int) arr_8 [i_6 + 2])) + (64)))));
                                var_18 += ((/* implicit */short) (!(((/* implicit */_Bool) ((arr_12 [i_6 - 3] [i_6 - 1] [i_6 - 1] [i_6 - 3]) ? (((/* implicit */int) arr_12 [i_6 + 3] [i_6 + 3] [i_6 - 4] [i_6 - 2])) : (((/* implicit */int) arr_12 [i_6 - 4] [i_6 - 2] [i_6 - 4] [i_6 + 2])))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned short) arr_18 [i_2] [i_2] [i_4]);
                    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) arr_17 [i_2] [i_2] [i_3] [i_2] [i_2] [i_2]))));
                }
            } 
        } 
    } 
}
