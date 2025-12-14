/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54709
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */long long int) (+((~(((/* implicit */int) arr_0 [i_1]))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */short) arr_7 [i_3]);
                            var_21 = ((/* implicit */unsigned int) ((((unsigned int) arr_1 [9])) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)52)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_4 = 4; i_4 < 10; i_4 += 2) 
                {
                    for (unsigned char i_5 = 3; i_5 < 10; i_5 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3129050246U)) ? (arr_14 [i_0] [i_1] [i_4 - 1] [i_5 - 1]) : (((/* implicit */long long int) ((unsigned int) (+(((/* implicit */int) (unsigned char)215))))))));
                            var_23 = ((/* implicit */int) var_6);
                            var_24 = ((/* implicit */int) ((((/* implicit */_Bool) min((var_13), (((((/* implicit */long long int) 2147483647)) + (2404030353437805236LL)))))) ? (((arr_2 [i_4 - 2]) - (arr_2 [i_4 - 4]))) : (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_4] [i_0])) ? (arr_15 [i_5 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)215)))))))));
                            var_25 = ((int) arr_10 [i_0] [i_0] [i_0] [i_0] [0]);
                        }
                    } 
                } 
                var_26 = ((/* implicit */int) 4294967276U);
                var_27 = ((/* implicit */int) 3129050241U);
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 19; i_6 += 1) 
    {
        for (unsigned short i_7 = 0; i_7 < 19; i_7 += 1) 
        {
            for (unsigned int i_8 = 0; i_8 < 19; i_8 += 1) 
            {
                {
                    var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_22 [i_6] [i_7])))) ? (((/* implicit */int) arr_19 [i_6])) : (((/* implicit */int) arr_18 [i_6]))));
                    var_29 = ((/* implicit */unsigned long long int) arr_20 [i_6]);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        for (signed char i_10 = 2; i_10 < 19; i_10 += 1) 
        {
            for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_12 = 0; i_12 < 22; i_12 += 1) 
                    {
                        for (int i_13 = 0; i_13 < 22; i_13 += 1) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned int) -2686217458110852302LL);
                                var_31 = ((/* implicit */unsigned short) ((unsigned int) (((!(((/* implicit */_Bool) var_17)))) ? ((+(2852250292U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_9] [i_9] [i_9]))))));
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)46))) & (3129050249U)));
                    var_33 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)43)) ^ ((-(arr_27 [i_11 + 1])))));
                }
            } 
        } 
    } 
    var_34 = ((/* implicit */_Bool) min((var_11), (((/* implicit */short) var_1))));
}
