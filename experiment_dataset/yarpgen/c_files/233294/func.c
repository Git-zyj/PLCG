/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233294
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
    var_11 = var_10;
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)14))))))) : (var_8)));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        var_13 |= ((/* implicit */unsigned char) 701188605);
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((145679274) ^ (-701188598)));
    }
    /* vectorizable */
    for (signed char i_1 = 2; i_1 < 24; i_1 += 3) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */unsigned short) 4294967295U);
        arr_8 [i_1] = (unsigned short)8;
    }
    /* vectorizable */
    for (signed char i_2 = 2; i_2 < 24; i_2 += 3) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned int) min((var_14), (arr_10 [i_2])));
        arr_12 [i_2] [i_2] = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) arr_5 [i_2] [i_2])) == (var_4))) ? ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-30341))) : (1032636233U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2])))));
        arr_13 [i_2] [i_2] = (-(((/* implicit */int) ((((/* implicit */_Bool) 326014625U)) && (((/* implicit */_Bool) arr_4 [i_2]))))));
        /* LoopNest 2 */
        for (long long int i_3 = 4; i_3 < 23; i_3 += 3) 
        {
            for (int i_4 = 3; i_4 < 23; i_4 += 4) 
            {
                {
                    arr_20 [i_2] [i_2] [i_3] [i_4] = ((/* implicit */int) ((unsigned char) var_9));
                    arr_21 [i_3] [i_2] = ((/* implicit */unsigned long long int) ((int) 3U));
                    arr_22 [i_2] [i_2] [i_4] = ((/* implicit */long long int) arr_15 [i_2] [i_2]);
                    /* LoopSeq 1 */
                    for (int i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        arr_25 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((unsigned short) arr_24 [i_2] [i_2] [i_2 - 2] [i_2] [i_2] [i_3 + 1]));
                        arr_26 [i_2] [i_3] [i_3] [i_4] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) >= (7)));
                        arr_27 [i_2] [i_3] [i_4] [i_2] [i_5] [i_5] = ((/* implicit */unsigned int) ((var_4) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6165987672909840307LL)) ? (4294967292U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65533))))))));
                    }
                    arr_28 [i_2] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) -2150368146498458566LL))));
                }
            } 
        } 
    }
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (max((4294967295U), (((/* implicit */unsigned int) (short)1)))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-1)), ((unsigned short)15)))))))) && (((/* implicit */_Bool) (unsigned char)122))));
}
