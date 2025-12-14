/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210018
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
    var_18 = ((/* implicit */_Bool) (~(min((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (1996946473U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))), (min((var_11), (((/* implicit */long long int) 1894900611U))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 22; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) (unsigned short)49152)) : (var_5)))));
                var_20 = ((/* implicit */_Bool) max(((-(((/* implicit */int) var_8)))), (((arr_3 [i_1]) >> (((((var_10) ? (((/* implicit */unsigned long long int) var_6)) : (18446744073709551592ULL))) - (70938596ULL)))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1996946473U)) ? (3872409143U) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))) ? (min((((/* implicit */unsigned long long int) var_0)), (9780567370150085543ULL))) : (((/* implicit */unsigned long long int) (~(var_14)))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_2 = 2; i_2 < 11; i_2 += 4) 
    {
        var_22 = ((/* implicit */unsigned short) (((+(arr_3 [i_2 + 3]))) / (((/* implicit */int) (unsigned short)22701))));
        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) 7446418295058714358ULL))));
        var_24 = ((/* implicit */unsigned short) var_5);
        var_25 = ((/* implicit */long long int) arr_4 [i_2 + 2] [i_2] [0U]);
    }
    for (unsigned short i_3 = 3; i_3 < 15; i_3 += 1) 
    {
        var_26 += ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))));
        var_27 = min((arr_2 [i_3 - 3]), (((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709027328ULL)))))))));
    }
}
