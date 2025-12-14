/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18968
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
    var_13 += ((/* implicit */int) var_1);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            var_14 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((min((-162101583), (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) var_10)))))));
            var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) (unsigned char)105))) ? (((/* implicit */unsigned long long int) -3868357)) : (((((/* implicit */_Bool) 3868357)) ? (((/* implicit */unsigned long long int) -954718418)) : (4249721260208784617ULL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1]))) : ((~(var_9)))));
            var_16 = ((/* implicit */unsigned short) min(((-(arr_5 [i_0] [(short)12] [i_1]))), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)0)) + (((/* implicit */int) (unsigned char)0))))) ? (((((/* implicit */_Bool) -1863470129)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_3 [(short)18] [i_1] [(short)18])))) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_0]))))));
            arr_6 [8] = ((/* implicit */int) min((min((max((((/* implicit */long long int) arr_3 [i_1] [4ULL] [i_0])), (arr_4 [i_0]))), (((/* implicit */long long int) arr_2 [i_0] [i_1])))), (((/* implicit */long long int) ((((1945684497) - (((/* implicit */int) (signed char)-125)))) << (((((arr_5 [i_0] [i_0] [i_0]) + (1776851720))) - (6))))))));
        }
        var_17 = ((/* implicit */short) ((signed char) max((min((arr_0 [0]), (-1243240296))), (((/* implicit */int) ((_Bool) -1243240296))))));
        arr_7 [i_0] = ((/* implicit */_Bool) (-((~(((((/* implicit */int) var_6)) >> (((((/* implicit */int) arr_3 [i_0] [i_0] [4ULL])) - (14786)))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
    {
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (2483653705U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
        var_19 = ((/* implicit */int) 8244963926070793743LL);
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (-1945684498) : (((/* implicit */int) arr_9 [i_2]))))) ? (((/* implicit */int) arr_3 [i_2] [i_2] [i_2])) : (((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */int) (unsigned short)65535)) : (arr_0 [(short)1])))));
        var_21 = ((/* implicit */short) arr_0 [i_2]);
    }
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((-364640920) + (2147483647))) << (((((((((/* implicit */_Bool) -1243240296)) ? (((/* implicit */long long int) var_3)) : (4391265028103304411LL))) + (1748855349LL))) - (16LL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)47952))))))))) : (((((/* implicit */_Bool) 3627811187U)) ? (((/* implicit */unsigned long long int) var_9)) : (((var_2) << (((var_7) - (2792952903U)))))))));
}
