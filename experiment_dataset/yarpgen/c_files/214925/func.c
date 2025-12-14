/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214925
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 10; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned char) (((((-((+(((/* implicit */int) (_Bool)1)))))) + (2147483647))) << ((((~((~(((/* implicit */int) var_4)))))) - (31810)))));
                    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (max((8322992387333699056ULL), (min((var_10), (var_2))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(var_7)))))))));
                    arr_8 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((unsigned long long int) (signed char)(-127 - 1))))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned char) (+((+(max((12485525852294028033ULL), (((/* implicit */unsigned long long int) 0U))))))));
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (long long int i_4 = 1; i_4 < 22; i_4 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_5 = 2; i_5 < 21; i_5 += 4) 
                {
                    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_3] [i_3] [i_4] [i_5])) ? (((/* implicit */long long int) ((((((/* implicit */int) (short)14522)) >> (((((/* implicit */int) var_6)) - (21374))))) / (((/* implicit */int) ((short) arr_11 [4LL] [i_4 + 1])))))) : (max((((/* implicit */long long int) 0U)), ((+(0LL)))))));
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 23; i_6 += 1) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 23; i_7 += 4) 
                        {
                            {
                                arr_22 [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) max(((unsigned char)11), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) <= (-7LL))))));
                                var_17 = ((/* implicit */unsigned long long int) ((unsigned int) arr_11 [i_4] [i_4]));
                            }
                        } 
                    } 
                    var_18 = max((max(((-(var_10))), (((/* implicit */unsigned long long int) arr_17 [i_5])))), (((/* implicit */unsigned long long int) var_8)));
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 1) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 23; i_9 += 4) 
                        {
                            {
                                arr_29 [i_3] [i_3] [i_3] [i_3] [i_9] [i_9] = ((/* implicit */_Bool) var_10);
                                arr_30 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)992)) ? (var_2) : (var_2)))) ? (((/* implicit */int) (_Bool)0)) : ((~(((/* implicit */int) (short)14502))))))), ((~((~(var_10)))))));
                                var_19 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) var_6)))))));
                                var_20 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)64531)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (9LL)))) ? (((/* implicit */unsigned long long int) 31U)) : (max((((/* implicit */unsigned long long int) (short)-29156)), (18446744073709551587ULL))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1)))))));
                                var_21 = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) (unsigned short)127)))) >> (((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) ? (((/* implicit */int) arr_10 [i_3])) : (((((/* implicit */int) var_9)) / (((/* implicit */int) arr_28 [i_3] [i_5] [i_5]))))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((max((((/* implicit */int) var_6)), ((((_Bool)1) ? (((/* implicit */int) (unsigned short)1001)) : (((/* implicit */int) (unsigned short)992)))))) >= (((/* implicit */int) var_6)))))));
                }
                var_23 = ((/* implicit */unsigned short) arr_13 [i_3]);
                var_24 *= ((/* implicit */signed char) (+(((/* implicit */int) ((short) ((((/* implicit */_Bool) var_5)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64531)))))))));
            }
        } 
    } 
    var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) var_8))));
}
