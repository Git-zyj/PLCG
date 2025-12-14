/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24738
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
    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)36514))) * (((((/* implicit */_Bool) 2942502390U)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)254))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((min((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0])) > (((/* implicit */int) arr_0 [i_0]))))), ((-(((/* implicit */int) var_2)))))) <= (((arr_1 [i_0] [i_0]) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((var_11) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_2))))))));
        arr_3 [i_0] &= ((/* implicit */unsigned char) var_11);
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        var_21 = ((/* implicit */int) min((var_21), ((~(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_7 [i_1 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_3))))))))));
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            var_22 -= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1] [i_1] [i_1]))) <= (var_14)));
            var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_1 + 1] [i_2] [i_2]))))) ? (max((((/* implicit */unsigned long long int) 4294967295U)), (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1))))) ? (min((495341584596143031ULL), (((/* implicit */unsigned long long int) var_14)))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_2)), (var_18))))))));
            var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) ((var_15) ? (((/* implicit */int) arr_8 [i_2] [i_2] [i_1 + 1])) : (((/* implicit */int) var_8)))))) ? (((/* implicit */long long int) ((var_2) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1] [i_1 + 1] [i_2]))) : (var_0)))) : (((min((var_18), (((/* implicit */long long int) (_Bool)1)))) / (((/* implicit */long long int) 369897252U)))))))));
            /* LoopSeq 1 */
            for (unsigned short i_3 = 0; i_3 < 19; i_3 += 1) 
            {
                var_25 = ((/* implicit */int) (((-(((/* implicit */int) arr_11 [i_1 + 1] [i_2])))) < (((/* implicit */int) arr_11 [i_3] [i_1]))));
                arr_12 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) + (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1 + 1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5))))) : (((unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3] [i_1] [i_1])))));
            }
            var_26 = ((/* implicit */long long int) min((var_26), ((+((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (1LL)))))));
        }
        var_27 &= ((/* implicit */unsigned short) min((((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)12098)) : (((/* implicit */int) var_11)))) + (((/* implicit */int) var_15)))), (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned short)0))))));
        var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) var_17))));
        /* LoopSeq 1 */
        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 1) 
        {
            arr_16 [i_1] [i_4] [i_4] = var_8;
            var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) (+((~(((/* implicit */int) ((unsigned short) var_6))))))))));
        }
    }
}
