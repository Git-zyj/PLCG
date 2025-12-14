/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192263
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
    /* vectorizable */
    for (short i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_7 [i_1] [i_1] = ((/* implicit */unsigned int) (~(((((/* implicit */int) (short)(-32767 - 1))) ^ (((/* implicit */int) (_Bool)0))))));
                    var_15 = ((unsigned int) 262144U);
                    var_16 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_4 [4U]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
                    var_17 = ((/* implicit */unsigned long long int) 2097152);
                }
            } 
        } 
        var_18 &= ((/* implicit */int) ((unsigned short) (+(((/* implicit */int) (_Bool)1)))));
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) -2097153)) ? (var_10) : (((/* implicit */long long int) ((((/* implicit */_Bool) 11706572311396287898ULL)) ? (((/* implicit */int) var_14)) : (var_4))))));
        arr_8 [13ULL] &= ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned char) (short)32767)))));
        var_20 = ((/* implicit */_Bool) ((int) var_0));
    }
    var_21 = ((/* implicit */int) ((unsigned long long int) (short)(-32767 - 1)));
}
