/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33610
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
    var_15 += ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)2))));
    var_16 = ((/* implicit */_Bool) (~(max((((/* implicit */int) var_7)), (((((/* implicit */int) var_8)) & (((/* implicit */int) var_7))))))));
    var_17 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (short)-20526)) : (((/* implicit */int) (signed char)96)))) : (((/* implicit */int) var_1))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 21; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (arr_0 [i_2 - 2] [i_2 - 1]) : (((/* implicit */int) var_7)))));
                    var_19 = ((/* implicit */short) var_1);
                    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1 + 2] [i_1] [i_1 + 1] [i_2])) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65518)))))) && (((/* implicit */_Bool) max(((unsigned char)245), (((/* implicit */unsigned char) arr_5 [i_1 + 2] [(_Bool)1] [i_1 - 1] [i_2]))))))))));
                }
            } 
        } 
    } 
}
