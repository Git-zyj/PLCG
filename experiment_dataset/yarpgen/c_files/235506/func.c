/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235506
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    var_12 ^= var_3;
                    arr_8 [(short)4] [i_1] [(unsigned char)10] &= ((/* implicit */short) arr_4 [i_1] [i_0]);
                    arr_9 [i_0] [i_1] [i_0] [3ULL] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2] [i_0] [i_0])) ? (((((/* implicit */int) var_10)) % (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) var_2)))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */int) var_4);
    var_14 *= ((/* implicit */signed char) var_7);
    /* LoopNest 3 */
    for (short i_3 = 0; i_3 < 15; i_3 += 3) 
    {
        for (signed char i_4 = 0; i_4 < 15; i_4 += 1) 
        {
            for (unsigned char i_5 = 0; i_5 < 15; i_5 += 1) 
            {
                {
                    arr_19 [i_4] [i_4] [0LL] [i_3] = ((/* implicit */short) var_2);
                    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) max((var_2), (((/* implicit */unsigned short) (short)-32762)))))));
                    arr_20 [i_3] = ((/* implicit */short) arr_15 [(short)12] [i_4] [i_3]);
                }
            } 
        } 
    } 
    var_16 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? ((~(max((var_11), (var_11))))) : ((-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)8))))))));
}
