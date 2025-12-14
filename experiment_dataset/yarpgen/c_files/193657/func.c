/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193657
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
    var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) var_6)) : (var_7))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_0] [i_1] [i_0] = arr_1 [i_2];
                    arr_7 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) var_10);
                    /* LoopSeq 4 */
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 4) /* same iter space */
                    {
                        var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) (~(max((9972583467206743555ULL), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_1] [i_3])))))))));
                        var_14 *= ((/* implicit */unsigned short) min((max((arr_9 [i_1] [i_0]), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0] [i_2])))), (14356166197033469915ULL)));
                    }
                    /* vectorizable */
                    for (unsigned short i_4 = 0; i_4 < 25; i_4 += 4) /* same iter space */
                    {
                        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)35369)) < (-196976009))))));
                        arr_14 [i_0] [i_0] &= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_13 [i_0] [i_1] [i_2])) % (var_2)));
                    }
                    for (unsigned short i_5 = 0; i_5 < 25; i_5 += 4) /* same iter space */
                    {
                        var_16 = ((/* implicit */unsigned long long int) 196976031);
                        arr_17 [i_0] [i_0] = ((/* implicit */_Bool) var_8);
                    }
                    for (unsigned short i_6 = 0; i_6 < 25; i_6 += 4) /* same iter space */
                    {
                        arr_21 [i_0] [i_0] = ((/* implicit */unsigned short) (+(max((((((/* implicit */unsigned long long int) arr_8 [i_0] [i_6] [i_2] [i_2] [i_1] [i_0])) % (9897916777362399678ULL))), (((/* implicit */unsigned long long int) (unsigned short)54205))))));
                        arr_22 [i_6] [i_2] [(unsigned short)12] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) -6535737921533520448LL)) ^ (26ULL)));
                        var_17 &= ((/* implicit */int) arr_11 [i_2]);
                    }
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */long long int) var_11);
}
