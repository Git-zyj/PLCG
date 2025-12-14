/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204074
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) max((((/* implicit */unsigned long long int) (unsigned char)178)), (min((((/* implicit */unsigned long long int) ((signed char) 7894536478043571053ULL))), (max((10552207595665980563ULL), (7894536478043571053ULL))))))))));
                var_15 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))) < (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)152))))), (var_1)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 22; i_2 += 4) 
    {
        for (int i_3 = 3; i_3 < 19; i_3 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_2] [i_3 - 2] [5U]))))) ? (var_11) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)157))) * (3149186453U)))));
                var_17 = var_5;
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_9 [i_2] [i_2] [i_3])) & (((/* implicit */int) (!(((((/* implicit */_Bool) (short)0)) && (((/* implicit */_Bool) 7894536478043571069ULL)))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 17; i_4 += 4) 
    {
        for (long long int i_5 = 0; i_5 < 17; i_5 += 4) 
        {
            {
                var_19 += ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_3 [i_4] [i_4] [i_5])) ? (arr_3 [i_4] [i_4] [i_5]) : (arr_3 [i_4] [i_5] [i_5]))) >= (((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_6 [i_4] [i_5])) ? (((/* implicit */int) arr_1 [i_5] [6])) : (((/* implicit */int) (unsigned char)162)))), ((((_Bool)1) ? (((/* implicit */int) (unsigned char)109)) : (((/* implicit */int) (short)384)))))))));
                /* LoopNest 2 */
                for (signed char i_6 = 0; i_6 < 17; i_6 += 2) 
                {
                    for (long long int i_7 = 0; i_7 < 17; i_7 += 4) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (int i_8 = 0; i_8 < 17; i_8 += 1) 
                            {
                                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (~(var_10)))) ? (((((/* implicit */_Bool) arr_21 [i_6] [i_6])) ? (arr_23 [i_5] [i_6] [i_8]) : (((/* implicit */int) (_Bool)1)))) : (arr_21 [i_6] [i_7])));
                                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7894536478043571030ULL)) ? (((/* implicit */int) (unsigned char)109)) : (9)))) ? (arr_12 [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_8 [i_7]), (arr_8 [i_7])))))));
                                var_22 = ((/* implicit */short) ((((/* implicit */int) ((1099511627772ULL) <= (((/* implicit */unsigned long long int) -1))))) >= (min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) (unsigned char)119))))));
                                var_23 = ((/* implicit */int) (unsigned char)109);
                            }
                            for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 3) 
                            {
                                var_24 -= ((/* implicit */unsigned long long int) (unsigned char)126);
                                var_25 = ((/* implicit */unsigned int) min(((+(((/* implicit */int) arr_0 [i_7])))), ((-(((((/* implicit */_Bool) var_4)) ? (var_6) : (((/* implicit */int) var_12))))))));
                            }
                            var_26 = ((/* implicit */signed char) var_11);
                        }
                    } 
                } 
            }
        } 
    } 
}
