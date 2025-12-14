/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3355
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
    for (unsigned long long int i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */_Bool) arr_1 [i_0 + 2]);
                var_15 = ((/* implicit */long long int) ((unsigned int) var_6));
            }
        } 
    } 
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_5)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_0)));
    /* LoopSeq 2 */
    for (unsigned int i_2 = 0; i_2 < 21; i_2 += 1) 
    {
        var_17 = ((/* implicit */long long int) ((int) arr_8 [i_2] [i_2]));
        arr_10 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */long long int) min((-863662555), (-863662556)))) > ((-(((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) (short)32767))) : (var_6)))))));
    }
    for (unsigned char i_3 = 1; i_3 < 17; i_3 += 4) 
    {
        arr_13 [i_3] = ((/* implicit */short) min((((/* implicit */long long int) (((~(-2143693328))) < (((/* implicit */int) max((((/* implicit */unsigned short) arr_7 [(_Bool)1])), ((unsigned short)49041))))))), (min((((/* implicit */long long int) ((short) (unsigned char)132))), (arr_8 [i_3 + 1] [i_3])))));
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (-(((((/* implicit */int) var_5)) >> (((((/* implicit */int) (unsigned short)27593)) - (27578)))))))) ^ (min((arr_9 [i_3 + 2]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_11 [i_3 + 1])) : (((/* implicit */int) var_3)))))))));
    }
    var_19 = var_5;
    var_20 -= ((/* implicit */unsigned char) var_12);
}
