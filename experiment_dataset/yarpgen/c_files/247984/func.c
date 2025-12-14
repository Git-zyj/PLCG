/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247984
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
    var_18 = ((/* implicit */unsigned char) (-(18004001108084519100ULL)));
    var_19 = ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (467438377U) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) && (((/* implicit */_Bool) (-(((/* implicit */int) var_6)))))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) min(((signed char)117), (var_3))))))));
    var_20 = ((/* implicit */short) ((((((/* implicit */_Bool) 467438377U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (467438359U))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)25200)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-25211))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_21 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_1])))) : (((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)26)), ((unsigned short)28)))) & (((/* implicit */int) (short)-16575))))));
                var_22 = ((/* implicit */short) min((((((/* implicit */_Bool) max(((short)-26787), ((short)25204)))) ? (((var_14) % (((/* implicit */unsigned int) ((/* implicit */int) var_13))))) : (((var_1) << (((((/* implicit */int) var_7)) - (41673))))))), (((/* implicit */unsigned int) (short)32767))));
                var_23 += ((/* implicit */unsigned int) max((((/* implicit */long long int) min((((((/* implicit */unsigned int) ((/* implicit */int) var_6))) - (467438370U))), (((/* implicit */unsigned int) min(((unsigned char)255), (((/* implicit */unsigned char) (_Bool)0)))))))), (((((/* implicit */_Bool) ((((/* implicit */int) (short)7)) + (((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (short)27101)))) : (((((/* implicit */long long int) ((/* implicit */int) var_5))) / (var_16)))))));
            }
        } 
    } 
}
