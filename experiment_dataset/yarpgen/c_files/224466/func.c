/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224466
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
    for (unsigned short i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 22; i_2 += 1) 
                {
                    for (signed char i_3 = 3; i_3 < 24; i_3 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */long long int) ((max((((((/* implicit */int) var_14)) ^ (((/* implicit */int) arr_8 [i_3 - 3] [i_2 - 2] [i_0] [i_1] [i_0 + 1])))), (var_12))) | ((-(((/* implicit */int) arr_3 [i_2 - 2] [i_3 + 1] [i_3 - 3]))))));
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_5 [i_0 + 1] [i_1] [i_2 + 3] [i_3 + 1]) & (((/* implicit */unsigned long long int) var_0))))) ? ((+(arr_2 [i_0] [i_0]))) : (((/* implicit */long long int) -338668826))))) || (((/* implicit */_Bool) arr_3 [i_0 + 1] [i_1] [i_2 + 2]))));
                            arr_10 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((arr_2 [i_0] [i_1]) & (((/* implicit */long long int) ((/* implicit */int) ((short) var_15))))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned short i_4 = 1; i_4 < 21; i_4 += 2) 
                {
                    var_22 = ((/* implicit */unsigned char) ((signed char) ((arr_7 [i_0] [i_0 - 1]) >= (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0 + 2])))));
                    arr_13 [i_0] [i_4 + 4] [i_4 + 1] [i_4 - 1] = ((/* implicit */signed char) min((((/* implicit */int) ((arr_9 [i_0 - 2] [i_0]) >= (min((((/* implicit */unsigned long long int) var_10)), (arr_7 [i_0] [i_1])))))), (((int) (-(15126412135122512171ULL))))));
                }
                for (signed char i_5 = 2; i_5 < 22; i_5 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 3; i_6 < 24; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 3; i_7 < 24; i_7 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_11)))) ? (((/* implicit */int) arr_22 [i_7 + 1] [i_6 - 2] [i_5 + 1] [i_1] [i_0 + 1])) : (((((/* implicit */_Bool) (-(12558999496605605462ULL)))) ? (((/* implicit */int) ((unsigned short) var_12))) : (((/* implicit */int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) var_15)))))))));
                                var_24 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) min((arr_2 [i_0] [i_6 - 1]), (((/* implicit */long long int) var_19))))) ? (min((((/* implicit */unsigned long long int) var_0)), (18446744073709551598ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 338668825)) ? (((/* implicit */int) var_19)) : (arr_20 [i_0] [i_7 - 3] [i_5 + 1] [i_6 + 1] [i_7 + 1])))))) : (((/* implicit */unsigned long long int) (+((-(((/* implicit */int) (unsigned short)17644)))))))));
                                var_25 &= ((/* implicit */_Bool) (short)31501);
                                var_26 = ((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) max((0U), (((/* implicit */unsigned int) var_17))))) ^ (var_6)))));
                            }
                        } 
                    } 
                    arr_23 [i_0 - 1] [i_0 - 1] [i_0] = ((/* implicit */unsigned int) (+(((((((/* implicit */_Bool) arr_6 [i_0 + 1])) ? (338668825) : (((/* implicit */int) (_Bool)1)))) - ((+(arr_11 [i_0] [i_1] [i_5 - 1])))))));
                }
                for (unsigned long long int i_8 = 2; i_8 < 24; i_8 += 1) 
                {
                    /* LoopNest 2 */
                    for (signed char i_9 = 0; i_9 < 25; i_9 += 1) 
                    {
                        for (short i_10 = 0; i_10 < 25; i_10 += 3) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned long long int) min((var_27), ((+(((var_6) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-56)))))))));
                                arr_31 [i_0 + 1] [i_1] [i_1] [i_8 - 2] [i_0] [i_10] = ((/* implicit */_Bool) var_5);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_11 = 0; i_11 < 25; i_11 += 1) 
                    {
                        for (unsigned char i_12 = 0; i_12 < 25; i_12 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_35 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 + 2] [i_0] [i_0 - 2] [i_0 + 2])))) ? (((((/* implicit */unsigned int) arr_20 [i_0] [i_1] [i_8 - 1] [i_11] [i_12])) | (arr_16 [i_12]))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_25 [i_0] [i_8 - 2] [i_8 - 2] [i_8 + 1])))))));
                                var_29 -= (short)27556;
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0 - 1] [i_1])) ? (arr_11 [i_0] [i_0 - 2] [i_1]) : (((/* implicit */int) arr_26 [i_0]))))), (((((/* implicit */_Bool) arr_11 [i_0] [i_0 - 1] [i_8 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_29 [i_0 + 1] [i_1] [i_8 - 1] [i_8 - 2] [i_8 - 1] [i_8 + 1] [i_8 + 1])))));
                }
            }
        } 
    } 
    var_31 += ((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) >> (((((/* implicit */int) (signed char)-1)) + (25)))));
}
