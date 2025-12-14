/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241233
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
    var_14 = ((/* implicit */unsigned short) (+(1747964420902288484ULL)));
    var_15 = ((/* implicit */signed char) var_11);
    var_16 -= ((/* implicit */unsigned short) ((long long int) var_3));
    /* LoopSeq 2 */
    for (short i_0 = 3; i_0 < 10; i_0 += 3) /* same iter space */
    {
        var_17 = 16698779652807263131ULL;
        var_18 = ((/* implicit */short) ((unsigned long long int) (-(((/* implicit */int) (_Bool)1)))));
        var_19 -= ((/* implicit */short) arr_1 [i_0 - 2]);
    }
    for (short i_1 = 3; i_1 < 10; i_1 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((unsigned short) (_Bool)1)))));
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 2; i_3 < 11; i_3 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) var_9);
                    var_22 = ((/* implicit */signed char) (((+(-1326940514))) > (((/* implicit */int) ((signed char) arr_0 [i_1 + 2])))));
                }
            } 
        } 
    }
}
