/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234513
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
    var_10 = ((/* implicit */unsigned int) var_7);
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 3; i_1 < 9; i_1 += 3) 
        {
            var_11 |= ((/* implicit */long long int) var_6);
            var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) max((var_7), (max((760273725126213014ULL), (((/* implicit */unsigned long long int) (unsigned short)53530)))))))));
            arr_6 [i_0] = ((/* implicit */unsigned int) (_Bool)1);
            arr_7 [i_1] [i_0] = max((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) - (arr_4 [i_0]))));
        }
        arr_8 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (var_6)))) ? (((/* implicit */int) max((arr_3 [i_0 + 1]), (arr_3 [i_0 + 1])))) : (((/* implicit */int) max((var_8), (((/* implicit */unsigned short) (unsigned char)247)))))));
        /* LoopSeq 2 */
        for (unsigned int i_2 = 3; i_2 < 8; i_2 += 3) 
        {
            arr_11 [i_0] [i_0] [2U] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) 11303383587148065543ULL)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) (_Bool)1))));
            arr_12 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0]))) | (((arr_4 [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7136))))))));
            arr_13 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4605638079336019619ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (0ULL)));
            var_13 = ((/* implicit */_Bool) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (unsigned char)247))));
            arr_14 [i_0 + 1] [i_0 + 1] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_4))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            /* LoopNest 2 */
            for (short i_4 = 1; i_4 < 6; i_4 += 3) 
            {
                for (short i_5 = 0; i_5 < 10; i_5 += 3) 
                {
                    {
                        arr_22 [i_0] = ((/* implicit */short) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_5 [i_0]))))), (var_1)));
                        arr_23 [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */int) (unsigned char)7)) << (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((unsigned char) (_Bool)1)))));
                    }
                } 
            } 
            var_14 = ((((var_6) & (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) - (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_1 [i_3])))));
        }
        arr_24 [i_0 + 1] [i_0] = ((/* implicit */int) max((max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3))))), (((unsigned int) var_2)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((-6561591508913921700LL), (((/* implicit */long long int) (_Bool)0))))) && (((/* implicit */_Bool) max((((/* implicit */long long int) var_4)), (var_1)))))))));
        var_15 = ((/* implicit */unsigned char) ((((arr_19 [i_0] [i_0] [(short)6] [i_0 + 1]) <= (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0]))))) ? (arr_4 [i_0]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)7135)))))));
    }
    var_16 = ((/* implicit */unsigned short) var_7);
    var_17 = ((/* implicit */unsigned long long int) var_1);
}
