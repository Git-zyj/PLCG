/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24566
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */int) min((max((2282223932U), (((/* implicit */unsigned int) arr_2 [i_0] [i_0])))), (((/* implicit */unsigned int) ((var_4) == (((/* implicit */int) (unsigned char)221)))))));
                var_12 = ((/* implicit */unsigned char) ((min((((/* implicit */int) arr_5 [i_0] [i_0])), ((+(((/* implicit */int) (unsigned char)35)))))) << (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_1])) != ((-(((/* implicit */int) (unsigned char)46)))))))));
                var_13 += (unsigned char)128;
            }
        } 
    } 
    var_14 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1221399878)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)85)) ? (65535) : (-1782945207)))) : (max((var_5), (((/* implicit */unsigned long long int) 1782945204)))))))));
    var_15 = ((/* implicit */int) (unsigned char)94);
}
