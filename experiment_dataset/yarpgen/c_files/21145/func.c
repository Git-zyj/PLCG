/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21145
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
    var_20 ^= ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 5213208553391317985LL)) ? (((/* implicit */unsigned long long int) var_8)) : (var_6)))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_21 = ((/* implicit */unsigned int) (+(((-5213208553391317985LL) % (7467398320945698073LL)))));
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_1 - 2] [5ULL] [i_2] = ((/* implicit */long long int) (+(min((((/* implicit */unsigned long long int) (unsigned char)255)), (9196041474493618786ULL)))));
                    arr_10 [i_0] [i_1] [(short)3] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) max(((signed char)0), (var_3))))));
                }
            } 
        } 
        arr_11 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) 5213208553391317984LL)))))))) ? (var_7) : (((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_12)))) ? ((-(((/* implicit */int) (unsigned short)65535)))) : ((-(((/* implicit */int) (signed char)-6)))))))));
    }
}
