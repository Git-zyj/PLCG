/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50332
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_17 = ((/* implicit */int) 2739919810285498328LL);
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) : (min((arr_0 [i_0]), (arr_1 [i_0]))))) << (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -8405647822547817974LL)) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (10025891610614477322ULL)))))))));
        var_18 = 8405647822547817974LL;
        /* LoopNest 2 */
        for (short i_1 = 4; i_1 < 13; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 13; i_2 += 3) 
            {
                {
                    var_19 ^= ((/* implicit */unsigned long long int) (short)(-32767 - 1));
                    arr_10 [i_0] [i_0] [1U] [6LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((6043101100988973319LL), (((/* implicit */long long int) (unsigned char)21))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) : (arr_8 [i_0] [i_1] [i_1] [i_2])))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((short) 2418574033U))))) : (var_2)));
                }
            } 
        } 
    }
    for (long long int i_3 = 0; i_3 < 19; i_3 += 4) 
    {
        var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_12 [i_3] [i_3])), (arr_11 [i_3]))))));
        var_21 = ((/* implicit */int) arr_11 [i_3]);
    }
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) ((unsigned char) 8420852463095074294ULL)))));
    var_23 ^= ((/* implicit */int) ((short) (((!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_9) <= (((/* implicit */unsigned long long int) var_6)))))) : (var_10))));
    var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) (((!(((/* implicit */_Bool) ((unsigned char) var_6))))) ? (((/* implicit */int) var_14)) : (((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)234))))) - (((/* implicit */int) var_7)))))))));
}
