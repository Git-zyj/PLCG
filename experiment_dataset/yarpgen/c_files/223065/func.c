/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223065
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
    var_16 = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -999642275)) ? ((-(((/* implicit */int) var_14)))) : (((/* implicit */int) var_14))))) : (var_10));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */int) (+(arr_2 [i_0] [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                for (int i_3 = 4; i_3 < 11; i_3 += 3) 
                {
                    {
                        arr_11 [i_0] [i_0] [i_2] [i_2] [i_3] = ((/* implicit */signed char) ((int) max((var_3), (((/* implicit */short) ((arr_7 [i_3]) >= (arr_10 [i_0] [i_1])))))));
                        var_17 = ((/* implicit */int) arr_5 [i_2] [i_3]);
                        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_3])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((var_10) <= (arr_7 [i_3 - 2]))))));
                    }
                } 
            } 
        } 
        var_19 |= ((/* implicit */int) ((var_6) % (((arr_8 [i_0]) >> (((/* implicit */int) var_0))))));
    }
    for (short i_4 = 0; i_4 < 17; i_4 += 1) 
    {
        arr_15 [i_4] [i_4] = ((/* implicit */int) max((((/* implicit */unsigned long long int) arr_14 [i_4])), (arr_13 [i_4] [i_4])));
        arr_16 [i_4] [i_4] = max((max((arr_13 [i_4] [i_4]), (((/* implicit */unsigned long long int) arr_14 [i_4])))), (((/* implicit */unsigned long long int) ((int) arr_14 [i_4]))));
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 3) 
    {
        arr_19 [i_5] = ((((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) arr_18 [i_5])))) ? (((/* implicit */int) arr_18 [i_5])) : (((/* implicit */int) arr_18 [(short)8])));
        arr_20 [i_5] = ((/* implicit */int) arr_17 [i_5]);
    }
    for (int i_6 = 0; i_6 < 16; i_6 += 1) 
    {
        var_20 += ((/* implicit */unsigned int) var_12);
        arr_23 [i_6] [i_6] = ((/* implicit */unsigned long long int) arr_18 [i_6]);
        arr_24 [i_6] [i_6] = max(((+(max((((/* implicit */unsigned long long int) var_0)), (var_10))))), (((/* implicit */unsigned long long int) var_12)));
    }
    var_21 = ((/* implicit */unsigned int) var_6);
    var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((unsigned short) var_8)))));
    var_23 = ((/* implicit */int) max((((/* implicit */unsigned short) max((((/* implicit */short) (signed char)-49)), ((short)-9341)))), (max((var_14), (((/* implicit */unsigned short) ((((/* implicit */int) var_0)) == (((/* implicit */int) var_14)))))))));
}
