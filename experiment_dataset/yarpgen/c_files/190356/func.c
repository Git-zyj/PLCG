/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190356
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) max((var_20), (max((((/* implicit */unsigned long long int) var_17)), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))) * (((((/* implicit */_Bool) arr_2 [i_1])) ? (288221580058689536ULL) : (((/* implicit */unsigned long long int) arr_0 [i_1]))))))))));
                arr_6 [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_1 [i_1])))) < ((+((-(((/* implicit */int) (short)-13946))))))));
                var_21 |= ((/* implicit */_Bool) min((((max((((/* implicit */unsigned int) arr_1 [i_1])), (arr_0 [i_1]))) << (((/* implicit */int) arr_3 [i_1])))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((arr_4 [i_0] [(short)16]) ? (18158522493650862079ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_1])))))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) min((((/* implicit */int) min((((/* implicit */unsigned short) max((var_7), (((/* implicit */unsigned char) var_16))))), (((unsigned short) var_6))))), ((+(var_15)))));
    var_23 = (+(((/* implicit */int) var_19)));
}
