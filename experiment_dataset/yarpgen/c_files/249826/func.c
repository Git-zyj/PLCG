/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249826
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_11 = ((int) 1618634167);
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((unsigned long long int) max((((/* implicit */signed char) arr_1 [i_0] [i_0])), (arr_0 [i_0])))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -883985288)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0])))))));
    }
    for (short i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        var_12 = ((/* implicit */_Bool) ((signed char) (unsigned short)24701));
        var_13 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (-(505113898U)))) ? ((+(-739738072))) : (((/* implicit */int) var_7)))) < (((/* implicit */int) arr_4 [i_1] [(short)1]))));
        var_14 = ((/* implicit */signed char) (~(((((/* implicit */int) arr_0 [i_1])) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1])))))))));
    }
    for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) 
    {
        arr_7 [i_2] [i_2] = ((/* implicit */unsigned char) min((((/* implicit */int) max((arr_1 [i_2] [i_2]), (arr_1 [i_2] [i_2])))), (((arr_1 [i_2] [i_2]) ? (-739738082) : (((/* implicit */int) arr_1 [i_2] [i_2]))))));
        var_15 = ((/* implicit */short) (+(var_9)));
    }
    var_16 = ((/* implicit */unsigned short) min((((unsigned int) (unsigned short)36129)), (((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)36139)) ? (-194579928) : (var_2)))))));
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 1808706146U)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))) ? (((/* implicit */int) var_1)) : ((~((+(((/* implicit */int) var_5))))))));
}
