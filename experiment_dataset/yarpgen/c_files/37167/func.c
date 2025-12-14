/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37167
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
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((short) ((((/* implicit */int) (unsigned short)33784)) + (((/* implicit */int) (signed char)6))))))));
    var_13 = ((/* implicit */unsigned long long int) max((((/* implicit */int) var_11)), (var_9)));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_14 = ((/* implicit */short) ((arr_2 [i_0]) & (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)31734)) && (((/* implicit */_Bool) arr_2 [i_0])))))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)0))))) & (min((arr_0 [i_0]), (((/* implicit */unsigned long long int) arr_2 [i_0]))))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            arr_7 [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((17282168306886545113ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-32)))));
            arr_8 [i_1] = -112451707;
            arr_9 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)42)) ? (1325601310) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (max((arr_6 [i_1]), (arr_5 [i_1])))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) -2147483625)) ? (((/* implicit */int) (signed char)94)) : (1572363736))))))));
                var_16 = (i_1 % 2 == 0) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) (~(arr_1 [i_0])))) / (max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) << (((((arr_5 [i_1]) + (1274189099))) - (18)))))), (max((var_5), (((/* implicit */unsigned long long int) var_6))))))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) (~(arr_1 [i_0])))) / (max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) << (((((((arr_5 [i_1]) + (1274189099))) - (18))) - (1993525730)))))), (max((var_5), (((/* implicit */unsigned long long int) var_6)))))))));
                var_17 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_0])))));
            }
            /* vectorizable */
            for (unsigned short i_3 = 3; i_3 < 13; i_3 += 1) 
            {
                arr_17 [(short)0] &= ((((/* implicit */_Bool) ((arr_5 [0ULL]) / (var_3)))) ? (((((/* implicit */_Bool) 1057676241889467867ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_14 [i_0] [i_1] [i_1] [i_3 + 2]))) : (((/* implicit */unsigned long long int) arr_1 [i_3 - 3])));
                arr_18 [i_1] = ((/* implicit */short) var_4);
                var_18 = ((/* implicit */_Bool) max((var_18), (((14658802523893596376ULL) >= (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-8)))))))));
                arr_19 [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_16 [i_3 + 2] [i_3 + 2] [i_1]))));
            }
        }
        /* vectorizable */
        for (signed char i_4 = 4; i_4 < 14; i_4 += 1) 
        {
            var_19 = ((/* implicit */int) var_6);
            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_4 - 3] [i_4 - 3] [i_4] [i_4])) ? (arr_15 [i_4 - 1] [i_4 - 2] [i_4 - 1] [i_4 - 2]) : (arr_15 [i_4 + 1] [i_4 - 1] [i_4] [i_4]))))));
            var_21 = ((((/* implicit */int) arr_10 [i_0] [i_4 - 3])) * (((/* implicit */int) (short)-8033)));
        }
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (arr_11 [4])));
    }
}
