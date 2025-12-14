/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41325
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
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((min((((/* implicit */unsigned long long int) var_0)), (var_14))) << (((((var_0) ^ (((/* implicit */int) var_4)))) - (265926754))))) : (((/* implicit */unsigned long long int) ((unsigned int) var_0)))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_2 [i_0] = ((short) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? ((+(var_2))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((max((var_1), (((/* implicit */int) (_Bool)0)))), (((((/* implicit */_Bool) (unsigned char)23)) ? (898847491) : (((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) ^ (((/* implicit */int) var_15))))) ? (((/* implicit */int) ((unsigned char) (_Bool)0))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) >= (arr_0 [i_0] [i_0])))))) : (((((/* implicit */_Bool) var_6)) ? ((+(var_1))) : (((/* implicit */int) arr_1 [i_0]))))));
    }
    for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        arr_7 [i_1] = ((/* implicit */_Bool) min((max((((/* implicit */unsigned int) ((var_12) < (var_0)))), (min((((/* implicit */unsigned int) var_3)), (var_5))))), (var_8)));
        arr_8 [i_1] [i_1] = ((unsigned int) ((((/* implicit */unsigned int) ((((((/* implicit */int) (short)-4557)) + (2147483647))) >> (((/* implicit */int) arr_5 [i_1]))))) <= (var_2)));
        var_17 = ((/* implicit */int) (short)26370);
        arr_9 [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
        var_18 &= ((/* implicit */_Bool) min(((unsigned short)65535), (((/* implicit */unsigned short) (unsigned char)62))));
    }
    var_19 = ((/* implicit */long long int) ((unsigned char) (unsigned short)1));
    var_20 *= ((/* implicit */unsigned char) max(((short)1505), ((short)3635)));
}
