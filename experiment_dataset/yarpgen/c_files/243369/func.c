/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243369
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1 + 2] [i_0])) ? (max((((arr_0 [(signed char)2] [(signed char)2]) << (((arr_3 [i_0] [i_0]) - (17051702407190487556ULL))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))))))) : (((/* implicit */unsigned int) ((((/* implicit */int) ((2774727889U) <= (3305262615U)))) / (((/* implicit */int) (unsigned char)17))))))))));
                var_17 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((-1836215454), (-1)))) - ((((!(((/* implicit */_Bool) arr_4 [i_0] [i_1 + 1] [i_1 + 1])))) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_1 - 1]))) : (arr_3 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_1 + 1])) ? (arr_2 [i_0] [i_0] [i_1 + 1]) : (((/* implicit */int) (unsigned short)40053)))))))));
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_3 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_1 + 2])) : (((/* implicit */int) (unsigned char)250)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])))))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_1 [i_0] [i_0])), (arr_4 [i_0] [i_0] [i_0])))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_1 [i_0] [i_1 + 2])) : (((/* implicit */int) arr_4 [i_1 + 2] [i_1 + 2] [i_0])))) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_1 + 2])))) : (((/* implicit */int) arr_1 [i_0] [i_1 - 1]))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned int) var_3))))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) ((short) var_11))), (((((/* implicit */int) (unsigned short)40051)) / (-614466489)))))) : ((((~(1520239397U))) / (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)25502)))))))));
    var_20 = ((/* implicit */unsigned short) var_15);
}
