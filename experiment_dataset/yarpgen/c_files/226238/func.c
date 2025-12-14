/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226238
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
    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_5))))) << (((((/* implicit */int) (signed char)-118)) + (125)))))) | (((unsigned int) (+(((/* implicit */int) (short)(-32767 - 1)))))))))));
    var_18 = var_6;
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned short) var_5);
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) arr_2 [i_0] [i_0]);
        var_20 = ((/* implicit */int) max((((/* implicit */unsigned int) (unsigned short)248)), (37015461U)));
    }
    for (signed char i_1 = 0; i_1 < 12; i_1 += 3) /* same iter space */
    {
        var_21 = max((-2091652003), (((/* implicit */int) (short)31395)));
        arr_9 [i_1] = ((/* implicit */signed char) -1365534275);
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_2])) && (((/* implicit */_Bool) (signed char)-16)))))) < (arr_11 [i_2])));
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)38))) / (-5922929313632968302LL)));
        var_24 = ((/* implicit */_Bool) max((var_24), ((!(((/* implicit */_Bool) ((((/* implicit */int) var_16)) / (((/* implicit */int) (short)31395)))))))));
        var_25 *= var_2;
    }
    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (2722229690U))), (((/* implicit */unsigned int) -1394720784))))) ? (min((((((/* implicit */_Bool) (short)3)) ? (((/* implicit */long long int) -1486671573)) : (var_14))), (((/* implicit */long long int) var_7)))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
}
