/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197195
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
    var_11 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)63)), (2386242850U)));
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 13; i_0 += 4) /* same iter space */
    {
        var_12 |= ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_1 [2ULL]))))));
        var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2386242844U)) && ((!((!(((/* implicit */_Bool) (unsigned short)8294))))))));
        var_14 = ((/* implicit */_Bool) (-(arr_1 [i_0])));
    }
    /* vectorizable */
    for (long long int i_1 = 1; i_1 < 13; i_1 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (long long int i_3 = 0; i_3 < 16; i_3 += 1) 
            {
                for (short i_4 = 4; i_4 < 15; i_4 += 2) 
                {
                    {
                        var_15 = ((_Bool) 2386242842U);
                        arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] = (~(((/* implicit */int) arr_4 [i_1 - 1])));
                        arr_14 [i_1] [i_2] [i_4] [i_4 - 2] [i_4] [i_1] = ((/* implicit */unsigned long long int) (+((+(1908724424U)))));
                        var_16 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1908724424U)) ? (((/* implicit */long long int) 2058067130U)) : (5504077982686876260LL)));
                    }
                } 
            } 
        } 
        arr_15 [i_1] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [(unsigned char)4])) * (((/* implicit */int) arr_7 [i_1] [i_1]))))) ? (((/* implicit */int) arr_0 [i_1 + 2])) : (((((/* implicit */int) arr_6 [i_1])) - (((/* implicit */int) var_9)))));
    }
}
