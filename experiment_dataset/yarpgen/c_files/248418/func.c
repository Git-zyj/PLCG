/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248418
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
    for (short i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (~(var_8)))) ? ((-(((/* implicit */int) arr_0 [i_0])))) : ((~(((/* implicit */int) var_1))))))));
                var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (((/* implicit */long long int) arr_2 [i_0])) : (((((/* implicit */_Bool) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_4 [i_0 + 1]))))) ? (var_10) : (((/* implicit */long long int) (+(arr_3 [i_1])))))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        for (unsigned short i_3 = 2; i_3 < 23; i_3 += 2) 
        {
            {
                arr_12 [i_3 - 1] [i_2] = ((/* implicit */_Bool) (~((+(((/* implicit */int) arr_6 [i_2] [i_3 - 2]))))));
                /* LoopNest 3 */
                for (signed char i_4 = 0; i_4 < 24; i_4 += 2) 
                {
                    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        for (int i_6 = 0; i_6 < 24; i_6 += 2) 
                        {
                            {
                                var_14 -= ((/* implicit */_Bool) var_5);
                                arr_23 [i_6] [i_2] [i_3 - 2] [i_3 - 2] [i_3 - 2] [i_3 - 2] [i_2] = ((/* implicit */long long int) (~(((/* implicit */int) arr_19 [i_3] [i_3 + 1] [i_3 - 1] [i_3 - 2] [i_3] [i_3]))));
                                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_8) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (((((/* implicit */_Bool) var_0)) ? (4099642620628200616LL) : (((/* implicit */long long int) var_3)))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_0))))))) ? (((((/* implicit */long long int) ((((arr_8 [i_5] [i_5]) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1)))))) ^ (arr_13 [i_2] [i_3 - 1] [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                                var_16 = ((/* implicit */signed char) max((max((((/* implicit */int) var_9)), ((-(((/* implicit */int) arr_20 [i_6] [i_6] [i_2] [i_4] [i_3] [i_2])))))), (((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_2] [i_2]))) < (4077482083U)))) % (((/* implicit */int) max((((/* implicit */short) (signed char)-98)), ((short)-9993))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_7 = 1; i_7 < 22; i_7 += 2) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (short i_9 = 2; i_9 < 20; i_9 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) ((int) (!(((/* implicit */_Bool) arr_20 [i_9] [i_3 - 2] [i_3 - 2] [i_7 - 1] [i_3 - 2] [i_2])))));
                                var_18 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_3] [i_7 + 2])) ? (var_10) : (var_10)))) ? (((var_1) ? (((/* implicit */int) arr_26 [i_9] [i_3] [i_3] [i_2])) : (((/* implicit */int) var_6)))) : (((/* implicit */int) var_9))))) ? (((((/* implicit */int) (signed char)58)) & (((((/* implicit */_Bool) arr_27 [i_8])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0)))))) : (((/* implicit */int) arr_27 [i_2]))));
                            }
                        } 
                    } 
                } 
                var_19 -= ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)60)) : (1747676341)));
                /* LoopSeq 2 */
                for (unsigned short i_10 = 2; i_10 < 23; i_10 += 2) 
                {
                    var_20 -= ((/* implicit */unsigned char) max(((-(1576977897))), (((/* implicit */int) ((_Bool) (signed char)(-127 - 1))))));
                    var_21 |= ((/* implicit */_Bool) -4099642620628200628LL);
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_2])) << ((((((+((+((-2147483647 - 1)))))) - (-2147483647))) + (23)))));
                }
                for (unsigned char i_11 = 3; i_11 < 22; i_11 += 2) 
                {
                    var_23 += ((/* implicit */unsigned char) (+(min(((+(arr_11 [i_2] [i_2] [i_11 + 2]))), (((/* implicit */long long int) ((4077482083U) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))))));
                    arr_38 [i_2] [i_2] [i_11 + 1] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_33 [i_3 - 2] [i_3 - 2] [i_3 + 1]))))));
                }
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) var_2);
}
