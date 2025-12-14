/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209558
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((max((((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) (short)-28212)))), (((/* implicit */int) ((signed char) 10279241879661603014ULL))))) <= (((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) & (((/* implicit */int) arr_0 [i_0]))))) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_0])))) : (((arr_1 [i_0]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_0]))))))));
        var_15 = ((/* implicit */unsigned int) (short)-10458);
        var_16 |= ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (short)-10444)) : (((/* implicit */int) (signed char)-104))))) <= (((unsigned int) 4294967286U)))) ? ((+(((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) 1332817515))))))) : ((~(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (2147483628)))))));
        /* LoopSeq 1 */
        for (long long int i_1 = 3; i_1 < 16; i_1 += 2) 
        {
            var_17 |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_5 [i_1 - 3] [i_1 - 3] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) 4294967294U))))))) == (((/* implicit */int) arr_0 [i_0]))));
            arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) max((((/* implicit */int) arr_1 [i_1])), (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) (short)-27654)) : (((/* implicit */int) arr_1 [i_0])))))));
            arr_7 [i_0] = ((/* implicit */signed char) (_Bool)0);
            arr_8 [i_0] [i_0] [i_1 - 2] = ((/* implicit */unsigned short) (((((((_Bool)1) ? (((/* implicit */int) (unsigned short)10)) : (((/* implicit */int) arr_0 [i_0])))) >> (((/* implicit */int) ((((/* implicit */int) (short)-16979)) == (((/* implicit */int) (_Bool)1))))))) >= (((((/* implicit */int) ((((/* implicit */int) (unsigned short)37089)) <= (((/* implicit */int) arr_5 [i_0] [i_0] [i_1 - 2]))))) & (((/* implicit */int) ((((/* implicit */int) (short)-10462)) < (((/* implicit */int) (signed char)103)))))))));
        }
        arr_9 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4860633881874128113ULL)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40411))) <= (14064480908778068807ULL))))));
    }
    var_18 *= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
}
