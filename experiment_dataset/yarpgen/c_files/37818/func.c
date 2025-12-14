/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37818
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
    var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) (+(18446744073709551589ULL))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        var_20 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) max((-328398766753251061LL), (((/* implicit */long long int) arr_0 [i_0 - 1] [i_0 + 4]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)5))))) ? (26ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) arr_1 [i_0]))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) arr_1 [i_0 + 1])) & (((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 3])))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) max((arr_0 [i_0 - 1] [i_0]), (((/* implicit */unsigned char) var_13)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) var_11);
        arr_4 [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_0 [i_0] [(unsigned char)0]), (arr_1 [i_0 + 2]))))) / (((((/* implicit */unsigned long long int) 328398766753251049LL)) - (14ULL)))))));
        arr_5 [i_0] = ((/* implicit */unsigned short) min((-328398766753251061LL), (((/* implicit */long long int) 708050011U))));
    }
    var_21 = ((/* implicit */unsigned int) var_17);
    var_22 = var_4;
    var_23 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) max((((/* implicit */unsigned char) var_13)), (var_5))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) 18446744073709551602ULL))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)54205))) : (var_18)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) -328398766753251061LL)) || (((/* implicit */_Bool) var_2)))))) % ((+(var_6)))))));
}
