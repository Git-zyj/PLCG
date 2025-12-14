/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200073
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
    var_19 |= ((/* implicit */signed char) ((((/* implicit */_Bool) 2019986390554420756ULL)) || (((/* implicit */_Bool) 4294967293U))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) 3U)) > (var_10)))) % (((/* implicit */int) var_3))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_20 = ((/* implicit */_Bool) arr_0 [i_0]);
                        arr_10 [i_0] [(_Bool)1] [i_0] [i_3] [i_0] = ((/* implicit */signed char) ((unsigned char) arr_8 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1] [i_1 + 2]));
                    }
                    var_21 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0] [(signed char)0])) ? (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) arr_6 [i_0] [i_0] [(unsigned short)9])) : (((/* implicit */int) var_7)))) : (((/* implicit */int) arr_9 [i_0] [i_1 - 2] [i_2] [i_1] [i_1]))));
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned short) ((11030873077357585704ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0])))));
        var_23 = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) (unsigned short)51935)) ? (7415870996351965912ULL) : (((/* implicit */unsigned long long int) 1U)))));
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) == (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))));
    }
}
