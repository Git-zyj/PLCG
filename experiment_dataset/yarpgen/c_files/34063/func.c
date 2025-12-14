/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34063
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
    for (short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [5ULL] [i_1] [i_4] [i_3] [i_0] [(signed char)5] [i_2] = ((/* implicit */unsigned short) var_5);
                                var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) min((((/* implicit */unsigned int) var_2)), (((arr_3 [i_0] [i_0] [i_2]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0])))))))))))));
                                arr_14 [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) -2147483639);
                            }
                        } 
                    } 
                    var_14 = ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) arr_1 [i_0])));
                    arr_15 [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(4294967287U)))) ? (((/* implicit */int) ((((/* implicit */int) (short)-25158)) != (((/* implicit */int) arr_2 [3U] [3U]))))) : (((/* implicit */int) var_9))))) ? (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_2] [i_2] [(_Bool)1] [i_2]))))), (arr_9 [i_2] [i_1] [i_1] [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_8)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 3; i_5 < 11; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 3; i_6 < 11; i_6 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) (-(min((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-126)) / (((/* implicit */int) (short)-25148))))), (var_12)))));
                                arr_23 [i_0] [i_2] [i_0] = ((/* implicit */long long int) 7428885211437383813ULL);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 12; i_7 += 1) 
                    {
                        for (int i_8 = 3; i_8 < 8; i_8 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) arr_22 [i_8 + 2] [i_0] [i_2] [i_8 + 2] [i_8] [i_8] [i_8 + 2]))));
                                arr_28 [i_0] [i_0] [i_0] [i_1] [i_2] [3U] [i_8] = ((/* implicit */unsigned char) min(((signed char)2), (((/* implicit */signed char) ((((var_8) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) >= (min((var_8), (arr_0 [i_2]))))))));
                                var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (-(((((((/* implicit */_Bool) arr_21 [i_2] [i_1] [(unsigned short)3])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (short)-25158))))) >> (((/* implicit */int) var_5)))))))));
                                arr_29 [i_1] [i_2] [i_1] [i_8 + 2] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((arr_3 [(short)1] [i_8] [i_2]) << ((((~(var_1))) + (1735032388271428326LL)))))), (((unsigned long long int) arr_10 [i_0] [i_0] [i_2] [i_1] [i_2] [i_2] [i_8]))));
                                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((((/* implicit */unsigned long long int) var_4)), (arr_17 [(signed char)1] [(_Bool)1] [i_2] [i_2] [i_2]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))) : (var_8)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */long long int) (~(((/* implicit */int) var_2))));
}
