/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33637
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -716270358))));
        var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)24)) ? (((/* implicit */int) (unsigned char)226)) : (-2121461094))))));
    }
    for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            arr_10 [i_2] [i_2] = ((/* implicit */_Bool) 1570605181);
            arr_11 [i_2] [i_2] = arr_7 [i_1];
        }
        arr_12 [i_1] = ((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) & ((~(((/* implicit */int) arr_6 [i_1] [i_1])))))) >> (((((arr_5 [i_1] [i_1]) ? (((/* implicit */int) (unsigned short)16368)) : (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)0)), (arr_8 [i_1] [i_1])))))) - (16340)))));
        var_16 *= ((/* implicit */unsigned short) min((((((/* implicit */int) arr_8 [i_1] [i_1])) <= (((/* implicit */int) (unsigned char)234)))), ((_Bool)1)));
    }
    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((((var_9) % (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) * (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) < (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))));
    var_18 = ((/* implicit */unsigned int) -1896963864);
    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) var_1))));
}
