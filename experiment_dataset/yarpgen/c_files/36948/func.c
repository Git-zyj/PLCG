/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36948
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
    var_11 = ((/* implicit */unsigned short) ((var_3) + (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_0 [i_0]))));
        var_13 = ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) && (((/* implicit */_Bool) arr_1 [i_0] [i_0])));
    }
    for (unsigned short i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        arr_5 [i_1] [i_1] = (+(max((arr_2 [i_1] [i_1]), (arr_2 [i_1] [i_1]))));
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            var_14 = ((/* implicit */unsigned long long int) max((((/* implicit */int) min((((short) (unsigned short)59723)), (((/* implicit */short) arr_0 [i_1]))))), (((int) ((((/* implicit */_Bool) (unsigned short)5828)) ? (((/* implicit */int) (unsigned short)59700)) : (((/* implicit */int) (unsigned short)59719)))))));
            /* LoopSeq 1 */
            for (unsigned short i_3 = 1; i_3 < 12; i_3 += 3) 
            {
                var_15 = ((/* implicit */short) ((((arr_9 [i_3 - 1] [i_3 - 1] [i_3 - 1]) < (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) % (((/* implicit */int) arr_3 [i_2]))))))) && (((/* implicit */_Bool) ((unsigned char) arr_9 [i_3 + 1] [i_3 - 1] [i_3 - 1])))));
                var_16 = ((/* implicit */signed char) max((arr_2 [i_1] [i_2]), (min(((-(((/* implicit */int) arr_6 [i_2])))), (((((/* implicit */_Bool) arr_12 [i_2])) ? (-1114989204) : (((/* implicit */int) var_9))))))));
                var_17 &= ((/* implicit */unsigned short) max((((/* implicit */int) (unsigned short)57804)), (1392921710)));
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_3 + 1] [i_3 + 2] [i_3 + 2] [i_3 + 3])) || (((/* implicit */_Bool) arr_9 [i_3 + 1] [i_3 + 2] [i_3 + 2]))))) << (((((/* implicit */int) min((arr_11 [i_3 + 1] [i_3 + 2] [i_3 + 2] [i_3 + 3]), (arr_11 [i_3 + 1] [i_3 + 2] [i_3 + 2] [i_3 + 3])))) + (14226)))));
            }
            var_19 = ((/* implicit */int) ((arr_8 [i_1] [i_2]) ^ ((~(var_2)))));
            var_20 += ((/* implicit */_Bool) min((max((arr_4 [i_2]), (arr_9 [i_1] [i_1] [i_1]))), (((/* implicit */unsigned int) var_9))));
        }
        arr_13 [i_1] = ((arr_9 [1] [1] [i_1]) ^ (((/* implicit */unsigned int) (~(((/* implicit */int) var_6))))));
        var_21 = ((/* implicit */short) arr_9 [i_1] [i_1] [i_1]);
    }
}
