/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41143
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
    var_11 = ((((/* implicit */_Bool) ((((unsigned long long int) (unsigned char)253)) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (short)0))))))) ? (var_8) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)253)) ? ((-(((/* implicit */int) (short)0)))) : (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)6))))))));
    var_12 = ((/* implicit */_Bool) ((short) var_9));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */int) arr_0 [i_0])) ^ (((/* implicit */int) var_2)))), (((((/* implicit */_Bool) var_5)) ? (var_7) : (((/* implicit */int) var_9))))))) ? (min(((~(((/* implicit */int) arr_2 [i_1])))), (((/* implicit */int) arr_0 [i_0])))) : (var_7)));
                var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) max((arr_3 [i_1] [i_0] [i_0]), (((((/* implicit */_Bool) (short)-31547)) ? (min((-9223372036854775785LL), (((/* implicit */long long int) (short)8215)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)228))))))))))));
                var_14 = var_10;
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (unsigned char)127)))) ? (((((/* implicit */_Bool) ((unsigned char) -3652055867169027286LL))) ? (((/* implicit */long long int) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) var_0))))) : (2340599807821540703LL))) : (-6543470750730696807LL)));
}
