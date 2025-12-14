/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213060
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
    /* LoopSeq 2 */
    for (int i_0 = 4; i_0 < 15; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] [i_0 - 4] = ((/* implicit */unsigned long long int) var_7);
        arr_3 [i_0] = 1352002280;
        var_11 = ((/* implicit */unsigned long long int) min((((long long int) ((((/* implicit */_Bool) var_3)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) -1352002298))))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((9368571233989468273ULL), (((/* implicit */unsigned long long int) (unsigned char)251))))) && (((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (1877633821120402605LL)))))))));
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 15; i_1 += 2) /* same iter space */
    {
        var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) (signed char)97)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)93)))) : ((-(((/* implicit */int) var_4))))));
        var_13 = ((/* implicit */int) (!(((18091422324991014026ULL) > (((/* implicit */unsigned long long int) 3716123354U))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
    {
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_4 [10LL])) <= (((/* implicit */int) ((((/* implicit */_Bool) 1640554310)) || (var_1))))));
        arr_8 [i_2] = ((/* implicit */unsigned long long int) ((_Bool) var_0));
    }
}
