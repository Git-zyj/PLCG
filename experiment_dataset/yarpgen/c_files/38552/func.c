/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38552
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
    var_16 = ((/* implicit */long long int) var_6);
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            for (int i_2 = 3; i_2 < 21; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */short) arr_0 [i_1] [i_2]);
                    var_18 ^= ((/* implicit */unsigned int) max((8734048057974419102ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1461797447)) ? (((/* implicit */int) (unsigned char)12)) : (((/* implicit */int) arr_2 [i_2 - 1])))))));
                    var_19 *= (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) 8734048057974419102ULL)) ? (((/* implicit */unsigned int) var_8)) : (var_13))) : (((/* implicit */unsigned int) ((var_8) | (((/* implicit */int) var_6))))))));
                    arr_7 [i_2] = ((/* implicit */unsigned int) min((min((min((8734048057974419102ULL), (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)-125)) : (0)))))), (((/* implicit */unsigned long long int) (-(-1062952862))))));
                    var_20 = ((/* implicit */_Bool) (-(min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_2]))) : (16402202322845839791ULL))), (((/* implicit */unsigned long long int) max((arr_5 [i_0] [(_Bool)1] [(_Bool)1]), (var_5))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */_Bool) (-(((/* implicit */int) var_10))));
    var_22 -= var_4;
}
