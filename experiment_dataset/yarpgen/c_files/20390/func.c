/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20390
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
    var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((((/* implicit */long long int) var_1)) <= (-4503599627370496LL))) ? (((/* implicit */long long int) (+(var_15)))) : ((+(var_17))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) (unsigned char)123);
                    var_22 = ((((/* implicit */_Bool) max((max((((/* implicit */short) arr_7 [i_1] [i_1] [i_1])), ((short)-9169))), ((short)20668)))) ? (min((arr_6 [i_0] [i_1] [i_1]), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-18585)) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) (signed char)95))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)255))))) <= (max((1162683665502154556ULL), (((/* implicit */unsigned long long int) arr_3 [i_0])))))))));
                    var_23 |= ((/* implicit */unsigned char) max((((/* implicit */int) ((signed char) (((_Bool)1) ? (((/* implicit */int) arr_1 [2U])) : (((/* implicit */int) arr_4 [i_0] [14LL] [i_2])))))), (((((/* implicit */_Bool) -572695491)) ? (((/* implicit */int) (unsigned char)71)) : (((/* implicit */int) (unsigned short)19068))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */int) var_3);
}
