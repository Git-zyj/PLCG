/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249563
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
    var_11 |= ((/* implicit */short) ((long long int) (short)-19));
    var_12 = ((/* implicit */_Bool) ((short) (short)20));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            arr_6 [i_1 + 1] [i_0] = ((/* implicit */short) min((((/* implicit */unsigned short) min(((short)19), (max(((short)47), ((short)-7)))))), (min((((unsigned short) var_6)), (((/* implicit */unsigned short) ((short) (short)-23591)))))));
            var_13 += ((/* implicit */short) (unsigned short)51231);
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_14 = ((/* implicit */unsigned short) var_8);
            var_15 = ((/* implicit */short) ((_Bool) ((long long int) min((var_5), (((/* implicit */long long int) (short)-9743))))));
        }
        arr_9 [i_0] = ((/* implicit */short) var_5);
        var_16 = -5693014729393862095LL;
    }
    for (long long int i_3 = 0; i_3 < 11; i_3 += 4) /* same iter space */
    {
        arr_14 [i_3] [i_3] = ((/* implicit */short) (unsigned short)51231);
        arr_15 [i_3] = ((/* implicit */short) var_1);
    }
}
