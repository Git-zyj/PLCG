/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192676
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
    var_19 = ((/* implicit */unsigned char) var_2);
    var_20 = ((/* implicit */unsigned int) var_17);
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : ((-(((((/* implicit */unsigned long long int) 4294967289U)) ^ (408827723736689885ULL)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_2] [i_1] [i_0] = ((/* implicit */_Bool) (((((~(18037916349972861730ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)25553), (var_1))))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_2 [i_1 - 1] [(short)4]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) ? (((/* implicit */int) arr_6 [(unsigned short)20] [i_1 - 2] [i_0])) : (((/* implicit */int) ((short) var_9))))))));
                    arr_8 [i_0] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) var_13)) * (((((/* implicit */int) (short)-8)) / (((/* implicit */int) (short)23289)))))));
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) max(((short)-258), ((short)23929)))) == (((/* implicit */int) arr_0 [i_0] [i_1 + 2]))));
                    arr_9 [17U] = max((((short) arr_3 [i_0] [i_1 + 2])), ((short)(-32767 - 1)));
                }
            } 
        } 
    } 
}
