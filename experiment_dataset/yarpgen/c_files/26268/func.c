/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26268
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
    var_14 = ((/* implicit */_Bool) (+(min((((var_0) % (var_9))), (((((/* implicit */_Bool) var_5)) ? (var_0) : (((/* implicit */int) var_10))))))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = (~(((/* implicit */int) ((((/* implicit */_Bool) max((arr_3 [(signed char)15]), (((/* implicit */unsigned int) arr_1 [i_0] [i_0]))))) || (((/* implicit */_Bool) 536870400))))));
        arr_4 [(short)7] = ((/* implicit */long long int) max((((/* implicit */unsigned int) var_0)), ((-(((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (4211660765U) : (((/* implicit */unsigned int) var_9))))))));
    }
    for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) -4957268965434548795LL)))) ? (((var_2) ? (((/* implicit */long long int) 4211660747U)) : (arr_5 [(_Bool)1]))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_6)))))))));
        var_16 = ((/* implicit */unsigned long long int) ((short) var_8));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 17; i_3 += 2) 
            {
                {
                    var_17 &= ((/* implicit */short) ((var_0) & (((((/* implicit */_Bool) (short)3584)) ? ((+(((/* implicit */int) arr_6 [i_1])))) : (((/* implicit */int) var_12))))));
                    var_18 = ((/* implicit */long long int) min((var_18), (min((9007061815787520LL), (((/* implicit */long long int) (short)(-32767 - 1)))))));
                }
            } 
        } 
        arr_13 [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) 83306533U))) - (((/* implicit */int) var_11))));
        /* LoopNest 2 */
        for (unsigned short i_4 = 2; i_4 < 15; i_4 += 4) 
        {
            for (int i_5 = 0; i_5 < 17; i_5 += 4) 
            {
                {
                    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) (((~((-(((/* implicit */int) (signed char)76)))))) << ((((+(max((((/* implicit */int) var_7)), (var_0))))) - (591471773))))))));
                    var_20 += ((/* implicit */signed char) arr_15 [i_4 + 2]);
                }
            } 
        } 
    }
    for (long long int i_6 = 3; i_6 < 22; i_6 += 1) 
    {
        var_21 = max((((((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) arr_19 [i_6])) : (22400326))) >= (((/* implicit */int) ((((/* implicit */int) var_5)) < (((/* implicit */int) var_2))))))), (var_4));
        var_22 = ((/* implicit */unsigned short) (-(((((/* implicit */int) var_5)) / (((/* implicit */int) arr_19 [i_6 - 2]))))));
    }
    for (unsigned long long int i_7 = 2; i_7 < 23; i_7 += 2) 
    {
        var_23 = ((/* implicit */unsigned long long int) ((max((max((((/* implicit */unsigned int) var_13)), (83306545U))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_19 [i_7 - 2])) > (((/* implicit */int) arr_18 [i_7]))))))) != (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (signed char)-13))))));
        var_24 = ((/* implicit */signed char) (+((-(((/* implicit */int) var_7))))));
        var_25 = ((/* implicit */short) ((var_7) ? ((-(max((((/* implicit */int) var_1)), (var_0))))) : (((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)63)), (arr_21 [i_7 + 1] [i_7 + 1])))) ? (((/* implicit */int) ((unsigned short) arr_20 [i_7 - 2] [i_7]))) : (((((/* implicit */int) arr_19 [i_7 - 1])) ^ (((/* implicit */int) (unsigned short)21595))))))));
    }
    var_26 = ((/* implicit */int) (signed char)19);
}
