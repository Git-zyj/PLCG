/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43027
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
    for (signed char i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 ^= ((/* implicit */unsigned char) (+(min((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_2]))))))));
                    var_14 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (-83093801) : (-2013243290)))) ? (((/* implicit */int) (signed char)64)) : (((/* implicit */int) ((short) (short)784)))))) ? (((((/* implicit */_Bool) ((signed char) (short)13))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) max(((unsigned short)65521), (((/* implicit */unsigned short) var_11))))))) : (((/* implicit */int) var_12))));
                    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)39493)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))) : (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 2416446468U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2))))), (arr_5 [i_0 - 1])))));
                    arr_8 [i_2] [1] [i_1] [(_Bool)1] = ((/* implicit */unsigned char) ((_Bool) max(((~(((/* implicit */int) var_12)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_4))))) ? (((var_8) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10)))) : (((((/* implicit */_Bool) (signed char)-51)) ? (((/* implicit */int) (short)-5673)) : (((/* implicit */int) var_9))))))) ? (((((/* implicit */_Bool) ((unsigned int) var_3))) ? (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)40)))) : ((-(-1581705163))))) : (max((((/* implicit */int) var_6)), ((-(((/* implicit */int) var_3)))))))))));
}
