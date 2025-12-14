/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192147
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
    var_10 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 52081966U)))))))) == (((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) 2813056753U)) ? (((/* implicit */unsigned long long int) var_4)) : (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)111)) && (((/* implicit */_Bool) 3359689078188830784ULL))))))))));
    var_11 = ((/* implicit */int) ((7ULL) < (min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_1)) : (var_3))), (var_5)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_4 [i_1] [(unsigned short)17] [i_1] = ((/* implicit */unsigned short) arr_2 [i_1]);
                /* LoopSeq 3 */
                for (unsigned int i_2 = 3; i_2 < 14; i_2 += 3) 
                {
                    arr_7 [i_1] [i_1] = ((/* implicit */_Bool) var_0);
                    var_12 -= ((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0] [i_1])) != (((/* implicit */int) (!(((/* implicit */_Bool) 22LL)))))));
                    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) -94214205))));
                    arr_8 [i_2] [i_1] [i_0] = min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_6 [i_2 + 1] [i_2 - 3] [i_2 + 2]))))), (arr_3 [i_0] [i_1] [i_0]));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) max(((~(var_2))), (((var_2) + (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3] [i_1]))))))))));
                    arr_12 [i_1] [i_1] [i_1] [(short)4] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) > (((/* implicit */int) arr_0 [i_3]))))) - (((((/* implicit */_Bool) arr_1 [i_3] [i_3])) ? (((/* implicit */int) ((arr_9 [i_0] [i_1] [(unsigned short)17]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1])))))) : (((/* implicit */int) (unsigned short)11890))))));
                    var_15 = ((/* implicit */long long int) min((var_15), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_5 [i_0] [(unsigned short)12] [i_1] [i_3])) : (var_4)))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_3]))) ^ (((((/* implicit */_Bool) 4242885329U)) ? (2813056753U) : (((/* implicit */unsigned int) 1642073478))))))) : ((~(var_2)))))));
                }
                for (unsigned int i_4 = 0; i_4 < 18; i_4 += 3) 
                {
                    var_16 |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)55221))) % (52081947U)));
                    arr_15 [i_1] = ((/* implicit */short) var_2);
                    arr_16 [i_1] = ((/* implicit */unsigned int) ((int) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)15))) < ((-9223372036854775807LL - 1LL)))) ? ((~(arr_10 [i_1] [17] [i_4]))) : (((/* implicit */unsigned long long int) arr_13 [i_0] [i_1] [i_4])))));
                }
                arr_17 [i_1] [i_0] [i_1] = ((/* implicit */unsigned short) var_7);
                arr_18 [i_1] [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0] [i_1]))))))))));
            }
        } 
    } 
}
