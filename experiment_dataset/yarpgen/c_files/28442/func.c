/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28442
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
    var_15 = ((/* implicit */signed char) max((var_15), (((signed char) 8796093022207ULL))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 12; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 13; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        var_16 = ((/* implicit */unsigned int) min(((unsigned char)15), (((unsigned char) (unsigned char)240))));
                        var_17 -= ((/* implicit */short) arr_7 [i_3]);
                        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((min((arr_7 [i_2]), (arr_5 [i_0] [i_0] [i_2]))) / (((/* implicit */int) (signed char)120))))) ? (((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (((-950803115334397324LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)254))))))) : (((/* implicit */long long int) (+(arr_7 [i_2]))))));
                        var_19 = ((/* implicit */int) ((((arr_0 [i_0 + 1]) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))) + (var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)2))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0])))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (signed char i_5 = 1; i_5 < 13; i_5 += 1) 
                        {
                            arr_14 [i_2] [i_0] [1ULL] [i_4] [i_2] [i_1] = ((/* implicit */unsigned long long int) (_Bool)1);
                            var_20 ^= ((/* implicit */unsigned short) (((~(((/* implicit */int) arr_3 [i_5 + 1] [i_1 - 3])))) ^ ((~(((/* implicit */int) arr_3 [i_1] [(short)7]))))));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 3) 
                        {
                            arr_19 [i_0] [i_2] [i_4] [i_4] [(short)1] = ((/* implicit */signed char) ((unsigned int) ((_Bool) (-2147483647 - 1))));
                            var_21 += ((/* implicit */short) arr_5 [i_1] [12U] [2LL]);
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 3) 
                        {
                            var_22 *= (!((!(((/* implicit */_Bool) arr_9 [10] [10])))));
                            var_23 = ((/* implicit */_Bool) (~(max((arr_21 [i_0 - 3] [i_0 - 1] [i_1 - 1] [i_1 - 2] [i_1 - 3]), (arr_21 [i_0 - 3] [i_0 - 1] [i_1 - 1] [i_1 - 2] [i_1 - 3])))));
                            arr_22 [i_0] [i_7] [i_2 - 1] [i_2] [i_7] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((_Bool) arr_7 [i_2])) ? (((/* implicit */int) (signed char)-1)) : (arr_5 [i_0] [i_0] [i_2])))) ? (((arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0] [i_4]))))) : ((+(((unsigned long long int) var_14))))));
                        }
                        arr_23 [i_2] [i_1] [(_Bool)1] [(signed char)4] = ((/* implicit */unsigned char) ((unsigned long long int) (signed char)116));
                    }
                    arr_24 [i_2] [i_2] [i_2] [13LL] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1 - 3])) ? (((/* implicit */int) (unsigned char)248)) : (((/* implicit */int) arr_1 [i_1 - 2]))))) ? (((((/* implicit */int) arr_1 [i_1 - 2])) - (((/* implicit */int) arr_1 [i_1 - 1])))) : (((((/* implicit */int) (unsigned char)253)) - (((/* implicit */int) arr_1 [i_1 - 2])))));
                    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)253)) ? (((/* implicit */int) ((unsigned char) arr_8 [i_2 - 1] [(unsigned char)6] [i_2] [i_2]))) : (((/* implicit */int) (unsigned char)242))))) ? (min((((/* implicit */int) arr_16 [i_0 - 2])), (1210792526))) : (((((((/* implicit */int) (unsigned short)46648)) & (((/* implicit */int) (short)11891)))) | ((~(((/* implicit */int) var_0))))))));
                    arr_25 [i_2] [i_2] = ((/* implicit */short) ((((((/* implicit */_Bool) -741503011)) ? (8121347514544603348LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))))) + (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 - 3] [i_2 - 1] [i_0 - 3] [i_1 - 3])))));
                }
            } 
        } 
    } 
}
