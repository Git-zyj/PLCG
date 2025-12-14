/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29517
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
    var_18 = ((/* implicit */int) var_8);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            arr_8 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)224))));
            /* LoopSeq 2 */
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                var_19 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_5 [i_2] [i_1] [i_2])) ? (((/* implicit */unsigned long long int) arr_5 [i_1] [i_1] [i_0 - 1])) : (arr_0 [i_1])))));
                var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0 + 2] [i_2]))));
                var_21 = ((((/* implicit */int) var_3)) << (((((/* implicit */int) (unsigned char)254)) - (254))));
            }
            for (unsigned int i_3 = 0; i_3 < 10; i_3 += 4) 
            {
                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0]))) : (0U)))) ? (((/* implicit */long long int) arr_5 [i_0] [i_1] [i_3])) : (((((/* implicit */_Bool) (unsigned char)8)) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)14)))))));
                arr_14 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) (short)13358)) && (((/* implicit */_Bool) 8441333218103978445ULL))))) > (((/* implicit */int) arr_12 [i_0 - 1] [i_0 - 1] [i_3] [i_0 - 1]))));
                arr_15 [i_3] [i_1] [i_1] [i_0] = (~(((((/* implicit */_Bool) 9LL)) ? (8191U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))));
                var_23 = ((/* implicit */unsigned long long int) (unsigned char)248);
            }
            var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) arr_5 [i_0] [i_1] [i_1]))));
            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) var_2)) : (var_9)))) ? (13LL) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_0 + 2] [i_0 + 1] [i_0 + 2]))))))));
            arr_16 [i_0] [7LL] [i_1] = ((/* implicit */unsigned int) ((long long int) (-(((/* implicit */int) arr_3 [i_0] [i_1])))));
        }
        /* LoopSeq 2 */
        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 4) 
        {
            var_26 = ((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) (unsigned char)8)))));
            arr_20 [i_4] [i_0] = ((/* implicit */unsigned char) ((unsigned int) (!(((/* implicit */_Bool) 4294967270U)))));
            arr_21 [i_0 - 1] [i_0] [i_4] = ((/* implicit */unsigned int) 3676109006378243503ULL);
        }
        for (unsigned int i_5 = 1; i_5 < 8; i_5 += 2) 
        {
            var_27 = ((/* implicit */_Bool) 0U);
            arr_24 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2109274213369984776ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)1))));
            arr_25 [i_0] [i_0] |= ((/* implicit */unsigned int) ((arr_6 [i_0 + 1]) << (((arr_19 [i_5 + 2] [i_5 + 2] [i_0 + 1]) - (5771223402846142679ULL)))));
        }
    }
    for (unsigned long long int i_6 = 1; i_6 < 24; i_6 += 2) 
    {
        var_28 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)32767)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) arr_27 [i_6]))))) ? (((((/* implicit */_Bool) arr_26 [15ULL])) ? (153954508U) : (0U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_6]))))))))));
        arr_28 [i_6 + 1] = ((/* implicit */unsigned long long int) (~((((+(var_0))) >> (((((/* implicit */int) arr_27 [i_6])) + (4552)))))));
    }
}
