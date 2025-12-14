/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204321
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_1] [i_1] [i_1] [(short)11] [i_4] &= ((/* implicit */unsigned int) ((16381656928340206460ULL) >= (16381656928340206460ULL)));
                                var_18 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) - (max((((/* implicit */unsigned long long int) arr_10 [i_0] [i_1] [i_4])), (arr_14 [i_2] [i_0] [i_0])))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned short) (-(((/* implicit */int) min(((!(((/* implicit */_Bool) var_5)))), (((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_15)))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_5 = 0; i_5 < 20; i_5 += 1) 
    {
        for (int i_6 = 3; i_6 < 17; i_6 += 1) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 2) 
            {
                {
                    arr_25 [i_6] [i_6] [i_7] = ((((/* implicit */_Bool) max((max(((unsigned char)255), ((unsigned char)253))), ((unsigned char)2)))) || (((/* implicit */_Bool) ((max((17530561117363203605ULL), (2065087145369345156ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)29), (var_7)))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 20; i_8 += 2) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) (unsigned short)61389);
                                var_21 = ((/* implicit */signed char) (((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_7] [i_8]))))))) > (((/* implicit */int) var_1))));
                                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) ((((/* implicit */long long int) 2855889625U)) % (arr_29 [i_6 - 1] [1U] [i_6] [i_6] [i_6 - 2] [i_6]))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_5] [i_5] [i_7]))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) & (var_3)))));
                    var_24 |= ((/* implicit */long long int) (!(((((((/* implicit */_Bool) arr_6 [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_0 [i_7]))) < (((unsigned long long int) arr_9 [i_5] [i_5]))))));
                }
            } 
        } 
    } 
}
