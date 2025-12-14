/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29998
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
    var_16 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))))), ((~(min((((/* implicit */unsigned long long int) var_6)), (var_13)))))));
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) ((var_8) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_13))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_11)) != (((/* implicit */int) var_5)))))) & (var_13))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-12898)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 1; i_2 < 10; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)29)) * (((/* implicit */int) (short)-3421)))))));
                                arr_14 [i_2 + 3] [i_0] [i_3] [i_2 + 3] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) var_7);
                                var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)0))) : (arr_7 [i_0] [i_2 + 2] [(short)4] [i_3]))))));
                            }
                        } 
                    } 
                } 
                arr_15 [i_1] [i_0] [i_0] = min((((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) 3892711164U)) || (((/* implicit */_Bool) arr_7 [i_0] [i_0] [(unsigned char)12] [i_1])))))), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_0] [i_1] [i_0] [i_1] [i_0] [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)-3421)), (arr_10 [i_0] [i_0] [i_0] [i_1] [i_0] [i_1]))))) : (min((((/* implicit */unsigned int) var_5)), (2956523843U))))));
                var_20 += ((/* implicit */signed char) ((((/* implicit */_Bool) 1578949804U)) ? (((((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) <= (((/* implicit */int) (unsigned short)4))))) << (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-48))))))) : (((/* implicit */int) ((unsigned short) var_8)))));
                var_21 = ((/* implicit */unsigned short) min((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2191053802U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_7 [i_0] [i_1] [i_1] [i_1])))) && (((/* implicit */_Bool) min(((unsigned short)8), (((/* implicit */unsigned short) (unsigned char)57)))))))), (((((/* implicit */int) ((((/* implicit */int) (signed char)48)) <= (((/* implicit */int) (unsigned char)67))))) / (((/* implicit */int) min((((/* implicit */unsigned short) var_15)), (arr_6 [i_0] [i_1]))))))));
            }
        } 
    } 
}
