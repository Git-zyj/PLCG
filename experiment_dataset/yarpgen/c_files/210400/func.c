/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210400
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
    var_13 &= ((/* implicit */long long int) var_6);
    var_14 = ((/* implicit */unsigned int) var_6);
    var_15 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((signed char) (signed char)109)))));
    var_16 = ((/* implicit */long long int) var_12);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 7; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 7; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) <= (((/* implicit */int) (signed char)-104)))))))));
                    arr_10 [i_2] [i_2] [4LL] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (arr_2 [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [4ULL] [i_1] [i_1] [i_2])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (((/* implicit */int) (unsigned char)169)) : (2147483636)))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (13643529426427006024ULL)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_6) : (var_6)))) ? (((((/* implicit */_Bool) (unsigned char)100)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)78))) : (3530928432U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_0] [i_1 - 1] [i_1 - 1] [i_2])) ? (-2147483629) : (((/* implicit */int) var_8)))))))) : (max((-1744524039744485105LL), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32710))) <= (var_3))))))));
                    arr_11 [i_0 - 1] [i_1] [i_0 - 1] = min((var_3), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (arr_9 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (short)32712)))))));
                }
            } 
        } 
    } 
}
