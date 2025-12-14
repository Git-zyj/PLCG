/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32459
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
    var_16 = ((((/* implicit */_Bool) (~(var_5)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_2)))) : ((-9223372036854775807LL - 1LL)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    for (unsigned char i_3 = 3; i_3 < 21; i_3 += 1) 
                    {
                        {
                            arr_9 [i_1] [i_1] = ((/* implicit */int) (((-(max((var_8), (var_5))))) & (((/* implicit */long long int) min((((/* implicit */unsigned int) var_6)), (var_14))))));
                            var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((long long int) (-(((/* implicit */int) max(((unsigned short)17485), ((unsigned short)46508))))))))));
                            arr_10 [i_1] = ((/* implicit */unsigned short) (~(((unsigned long long int) var_12))));
                        }
                    } 
                } 
                var_18 *= ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) < (1U))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_4 = 4; i_4 < 11; i_4 += 2) 
    {
        for (unsigned int i_5 = 0; i_5 < 12; i_5 += 4) 
        {
            for (int i_6 = 0; i_6 < 12; i_6 += 4) 
            {
                {
                    arr_18 [i_6] [i_5] [i_4] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((18446744073709551615ULL) < (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))))), (((1099511627775LL) * (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_4 - 1] [i_4 - 4])))))));
                    arr_19 [i_4] [i_5] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_4] [i_4 - 2])) ? (((/* implicit */unsigned long long int) 1099511627788LL)) : (((unsigned long long int) var_9))))) ? (((/* implicit */unsigned long long int) var_13)) : (((((/* implicit */_Bool) 1099511627756LL)) ? (arr_0 [i_4 - 1] [i_4 - 1]) : (((/* implicit */unsigned long long int) 9223372036854775807LL))))));
                    arr_20 [i_5] = ((/* implicit */int) (-(2440929161U)));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 4) 
    {
        for (unsigned short i_8 = 1; i_8 < 23; i_8 += 1) 
        {
            for (long long int i_9 = 0; i_9 < 25; i_9 += 1) 
            {
                {
                    arr_29 [i_8 + 2] [i_8] [i_8] [i_8] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) -6991777988346424381LL)) ? (4839445241414734119ULL) : (((/* implicit */unsigned long long int) 5152350495936067558LL)))), (((/* implicit */unsigned long long int) min((((((/* implicit */int) var_9)) + (2097151))), (((((/* implicit */_Bool) arr_27 [i_7] [12U] [i_9] [i_8])) ? (((/* implicit */int) var_9)) : (var_15))))))));
                    arr_30 [i_8] [i_8 + 1] [i_9] = ((/* implicit */unsigned long long int) arr_23 [i_8 - 1]);
                    var_19 ^= ((/* implicit */unsigned char) var_1);
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 3) 
                    {
                        for (long long int i_11 = 0; i_11 < 25; i_11 += 1) 
                        {
                            {
                                var_20 -= ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) arr_22 [i_8 - 1] [i_8 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_8 + 1] [i_8 + 2]))) : (var_14))));
                                var_21 = ((/* implicit */long long int) 14392449664194141265ULL);
                                var_22 -= ((/* implicit */int) ((((/* implicit */_Bool) ((-5006802036928088259LL) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)55872)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)16355)))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_8 - 1] [i_8])))))) : (((((/* implicit */_Bool) arr_32 [i_7] [i_7] [i_7] [i_8 + 1])) ? (min((arr_33 [i_7] [i_8] [i_9] [i_8] [i_10] [i_8] [i_9]), (((/* implicit */long long int) (unsigned char)20)))) : (((/* implicit */long long int) ((/* implicit */int) arr_31 [(unsigned char)15] [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1])))))));
                            }
                        } 
                    } 
                    arr_35 [i_8] [i_9] = ((/* implicit */int) (((((!(((/* implicit */_Bool) 18446744073709551615ULL)))) ? (var_14) : (((/* implicit */unsigned int) 2056316719)))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_7] [i_7] [i_7] [i_7] [i_7])))));
                }
            } 
        } 
    } 
}
