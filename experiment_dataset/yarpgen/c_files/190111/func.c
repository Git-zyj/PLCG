/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190111
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
    for (int i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        var_10 = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_1 [i_0] [i_0 + 4])) ? ((+(((/* implicit */int) (short)-14766)))) : (((/* implicit */int) ((short) arr_0 [i_0] [i_0 + 2])))))));
        var_11 += ((/* implicit */short) arr_1 [i_0 + 1] [i_0]);
        /* LoopSeq 2 */
        for (signed char i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            arr_4 [i_0] = ((/* implicit */unsigned short) 6546414691988765904ULL);
            var_12 = ((/* implicit */int) ((((/* implicit */int) ((unsigned short) arr_1 [i_0 + 4] [i_1 - 1]))) > ((((((~(((/* implicit */int) (_Bool)1)))) + (2147483647))) >> (((((((/* implicit */int) (unsigned short)65535)) >> (((/* implicit */int) (_Bool)1)))) - (32741)))))));
            var_13 = ((/* implicit */long long int) arr_1 [i_0] [i_1]);
            var_14 = ((/* implicit */short) ((((unsigned int) (unsigned short)1)) >> (((((/* implicit */int) ((signed char) 16337768950296085291ULL))) - (25)))));
        }
        for (unsigned long long int i_2 = 3; i_2 < 11; i_2 += 4) 
        {
            var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) ((((/* implicit */int) (unsigned short)16)) + (((/* implicit */int) (short)1340)))))) >> (((((((/* implicit */_Bool) (unsigned short)12)) ? (arr_1 [i_2 + 1] [i_0 + 4]) : (arr_1 [i_2 - 3] [i_0 + 3]))) - (1794406179U)))));
            var_16 = ((/* implicit */unsigned char) max((((/* implicit */long long int) (_Bool)1)), (816624648521264410LL)));
            var_17 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_3 [i_2 - 2] [i_0]) != (((/* implicit */int) (unsigned char)128)))))) > (((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (var_8))) * (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
        }
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) max(((unsigned short)65521), (((/* implicit */unsigned short) (unsigned char)4))))) - (((arr_3 [i_0] [i_0]) | (((/* implicit */int) arr_6 [i_0] [i_0] [i_0 + 2]))))));
        arr_9 [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)5))))) ? (((unsigned int) arr_1 [i_0] [i_0 + 1])) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_0] [i_0]))))))) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
    }
    var_19 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_6))));
    var_20 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)26)) >> (((/* implicit */int) (_Bool)1))));
}
