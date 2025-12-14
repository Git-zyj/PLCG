/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28569
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
    var_18 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (unsigned char)149)))) * ((-(((((/* implicit */_Bool) -7225039678620075649LL)) ? (var_15) : (((/* implicit */unsigned int) var_10))))))));
    var_19 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned int) var_1))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_6 [i_0] = ((/* implicit */int) var_11);
                    var_20 += ((/* implicit */signed char) max((((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)172))))) & (((var_5) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1)))))), (((((/* implicit */_Bool) 17ULL)) ? (((/* implicit */int) arr_0 [i_1 - 2])) : (((/* implicit */int) ((unsigned char) (short)14253)))))));
                    arr_7 [i_0] [i_1 + 1] [i_2 + 1] [i_2] = ((/* implicit */unsigned char) ((int) (-(((/* implicit */int) ((unsigned char) 7225039678620075649LL))))));
                    arr_8 [i_0] [i_2 + 2] |= ((/* implicit */unsigned int) 8724591961307158994ULL);
                    var_21 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)238))) & (var_0)))) ? (((/* implicit */int) arr_0 [i_0 + 1])) : ((~(((/* implicit */int) var_2))))))) | (((unsigned long long int) var_6))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) var_10))) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) max((-7225039678620075664LL), (((/* implicit */long long int) -1241237150))))) : (((unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
    var_23 = ((/* implicit */unsigned long long int) (~(((((((/* implicit */int) var_9)) & (((/* implicit */int) (unsigned short)63506)))) << (((((/* implicit */int) var_12)) - (21838)))))));
}
