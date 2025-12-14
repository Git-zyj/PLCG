/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248451
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
    var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((unsigned short) var_1))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)5718))) & (var_5)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)5718)) : (((/* implicit */int) var_10)))) > (((/* implicit */int) var_6)))))) : (min((((/* implicit */unsigned long long int) (short)-6859)), (max((var_4), (((/* implicit */unsigned long long int) (short)-5719)))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_12 -= ((/* implicit */unsigned long long int) var_8);
                var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) 4294967295U)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                arr_5 [(signed char)2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_10)), ((unsigned short)8658)))) ? (max((var_0), (((/* implicit */unsigned int) var_2)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)-6841)))))))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_10))))));
                var_14 = ((/* implicit */unsigned long long int) max((var_14), (((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned short)27007), (((/* implicit */unsigned short) (unsigned char)148))))) ? (((unsigned int) arr_2 [8ULL])) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)38226)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_1 [12])))))))) ? (min((((((/* implicit */_Bool) var_1)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) arr_1 [(unsigned short)2])), (arr_4 [(unsigned short)6])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)14)))))));
            }
        } 
    } 
}
