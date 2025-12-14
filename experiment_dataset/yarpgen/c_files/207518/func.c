/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207518
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned short) arr_0 [i_0]);
        var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [1LL]))) : (18014396361998336LL))) * (((/* implicit */long long int) ((unsigned int) var_1))))))));
        arr_3 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((((/* implicit */int) min((arr_1 [i_0]), (arr_2 [i_0])))) == (((((/* implicit */_Bool) (short)-8192)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_3))))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 3; i_1 < 20; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 20; i_2 += 1) 
            {
                for (unsigned short i_3 = 4; i_3 < 21; i_3 += 3) 
                {
                    {
                        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_11 [i_0] [i_0])), (-1923800055086937290LL)))) ? (arr_7 [i_0] [i_0] [i_2 + 1]) : (((/* implicit */long long int) arr_9 [i_0] [i_1]))))) ? ((-(arr_8 [i_0] [i_1 + 1] [i_0] [i_3 - 1]))) : (((/* implicit */int) (short)8187))));
                        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((((/* implicit */int) arr_4 [i_3 - 1] [i_2 + 2] [i_1 + 1])) >= (((/* implicit */int) arr_6 [i_0] [i_1] [i_0] [i_1])))) && (((/* implicit */_Bool) var_3)))))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_4 = 0; i_4 < 25; i_4 += 2) 
    {
        var_16 = ((/* implicit */unsigned short) arr_12 [i_4]);
        arr_14 [i_4] = ((/* implicit */unsigned int) max((arr_13 [7U]), (((/* implicit */short) var_1))));
        var_17 += ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_13 [i_4])))) || (((/* implicit */_Bool) ((((/* implicit */int) (short)8213)) / (((/* implicit */int) arr_12 [i_4])))))));
    }
    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) ((signed char) var_8))), (var_5)))) ? (((/* implicit */int) var_2)) : (max((max((((/* implicit */int) var_11)), (var_5))), (((/* implicit */int) var_4)))))))));
}
