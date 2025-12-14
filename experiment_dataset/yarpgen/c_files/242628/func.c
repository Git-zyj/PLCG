/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242628
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
    var_11 = -2749947800156583176LL;
    var_12 = (unsigned short)13523;
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */int) var_2)) / ((-(((/* implicit */int) var_3))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                arr_4 [i_0] [(unsigned char)1] [i_0] = ((/* implicit */unsigned short) arr_2 [i_0] [i_1]);
                arr_5 [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */long long int) (+(((/* implicit */int) (short)6385))))) <= (min((arr_0 [i_0]), (((/* implicit */long long int) (_Bool)1)))))) ? (((((((/* implicit */int) (unsigned short)52012)) < (((/* implicit */int) (unsigned short)13517)))) ? (((((/* implicit */int) (unsigned short)52012)) % (((/* implicit */int) (unsigned short)52013)))) : (((((/* implicit */int) (unsigned short)13523)) * (((/* implicit */int) arr_1 [i_0])))))) : (((((/* implicit */int) arr_1 [i_0])) << (((((/* implicit */int) arr_1 [i_1])) - (86)))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) (unsigned char)48);
}
