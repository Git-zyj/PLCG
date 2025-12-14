/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201517
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 18; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (3649879197U) : (0U)));
                    var_18 = (unsigned short)8172;
                }
            } 
        } 
        var_19 *= ((3649879197U) % (((/* implicit */unsigned int) 1702534082)));
        arr_7 [i_0] = ((/* implicit */short) ((4294967295U) % (645088125U)));
    }
    /* vectorizable */
    for (short i_3 = 0; i_3 < 18; i_3 += 1) /* same iter space */
    {
        arr_12 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)0)) || (((3649879197U) == (1448557341U)))));
        var_20 = ((/* implicit */short) 0LL);
        arr_13 [i_3] = ((/* implicit */unsigned short) 0ULL);
    }
    for (short i_4 = 0; i_4 < 18; i_4 += 1) /* same iter space */
    {
        var_21 -= ((/* implicit */short) max((min((0ULL), (((/* implicit */unsigned long long int) (_Bool)0)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) ^ (14986649012046105351ULL)))));
        arr_16 [i_4] [i_4] = ((/* implicit */signed char) min((18122810631356882732ULL), (((/* implicit */unsigned long long int) min((2846409955U), (4294967295U))))));
    }
    var_22 = ((/* implicit */unsigned long long int) min((var_22), (max((((/* implicit */unsigned long long int) 2846409955U)), (max((max((18122810631356882732ULL), (((/* implicit */unsigned long long int) (_Bool)0)))), (((/* implicit */unsigned long long int) var_6))))))));
    var_23 = ((/* implicit */short) ((var_0) ^ (((/* implicit */unsigned int) ((/* implicit */int) max((min(((unsigned char)138), (((/* implicit */unsigned char) (_Bool)1)))), (min(((unsigned char)77), ((unsigned char)118)))))))));
}
