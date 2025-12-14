/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53821
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
    for (unsigned char i_0 = 4; i_0 < 14; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (int i_4 = 2; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_2] [i_3])))))));
                                arr_12 [i_0] [i_3] [i_2] [3LL] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_6 [i_4 - 1] [i_0 - 1] [i_0 - 1] [i_4 - 1]), (arr_6 [i_4 + 1] [i_0 - 3] [i_2] [i_4 + 1])))) ? (((/* implicit */unsigned long long int) (-(0)))) : (max((((/* implicit */unsigned long long int) ((1540950932) | (-1691113384)))), (13979836423478195327ULL)))));
                            }
                        } 
                    } 
                } 
                var_20 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_0 - 4] [i_0 - 1] [i_0 - 1])) | ((~(((/* implicit */int) var_11))))))) : ((~((+(var_6)))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 9; i_5 += 2) 
    {
        for (unsigned long long int i_6 = 2; i_6 < 7; i_6 += 4) 
        {
            for (int i_7 = 0; i_7 < 11; i_7 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_8 = 1; i_8 < 8; i_8 += 1) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 11; i_9 += 4) 
                        {
                            {
                                var_21 = min(((short)-1), (((/* implicit */short) (unsigned char)165)));
                                var_22 = ((var_14) - (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)12))))));
                                arr_27 [i_5 + 1] [i_5] [i_6 + 2] [i_6 + 2] [i_5] [i_5] [i_6 + 2] = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1073740800)) ? (((/* implicit */unsigned long long int) 1454276717)) : (14936373099651370731ULL)))) || (((/* implicit */_Bool) max((14936373099651370731ULL), (((/* implicit */unsigned long long int) (signed char)-6))))))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (~(var_17)))), (((unsigned long long int) max((((/* implicit */int) arr_17 [i_5] [i_6] [9LL])), (840674876))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) var_15);
}
