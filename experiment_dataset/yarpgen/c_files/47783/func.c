/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47783
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
    var_20 = ((/* implicit */unsigned int) var_5);
    var_21 = ((/* implicit */unsigned long long int) var_6);
    var_22 &= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)63625))));
    var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) var_7))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_24 = ((/* implicit */unsigned int) (~((-(((/* implicit */int) (unsigned short)11673))))));
        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)11688))))) ? (var_12) : (var_19))) == (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)53863))))))))));
        var_26 &= ((/* implicit */unsigned int) (((((~(((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (unsigned short)53839)) : (((/* implicit */int) (unsigned short)53844)))))) + (2147483647))) >> (((max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)42824)) > (((/* implicit */int) (unsigned short)11673))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [14LL]))) - (665648758U))))) - (3629330708U)))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 3; i_1 < 17; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned long long int) (unsigned short)46822);
        var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 282308123U)) ? (((/* implicit */long long int) 2995770436U)) : (3911533778230919438LL)))))))));
        arr_8 [i_1] &= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)56430))) % (arr_3 [i_1 - 3])));
    }
}
