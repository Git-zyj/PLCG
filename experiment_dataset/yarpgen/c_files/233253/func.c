/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233253
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_0 [i_0])))))));
        var_21 = ((/* implicit */_Bool) ((((((/* implicit */int) var_15)) > (((/* implicit */int) var_7)))) ? (((((/* implicit */_Bool) ((signed char) (_Bool)1))) ? (((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (unsigned char)220)))) : (((/* implicit */int) (unsigned char)54)))) : (((/* implicit */int) ((signed char) 3136239190194152797LL)))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    {
                        arr_9 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */signed char) ((((arr_7 [i_0] [i_0] [i_1] [i_2] [5U]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2]))))) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                        arr_10 [i_0] [i_1] [13] [i_3] = ((/* implicit */unsigned short) var_16);
                        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2]))));
                        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-19235)) ? (((/* implicit */int) (unsigned short)10437)) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_8 [i_0] [i_0])) : (((/* implicit */int) arr_8 [i_2] [i_1]))))));
                    }
                } 
            } 
        } 
    }
    var_24 = ((((/* implicit */long long int) ((/* implicit */int) var_12))) | ((-(((((/* implicit */_Bool) var_2)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_16))))))));
}
