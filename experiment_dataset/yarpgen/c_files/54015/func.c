/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54015
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
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_17)))));
    var_21 = ((/* implicit */short) (!(((((108086391056891904ULL) >> (((18338657682652659721ULL) - (18338657682652659696ULL))))) <= (((/* implicit */unsigned long long int) var_18))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned char) ((((arr_1 [i_0]) + (14955708647033421771ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_0 [i_0]))))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned int i_2 = 3; i_2 < 20; i_2 += 4) 
            {
                {
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (arr_0 [i_2]) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_2]))))) ? (((/* implicit */int) ((short) (short)-1))) : (((/* implicit */int) var_12))))) ? (((unsigned long long int) arr_5 [i_0] [i_2 + 2] [(short)3])) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)127)) / (((/* implicit */int) var_6))))), (arr_4 [i_2 - 3] [i_2 + 1] [i_2 - 3]))))));
                    var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_7 [i_2 - 1] [i_1] [i_2 - 1] [i_0])) >> (((((/* implicit */int) (short)32767)) - (32742))))), (((/* implicit */int) min(((unsigned char)149), (arr_2 [i_2 - 3])))))))));
                    arr_8 [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2] [i_2 + 2] [i_2]))) ^ (18446744073709551615ULL)))) ? (max((18338657682652659712ULL), (((/* implicit */unsigned long long int) (unsigned char)127)))) : (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) arr_4 [i_2 - 3] [i_2 + 1] [i_2])) : (1ULL)))));
                    var_25 = ((/* implicit */_Bool) -1);
                }
            } 
        } 
        var_26 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (arr_4 [i_0] [3ULL] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
        var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) (((((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])) : ((~(((/* implicit */int) arr_5 [i_0] [(unsigned char)13] [i_0])))))) * (((/* implicit */int) ((var_18) < (((/* implicit */int) var_6))))))))));
        arr_9 [i_0] [i_0] = ((/* implicit */_Bool) (-((-(((/* implicit */int) ((105553116266496ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))))))));
    }
    /* vectorizable */
    for (short i_3 = 0; i_3 < 22; i_3 += 4) /* same iter space */
    {
        arr_13 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)20946))) : (18446744073709551615ULL)));
        arr_14 [i_3] [(unsigned short)19] = var_15;
    }
    var_28 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) ^ (max((((((/* implicit */_Bool) (unsigned char)119)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (4294967295U))), (min((((/* implicit */unsigned int) var_11)), (var_7)))))));
}
