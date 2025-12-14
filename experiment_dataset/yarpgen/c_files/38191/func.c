/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38191
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
    var_16 = ((/* implicit */int) var_1);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(779798671820526430ULL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 779798671820526430ULL)) ? (arr_3 [i_0 - 1] [i_2]) : (((((/* implicit */_Bool) var_11)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
                    arr_8 [0U] [i_1] [i_1] = ((/* implicit */unsigned short) (+(min((var_8), (((/* implicit */unsigned int) arr_4 [i_0 - 1]))))));
                    arr_9 [1] [i_1] [i_2] = ((/* implicit */int) ((arr_6 [i_0 - 1] [7] [i_0 - 1]) & (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)47050))) ^ (262143U)))) ? (((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (3622354464U) : (var_15))) : (262143U)))));
                    arr_10 [(unsigned short)6] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (~(arr_3 [(_Bool)1] [(unsigned short)10])))) ? (((/* implicit */int) (unsigned short)65520)) : (((((/* implicit */_Bool) (unsigned short)49800)) ? (((/* implicit */int) arr_4 [0U])) : (((/* implicit */int) (_Bool)1))))))));
                    arr_11 [i_0 + 1] [i_0 + 1] [6U] = ((/* implicit */unsigned short) 3491966626U);
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 4) 
    {
        arr_14 [i_3] = ((/* implicit */unsigned int) ((int) arr_12 [(unsigned short)6]));
        arr_15 [0] [i_3] = ((/* implicit */unsigned long long int) (unsigned short)43836);
    }
    for (int i_4 = 0; i_4 < 25; i_4 += 1) 
    {
        arr_19 [i_4] [i_4] = (+(((/* implicit */int) ((((/* implicit */_Bool) (-(268173312U)))) && (((/* implicit */_Bool) var_3))))));
        arr_20 [22] [i_4] = ((/* implicit */int) ((arr_18 [i_4]) - (arr_16 [(unsigned short)22])));
        /* LoopSeq 1 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            arr_25 [i_4] [i_4] [(unsigned short)7] = (unsigned short)43836;
            arr_26 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_22 [i_5] [i_5] [i_5])) ? (arr_21 [22U] [i_4] [i_5]) : ((~(arr_21 [i_5] [i_5] [i_5])))));
            arr_27 [i_4] [8ULL] [4ULL] = ((/* implicit */unsigned int) ((int) arr_21 [i_4] [i_4] [(unsigned short)10]));
            arr_28 [(unsigned short)16] [(unsigned short)16] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_24 [i_4] [i_4] [i_5]))));
            arr_29 [16ULL] = ((/* implicit */unsigned short) (~(arr_22 [17] [i_5] [i_4])));
        }
    }
    var_17 = 2223977541U;
    var_18 = ((((/* implicit */_Bool) (~(1785086963U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) ((var_10) ^ (262143U)))) ? (min((95668542U), (4294705146U))) : (3161959602U))));
}
