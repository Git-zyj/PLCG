/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36051
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 *= ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */int) arr_5 [i_0] [i_0])) > (((/* implicit */int) (_Bool)0))))), (((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_0]))))));
                arr_6 [i_0] [(signed char)5] [i_0] = ((/* implicit */unsigned short) max((((unsigned long long int) arr_2 [i_0])), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1]))));
                var_18 = ((/* implicit */_Bool) ((max((arr_4 [i_0] [i_0]), (arr_4 [i_0] [i_1]))) | (((/* implicit */int) var_8))));
                arr_7 [i_0] = ((/* implicit */unsigned short) ((arr_1 [i_1]) ? (((/* implicit */int) ((var_12) > (((/* implicit */int) ((((/* implicit */int) var_10)) > (((/* implicit */int) (unsigned short)24832)))))))) : (max(((((_Bool)0) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)1827)))), (((/* implicit */int) max((var_8), (((/* implicit */signed char) (_Bool)1)))))))));
                arr_8 [i_0] [i_1] = ((/* implicit */unsigned short) max(((-((-(((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) (((+(var_15))) > (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) max((min((var_11), (((/* implicit */int) (short)-4616)))), (((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (short)1827))))))) / (18060867239499104181ULL))))));
}
