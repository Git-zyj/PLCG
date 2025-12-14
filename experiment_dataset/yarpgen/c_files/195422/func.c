/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195422
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 24; i_2 += 2) 
            {
                {
                    var_17 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)1)), (var_5)))) + (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (var_16)))))) ? (((/* implicit */int) var_7)) : (max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11)))), (((/* implicit */int) var_11))))));
                    var_18 -= ((/* implicit */unsigned short) ((unsigned char) (-(((/* implicit */int) var_15)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 22; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) var_3))))));
                                arr_14 [(unsigned short)5] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) 1810307616324530197LL);
                                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)1023)) : (((/* implicit */int) (unsigned short)34330))))))));
                                arr_15 [i_0] &= ((/* implicit */signed char) (unsigned short)1023);
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) var_8))));
                    arr_16 [i_2] [i_2] [i_1] [(signed char)17] = ((unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64512))) <= (var_3)))), (var_0)));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 1; i_5 < 16; i_5 += 4) 
    {
        for (signed char i_6 = 0; i_6 < 17; i_6 += 2) 
        {
            {
                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (+(1822463817U)))) ? (((unsigned int) var_9)) : (((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned char) (unsigned short)0))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 1; i_7 < 14; i_7 += 2) 
                {
                    for (unsigned long long int i_8 = 1; i_8 < 15; i_8 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)31205)) != (((/* implicit */int) (unsigned short)14686))))), (var_3)))) ? (min((((((/* implicit */int) var_9)) / (((/* implicit */int) var_1)))), ((+(((/* implicit */int) var_9)))))) : ((-(((/* implicit */int) (unsigned char)255))))));
                            arr_30 [i_7] [i_8 + 1] [i_7 - 1] [i_6] [i_7] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))) != (8156788039601299603ULL))))) & (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9))))), ((+(var_3)))))));
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL)))))) / (var_2)));
                            var_25 = ((/* implicit */long long int) var_11);
                            var_26 = ((/* implicit */unsigned short) (+((-(((var_0) >> (((6255935801080983702ULL) - (6255935801080983674ULL)))))))));
                        }
                    } 
                } 
                var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((unsigned char) ((((/* implicit */int) (unsigned char)255)) - (((/* implicit */int) (unsigned char)255))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 4) 
                {
                    for (unsigned char i_10 = 0; i_10 < 17; i_10 += 3) 
                    {
                        {
                            arr_36 [i_5 - 1] [i_10] [i_5 - 1] [i_5] = ((/* implicit */unsigned long long int) var_13);
                            var_28 = ((/* implicit */unsigned char) (-(max((((/* implicit */long long int) ((((((/* implicit */int) var_9)) + (2147483647))) << (((((((/* implicit */int) (short)-3441)) + (3468))) - (27)))))), (((var_5) >> (((var_10) - (2648389226260935809LL)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_11 = 1; i_11 < 19; i_11 += 4) 
    {
        for (unsigned char i_12 = 0; i_12 < 21; i_12 += 4) 
        {
            {
                var_29 = ((/* implicit */unsigned short) ((((/* implicit */int) var_6)) & ((+(((/* implicit */int) (!(((/* implicit */_Bool) 484502637U)))))))));
                var_30 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) max((9223372036854775807LL), (((/* implicit */long long int) var_4))))) ? (((((/* implicit */_Bool) (unsigned char)255)) ? ((-9223372036854775807LL - 1LL)) : (var_10))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-29)))))));
                var_31 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -1810307616324530198LL)) && (((/* implicit */_Bool) var_7)))))) == (((((/* implicit */long long int) ((/* implicit */int) var_11))) - (var_10)))));
            }
        } 
    } 
}
