/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53976
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
    var_10 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)31601))))) ? (((((/* implicit */int) var_1)) * (((/* implicit */int) var_0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))), (((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_8)) + (1040187392U)))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4)))) : ((-(((/* implicit */int) (_Bool)1))))))));
    var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) (+(max((3674797068U), (((/* implicit */unsigned int) (_Bool)1)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned char) arr_0 [i_0]);
                var_13 = ((/* implicit */unsigned char) (((+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3674797068U))))) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 22; i_2 += 1) 
    {
        for (unsigned int i_3 = 0; i_3 < 22; i_3 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_3]))))) ? (((/* implicit */int) (unsigned char)242)) : (((/* implicit */int) (_Bool)1))));
                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_8))) ? (var_2) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1842356994U)) ? (((/* implicit */int) (_Bool)1)) : (-1338067257)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_2 [i_3]) > (((/* implicit */int) arr_6 [i_2] [i_3])))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2]))) % (var_9)))))));
            }
        } 
    } 
}
