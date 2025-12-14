/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42227
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
    var_19 = ((/* implicit */signed char) var_6);
    var_20 += ((/* implicit */unsigned char) ((_Bool) 8349659022196944108LL));
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 7; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        var_21 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0 - 2] [i_0 + 1] [i_0 - 1])) >> (((max((((/* implicit */unsigned long long int) arr_2 [i_0])), (var_16))) - (2158990631499144799ULL)))))) : (min((((((/* implicit */_Bool) (unsigned char)91)) ? (-7326875844607061119LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) var_5))))));
                        var_22 = ((/* implicit */unsigned int) (((~(arr_11 [i_0] [i_0 + 1] [i_2] [i_2]))) | (((/* implicit */unsigned long long int) ((unsigned int) arr_9 [i_0] [i_0 - 2] [i_0] [i_0 + 2])))));
                        arr_14 [i_0] [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_9 [i_0] [i_0 + 2] [i_3] [i_3]) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0 + 1] [i_0 + 1] [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0 - 1] [i_2] [i_3]))) : (((var_7) & (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0 + 3] [i_1] [i_1])))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_4 = 3; i_4 < 7; i_4 += 4) 
                        {
                            var_23 &= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) var_1)))) || (((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_3]))));
                            var_24 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((var_15) <= (((/* implicit */unsigned long long int) -7326875844607061108LL)))))) * ((-(arr_10 [i_0] [i_1] [i_2] [i_3])))));
                        }
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (-7326875844607061115LL)))) ? (7326875844607061107LL) : (((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))) ^ (12LL)))));
                    }
                    arr_18 [i_0] [i_2] = ((/* implicit */unsigned int) max((((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) != (7326875844607061135LL)))) > (((/* implicit */int) ((arr_10 [i_0] [i_1] [i_2] [i_2]) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))), (((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_10))))) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_1])))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_5 = 0; i_5 < 10; i_5 += 1) 
                    {
                        var_26 = ((/* implicit */_Bool) var_8);
                        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)255)) ? (7326875844607061079LL) : (((/* implicit */long long int) (-(((/* implicit */int) var_6)))))));
                        arr_21 [i_1] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0 + 2])) ? (((/* implicit */int) arr_9 [i_0] [i_1] [(unsigned char)6] [i_5])) : (((/* implicit */int) arr_3 [i_0] [i_2] [i_5]))));
                        var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((((/* implicit */int) (!(arr_9 [i_0] [i_1] [i_0] [i_5])))) != (((((/* implicit */_Bool) arr_19 [i_0] [i_1] [i_0] [i_5])) ? (((/* implicit */int) arr_8 [i_0])) : (((/* implicit */int) arr_7 [i_1])))))))));
                    }
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */unsigned short) max((1995384279988922642ULL), (max((((var_13) + (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) max((((/* implicit */signed char) var_12)), ((signed char)-1))))))));
}
