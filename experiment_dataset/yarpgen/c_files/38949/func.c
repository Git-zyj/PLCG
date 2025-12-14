/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38949
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
    var_10 = ((/* implicit */short) -5577296165207983933LL);
    var_11 = var_7;
    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (-1602426625132749675LL) : (((/* implicit */long long int) 3720157038U))))) ? (min(((~(var_7))), (((((/* implicit */_Bool) 65535U)) ? (2147483647U) : (var_9))))) : (var_7))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_13 = var_8;
                                var_14 ^= ((/* implicit */unsigned short) (!(((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (short)-10595)), (var_4)))) < (min((6693889206225380074ULL), (((/* implicit */unsigned long long int) 3720157012U))))))));
                                var_15 ^= ((/* implicit */short) ((((/* implicit */_Bool) max((arr_10 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4] [i_4 + 3] [i_4]), (((/* implicit */unsigned int) (unsigned short)64963))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) 2147483648U)), (arr_13 [i_4] [i_1] [i_0] [i_1] [i_0])))) || (((/* implicit */_Bool) var_2)))))) : (((((/* implicit */_Bool) ((unsigned short) arr_3 [i_0] [i_1]))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_4 - 1] [(short)13] [i_3] [i_2] [i_1] [i_0]))) - (15195151513035085243ULL))) : (((/* implicit */unsigned long long int) 4294967280U))))));
                                var_16 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (arr_0 [i_1]) : (arr_0 [i_3])))) ? (((/* implicit */int) ((((/* implicit */_Bool) 14314618394033280540ULL)) || (((/* implicit */_Bool) 853023450U))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 13511978889624674544ULL)))))));
                                var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) (_Bool)1))));
                            }
                        } 
                    } 
                    arr_14 [i_0] = ((/* implicit */unsigned short) ((int) max((((/* implicit */long long int) ((unsigned char) arr_5 [i_0] [i_1] [i_2]))), (((((/* implicit */long long int) 3549224978U)) ^ (var_4))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 2; i_5 < 16; i_5 += 4) 
    {
        for (unsigned short i_6 = 1; i_6 < 16; i_6 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_7 = 1; i_7 < 14; i_7 += 2) 
                {
                    arr_24 [i_5 + 1] [i_6] = ((/* implicit */unsigned long long int) var_3);
                    var_18 = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_23 [i_5 - 2] [i_6 + 1] [i_7 - 1] [i_7 + 1])) ? (((((/* implicit */long long int) ((/* implicit */int) (short)18946))) & (var_8))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)0))) >= (2147483663U)))))))));
                    var_19 &= ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_5 - 2] [i_7 + 1] [i_7])) ? (((/* implicit */int) arr_19 [i_5 - 1] [i_7 + 1] [i_5 - 1])) : (((/* implicit */int) arr_19 [i_5 - 2] [i_7 + 3] [i_7 + 3])))));
                }
                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (8565893921665215342LL))))));
            }
        } 
    } 
}
