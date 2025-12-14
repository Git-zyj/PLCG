/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219615
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
    var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) ((_Bool) var_4)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 4; i_1 < 13; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((unsigned int) var_6))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) * (14ULL)))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((14473774325530621960ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))) * (((var_5) >> (((var_10) + (1814135330))))))))));
                arr_5 [i_1] = ((/* implicit */unsigned int) ((min((var_0), (((/* implicit */int) ((unsigned short) (unsigned char)190))))) | (((/* implicit */int) ((((/* implicit */_Bool) (short)-19051)) || (((/* implicit */_Bool) ((unsigned short) 3972969748178929648ULL))))))));
                arr_6 [i_1] [i_0] = ((unsigned char) ((((var_5) < (((/* implicit */unsigned long long int) -2658438659300338472LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (short)0)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) ^ (14473774325530621960ULL)))));
                var_12 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) << (((/* implicit */int) var_7))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) var_6)), (1760411128U))))))) < (((/* implicit */int) var_7))));
            }
        } 
    } 
    var_13 = ((/* implicit */long long int) max((((/* implicit */unsigned int) var_1)), (var_2)));
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((unsigned char) 6512469581462719967ULL)), (((unsigned char) 5082606466884045189ULL))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 3972969748178929645ULL)) && (((/* implicit */_Bool) (signed char)-6))))) : (min((((/* implicit */int) ((((/* implicit */_Bool) var_9)) || ((_Bool)1)))), (((((/* implicit */int) var_1)) >> (((((/* implicit */int) var_1)) - (16721)))))))));
}
