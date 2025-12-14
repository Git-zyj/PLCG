/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243532
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            var_14 = ((/* implicit */unsigned long long int) arr_2 [2ULL]);
            arr_6 [(_Bool)1] [(_Bool)1] = ((/* implicit */int) min((3176757395U), (((/* implicit */unsigned int) min((max((arr_4 [i_1]), (((/* implicit */int) (unsigned short)54895)))), (((/* implicit */int) (unsigned short)65535)))))));
            var_15 = ((/* implicit */int) var_1);
        }
        for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            arr_10 [18U] [i_2] [i_2] = ((/* implicit */unsigned short) (~(max((((((/* implicit */_Bool) 1257534209)) ? (((/* implicit */int) (unsigned char)189)) : (((/* implicit */int) arr_2 [i_0])))), (((/* implicit */int) (signed char)-19))))));
            arr_11 [i_0] |= ((/* implicit */int) (unsigned short)32959);
        }
        var_16 = ((/* implicit */unsigned char) arr_2 [(unsigned short)20]);
        arr_12 [(unsigned short)12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (max(((~(((/* implicit */int) (unsigned short)32577)))), (((/* implicit */int) (unsigned short)32976))))));
    }
    var_17 ^= ((/* implicit */signed char) ((-132221645) / (((/* implicit */int) max(((unsigned short)32560), ((unsigned short)32577))))));
}
