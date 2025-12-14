/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215230
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_7 [i_0 + 1] [i_1] [i_1] = ((/* implicit */unsigned int) (+(max((((((/* implicit */_Bool) (unsigned short)28276)) ? (((/* implicit */int) (unsigned short)35676)) : (((/* implicit */int) arr_4 [i_1])))), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)39302)) || (((/* implicit */_Bool) (unsigned short)26245)))))))));
                    arr_8 [i_0] [i_0 + 1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_1])) >> (((((/* implicit */int) arr_4 [i_1])) - (84)))))) ? (((/* implicit */int) max(((unsigned short)28276), ((unsigned short)26233)))) : (((/* implicit */int) (unsigned short)28271))));
                    var_12 |= ((/* implicit */short) min((max((((/* implicit */int) arr_4 [i_1 - 1])), (((((/* implicit */_Bool) 4943375070479331170LL)) ? (((/* implicit */int) arr_5 [i_1] [i_1] [i_2 + 1])) : (((/* implicit */int) var_10)))))), (((/* implicit */int) arr_3 [i_0]))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned short) min((var_13), (max((((/* implicit */unsigned short) ((short) (+(((/* implicit */int) (unsigned short)39302)))))), ((unsigned short)28271)))));
    var_14 = ((/* implicit */unsigned int) min((((/* implicit */int) ((unsigned short) (unsigned short)65535))), (((((/* implicit */int) var_9)) << ((((~(12246788943954202501ULL))) - (6199955129755349112ULL)))))));
}
