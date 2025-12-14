/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24780
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */int) ((max((3800451051913941294LL), (((/* implicit */long long int) 853032702)))) < (((/* implicit */long long int) var_8))))) == (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)7680)))))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        var_13 = ((/* implicit */int) ((((/* implicit */_Bool) -3800451051913941319LL)) && (((/* implicit */_Bool) min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (3800451051913941305LL))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)174))) : (var_2))))))));
        var_14 -= min((min((arr_0 [(unsigned short)8]), (((/* implicit */int) arr_1 [i_0 - 1])))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) <= (((((/* implicit */_Bool) (unsigned char)159)) ? (-3800451051913941277LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)177)))))))));
        var_15 = ((((/* implicit */long long int) (~(((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (arr_1 [i_0]))))))) - ((~(((((/* implicit */long long int) ((/* implicit */int) (short)1753))) | (var_2))))));
        var_16 += ((/* implicit */unsigned char) ((((/* implicit */long long int) min(((-(((/* implicit */int) var_4)))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) <= (-3800451051913941295LL))))))) <= (((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((long long int) (unsigned char)81)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)167)))))));
    }
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) var_2))));
    var_18 = ((/* implicit */_Bool) max((var_18), (var_0)));
}
