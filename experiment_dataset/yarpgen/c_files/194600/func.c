/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194600
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
    for (int i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) (+(11298249084129890747ULL)));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            arr_9 [i_0] [i_0] = ((/* implicit */signed char) (_Bool)1);
            var_15 = ((/* implicit */unsigned char) var_0);
        }
        for (unsigned int i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            var_16 ^= ((/* implicit */_Bool) ((max((arr_8 [i_0 + 1] [i_0 + 1]), (arr_8 [i_0 - 1] [i_2]))) ? (((/* implicit */int) arr_8 [i_2] [i_0 + 1])) : (((/* implicit */int) max((arr_8 [i_0] [i_0 + 2]), (arr_8 [i_0] [i_2]))))));
            arr_13 [i_0] = ((/* implicit */short) ((((long long int) 12003568865452035773ULL)) & (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) min((6443175208257515842ULL), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0 + 1] [14LL])))))))));
        }
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            var_17 = ((/* implicit */_Bool) (-(-5051745739094332502LL)));
            arr_16 [i_0] = ((/* implicit */signed char) (+(max((((/* implicit */unsigned long long int) var_10)), (6443175208257515843ULL)))));
        }
    }
    for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 4) 
    {
        var_18 = ((/* implicit */unsigned int) arr_0 [6ULL]);
        arr_21 [6LL] = ((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) ((arr_5 [i_4] [i_4] [i_4]) + (var_11)))))));
    }
    var_19 ^= ((/* implicit */short) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (((_Bool)1) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))), (((((/* implicit */_Bool) (short)298)) ? (((/* implicit */long long int) ((/* implicit */int) (short)22600))) : (var_8)))))), (((((/* implicit */unsigned long long int) -1324648898)) & (4286725892770585843ULL)))));
    var_20 = ((/* implicit */_Bool) var_8);
    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (~(max((var_10), (var_12))))))));
    var_22 |= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) / (var_9)));
}
