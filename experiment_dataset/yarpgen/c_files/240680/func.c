/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240680
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
    var_15 = ((/* implicit */int) var_10);
    var_16 = ((/* implicit */unsigned char) ((signed char) 4294967295U));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((int) 2244580445U))) ^ (((((/* implicit */_Bool) max(((unsigned short)24576), (arr_2 [i_1] [i_2])))) ? (arr_4 [i_2] [i_1]) : (((((/* implicit */_Bool) (unsigned short)17491)) ? (arr_4 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))));
                    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) var_10))));
                    var_18 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_9))));
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */long long int) min(((unsigned char)193), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 5686694169225732414LL)))))));
    }
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 13; i_3 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned long long int) var_14);
        var_20 ^= ((/* implicit */unsigned char) var_9);
    }
}
