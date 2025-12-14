/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200022
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_15 += ((/* implicit */unsigned short) (+(max((-5715345175604843284LL), (((/* implicit */long long int) arr_1 [i_0] [i_0]))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */_Bool) min((var_16), (min(((!((!(((/* implicit */_Bool) var_0)))))), ((((+(var_6))) > (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [(_Bool)0])))))))))));
                    var_17 |= ((/* implicit */unsigned long long int) arr_0 [11U]);
                }
            } 
        } 
        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_0 [i_0])))))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 3) 
    {
        var_19 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? ((+(((/* implicit */int) (signed char)122)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_8 [i_3])) : (((/* implicit */int) var_12))))))), ((+(((6640025075106528125ULL) ^ (((/* implicit */unsigned long long int) 2147483647))))))));
        var_20 += ((/* implicit */int) ((signed char) ((max((arr_7 [i_3] [i_3]), (var_0))) * (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_3] [i_3] [i_3] [(unsigned short)6])) * (((/* implicit */int) var_4))))))));
        var_21 += ((/* implicit */unsigned short) var_9);
    }
    var_22 &= ((/* implicit */short) ((249841277) % (((/* implicit */int) (unsigned short)15339))));
}
