/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190106
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
    for (long long int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_8 [(unsigned char)9] = ((/* implicit */unsigned long long int) (-(max((((/* implicit */long long int) var_7)), (arr_4 [i_1 + 1] [i_0 + 1] [i_0 + 2])))));
                    var_11 = ((/* implicit */long long int) max((((/* implicit */unsigned int) (!(((((/* implicit */_Bool) var_6)) && (arr_2 [i_1 + 1])))))), (arr_3 [i_2] [i_1 + 1] [i_0])));
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */signed char) (-((~(((/* implicit */int) var_9))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (short i_3 = 0; i_3 < 12; i_3 += 1) 
    {
        var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) arr_11 [i_3]))));
        arr_12 [i_3] = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_5)))) / ((~((~(((/* implicit */int) (unsigned char)120))))))));
        var_13 = ((/* implicit */unsigned short) (+(((1162310904U) - (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
    }
    /* vectorizable */
    for (unsigned char i_4 = 1; i_4 < 11; i_4 += 3) 
    {
        var_14 = ((/* implicit */unsigned int) var_1);
        var_15 ^= ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) arr_1 [i_4 + 2])) ? (arr_4 [i_4] [i_4] [i_4 + 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_4 + 2] [1LL]))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)190))));
        var_16 = ((/* implicit */signed char) 791208499U);
        arr_15 [i_4] = ((/* implicit */short) ((_Bool) arr_2 [(_Bool)1]));
    }
}
