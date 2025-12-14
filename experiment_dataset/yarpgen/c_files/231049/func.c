/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231049
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    for (unsigned int i_3 = 3; i_3 < 10; i_3 += 3) 
                    {
                        {
                            arr_13 [i_2] = ((/* implicit */short) ((((((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_2] [i_0]))) | (2891209999U))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2891209999U)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_5 [i_1] [i_2] [i_3]))))))) + (min((((/* implicit */unsigned int) var_8)), (var_12)))));
                            var_16 = ((/* implicit */long long int) max((((((1403757296U) * (((/* implicit */unsigned int) ((/* implicit */int) (short)0))))) % (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2]))))), (((/* implicit */unsigned int) (((-(arr_6 [i_0]))) <= (((/* implicit */unsigned int) ((/* implicit */int) min((var_15), (((/* implicit */unsigned char) (signed char)-1)))))))))));
                            arr_14 [i_2] [i_1] = ((/* implicit */unsigned int) ((min((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)5))))), ((~(444463284))))) >= ((((_Bool)0) ? (((/* implicit */int) arr_8 [i_2] [i_1])) : (((/* implicit */int) arr_8 [i_0] [i_1]))))));
                            var_17 = ((/* implicit */unsigned int) (~(((/* implicit */int) (((-(1366156860U))) == (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */signed char) (~((-(max((((/* implicit */int) var_14)), (444463284)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)-13)) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) (unsigned short)48075)) : (((/* implicit */int) var_11))))) ? (((((((/* implicit */_Bool) (short)27298)) ? (((/* implicit */int) (unsigned short)9)) : (((/* implicit */int) (_Bool)1)))) << (((((2891210000U) % (((/* implicit */unsigned int) ((/* implicit */int) (short)-27298))))) - (2891209984U))))) : (582649507)));
    var_20 = ((/* implicit */_Bool) ((((/* implicit */int) var_11)) * (min(((~(((/* implicit */int) (short)-10414)))), (((/* implicit */int) (!((_Bool)0))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 2) 
    {
        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (~(((/* implicit */int) arr_15 [i_4])))))));
        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) arr_16 [i_4] [i_4]))));
        var_23 = ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_17 [i_4] [i_4])));
        arr_19 [i_4] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_24 -= ((/* implicit */unsigned char) var_8);
        var_25 = ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) / (min((2891209994U), (((/* implicit */unsigned int) arr_3 [i_5])))));
    }
}
