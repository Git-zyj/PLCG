/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227441
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
    var_19 = ((/* implicit */_Bool) var_16);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            arr_5 [(short)10] [(_Bool)1] [(_Bool)1] |= ((/* implicit */unsigned char) max(((-(var_16))), (((unsigned long long int) (!(var_3))))));
            /* LoopSeq 1 */
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */int) var_0)) > (((/* implicit */int) ((arr_4 [i_0] [i_0]) > (arr_4 [i_1] [(unsigned short)2])))))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_3 = 4; i_3 < 13; i_3 += 4) 
                {
                    arr_10 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */unsigned char) arr_8 [10ULL] [i_1] [i_2] [i_3] [i_0]);
                    arr_11 [i_0] [(unsigned short)1] [i_0] [6ULL] [i_0] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)75))))) != (((/* implicit */int) max((var_3), ((_Bool)1)))))))));
                    arr_12 [i_0] [i_3] &= ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) max(((unsigned char)191), ((unsigned char)61)))))) > (min((((/* implicit */unsigned long long int) (_Bool)1)), (4503599627370495ULL))));
                    arr_13 [i_0] = ((/* implicit */unsigned char) var_6);
                }
            }
            var_21 -= (!(((/* implicit */_Bool) ((((/* implicit */int) ((var_11) > (((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [(short)10] [(short)0]))))) / (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) var_14)))))))));
        }
        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) << (((((/* implicit */int) (short)8191)) - (8191)))))) >= (((((/* implicit */_Bool) 2223370738U)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_18)) ? (arr_0 [i_0]) : (((/* implicit */int) var_4))))) : (((unsigned long long int) arr_6 [i_0] [i_0])))))))));
    }
    for (int i_4 = 0; i_4 < 11; i_4 += 1) 
    {
        var_23 = ((/* implicit */int) min((var_23), (((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_12)) << (((/* implicit */int) arr_16 [i_4])))))))) << (((/* implicit */int) (!(((var_6) <= (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))))))));
        arr_17 [i_4] = arr_1 [5ULL];
        arr_18 [i_4] = ((/* implicit */long long int) (-(((/* implicit */int) max((((_Bool) var_16)), (((_Bool) (unsigned char)185)))))));
        var_24 = ((((/* implicit */_Bool) (-((+(((/* implicit */int) (short)0))))))) ? (((/* implicit */unsigned int) (-(arr_1 [i_4])))) : (((unsigned int) -567626618)));
        var_25 -= ((/* implicit */unsigned short) ((unsigned int) (-(3452593111U))));
    }
}
