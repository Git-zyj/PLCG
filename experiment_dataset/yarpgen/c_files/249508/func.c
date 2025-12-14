/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249508
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_7 [i_1] [(signed char)3] [i_1] [(unsigned short)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [(_Bool)1])) || (((/* implicit */_Bool) (((-(((/* implicit */int) (signed char)55)))) % (((/* implicit */int) ((signed char) arr_2 [i_2] [i_1]))))))));
                    arr_8 [i_0] [i_0] [(signed char)2] &= ((/* implicit */_Bool) ((short) ((_Bool) var_10)));
                    var_12 |= ((/* implicit */signed char) (((_Bool)0) ? (((/* implicit */int) (signed char)-70)) : (((/* implicit */int) (short)9573))));
                    arr_9 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_0]))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */short) ((((/* implicit */int) (short)9573)) % (((/* implicit */int) (short)-9574))));
}
