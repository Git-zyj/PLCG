/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4309
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
    var_18 = ((/* implicit */unsigned char) (-(min((((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned int) (_Bool)0))))), (max((((/* implicit */unsigned long long int) var_12)), (var_8)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) (short)20983)) ? (5147478640279634229ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_1])) == (((/* implicit */int) arr_4 [i_1] [i_1])))))))))));
                var_20 = ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_0 [i_0])), (var_10)))) ? ((-(((/* implicit */int) arr_4 [i_0] [i_1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)158)) ? (((/* implicit */int) (unsigned short)56206)) : (2147483647))))))));
                var_21 -= ((/* implicit */_Bool) max((min((arr_2 [i_1] [i_1]), (((/* implicit */long long int) arr_3 [i_1])))), (((/* implicit */long long int) var_4))));
                arr_5 [i_0] [i_0] = ((/* implicit */_Bool) var_10);
                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2147483647)) ? (((/* implicit */long long int) (+((+(-2074890739)))))) : (((5663672339657307259LL) / (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        for (unsigned int i_3 = 1; i_3 < 9; i_3 += 2) 
        {
            {
                arr_13 [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(5663672339657307259LL))))));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 12; i_4 += 4) 
                {
                    for (short i_5 = 3; i_5 < 10; i_5 += 4) 
                    {
                        for (short i_6 = 0; i_6 < 12; i_6 += 1) 
                        {
                            {
                                var_23 = 5709486182029716744LL;
                                arr_22 [i_2] [i_3] [i_2] [i_3] [i_2] = ((/* implicit */_Bool) min((((arr_19 [i_4] [i_4] [i_4] [i_2] [i_5 - 2]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned long long int) (-(var_1))))));
                                var_24 = ((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)97)) / (1735241437)))) ? (6778918312289017767ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39644))))), (arr_12 [i_2])));
                                var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)0)) ? (17811049582537286073ULL) : (((/* implicit */unsigned long long int) 0))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned short) (+(((var_8) | (((/* implicit */unsigned long long int) var_5))))));
    /* LoopNest 3 */
    for (unsigned short i_7 = 0; i_7 < 11; i_7 += 4) 
    {
        for (int i_8 = 4; i_8 < 8; i_8 += 2) 
        {
            for (short i_9 = 3; i_9 < 10; i_9 += 4) 
            {
                {
                    var_27 = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_25 [i_8 - 3] [i_9 - 1])), (-7704131297791422909LL))))));
                    arr_30 [i_7] [i_8] [i_9 - 3] [i_7] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_25 [i_8 - 3] [i_9 + 1])) ? (((/* implicit */unsigned int) 64838323)) : (4294967295U))), (((/* implicit */unsigned int) (+(((/* implicit */int) min(((unsigned short)58379), (((/* implicit */unsigned short) (unsigned char)255))))))))));
                }
            } 
        } 
    } 
}
