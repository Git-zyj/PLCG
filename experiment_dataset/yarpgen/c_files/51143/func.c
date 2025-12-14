/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51143
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
    var_11 = ((unsigned long long int) var_3);
    var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) ((var_5) ? (min((((/* implicit */unsigned int) max(((unsigned char)58), (((/* implicit */unsigned char) (_Bool)0))))), (min((((/* implicit */unsigned int) var_5)), (var_7))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)203))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) min(((short)6604), (((/* implicit */short) arr_0 [i_0]))))) != (((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_0]))))));
        arr_3 [i_0] |= ((/* implicit */short) max((((/* implicit */unsigned int) var_5)), (min((max((((/* implicit */unsigned int) (unsigned char)49)), (4294967290U))), (((/* implicit */unsigned int) arr_1 [i_0]))))));
    }
    for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        var_13 = (~(max((2311970210872541913ULL), (((/* implicit */unsigned long long int) var_6)))));
        var_14 = ((/* implicit */_Bool) min((((/* implicit */unsigned char) ((_Bool) min((arr_5 [i_1] [i_1]), (arr_5 [i_1] [i_1]))))), ((unsigned char)197)));
        var_15 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((((+(((/* implicit */int) (short)-6611)))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */_Bool) 5415090635668247412ULL)) && (arr_5 [i_1] [i_1])))))))));
        var_16 ^= max((3493654513U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) (unsigned char)198))) || (((/* implicit */_Bool) ((arr_5 [i_1] [i_1]) ? (11319943436983621900ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_1]))))))))));
    }
    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) (-(18446744073709551609ULL)))) ? (13329596518243407171ULL) : (((((/* implicit */_Bool) (unsigned char)58)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)197))) : (7017369135648074431ULL))))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)45213)), (3025039603U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 696810599833621349ULL)) || (((/* implicit */_Bool) var_10)))))) : (((((/* implicit */_Bool) var_4)) ? (var_0) : (var_0)))))))))));
}
