/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196109
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((56428602U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)5)))))) && (((/* implicit */_Bool) min(((~(((/* implicit */int) var_4)))), (((((/* implicit */int) (unsigned short)30554)) / (((/* implicit */int) var_17)))))))));
    /* LoopSeq 4 */
    for (int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        var_21 += ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_1 [14ULL]), ((signed char)-51))))) >= (((((/* implicit */_Bool) (unsigned short)6265)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (1355706792U))))))));
        var_22 += ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 + 3])) ? (arr_2 [5ULL]) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))) ? (((2428111177U) ^ (1127615757U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1606727873299658544LL)) ? (2027982672) : (((/* implicit */int) var_13)))))))));
    }
    for (short i_1 = 1; i_1 < 11; i_1 += 3) 
    {
        arr_5 [i_1 + 2] [i_1 + 2] = max((arr_0 [i_1 + 1]), (((((/* implicit */_Bool) arr_0 [i_1 + 1])) ? (arr_0 [i_1 + 1]) : (arr_0 [i_1 + 1]))));
        var_23 |= ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_2 [i_1 + 1]), (arr_2 [i_1 + 1])))) ? (((((/* implicit */_Bool) var_18)) ? (arr_0 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-106)) && (((/* implicit */_Bool) arr_1 [i_1])))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_3 [i_1 + 2]) || (((/* implicit */_Bool) var_15))))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 14; i_2 += 1) 
    {
        var_24 -= ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) + (arr_0 [i_2]))) > (((/* implicit */unsigned long long int) arr_2 [i_2]))));
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
            {
                {
                    var_25 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) > (arr_10 [i_2] [i_3] [i_4 + 1])));
                    var_26 += ((/* implicit */unsigned int) ((long long int) arr_0 [i_2]));
                    var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) arr_12 [i_2] [i_2] [i_4]))) ? (((((/* implicit */_Bool) var_16)) ? (arr_0 [0LL]) : (((/* implicit */unsigned long long int) var_11)))) : (((/* implicit */unsigned long long int) arr_11 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 + 1]))));
                }
            } 
        } 
        arr_13 [i_2] = ((/* implicit */short) -1306055972);
        arr_14 [i_2] = ((/* implicit */int) arr_0 [i_2]);
    }
    for (int i_5 = 0; i_5 < 12; i_5 += 4) 
    {
        arr_19 [i_5] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_5]))) / (((((long long int) 5731873148699785934LL)) | (((/* implicit */long long int) ((arr_15 [(signed char)7]) ? (var_15) : (((/* implicit */int) arr_17 [i_5])))))))));
        arr_20 [i_5] &= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((signed char) (signed char)93))) && ((!(((/* implicit */_Bool) (signed char)54)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)43))) : (arr_7 [i_5]))))));
        arr_21 [i_5] = var_19;
        var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) ((unsigned long long int) ((unsigned int) arr_18 [i_5]))))));
    }
}
