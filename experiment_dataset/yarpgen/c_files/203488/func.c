/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203488
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
    var_19 += ((/* implicit */unsigned short) var_2);
    var_20 = ((/* implicit */signed char) var_9);
    var_21 = (+(var_12));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_22 = ((/* implicit */signed char) arr_1 [7U]);
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)17923))))) ? (((/* implicit */int) max((arr_1 [i_0]), ((unsigned short)17923)))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_0)), ((unsigned short)17923))))));
    }
    for (unsigned short i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        arr_4 [i_1] = ((/* implicit */short) min(((~(arr_0 [i_1]))), (((/* implicit */unsigned int) ((unsigned char) ((unsigned short) arr_0 [i_1]))))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            for (unsigned short i_3 = 1; i_3 < 12; i_3 += 2) 
            {
                {
                    var_24 *= ((/* implicit */unsigned long long int) arr_9 [i_1] [11] [i_3 + 1] [i_3 + 1]);
                    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1])) ? (arr_10 [i_3] [i_3] [i_3]) : (((/* implicit */unsigned int) max((((/* implicit */int) arr_6 [i_1] [i_2])), (var_13))))))) ? (arr_3 [i_3]) : ((~(((/* implicit */int) min(((unsigned short)47612), ((unsigned short)47612))))))));
                    var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) max((((/* implicit */int) max((((/* implicit */unsigned char) arr_9 [i_3 + 2] [(_Bool)1] [i_3] [i_2])), (var_6)))), (((((/* implicit */_Bool) (unsigned short)47612)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)60930)))))))));
                }
            } 
        } 
        var_27 = ((/* implicit */int) max((var_7), (((/* implicit */unsigned int) var_12))));
        var_28 = ((/* implicit */unsigned short) arr_7 [i_1] [9U] [i_1]);
    }
}
