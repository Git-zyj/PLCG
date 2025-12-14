/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241195
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_19 -= ((/* implicit */short) ((long long int) ((short) (unsigned short)65535)));
                arr_6 [i_1] = ((/* implicit */signed char) arr_0 [i_0]);
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (min((((var_17) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_4))))), (((/* implicit */long long int) var_14))))));
    var_21 = ((/* implicit */_Bool) ((min((((long long int) var_15)), (((/* implicit */long long int) ((int) var_16))))) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)73)))));
    /* LoopSeq 1 */
    for (long long int i_2 = 2; i_2 < 20; i_2 += 4) 
    {
        arr_10 [i_2 - 2] = var_17;
        var_22 = ((/* implicit */long long int) arr_7 [i_2]);
    }
    /* LoopSeq 1 */
    for (unsigned short i_3 = 1; i_3 < 17; i_3 += 4) 
    {
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_11 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_3]))) : (var_6))), (min((arr_8 [(_Bool)1]), (((/* implicit */unsigned long long int) var_1))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((arr_12 [i_3 + 2]) || (((/* implicit */_Bool) var_3))))) : (((/* implicit */int) ((unsigned short) arr_11 [i_3]))))))));
        var_24 &= ((/* implicit */unsigned char) var_5);
        arr_13 [i_3] = ((/* implicit */unsigned long long int) ((_Bool) (~(min((((/* implicit */unsigned long long int) var_0)), (arr_8 [(unsigned char)21]))))));
        var_25 |= ((((/* implicit */_Bool) ((unsigned char) 18127233717583307925ULL))) ? (max((((/* implicit */unsigned long long int) ((var_14) ? (((/* implicit */int) (short)-15728)) : (((/* implicit */int) arr_4 [(short)4]))))), (4862843483037310763ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))));
        arr_14 [i_3] = ((/* implicit */unsigned char) ((_Bool) max((var_18), (arr_2 [(_Bool)1] [i_3]))));
    }
}
