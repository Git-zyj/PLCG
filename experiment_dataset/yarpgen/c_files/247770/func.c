/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247770
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
    var_13 = min(((-(var_0))), (((/* implicit */long long int) min((((/* implicit */unsigned short) (short)-23144)), ((unsigned short)32768)))));
    var_14 = ((/* implicit */short) var_9);
    var_15 = ((/* implicit */unsigned long long int) var_8);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 16; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (short)23143)), (max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (short)-22039)), (662885956U)))), ((~(992681288721695927ULL)))))));
                    var_17 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_5 [i_0] [i_1 + 1] [i_0]), (arr_6 [i_0] [i_0]))))) * (arr_3 [i_0]))) >> (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) >= (((((/* implicit */_Bool) -6001523091286490421LL)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (short)-23144)))))))));
                    var_18 -= ((/* implicit */long long int) (!((!((!(((/* implicit */_Bool) 977291166248734451LL))))))));
                    arr_7 [(_Bool)1] [(_Bool)1] [i_0] [i_0] |= ((/* implicit */long long int) ((((/* implicit */int) (short)32767)) > (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : ((+(((/* implicit */int) arr_6 [(unsigned short)16] [i_1]))))))));
                }
            } 
        } 
    } 
}
