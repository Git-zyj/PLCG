/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34725
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
    var_17 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_0))));
    var_18 = (!(((/* implicit */_Bool) (~(min((-4868905532408376765LL), (((/* implicit */long long int) (short)-13568))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 25; i_3 += 4) 
                {
                    {
                        var_19 -= ((/* implicit */short) (!(((/* implicit */_Bool) var_1))));
                        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (unsigned short)26299))));
                    }
                } 
            } 
        } 
        var_21 &= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) 2112186176)))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) : (((((/* implicit */_Bool) -4868905532408376780LL)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [11ULL] [i_0] [i_0])) ? (arr_6 [i_0] [i_0] [(_Bool)0] [i_0]) : (((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) : (4868905532408376765LL)))))));
        var_22 |= ((/* implicit */int) arr_5 [i_0] [i_0]);
    }
    var_23 |= ((/* implicit */unsigned short) ((((((((/* implicit */int) var_14)) >= (var_9))) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (short)13072))))) != (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
}
