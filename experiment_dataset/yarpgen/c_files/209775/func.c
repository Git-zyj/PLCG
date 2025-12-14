/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209775
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
    var_11 = ((/* implicit */int) ((((((/* implicit */long long int) (-(((/* implicit */int) var_8))))) & ((+(var_6))))) % (((((/* implicit */_Bool) max((20ULL), (((/* implicit */unsigned long long int) var_8))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (1522679832U)))) : (((var_5) + (((/* implicit */long long int) 13))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            {
                var_12 -= (!(((/* implicit */_Bool) (~(max((var_10), (((/* implicit */unsigned int) arr_3 [i_0] [(short)0]))))))));
                arr_6 [i_1] [i_1] = ((/* implicit */int) var_3);
                var_13 = min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1])) && (((/* implicit */_Bool) arr_2 [i_1])))))) >= (((arr_2 [14LL]) << (((var_0) - (3192751341711061492ULL)))))))), (((((((/* implicit */_Bool) var_1)) ? (var_9) : (3909057597287176242LL))) * (((((/* implicit */long long int) ((/* implicit */int) (short)0))) % (var_5))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) ((var_0) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))) ? (max((((((/* implicit */long long int) ((/* implicit */int) var_8))) + (-1LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (10U) : (1587431559U)))))) : (((long long int) ((int) var_10))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_2 = 2; i_2 < 8; i_2 += 2) 
    {
        var_15 ^= ((/* implicit */int) var_6);
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned int) var_3);
        arr_12 [(unsigned short)5] [i_2 + 1] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_5)) ? (3799627689502797982ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))));
        arr_13 [1LL] = ((unsigned short) var_0);
    }
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 3332633930275103999LL)) || (((/* implicit */_Bool) 27U)))))) >= (min((((((/* implicit */_Bool) var_0)) ? (var_0) : (((/* implicit */unsigned long long int) -264444307)))), (((/* implicit */unsigned long long int) min((((/* implicit */int) var_7)), (264444326))))))));
        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (-(((((/* implicit */int) arr_4 [i_3 - 1])) << (((((/* implicit */int) var_7)) - (7284))))))))));
    }
}
