/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217199
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
    var_19 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (~(8388607U)))))))));
    var_20 = ((/* implicit */long long int) min((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_8)), (var_7)))) ? ((-(var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) var_11))) ? (((/* implicit */int) ((short) var_13))) : (((/* implicit */int) ((short) var_5))))))));
    var_21 = (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)36997)) ? (511ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3797)))))) && (((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned long long int) var_9)))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [9ULL] [i_1] [11] = ((/* implicit */unsigned short) arr_4 [i_0] [i_1 + 1] [i_0]);
                    var_22 = ((/* implicit */long long int) min(((-(((/* implicit */int) ((_Bool) (short)634))))), (min((((((/* implicit */_Bool) arr_4 [i_0] [i_1] [(short)2])) ? (((/* implicit */int) (unsigned short)6)) : (((/* implicit */int) var_9)))), (((/* implicit */int) var_16))))));
                    arr_8 [i_0] [i_2] = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (-2279786260086689051LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1])))))) ? ((+(18446744073709551615ULL))) : (((/* implicit */unsigned long long int) 2279786260086689037LL)))), (((((/* implicit */_Bool) min((arr_5 [13] [(unsigned char)3] [i_2] [i_2]), (arr_6 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)17)), ((short)-6012))))) : (min((var_12), (((/* implicit */unsigned long long int) arr_3 [i_0]))))))));
                }
            } 
        } 
        var_23 += ((/* implicit */unsigned short) max((min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) arr_6 [i_0])))), ((-(((((((/* implicit */int) arr_6 [i_0])) + (2147483647))) << (((((var_8) + (1285654661))) - (9)))))))));
        arr_9 [i_0] [i_0] = ((/* implicit */short) max((min((((/* implicit */unsigned long long int) -2279786260086689026LL)), (((((/* implicit */_Bool) arr_6 [i_0])) ? (540ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)109))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [(short)11])) : (((/* implicit */int) arr_1 [i_0])))))));
    }
}
