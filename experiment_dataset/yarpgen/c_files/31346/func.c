/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31346
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */short) (+(((((/* implicit */int) var_7)) / (((/* implicit */int) var_6))))));
                    var_15 = ((/* implicit */short) ((((/* implicit */int) min((((short) (short)26694)), (((/* implicit */short) ((((/* implicit */int) (short)512)) <= (((/* implicit */int) (short)0)))))))) / (((((/* implicit */_Bool) ((short) (short)0))) ? (((/* implicit */int) max((var_9), (var_9)))) : (((/* implicit */int) (short)24296))))));
                }
            } 
        } 
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) min((((((/* implicit */int) (short)(-32767 - 1))) | (((/* implicit */int) (short)-4)))), ((+(((/* implicit */int) var_11)))))))));
        arr_8 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) min(((short)-9578), ((short)-28576)))) >= (((((/* implicit */int) (short)-29743)) * (((/* implicit */int) (!(((/* implicit */_Bool) (short)19479)))))))));
        var_17 = ((/* implicit */short) (~(((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) | (((/* implicit */int) min((var_11), ((short)13888))))))));
    }
    /* vectorizable */
    for (short i_3 = 0; i_3 < 10; i_3 += 2) /* same iter space */
    {
        var_18 ^= ((/* implicit */short) ((((/* implicit */int) (short)-8192)) ^ (((/* implicit */int) (short)-30075))));
        arr_12 [i_3] = (short)27336;
        arr_13 [i_3] &= ((short) (short)30154);
        var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) (short)14)) && (((/* implicit */_Bool) var_10)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((((/* implicit */int) (short)0)) < (((/* implicit */int) (short)4)))))));
    }
    for (short i_4 = 0; i_4 < 10; i_4 += 2) /* same iter space */
    {
        var_20 ^= ((/* implicit */short) ((((/* implicit */_Bool) max(((short)-4252), (var_9)))) ? (((/* implicit */int) ((((/* implicit */int) min((var_3), (var_8)))) <= (((/* implicit */int) ((short) var_13)))))) : (((/* implicit */int) var_11))));
        var_21 += ((/* implicit */short) ((((((/* implicit */int) (short)256)) | (((/* implicit */int) ((((/* implicit */int) var_10)) < (((/* implicit */int) var_10))))))) < (((/* implicit */int) (short)-512))));
    }
    var_22 = ((/* implicit */short) (+(((/* implicit */int) min((var_5), (((short) (short)1632)))))));
}
