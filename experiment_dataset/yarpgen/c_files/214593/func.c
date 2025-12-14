/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214593
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
    var_18 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-123)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)102))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_15))))))))));
    var_19 += ((/* implicit */unsigned long long int) ((_Bool) min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-123))) : (var_3))), (max((var_10), (((/* implicit */unsigned int) (unsigned short)19733)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 3; i_2 < 15; i_2 += 2) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        arr_11 [i_0] [17LL] [i_1] [0U] [i_3] = ((/* implicit */unsigned char) (-(((7009314394643700082LL) / (var_14)))));
                        arr_12 [i_1] [i_1] = ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (short)-22297))));
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            var_20 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_9 [i_4] [i_4] [i_2 - 3] [i_2] [i_1 + 1] [i_0]))));
                            arr_15 [i_3] [i_1] [i_3] [i_3] [(unsigned short)7] [i_2] [i_2] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!((_Bool)0))))));
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)0)) >> (((var_3) - (2809754534U)))));
                        }
                    }
                    for (long long int i_5 = 4; i_5 < 15; i_5 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_1))) > (max((((/* implicit */long long int) var_13)), (var_14))))))));
                        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_16 [i_1] [i_1])), (var_6)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_16 [i_1] [i_1])) == (((/* implicit */int) var_7)))))) : (((((/* implicit */_Bool) arr_10 [i_2 - 1] [i_2] [i_2] [i_1 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (2774343488U)))));
                        arr_20 [i_1] [i_1] [i_1] = ((/* implicit */int) ((unsigned int) -5039617282393189110LL));
                    }
                    var_24 = ((/* implicit */long long int) ((min((1520623808U), (((/* implicit */unsigned int) var_7)))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_1])))));
                }
                for (unsigned int i_6 = 0; i_6 < 18; i_6 += 4) 
                {
                    var_25 = ((/* implicit */short) (unsigned short)29696);
                    arr_23 [i_1] [i_0] [16LL] [i_6] = ((/* implicit */unsigned short) (~(((((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned int) var_5))))) | (var_11)))));
                    var_26 = ((/* implicit */short) var_15);
                }
                /* LoopNest 2 */
                for (unsigned char i_7 = 2; i_7 < 17; i_7 += 3) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 3) 
                    {
                        {
                            arr_28 [i_0] |= ((/* implicit */unsigned char) ((int) ((16777215) != (((/* implicit */int) (unsigned char)175)))));
                            var_27 = ((/* implicit */long long int) (((+(((/* implicit */int) (unsigned short)19732)))) == (((/* implicit */int) max(((unsigned short)19735), ((unsigned short)20695))))));
                            var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) (unsigned char)71)) > (((/* implicit */int) var_8)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((-1425593728) < (((/* implicit */int) arr_22 [i_0])))))) : (((unsigned int) (-(((/* implicit */int) arr_19 [i_0]))))))))));
                        }
                    } 
                } 
                var_29 += ((/* implicit */unsigned short) ((((/* implicit */int) var_8)) < (((/* implicit */int) ((arr_16 [i_0] [i_0]) || (((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_13 [(_Bool)1] [i_1] [i_1 - 1] [(signed char)16] [(signed char)7])), ((unsigned short)35836)))))))));
            }
        } 
    } 
    var_30 += ((/* implicit */_Bool) (+(((/* implicit */int) var_7))));
}
