/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199037
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 21; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                {
                    {
                        var_14 = ((/* implicit */signed char) ((((/* implicit */int) (((+(var_0))) != (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 + 1])))))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535)))))));
                        arr_13 [i_0] [i_1] [i_1] [i_3] = (!(((/* implicit */_Bool) -693110895)));
                    }
                } 
            } 
        } 
        arr_14 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((int) var_3))), (((((/* implicit */_Bool) 8796093022207LL)) ? (((((/* implicit */long long int) arr_6 [17U] [i_0 + 1])) - (8796093022194LL))) : (((/* implicit */long long int) (~(((/* implicit */int) var_10)))))))));
        arr_15 [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) < (arr_6 [i_0 + 1] [i_0]))));
        var_15 = ((/* implicit */unsigned long long int) arr_10 [i_0] [15U] [i_0 + 1] [i_0]);
    }
    var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((long long int) var_6)))));
    var_17 = ((/* implicit */unsigned long long int) ((max(((~(-8796093022208LL))), (((/* implicit */long long int) var_1)))) >> (((((/* implicit */int) var_8)) + (46)))));
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_9)), (max((8796093022196LL), (((/* implicit */long long int) var_0))))))) ? (((/* implicit */long long int) var_0)) : (var_11)));
}
