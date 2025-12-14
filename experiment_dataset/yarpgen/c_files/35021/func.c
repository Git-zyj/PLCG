/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35021
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
    for (signed char i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_0 - 1] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)60705), (((/* implicit */unsigned short) (unsigned char)41)))))) | ((~(arr_8 [i_0 + 1] [i_0] [i_0] [i_0] [i_0] [i_0 + 1])))));
                                arr_16 [i_0] [i_3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2] [i_4]))) : (((((/* implicit */long long int) ((/* implicit */int) var_12))) + (-3480806725376616201LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_2))))));
                            }
                        } 
                    } 
                } 
                arr_17 [i_0] [i_0] = min((((((/* implicit */_Bool) (~(0LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-32))) : (2847091349375506192LL))), (((/* implicit */long long int) min((((/* implicit */unsigned short) (_Bool)1)), (var_10)))));
                var_16 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) max(((unsigned short)47151), (((/* implicit */unsigned short) (_Bool)0))))) ? (((/* implicit */unsigned int) ((int) var_0))) : (((((/* implicit */_Bool) arr_7 [i_0])) ? (arr_8 [i_0] [i_1] [i_0] [i_0] [i_0 - 1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1]))))))), (var_1)));
                var_17 = ((((/* implicit */int) arr_9 [i_0] [i_1])) & (((/* implicit */int) (_Bool)1)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_5 = 0; i_5 < 22; i_5 += 1) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                var_18 -= ((/* implicit */unsigned char) ((long long int) max((arr_19 [i_6]), (arr_19 [i_6]))));
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 22; i_7 += 1) 
                {
                    for (unsigned char i_8 = 0; i_8 < 22; i_8 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned long long int) ((min((min((-2106392978), (((/* implicit */int) arr_25 [i_6])))), (((/* implicit */int) (unsigned short)65530)))) >= (((((/* implicit */int) arr_23 [i_5] [i_6] [i_7])) & (((/* implicit */int) (unsigned char)121))))));
                            var_20 = ((/* implicit */short) var_5);
                            var_21 -= ((/* implicit */short) min((((unsigned long long int) arr_21 [12LL])), (((/* implicit */unsigned long long int) arr_22 [i_7]))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_9 = 0; i_9 < 11; i_9 += 2) 
    {
        for (unsigned int i_10 = 0; i_10 < 11; i_10 += 1) 
        {
            {
                var_22 = ((/* implicit */signed char) var_14);
                arr_33 [i_10] = ((/* implicit */unsigned char) ((((unsigned int) 4294967295U)) << (((min((-8794440153601883852LL), (((/* implicit */long long int) (unsigned char)228)))) + (8794440153601883880LL)))));
                /* LoopNest 3 */
                for (signed char i_11 = 3; i_11 < 9; i_11 += 2) 
                {
                    for (unsigned int i_12 = 3; i_12 < 10; i_12 += 1) 
                    {
                        for (unsigned char i_13 = 0; i_13 < 11; i_13 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_39 [i_9] [i_9] [i_10] [i_9] [i_9] [i_12] [i_13])) ? ((((_Bool)1) ? (((/* implicit */long long int) 122611741U)) : (var_7))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_9])))))))) >> (((((/* implicit */int) arr_34 [i_10] [i_12] [6ULL])) - (177))))))));
                                var_24 += ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) max((4194303U), (((/* implicit */unsigned int) (unsigned char)124))))) + (min((arr_36 [i_11 - 2] [i_11 - 1] [i_12 - 3]), (((/* implicit */unsigned long long int) arr_34 [i_11 - 3] [i_11 + 1] [i_12 - 3]))))));
                                var_25 = ((/* implicit */unsigned char) arr_19 [i_9]);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_14 = 4; i_14 < 10; i_14 += 3) 
                {
                    for (unsigned short i_15 = 0; i_15 < 11; i_15 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned int) max((((/* implicit */int) var_5)), (((int) arr_31 [i_14] [i_14 - 3] [i_14 + 1]))));
                            arr_47 [i_10] [i_10] [i_10] [i_15] = ((/* implicit */signed char) max((min((((((/* implicit */_Bool) -5765405394179677632LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_35 [i_15] [i_14] [i_9] [i_9]))), (arr_35 [i_14 - 2] [i_14 - 2] [i_14 - 2] [i_14 - 4]))), (((/* implicit */unsigned int) min((((/* implicit */unsigned char) arr_19 [i_14 - 4])), (var_2))))));
                            arr_48 [i_9] [i_9] [i_15] [i_15] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((min((arr_21 [i_10]), (((/* implicit */unsigned int) (_Bool)0)))), (((/* implicit */unsigned int) ((_Bool) var_9)))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */int) arr_24 [i_9] [i_9] [i_9])) > (var_4)))), ((signed char)0))))) : ((~(((((/* implicit */_Bool) 18446744073709551609ULL)) ? (arr_22 [i_9]) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */int) ((signed char) var_2))) | ((~(((/* implicit */int) var_2)))))) : (((/* implicit */int) var_6)))))));
    var_28 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned short) (signed char)123))))) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_13)) != (((/* implicit */int) var_13)))))))) & (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
}
