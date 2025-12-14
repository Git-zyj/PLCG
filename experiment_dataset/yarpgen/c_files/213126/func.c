/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213126
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
    var_12 = ((/* implicit */unsigned char) var_1);
    var_13 *= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (!(var_8)))), (var_3)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    for (unsigned char i_3 = 2; i_3 < 16; i_3 += 2) 
                    {
                        for (int i_4 = 1; i_4 < 16; i_4 += 4) 
                        {
                            {
                                arr_12 [i_2] [i_0] |= ((/* implicit */_Bool) (-((-(((/* implicit */int) (_Bool)1))))));
                                var_14 = ((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3 - 2] [i_3 - 2] [3] [i_4 + 1]))) + (0ULL))), (((/* implicit */unsigned long long int) arr_6 [i_3 - 2] [i_1] [i_3 - 2] [i_4 + 1]))));
                                arr_13 [i_4] [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_1] [i_1] [(short)15])) ? (var_2) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((unsigned short) arr_9 [i_1] [i_4] [i_4]))), (((arr_8 [i_0] [i_1] [(unsigned char)16] [8U] [i_2] [i_2]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))))))))));
                                var_15 = ((/* implicit */unsigned int) ((unsigned char) ((_Bool) arr_8 [i_0] [i_0] [i_0] [i_0] [(signed char)11] [i_0])));
                                var_16 = ((/* implicit */unsigned char) ((unsigned short) (+(min((((/* implicit */unsigned long long int) -2022543422261029346LL)), (11804229040160074359ULL))))));
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(arr_1 [i_1]))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_5 = 1; i_5 < 13; i_5 += 2) 
    {
        for (unsigned char i_6 = 0; i_6 < 15; i_6 += 2) 
        {
            for (long long int i_7 = 0; i_7 < 15; i_7 += 1) 
            {
                {
                    arr_21 [i_5] [(unsigned char)14] = ((/* implicit */int) var_11);
                    var_18 = ((((/* implicit */_Bool) arr_11 [i_5] [(unsigned short)7] [i_7])) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)6403)) << (((((-2022543422261029341LL) + (2022543422261029361LL))) - (19LL)))))) : (((unsigned int) (_Bool)1)));
                    var_19 = ((/* implicit */long long int) arr_8 [i_7] [i_7] [i_6] [(_Bool)1] [(_Bool)1] [i_5]);
                    /* LoopNest 2 */
                    for (long long int i_8 = 1; i_8 < 11; i_8 += 2) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_6)) ? (min((arr_20 [i_5] [i_6] [i_7] [(_Bool)1]), (((/* implicit */unsigned int) arr_23 [i_5] [i_5 + 1] [i_5] [i_5] [i_5])))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_6 [i_5] [i_5] [i_7] [i_7])))))))));
                                var_21 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_8 [i_5 - 1] [i_6] [i_7] [i_5] [i_9] [i_8 + 1])) ? (((/* implicit */int) ((var_2) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-21720)))))) : ((~(((/* implicit */int) arr_3 [i_5 + 2] [i_6] [i_7])))))) / (((/* implicit */int) (unsigned short)6403))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) min((min((((unsigned int) (_Bool)1)), (((/* implicit */unsigned int) ((unsigned char) 2022543422261029346LL))))), (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) 5196108093320871622LL))))), (max((((/* implicit */unsigned int) (unsigned char)30)), (426240266U))))))))));
}
