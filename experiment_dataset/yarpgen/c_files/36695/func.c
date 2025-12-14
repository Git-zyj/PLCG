/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36695
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
    var_10 = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (2147483648U) : (((/* implicit */unsigned int) ((((int) var_0)) * (((/* implicit */int) (!(var_4)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        {
                            arr_9 [7] [i_0] [i_2] = ((/* implicit */unsigned int) (-(max(((+(((/* implicit */int) arr_4 [i_0] [i_0])))), ((-(((/* implicit */int) arr_3 [i_0] [i_1]))))))));
                            var_11 += ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [6ULL] [i_1]))) : (arr_1 [i_0]))), (((((unsigned long long int) arr_2 [i_0] [1LL])) - ((~(var_1)))))));
                            arr_10 [i_0] = ((/* implicit */_Bool) (unsigned short)62012);
                            /* LoopSeq 2 */
                            for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 4) 
                            {
                                arr_14 [i_0] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) var_3);
                                arr_15 [i_0] = ((/* implicit */unsigned char) ((8229865752159432784LL) >= (8229865752159432779LL)));
                            }
                            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                            {
                                arr_19 [i_0] [i_0] [(short)3] [6LL] [i_5] = ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_0 [i_5] [i_3])), (-8229865752159432784LL)))) ? (((((/* implicit */long long int) max((arr_13 [i_5] [i_0] [(unsigned short)16] [i_2] [i_0] [i_0]), (((/* implicit */int) arr_4 [i_0] [i_5]))))) / (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-9027))) : (0LL))))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_16 [(signed char)12] [i_1] [i_2] [i_3] [i_5])) ? (((/* implicit */int) (unsigned char)30)) : (((/* implicit */int) var_2)))) * (((((/* implicit */_Bool) arr_3 [(unsigned short)7] [(unsigned short)7])) ? (((/* implicit */int) arr_2 [i_5] [i_2])) : (arr_8 [i_5])))))));
                                arr_20 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */int) ((unsigned short) var_3))) <= (((/* implicit */int) var_2))));
                            }
                            arr_21 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */short) (+(max((((((/* implicit */_Bool) 2LL)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0] [i_1] [i_1] [i_1] [i_1] [i_2] [15LL]))))), (((((/* implicit */unsigned long long int) var_3)) + (var_1)))))));
                        }
                    } 
                } 
                arr_22 [i_0] = ((/* implicit */unsigned char) max(((~(((/* implicit */int) ((((/* implicit */int) (short)9027)) < (((/* implicit */int) var_4))))))), (((((/* implicit */int) (short)7)) % (((/* implicit */int) arr_5 [i_1] [i_0] [(unsigned short)14]))))));
            }
        } 
    } 
}
