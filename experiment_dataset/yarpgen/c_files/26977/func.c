/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26977
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
    var_18 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (-(-3775001620554765386LL)))) ? ((~(-3775001620554765377LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2865199506U)))))))), (((/* implicit */long long int) var_4))));
    var_19 = ((/* implicit */unsigned short) ((max((((/* implicit */int) (_Bool)1)), ((-(((/* implicit */int) var_7)))))) >= (((/* implicit */int) var_9))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            for (short i_2 = 4; i_2 < 23; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) ((((-8841730840491208176LL) + (((/* implicit */long long int) 1496551293U)))) / (max((3775001620554765386LL), (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))))));
                    arr_6 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) max((min((((/* implicit */unsigned long long int) arr_5 [i_0] [i_2 - 1])), (var_13))), (((/* implicit */unsigned long long int) (~(arr_5 [i_0] [i_0]))))));
                    arr_7 [i_2 - 3] [i_0] [i_0] [i_0] = ((/* implicit */short) (~((~(15794851714161136346ULL)))));
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (3775001620554765390LL) : (3775001620554765386LL)));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned short) (-(3059419080858529404ULL)));
}
