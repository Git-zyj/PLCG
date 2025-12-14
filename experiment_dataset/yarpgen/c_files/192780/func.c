/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192780
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        var_18 = ((/* implicit */signed char) ((max(((!(var_14))), (((var_12) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)241))))))) ? (((/* implicit */int) (unsigned short)56)) : (((/* implicit */int) var_10))));
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)42905)) ? (1285248393U) : (((/* implicit */unsigned int) (-2147483647 - 1)))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) max((((/* implicit */unsigned short) (short)5697)), ((unsigned short)42898))))))) * (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)42905))))), (var_3)))));
        arr_2 [i_0 + 1] [i_0 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0 + 3]))))) ? (((((/* implicit */_Bool) (signed char)69)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (11502414636392684045ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 + 3])) != (((/* implicit */int) var_14))))))))));
        var_20 = ((/* implicit */_Bool) max((var_20), (var_10)));
    }
    var_21 = ((/* implicit */unsigned char) var_7);
    var_22 = ((/* implicit */unsigned char) ((short) (_Bool)1));
    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) & (((/* implicit */int) var_14))))) ? ((+(((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) -40261596)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-18))))))) ? (3009718911U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))));
}
