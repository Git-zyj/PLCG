/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200206
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) (_Bool)1);
        arr_3 [i_0] = ((/* implicit */long long int) min((var_3), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (signed char)-64)) : (((/* implicit */int) var_7))))), (max((1728112841234773119LL), (((/* implicit */long long int) var_1)))))))));
        var_13 = ((/* implicit */unsigned char) ((long long int) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)57407))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            for (long long int i_3 = 0; i_3 < 18; i_3 += 4) 
            {
                {
                    var_14 |= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_0)) > (arr_11 [i_3] [i_2] [i_1])));
                    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) var_9))));
                }
            } 
        } 
        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */int) var_7)) * (((/* implicit */int) (short)-8930)))))));
    }
    /* vectorizable */
    for (short i_4 = 4; i_4 < 17; i_4 += 1) 
    {
        var_17 = ((/* implicit */signed char) (_Bool)1);
        var_18 = ((/* implicit */unsigned char) (((~(arr_8 [(unsigned short)4] [i_4 - 1]))) / (((/* implicit */int) var_5))));
        arr_14 [i_4] = ((/* implicit */long long int) var_10);
    }
    var_19 ^= ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) ((unsigned char) 16767030698916522193ULL))) <= (((((/* implicit */int) (short)-8930)) * (((/* implicit */int) (_Bool)1)))))))));
    var_20 = ((/* implicit */unsigned char) var_1);
    var_21 = ((/* implicit */_Bool) var_8);
}
