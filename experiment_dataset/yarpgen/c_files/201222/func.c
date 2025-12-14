/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201222
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_7 [i_2] [i_1] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 3912515436625450180LL)) ? (7533147758038260504LL) : (((/* implicit */long long int) 2333991124U))))))));
                    var_18 = ((/* implicit */signed char) (~(1960976171U)));
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 13; i_3 += 1) 
                    {
                        for (signed char i_4 = 2; i_4 < 13; i_4 += 3) 
                        {
                            {
                                arr_14 [i_4] [i_3] [i_3] [i_2] [10] [i_3] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_5 [i_2] [i_4 + 1] [i_2] [i_3]) << (((arr_5 [i_0] [i_4 - 2] [i_4 - 2] [(unsigned char)5]) - (11910794066257961288ULL)))))) ? ((+(arr_5 [(_Bool)1] [i_4 - 1] [(signed char)0] [i_3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_3 - 1] [i_3 - 1] [i_3 - 1])))));
                                var_19 = ((/* implicit */short) min((((/* implicit */unsigned int) ((unsigned char) arr_3 [i_0] [i_0] [(signed char)13]))), ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2333991118U)))));
                                var_20 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (+((-9223372036854775807LL - 1LL))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-122))))) : (((((/* implicit */_Bool) arr_11 [i_0] [(signed char)13] [(signed char)0] [(_Bool)1] [5LL])) ? (arr_5 [i_0] [i_1] [i_2] [i_3]) : (((/* implicit */unsigned long long int) arr_9 [(unsigned short)12] [i_1] [(_Bool)1] [i_3]))))))));
                                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_3 - 1] [i_4])) : (((/* implicit */int) (signed char)3))))) ? (var_0) : (((/* implicit */long long int) (+((-(((/* implicit */int) (signed char)-95)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 4; i_6 < 13; i_6 += 2) 
                        {
                            {
                                arr_21 [i_5] [i_1] [(short)10] = ((/* implicit */short) ((((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)45)) ? (((/* implicit */int) (signed char)94)) : (((/* implicit */int) (signed char)-45))))) ? (((/* implicit */int) (signed char)-94)) : (((/* implicit */int) var_6)))) + (2147483647))) >> ((((+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (arr_16 [i_0] [(short)3] [(signed char)0] [i_5]))))) + (22005)))));
                                var_22 = ((/* implicit */_Bool) max(((+((+(((/* implicit */int) arr_2 [i_6] [i_2] [i_0])))))), (((/* implicit */int) (_Bool)1))));
                                arr_22 [i_0] [i_0] [i_2] [i_5] [i_5] [i_5] = ((/* implicit */signed char) ((-1) - (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */_Bool) ((min((min((var_0), (((/* implicit */long long int) var_17)))), (((/* implicit */long long int) var_13)))) | (((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (max((((/* implicit */long long int) var_17)), (var_10)))))));
    var_24 = var_2;
    var_25 = ((/* implicit */unsigned char) var_11);
}
