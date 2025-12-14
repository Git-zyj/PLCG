/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34865
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
    var_10 = ((/* implicit */unsigned int) 1794783790);
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        var_11 = ((/* implicit */signed char) ((((/* implicit */int) ((short) ((((/* implicit */int) (unsigned char)255)) >= (arr_0 [10]))))) < ((~(((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (_Bool)1)) : (arr_0 [i_0])))))));
        var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-107))) ^ (3827447799U)))) && (((/* implicit */_Bool) 3827447799U))));
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((3827447799U), (((/* implicit */unsigned int) arr_1 [i_0 - 2]))))) ? (13230683027893254432ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)115))))) / (((/* implicit */unsigned long long int) ((unsigned int) (~(((/* implicit */int) (short)21281))))))));
        arr_3 [i_0] = ((/* implicit */int) 467519496U);
    }
    var_13 = ((/* implicit */_Bool) var_8);
}
