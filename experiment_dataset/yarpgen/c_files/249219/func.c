/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249219
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
    var_18 = var_5;
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_2 [i_0] = 6341746894408717578ULL;
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            arr_7 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (min((arr_4 [i_0] [i_0] [i_1]), (arr_4 [i_0] [i_0] [i_1]))) : (((((/* implicit */_Bool) var_8)) ? (12104997179300834028ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_4 [i_1] [i_0] [i_0]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1])))))))))));
            arr_8 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_1] [i_0] [i_0])) ? (min((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) == (arr_5 [i_0] [i_0])))), (max((((/* implicit */unsigned int) arr_1 [i_0])), (arr_0 [i_1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_0])))));
            arr_9 [i_0] [i_1] = ((/* implicit */unsigned long long int) var_0);
        }
        for (unsigned long long int i_2 = 1; i_2 < 14; i_2 += 4) 
        {
            arr_12 [i_0] [i_0] [0U] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [6ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0])))))) : (arr_5 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [8ULL] [i_2])) ? (arr_5 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))))))) : (arr_11 [i_0] [12ULL] [i_0]));
            arr_13 [i_0] [(signed char)10] = var_4;
        }
        arr_14 [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_6 [i_0])) ? (max((((/* implicit */unsigned long long int) arr_10 [i_0] [i_0])), (var_8))) : (var_7))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_17)) ? (var_12) : (var_0))) < (((/* implicit */unsigned int) (+(((/* implicit */int) var_15))))))))));
    }
    /* vectorizable */
    for (signed char i_3 = 1; i_3 < 23; i_3 += 1) 
    {
        arr_19 [14U] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_18 [0U]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-79)) ? (1637718692U) : (1637718692U)))) : (arr_18 [(signed char)22])));
        arr_20 [(signed char)14] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) == (((((/* implicit */_Bool) arr_15 [i_3])) ? (arr_18 [12ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_3] [i_3])))))));
    }
    var_19 = var_1;
}
