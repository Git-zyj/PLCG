/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239657
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
    var_18 = ((/* implicit */_Bool) var_3);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (int i_3 = 4; i_3 < 14; i_3 += 3) 
                {
                    {
                        arr_10 [i_0] [i_0] [i_2 - 1] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!((_Bool)0))))));
                        var_19 = ((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_1] [i_1] [i_3 + 1]);
                        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) max(((~((~(((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == ((~(8105090712998724836LL)))))))))));
                        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) >= ((+(13861449383417913123ULL))))))));
                    }
                } 
            } 
        } 
        arr_11 [i_0] = (~(arr_4 [i_0]));
    }
    var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((signed char) max((((876769445437340762LL) / (((/* implicit */long long int) ((/* implicit */int) var_2))))), (((/* implicit */long long int) var_2))))))));
    var_23 = ((/* implicit */unsigned char) var_13);
}
