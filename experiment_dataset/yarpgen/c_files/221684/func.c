/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221684
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
    var_10 *= ((var_9) & (((/* implicit */long long int) ((/* implicit */int) var_0))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 15; i_2 += 1) 
            {
                for (unsigned short i_3 = 3; i_3 < 17; i_3 += 4) 
                {
                    {
                        var_11 *= ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [(_Bool)1])) ? (((/* implicit */int) (unsigned short)65509)) : (((/* implicit */int) (signed char)-105))))) - ((+((~(arr_2 [i_3 + 1]))))));
                        var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) var_9))));
                    }
                } 
            } 
        } 
        arr_14 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0 + 1])) && (((/* implicit */_Bool) arr_10 [i_0])))))));
        var_13 = ((/* implicit */long long int) min((((645680409U) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) (signed char)-105)) : (((/* implicit */int) arr_1 [i_0]))))))), (((_Bool) max((((/* implicit */long long int) (unsigned char)38)), (-4365421758891348897LL))))));
    }
}
