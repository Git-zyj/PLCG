/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191184
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
    var_18 = ((/* implicit */signed char) var_5);
    var_19 = ((/* implicit */short) min((((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_1)), (var_0)))) ? ((~(4640302525390324209LL))) : (((/* implicit */long long int) ((/* implicit */int) var_4))))), (((/* implicit */long long int) var_16))));
    var_20 = ((/* implicit */unsigned short) (short)16208);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) -1))) ? (((/* implicit */int) (short)31421)) : (470567923)));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) << (((arr_0 [i_0]) - (221122296)))));
        arr_3 [i_0] [i_0] = max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) 3294074498U))))), ((unsigned char)9));
    }
    for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        var_22 = ((/* implicit */unsigned long long int) var_16);
        var_23 = ((/* implicit */short) ((arr_0 [i_1]) & (((arr_0 [i_1]) ^ (((/* implicit */int) var_17))))));
        var_24 = ((/* implicit */unsigned long long int) ((max((var_16), (((/* implicit */unsigned int) arr_1 [i_1])))) & (((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_1])))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            arr_12 [i_2] [i_1] = ((/* implicit */int) max(((short)-16205), ((short)16779)));
            var_25 = ((/* implicit */unsigned short) var_14);
            arr_13 [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) var_8);
            arr_14 [i_2] = ((/* implicit */unsigned char) ((short) ((int) arr_10 [i_1])));
        }
        var_26 = ((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) arr_0 [i_1])), (var_6))), (((/* implicit */long long int) ((arr_0 [i_1]) % (((/* implicit */int) var_10)))))));
    }
    var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) 5089053420304071226LL))) ? (((/* implicit */long long int) ((int) min(((unsigned short)65523), (((/* implicit */unsigned short) (short)16786)))))) : (-4640302525390324209LL)));
}
