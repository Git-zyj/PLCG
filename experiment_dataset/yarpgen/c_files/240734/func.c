/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240734
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */int) var_6);
                    var_21 = ((/* implicit */unsigned char) ((signed char) (~(((/* implicit */int) (short)32767)))));
                    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) arr_2 [i_0] [i_0] [i_2]))));
                    var_23 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_2 [i_2] [i_2] [i_2])) : (((/* implicit */int) (short)-32766))))) : (((unsigned long long int) arr_3 [i_1] [i_1] [i_2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32759))) * (6257817319077933253ULL))) > (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)32767), ((short)-32759))))))))) : (426606173U)));
                    arr_8 [i_2] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (short)(-32767 - 1))) || (((/* implicit */_Bool) (short)32758))));
                }
            } 
        } 
    } 
    var_24 = ((_Bool) (short)(-32767 - 1));
    var_25 = ((/* implicit */unsigned int) var_15);
    var_26 |= var_4;
}
