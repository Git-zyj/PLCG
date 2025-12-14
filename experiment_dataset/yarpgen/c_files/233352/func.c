/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233352
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
    var_12 -= ((/* implicit */long long int) ((int) var_9));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 15; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) (unsigned char)0))));
                    var_14 = ((/* implicit */unsigned short) ((((((/* implicit */int) ((signed char) 2482054772610533894LL))) >= ((~(((/* implicit */int) (signed char)-127)))))) ? (((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) (unsigned char)111)))))) : (((/* implicit */int) arr_6 [i_0] [i_1]))));
                    arr_7 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) max((var_4), (((/* implicit */signed char) var_10))))) ? ((~(((/* implicit */int) var_10)))) : (((/* implicit */int) var_7)))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */int) (((~(var_8))) == (((/* implicit */int) var_7))));
                                var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) (~((-(((/* implicit */int) arr_10 [14] [i_4 + 1] [i_4 + 1] [i_4 - 1])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_5 = 0; i_5 < 12; i_5 += 1) 
    {
        for (unsigned char i_6 = 0; i_6 < 12; i_6 += 1) 
        {
            {
                arr_18 [i_5] [(short)4] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) ((int) arr_17 [0U] [i_6])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_6] [i_6]))))) : (((/* implicit */int) (((!(((/* implicit */_Bool) arr_10 [(unsigned short)2] [(unsigned short)2] [i_6] [(unsigned short)2])))) || (((/* implicit */_Bool) max((var_6), (((/* implicit */short) arr_5 [i_5]))))))))));
                var_17 ^= ((/* implicit */int) ((((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)79)) : (((/* implicit */int) arr_1 [i_5]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_5] [i_5] [i_5] [i_6] [i_5] [i_6]))) : (2482054772610533894LL))) + (9223372036854775807LL))) << (((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) arr_5 [i_5])) : (((/* implicit */int) arr_5 [i_5])))))) - (230)))));
                var_18 = ((/* implicit */_Bool) (+(max((((/* implicit */unsigned int) ((short) -2482054772610533877LL))), (((((/* implicit */_Bool) 4200778829U)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_6] [i_6])))))))));
                var_19 &= ((/* implicit */int) (+(max((arr_3 [i_6]), (((/* implicit */long long int) arr_16 [i_5] [(unsigned char)4] [i_5]))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) var_11);
}
