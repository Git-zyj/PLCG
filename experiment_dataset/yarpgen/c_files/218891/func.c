/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218891
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
    var_14 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_2))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            for (short i_2 = 2; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2 + 1] [i_2 - 2] |= ((/* implicit */unsigned int) var_9);
                    arr_8 [i_0] [i_0] [i_1 - 2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((var_3) && (((/* implicit */_Bool) var_8)))))))) || (((/* implicit */_Bool) min(((-(((/* implicit */int) var_2)))), (((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10)))))))));
                    arr_9 [i_0] [i_0] [i_1 + 1] [i_2] = ((/* implicit */unsigned short) (-((+(16777215LL)))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_3 = 2; i_3 < 19; i_3 += 1) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned short i_5 = 0; i_5 < 20; i_5 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 20; i_6 += 4) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 3) 
                        {
                            {
                                var_15 += ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) << (((((((/* implicit */_Bool) (unsigned short)0)) ? (((((/* implicit */int) var_3)) / (((/* implicit */int) var_11)))) : (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_2)))))) - (15772)))));
                                var_16 ^= ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)24))) + (-1LL))) << (((5223398040917499193ULL) - (5223398040917499191ULL)))))) ? (5223398040917499201ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 293834097U)))))));
                            }
                        } 
                    } 
                    arr_20 [i_5] = ((/* implicit */unsigned long long int) (((+((+(5223398040917499197ULL))))) > (((/* implicit */unsigned long long int) min(((+(((/* implicit */int) var_11)))), (min((var_7), (((/* implicit */int) var_11)))))))));
                    arr_21 [i_3] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */unsigned int) ((/* implicit */int) var_0))) ^ (var_4)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)47)) ? (((/* implicit */int) (short)992)) : (((/* implicit */int) (unsigned char)221))))) ^ (((var_3) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)21))) : (var_4)))))) : (min((((4824441055310983942ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32749))))), (((/* implicit */unsigned long long int) (~(arr_17 [i_5] [9ULL] [i_3] [i_3 - 1]))))))));
                    arr_22 [i_5] [i_4] [i_4] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (~(6886822410609599346LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) (unsigned short)414)))))) : (arr_15 [i_5]))), (arr_18 [i_5] [(unsigned char)13] [(unsigned char)13] [i_3] [(short)3])));
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 3) 
                    {
                        for (unsigned char i_9 = 3; i_9 < 19; i_9 += 3) 
                        {
                            {
                                arr_28 [i_5] [i_4] [i_5] = ((/* implicit */unsigned long long int) var_13);
                                var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned short) min((((/* implicit */int) var_9)), (var_7)))))));
                                arr_29 [i_3] [i_3] [i_4] [i_5] [i_5] [i_8] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-1)) - (((/* implicit */int) (unsigned char)31))))) | (min((1020884500835307258ULL), (((/* implicit */unsigned long long int) var_9))))))) ? (((((/* implicit */_Bool) 8974584372335334878ULL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)11))))))) : ((~((+(((/* implicit */int) arr_2 [i_9]))))))));
                                arr_30 [i_3] [i_3] [(unsigned char)19] [i_3] [i_3 - 1] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) min((var_9), (((/* implicit */unsigned short) (unsigned char)254)))))) + (min((arr_17 [i_4] [i_5] [i_8] [(unsigned char)11]), (((/* implicit */long long int) var_9))))))) ? (((((/* implicit */_Bool) (unsigned short)407)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)387)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) var_7)) > ((+(13223346032792052424ULL))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
