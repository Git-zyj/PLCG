/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29632
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) (-(((/* implicit */int) arr_2 [i_0 + 1] [i_1 - 2] [i_1 + 1])))))) ? ((~(((/* implicit */int) (short)2828)))) : (((((/* implicit */_Bool) (unsigned short)11498)) ? (((/* implicit */int) (short)1)) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_1 [i_0 + 2])) : (((/* implicit */int) (unsigned short)36445))))))));
                var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) arr_1 [i_0 + 3]))) ? ((-(((/* implicit */int) ((((/* implicit */int) (unsigned short)29092)) > (((/* implicit */int) arr_4 [i_0 - 3] [i_0] [i_1]))))))) : (((/* implicit */int) (_Bool)1))));
                var_13 += ((/* implicit */short) (unsigned short)36444);
            }
        } 
    } 
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) var_8))) ? (((var_6) ? (var_5) : (((/* implicit */int) ((short) (short)-1))))) : (((/* implicit */int) (unsigned short)29115))));
    var_15 = ((/* implicit */unsigned char) (-(((((long long int) (signed char)-48)) - (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
    var_16 = ((((/* implicit */_Bool) (unsigned short)29092)) ? (13958421531198075404ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16173))));
}
