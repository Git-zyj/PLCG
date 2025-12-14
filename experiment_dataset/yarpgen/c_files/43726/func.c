/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43726
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                arr_9 [i_2] = ((var_8) / (((/* implicit */unsigned long long int) (~(arr_6 [i_2] [i_2] [i_0])))));
                arr_10 [i_2] [17LL] [i_2] = ((((/* implicit */int) (short)32767)) >> (((/* implicit */int) arr_4 [i_2] [i_1] [i_0])));
            }
            arr_11 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) min((arr_3 [i_0] [i_1] [i_1]), (arr_3 [i_0] [(short)15] [i_1])))) << (((/* implicit */int) min((((/* implicit */signed char) arr_3 [i_1] [i_1] [i_0])), ((signed char)59))))));
        }
        var_15 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
    }
    var_16 *= ((/* implicit */short) (-(max((var_3), (((/* implicit */long long int) min(((short)-28342), (((/* implicit */short) var_5)))))))));
    /* LoopSeq 1 */
    for (unsigned char i_3 = 2; i_3 < 11; i_3 += 1) 
    {
        arr_15 [i_3] = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) arr_7 [i_3] [i_3 + 1] [i_3 - 1])), (min((((/* implicit */unsigned long long int) var_1)), (var_10))))) / (((/* implicit */unsigned long long int) arr_14 [i_3]))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_4 = 1; i_4 < 9; i_4 += 1) 
        {
            arr_20 [i_3] = ((/* implicit */unsigned int) arr_3 [i_3] [i_3] [i_3]);
            var_17 = ((/* implicit */unsigned int) (((+(((/* implicit */int) var_5)))) % ((~(((/* implicit */int) (_Bool)0))))));
        }
        arr_21 [i_3] = ((/* implicit */unsigned short) ((max((((((/* implicit */int) (short)16580)) >> (((var_8) - (13598527077743096432ULL))))), (((/* implicit */int) var_6)))) + (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_3] [i_3])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1))))) || (arr_18 [i_3] [i_3 - 1] [i_3 - 2]))))));
    }
}
