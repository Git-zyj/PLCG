/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227834
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
    var_19 = ((/* implicit */unsigned int) var_18);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)21)) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_2])) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)211)) ? (((/* implicit */int) (unsigned char)23)) : (((/* implicit */int) (unsigned char)234))))))))));
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)8)) ? (((((((/* implicit */int) (short)2786)) <= (((/* implicit */int) var_17)))) ? (((/* implicit */int) min((arr_7 [i_0] [i_0] [i_2]), (((/* implicit */unsigned char) var_3))))) : (arr_0 [i_0]))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_1)), (var_16))))));
                    arr_9 [i_0] [i_1] [i_0] [i_1] = (unsigned char)21;
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */short) 1445251593007996286ULL);
    var_22 -= ((/* implicit */unsigned char) (short)-2780);
}
