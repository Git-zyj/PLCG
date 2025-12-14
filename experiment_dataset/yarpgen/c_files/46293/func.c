/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46293
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
    var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((unsigned int) var_5))) && (((/* implicit */_Bool) var_11)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) max((((/* implicit */int) var_5)), (var_7)))))))) : (var_9))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_3] [i_3] [i_3] |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)17047)), (arr_8 [i_0] [i_2] [i_2] [i_4])))) ? (((/* implicit */int) ((unsigned char) var_8))) : (arr_7 [i_1] [i_1])))) >= (((((/* implicit */_Bool) max((2912211317U), (((/* implicit */unsigned int) (unsigned short)17051))))) ? (var_4) : (((/* implicit */unsigned long long int) ((unsigned int) arr_8 [i_4] [i_3] [i_2] [i_1])))))));
                                var_13 = ((/* implicit */short) ((((((long long int) var_1)) == (arr_0 [i_3]))) ? (min((arr_7 [i_0] [i_0]), (((/* implicit */int) ((signed char) arr_3 [i_1] [i_1]))))) : (((/* implicit */int) ((short) 7297207431356619486ULL)))));
                                var_14 = ((/* implicit */short) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) arr_1 [12]))) && (((((/* implicit */long long int) ((/* implicit */int) var_5))) != (var_8)))))), (max((((/* implicit */unsigned short) arr_1 [i_1])), (arr_5 [i_0] [(unsigned short)3])))));
                                var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) min((((/* implicit */long long int) (unsigned short)48500)), (var_2))))));
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)17064)) ? (arr_8 [i_0] [i_0] [i_1] [i_1]) : (((/* implicit */unsigned int) arr_4 [i_0] [i_0] [i_1]))))) ? (max((arr_3 [i_0] [0LL]), (((/* implicit */long long int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_0])) : (((/* implicit */int) (unsigned short)17047)))))))) == ((+(min((((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_0] [i_1] [i_1])), (var_4)))))));
                var_17 = ((((/* implicit */_Bool) arr_11 [i_1] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_3 [2] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)48482))))))) : (var_4));
            }
        } 
    } 
    var_18 = ((/* implicit */short) var_11);
    var_19 = ((/* implicit */unsigned long long int) (((+(var_1))) << (((var_3) - (4225464353U)))));
}
