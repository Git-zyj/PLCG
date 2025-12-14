/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27766
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
    var_10 = ((/* implicit */_Bool) var_0);
    var_11 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_8)) | (((((/* implicit */int) var_8)) | (((/* implicit */int) var_7)))))) & (((((((/* implicit */int) var_4)) & (((/* implicit */int) var_4)))) ^ (((/* implicit */int) var_0))))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */long long int) (-((+(((/* implicit */int) (unsigned short)61450))))));
        var_12 = ((/* implicit */unsigned int) (~(arr_1 [i_0])));
    }
    for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned long long int) (~(arr_3 [i_1])));
        var_14 *= ((/* implicit */unsigned int) arr_6 [i_1]);
    }
    for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) /* same iter space */
    {
        arr_12 [i_2] [i_2] = ((/* implicit */unsigned int) (~((+(((/* implicit */int) var_9))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            var_15 |= ((/* implicit */unsigned int) (-(262016ULL)));
            var_16 = arr_10 [i_2];
        }
        /* vectorizable */
        for (signed char i_4 = 0; i_4 < 24; i_4 += 2) 
        {
            arr_19 [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_2]))));
            var_17 |= ((/* implicit */_Bool) (~(((arr_18 [i_2] [i_4] [i_2]) & (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
        }
    }
    for (long long int i_5 = 1; i_5 < 23; i_5 += 2) 
    {
        var_18 = ((/* implicit */unsigned char) arr_10 [i_5]);
        var_19 = ((/* implicit */_Bool) min((var_19), (((((/* implicit */_Bool) (((-(arr_14 [i_5] [i_5] [i_5 - 1]))) << ((((~(((/* implicit */int) var_0)))) + (42375)))))) || ((!(((/* implicit */_Bool) ((((var_1) + (2147483647))) << (((/* implicit */int) arr_15 [i_5] [i_5])))))))))));
    }
    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (~((((~(((/* implicit */int) var_0)))) ^ (((/* implicit */int) var_2)))))))));
}
