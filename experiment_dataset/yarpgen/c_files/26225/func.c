/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26225
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
    var_19 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)6)) ? ((((+(((/* implicit */int) var_13)))) * (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_2)))))) : (((/* implicit */int) ((((/* implicit */_Bool) (~(2142668375)))) || (((/* implicit */_Bool) 8388607)))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) max((arr_0 [20ULL]), (((/* implicit */int) var_10))));
                                arr_12 [20U] [i_4] [i_4] [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6))) ^ ((~(arr_4 [i_1] [i_1] [i_4])))))));
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_1 + 1] [i_2] [i_2] = ((/* implicit */unsigned short) var_18);
                    arr_14 [15] [i_1] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_0)) ? (arr_1 [i_2]) : (((/* implicit */unsigned long long int) -8388606)))), (min((arr_1 [i_2]), (((/* implicit */unsigned long long int) (unsigned short)15005))))))) ? (arr_10 [(signed char)2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [14] [i_0])))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned short) (short)-9735);
    var_22 = ((/* implicit */unsigned char) var_8);
}
