/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214978
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned short) (short)32)))));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)75))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)77))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) max((((/* implicit */unsigned short) var_10)), (arr_2 [i_0] [i_0])))))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 17; i_2 += 3) 
            {
                {
                    var_18 = ((short) var_5);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max(((unsigned char)7), ((unsigned char)60)))), (((((/* implicit */_Bool) ((int) var_9))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_0)))) : (var_4))))))));
                                var_20 = ((/* implicit */unsigned long long int) (short)32);
                                var_21 = ((/* implicit */unsigned char) max(((short)0), ((short)-33)));
                                var_22 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_10 [i_2] [i_2 + 1])) / (((/* implicit */int) (unsigned char)181)))) << ((((~(((/* implicit */int) var_2)))) + (1439)))));
                                var_23 = ((/* implicit */unsigned short) var_9);
                            }
                        } 
                    } 
                    var_24 = max(((+(arr_7 [i_2 + 1] [i_2] [i_2 + 1]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)75))))));
                    var_25 = ((/* implicit */unsigned int) (-(min((((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_1] [i_2] [i_2])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)4096)) == (((/* implicit */int) var_0)))))))));
                    var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_13 [(unsigned char)2] [i_2 - 1] [i_2] [i_2 - 1] [(unsigned char)2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_1)))) : (max((var_9), (((/* implicit */unsigned long long int) var_12)))))))));
                }
            } 
        } 
    }
    for (unsigned long long int i_5 = 1; i_5 < 12; i_5 += 1) 
    {
        arr_17 [i_5] = ((/* implicit */signed char) ((var_1) >= (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_5] [i_5]))) & (6540232190584779259LL))))));
        arr_18 [i_5] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (7270997842040366911ULL))), (((/* implicit */unsigned long long int) ((unsigned int) arr_12 [i_5 + 1])))));
        arr_19 [(unsigned short)4] &= ((/* implicit */short) ((((/* implicit */_Bool) min((min((arr_1 [i_5]), (var_0))), (((/* implicit */unsigned short) ((((/* implicit */int) var_8)) == (((/* implicit */int) var_11)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_6)))))))) : (1103479696U)));
    }
    var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) var_9))));
}
