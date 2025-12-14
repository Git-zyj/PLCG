/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233348
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
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_2)), (max((((/* implicit */unsigned long long int) var_11)), (var_12)))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) == (((/* implicit */int) var_3)))))) <= (max((15304303430111494880ULL), (((/* implicit */unsigned long long int) var_11))))))) : (((/* implicit */int) var_4))));
    var_15 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (min((var_5), (((/* implicit */int) var_4)))))) > ((~(var_13)))));
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) var_4))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 15304303430111494880ULL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)33514))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (var_5) : (var_2)))) : (min((((/* implicit */unsigned int) 618926731)), (var_9))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_5) : (var_13)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)78)) : (var_0))) : (((/* implicit */int) max((var_7), (var_7)))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 19; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */long long int) ((unsigned long long int) (!(((/* implicit */_Bool) -9)))));
                    arr_9 [i_0] [i_2] [i_2] [2LL] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_3 [i_1 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) : (((((/* implicit */_Bool) var_6)) ? (var_12) : (((/* implicit */unsigned long long int) arr_4 [(unsigned char)0] [i_1] [i_1]))))))));
                }
            } 
        } 
    } 
}
