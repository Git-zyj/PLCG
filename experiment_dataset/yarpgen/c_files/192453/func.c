/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192453
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
    var_16 |= ((/* implicit */_Bool) var_7);
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_0 [i_0] [i_0])) >> (((((/* implicit */int) arr_1 [i_0] [(unsigned char)20])) - (62023))))) * (((((/* implicit */int) (short)26120)) * (((/* implicit */int) (_Bool)0))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (((~(((/* implicit */int) (_Bool)0)))) != (-282587284)))) > (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) <= (((/* implicit */int) arr_1 [i_0] [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) 
        {
            arr_9 [i_1] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((short) var_3)))) - (min((((/* implicit */long long int) var_3)), (arr_8 [i_1])))));
            arr_10 [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) arr_8 [(short)1]);
            arr_11 [(_Bool)1] [i_2] &= ((/* implicit */unsigned long long int) -282587287);
            /* LoopNest 3 */
            for (int i_3 = 1; i_3 < 14; i_3 += 4) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 4) 
                {
                    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 3) 
                    {
                        {
                            arr_20 [(unsigned char)10] [i_3] [(unsigned char)11] [i_2] [i_2] [i_3] [(unsigned char)10] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (short)32761)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65241))) : (0ULL))) >= (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) + (arr_12 [i_3] [i_3 + 1] [i_3 + 4] [i_3 + 3])))));
                            var_17 = ((/* implicit */unsigned char) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -282587284)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))))), (var_13)));
                        }
                    } 
                } 
            } 
        }
        arr_21 [i_1] = ((/* implicit */unsigned short) ((int) ((((/* implicit */int) arr_17 [i_1] [i_1] [i_1] [i_1] [i_1])) * (((/* implicit */int) ((unsigned char) var_5))))));
        var_18 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(0ULL)))) ? (((long long int) 9223372036854775807LL)) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((((((/* implicit */unsigned long long int) -1317474154)) * (min((var_8), (((/* implicit */unsigned long long int) 282587267)))))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((((((/* implicit */unsigned int) var_14)) + (0U))) - (3833615210U)))))))))));
        var_20 += ((/* implicit */unsigned char) arr_23 [i_6]);
        arr_24 [i_6] = ((/* implicit */unsigned long long int) var_1);
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (-(((((/* implicit */int) (signed char)49)) << (((/* implicit */int) var_4))))))) >= (((((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_23 [i_6])) / (4294967295U)))) ? ((~(arr_22 [i_6]))) : (((/* implicit */unsigned long long int) (+(var_14))))))));
    }
}
