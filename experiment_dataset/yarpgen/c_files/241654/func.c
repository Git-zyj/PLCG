/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241654
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
    var_16 = ((/* implicit */unsigned short) (~(1767575041260654668LL)));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_17 += ((max((var_12), (((/* implicit */unsigned long long int) (unsigned short)65528)))) / (((unsigned long long int) max((((/* implicit */int) (signed char)99)), (2096234197)))));
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)29867))))) * (max((0ULL), (((/* implicit */unsigned long long int) var_14))))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 9; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 12; i_3 += 2) 
                {
                    {
                        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) 9146257996358934786LL)) ? (min((var_1), (((/* implicit */unsigned long long int) 1279263065466482836LL)))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)127)), (2096234197))))));
                        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) -2096234197))));
                    }
                } 
            } 
        } 
    }
    var_20 *= ((/* implicit */unsigned short) max(((~(((/* implicit */int) (unsigned short)35660)))), (((/* implicit */int) var_7))));
}
