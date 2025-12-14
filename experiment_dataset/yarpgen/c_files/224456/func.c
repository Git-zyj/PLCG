/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224456
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
    for (short i_0 = 4; i_0 < 12; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */short) ((long long int) ((((/* implicit */int) (unsigned short)24265)) / (((/* implicit */int) (signed char)75)))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (int i_3 = 4; i_3 < 13; i_3 += 3) 
                    {
                        {
                            arr_9 [i_2] = ((/* implicit */unsigned short) var_14);
                            var_20 *= ((/* implicit */short) (!(((/* implicit */_Bool) min(((unsigned char)163), ((unsigned char)246))))));
                            arr_10 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)179)) : (arr_2 [i_2])))) ? (((((/* implicit */_Bool) (unsigned char)88)) ? (var_4) : (18446744073709551610ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 1] [(unsigned char)11])))))));
                        }
                    } 
                } 
                arr_11 [i_0 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)2940)) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 0U)) ^ (var_9)))) ? (arr_3 [i_0 + 3]) : (arr_4 [i_0 - 4] [i_0 - 1]))) : (max((18366214470804425961ULL), (((/* implicit */unsigned long long int) (unsigned char)92))))));
                arr_12 [i_0] [i_1] = ((/* implicit */unsigned long long int) arr_8 [i_0 - 2] [i_1 + 3] [12LL] [10ULL]);
                arr_13 [i_0 - 1] [i_0 - 1] [i_1 + 3] = ((/* implicit */unsigned char) var_8);
            }
        } 
    } 
    var_21 = var_6;
}
