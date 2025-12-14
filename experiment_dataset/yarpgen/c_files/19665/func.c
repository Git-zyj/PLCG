/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19665
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
    var_15 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((short) ((unsigned short) var_13))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) max((((/* implicit */unsigned short) var_6)), ((unsigned short)17230))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-25969))) : (2339588498U)));
                arr_6 [i_0] [i_0] = ((/* implicit */int) ((((((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1] [i_1 - 1]))) * (((1994300601939955341LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)176))))))) + (9223372036854775807LL))) << (((/* implicit */int) min(((unsigned char)0), (((/* implicit */unsigned char) ((arr_1 [i_0] [i_0 + 1]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))))))))));
                var_17 = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)5)) && (((/* implicit */_Bool) (unsigned short)14971))))), (max((((((/* implicit */_Bool) (short)25990)) ? (arr_5 [i_1] [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1))))), (((/* implicit */unsigned int) min((((/* implicit */unsigned char) arr_4 [i_0] [i_1 + 3] [i_1])), ((unsigned char)0))))))));
            }
        } 
    } 
}
