/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245543
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 13; i_2 += 4) 
            {
                {
                    var_18 ^= max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 + 3])) ? (arr_0 [i_0 + 3]) : (((/* implicit */int) (_Bool)1))))), (13432677361321998331ULL));
                    var_19 = ((/* implicit */unsigned char) ((((long long int) (+(var_10)))) >> ((((+(var_6))) - (3170323426U)))));
                    arr_8 [i_0] [i_0 - 1] [i_1] [i_2 - 1] = ((/* implicit */unsigned int) (_Bool)1);
                    var_20 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1 + 3])) ? (max((((/* implicit */long long int) var_13)), (arr_3 [i_1 - 1]))) : (((long long int) var_14))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (long long int i_3 = 2; i_3 < 14; i_3 += 4) 
    {
        var_21 = ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) 2380415734U))));
        arr_11 [4] [i_3] = ((/* implicit */unsigned int) ((min((((((/* implicit */_Bool) 3296085753220270244ULL)) ? (0ULL) : (((/* implicit */unsigned long long int) -2063894843)))), (((/* implicit */unsigned long long int) 4294967278U)))) - (((/* implicit */unsigned long long int) -1462179817))));
        var_22 = ((/* implicit */int) min(((_Bool)0), ((_Bool)0)));
        arr_12 [i_3] [i_3] |= ((/* implicit */unsigned char) min((arr_9 [i_3]), (((/* implicit */int) (_Bool)1))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 4) 
    {
        var_23 = ((/* implicit */long long int) var_10);
        var_24 = ((/* implicit */long long int) ((unsigned int) (-((+(539237099U))))));
    }
}
