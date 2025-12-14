/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44134
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
    var_14 = (((-(var_2))) > (var_2));
    var_15 = ((/* implicit */int) var_6);
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) arr_3 [i_0]);
                    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_2 - 1])) ? (((/* implicit */int) arr_2 [i_0 - 1] [i_2 - 1])) : (((/* implicit */int) arr_2 [i_0 - 1] [i_2 - 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_6 [i_0 - 1] [i_1 + 1]))))) : (((((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2] [i_2] [(unsigned short)8]))) <= (4177715466U))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */unsigned int) var_7)) : (var_2)))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1]))) : (arr_1 [i_0])))))));
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1 - 1])) ? (((/* implicit */int) arr_2 [i_1 - 2] [i_1 - 2])) : (((/* implicit */int) arr_2 [i_1 + 2] [i_1 - 2]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)10856)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_7 [i_0 - 1] [i_2] [i_2 - 1]))))) ? (min((var_2), (((/* implicit */unsigned int) var_7)))) : (((var_2) >> (((((/* implicit */int) arr_5 [(signed char)4] [i_1] [i_2])) - (32745))))))) : (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) 1861376801))) % (((/* implicit */int) arr_7 [i_2] [i_2] [i_2 - 1])))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */int) var_0);
}
