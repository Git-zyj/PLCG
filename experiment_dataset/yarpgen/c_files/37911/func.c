/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37911
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
    var_20 += ((/* implicit */long long int) var_18);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (signed char)-5)) : (((/* implicit */int) (unsigned char)1))))) : ((~(-1747715380341597565LL)))));
                var_22 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483634)) ? (((/* implicit */int) ((short) 8343812371735672032ULL))) : (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) arr_0 [i_0])))))))) ? ((((!(((/* implicit */_Bool) arr_4 [i_0])))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned char)122)) : (((/* implicit */int) arr_2 [i_1])))) : (((((/* implicit */_Bool) 8343812371735672016ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)5)))))) : (((var_6) ? (((/* implicit */int) (unsigned short)12878)) : (((/* implicit */int) arr_2 [i_0]))))));
                var_23 = ((/* implicit */short) (-(((arr_1 [i_0] [i_1]) / (((/* implicit */int) arr_4 [i_1]))))));
            }
        } 
    } 
}
