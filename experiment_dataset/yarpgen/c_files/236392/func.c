/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236392
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
    var_18 = ((/* implicit */_Bool) var_16);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 -= min((((((/* implicit */_Bool) max((arr_0 [i_0]), (arr_0 [i_0])))) ? ((~(arr_1 [i_0]))) : ((-(arr_1 [i_0]))))), (((/* implicit */unsigned long long int) max(((signed char)110), ((signed char)104)))));
        /* LoopNest 3 */
        for (short i_1 = 4; i_1 < 21; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 22; i_3 += 2) 
                {
                    {
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_2] [i_1] = ((/* implicit */unsigned int) (~(arr_8 [i_1 + 2] [i_0] [i_1] [i_1] [i_0])));
                        var_20 = ((/* implicit */unsigned int) arr_1 [i_3]);
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (signed char i_4 = 0; i_4 < 21; i_4 += 1) 
    {
        for (unsigned int i_5 = 0; i_5 < 21; i_5 += 3) 
        {
            {
                var_21 = (-(18446744073709551611ULL));
                var_22 = ((/* implicit */unsigned long long int) arr_0 [i_5]);
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) (+(4898808075072365694LL)));
    var_24 = ((/* implicit */unsigned short) var_2);
}
