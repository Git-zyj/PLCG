/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((unsigned int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) (unsigned short)54402)) ? (((/* implicit */int) (short)-2355)) : (((/* implicit */int) var_16)))) : ((+(((/* implicit */int) var_16))))));
        var_21 ^= ((/* implicit */unsigned char) min(((((!(((/* implicit */_Bool) 1315501016U)))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_1 [(short)8]))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)54414))))), (((/* implicit */unsigned int) min((((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (unsigned char)145)))), (((/* implicit */int) var_15)))))));
        var_22 *= (!(var_15));
        var_23 = ((/* implicit */_Bool) min(((-((((_Bool)1) ? (arr_1 [i_0]) : (var_0))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1952163235U)))))));
    }
    /* LoopNest 3 */
    for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (short i_3 = 2; i_3 < 9; i_3 += 4) 
            {
                {
                    var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) min(((~(((/* implicit */int) arr_6 [i_1] [i_1] [i_2] [i_1])))), (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)14125)) : (((/* implicit */int) arr_6 [5U] [i_2] [i_2] [i_1])))))))))));
                    var_25 = ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) var_3)))));
                    var_26 = ((/* implicit */unsigned int) min((var_26), (4294967283U)));
                    var_27 = ((/* implicit */short) min((min((((/* implicit */unsigned int) (~(((/* implicit */int) (short)-1925))))), ((~(4294967287U))))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [i_3 - 2])))))));
                    arr_8 [i_3 - 2] [i_2] [i_1] = ((/* implicit */_Bool) (~((~(1952163241U)))));
                }
            } 
        } 
    } 
}
