/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37720
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
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_6)))) ? (max((((/* implicit */int) ((arr_0 [i_0] [i_0]) < (((/* implicit */int) arr_1 [i_0]))))), (((((/* implicit */int) var_12)) << (((/* implicit */int) arr_1 [i_0])))))) : (((((((/* implicit */unsigned int) arr_0 [i_0] [i_0])) >= (var_6))) ? (((/* implicit */int) (signed char)35)) : (((/* implicit */int) var_0)))))))));
        var_14 = ((/* implicit */short) var_9);
        var_15 = ((/* implicit */unsigned short) 2886295850U);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) var_3))))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned char) var_3);
        arr_7 [i_1] = ((/* implicit */unsigned long long int) var_7);
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_2])) != (((/* implicit */int) arr_9 [i_2])))))));
        arr_11 [i_2] = ((/* implicit */short) (~(((/* implicit */int) (((+(((/* implicit */int) arr_10 [i_2])))) < (((/* implicit */int) var_3)))))));
        arr_12 [i_2] = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2886295850U)) ? (((/* implicit */int) (unsigned char)207)) : (((/* implicit */int) (_Bool)0))))) ? ((+(((/* implicit */int) arr_9 [i_2])))) : (((/* implicit */int) arr_9 [i_2])))));
        var_17 *= ((/* implicit */unsigned char) ((_Bool) arr_9 [i_2]));
    }
    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 4) 
    {
        arr_15 [i_3] = ((/* implicit */long long int) arr_8 [i_3]);
        arr_16 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)12)) ? (2886295870U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-5308)))));
        arr_17 [i_3] &= ((/* implicit */short) (~(((/* implicit */int) arr_9 [i_3]))));
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (((((~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)22570)) : (((/* implicit */int) var_8)))))) + (2147483647))) << (((((/* implicit */int) (signed char)70)) - (70))))))));
        var_19 = max((arr_8 [i_3]), (((/* implicit */unsigned int) arr_10 [i_3])));
    }
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)9717))) & (1408671445U)));
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) 7ULL)) || (((/* implicit */_Bool) 1408671466U))));
}
