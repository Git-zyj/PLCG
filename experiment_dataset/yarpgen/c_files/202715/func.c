/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202715
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
    var_17 = (~(15407590047450785116ULL));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) ((unsigned long long int) ((arr_7 [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1]))))));
                    var_19 = ((4347140044102446154ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)137))));
                    var_20 -= ((/* implicit */unsigned char) (((~(((/* implicit */int) (unsigned char)0)))) & (((((/* implicit */int) arr_6 [i_0] [i_0])) << (((((/* implicit */int) arr_6 [i_0] [i_2])) - (62)))))));
                }
            } 
        } 
    } 
    var_21 = (~(min((((/* implicit */unsigned long long int) (unsigned char)162)), ((~(var_5))))));
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? ((~(((/* implicit */int) (unsigned char)1)))) : (((/* implicit */int) var_8))));
}
