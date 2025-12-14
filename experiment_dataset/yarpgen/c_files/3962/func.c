/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3962
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_17 = ((/* implicit */int) min((var_17), (((((/* implicit */_Bool) (+(var_5)))) ? (((/* implicit */int) ((signed char) arr_0 [i_0]))) : (((((((/* implicit */int) (short)-1920)) + (2147483647))) << (((10160036086729280831ULL) - (10160036086729280831ULL)))))))));
        var_18 = ((/* implicit */unsigned char) ((short) (-(((/* implicit */int) arr_0 [i_0])))));
    }
    for (long long int i_1 = 3; i_1 < 22; i_1 += 4) 
    {
        var_19 = ((/* implicit */int) max((var_19), (min(((+(((((/* implicit */_Bool) (unsigned short)564)) ? (((/* implicit */int) (unsigned short)50366)) : (((/* implicit */int) (unsigned short)581)))))), ((-(((/* implicit */int) arr_5 [i_1 - 2]))))))));
        var_20 = ((/* implicit */unsigned long long int) ((-2134301052) ^ (((((/* implicit */int) arr_5 [i_1 + 1])) / (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned short)569)) : (((/* implicit */int) var_7))))))));
        /* LoopNest 2 */
        for (short i_2 = 1; i_2 < 21; i_2 += 4) 
        {
            for (short i_3 = 0; i_3 < 25; i_3 += 4) 
            {
                {
                    var_21 = arr_11 [i_1] [i_2] [(signed char)18] [i_1];
                    var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)207)))))));
                }
            } 
        } 
    }
    var_23 = ((/* implicit */unsigned int) var_1);
}
