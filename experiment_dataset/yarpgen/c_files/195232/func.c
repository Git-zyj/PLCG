/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195232
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
    for (signed char i_0 = 3; i_0 < 13; i_0 += 3) 
    {
        var_15 = 548864338U;
        arr_4 [(_Bool)1] [(_Bool)1] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 548864341U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) : (var_7)))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (short)0))))) : (max((min((3746102957U), (((/* implicit */unsigned int) arr_1 [14U])))), (var_0)))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_2 = 2; i_2 < 14; i_2 += 1) 
            {
                var_16 = ((/* implicit */_Bool) (short)7);
                arr_10 [i_1] [i_0] = ((/* implicit */int) var_10);
                /* LoopSeq 1 */
                for (long long int i_3 = 0; i_3 < 15; i_3 += 2) 
                {
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-5140)) ? (((/* implicit */long long int) var_7)) : (var_12)))) : ((~(var_5)))));
                    var_18 += ((/* implicit */unsigned int) ((signed char) 548864339U));
                    arr_14 [i_3] [i_3] [i_2] [i_3] [i_0] &= ((/* implicit */_Bool) (~(arr_8 [i_3] [i_2] [i_2 - 1] [i_2])));
                    var_19 = ((/* implicit */unsigned char) (-(arr_2 [i_0 - 2] [i_2 - 1])));
                    var_20 = (!(((/* implicit */_Bool) var_11)));
                }
                var_21 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_11 [i_0] [(signed char)2] [(signed char)2] [i_2] [i_2]) : (((/* implicit */long long int) arr_0 [(_Bool)1]))));
            }
            var_22 = ((/* implicit */long long int) (+(max((((/* implicit */unsigned int) arr_7 [i_1 + 1] [i_0] [i_1 + 2] [i_1])), (2727232216U)))));
        }
        for (int i_4 = 0; i_4 < 15; i_4 += 4) 
        {
            var_23 = ((/* implicit */long long int) (short)7);
            arr_17 [i_0] [i_4] = ((/* implicit */unsigned char) 0ULL);
            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) arr_5 [i_0 - 1] [i_0 - 3] [i_0 - 2]))));
        }
    }
    var_25 = ((/* implicit */_Bool) var_4);
}
