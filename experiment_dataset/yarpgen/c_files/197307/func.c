/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197307
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
    /* LoopSeq 2 */
    for (int i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) var_9);
        arr_3 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) var_0))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 3; i_1 < 16; i_1 += 1) 
        {
            arr_6 [i_1] [i_0 - 1] = ((/* implicit */unsigned long long int) var_16);
            var_20 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_6)) >= (((/* implicit */int) var_15)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) arr_5 [(unsigned char)12] [i_1])) : (arr_4 [i_0 - 1] [i_0 - 1])))));
            arr_7 [i_1] [(signed char)14] [(unsigned short)6] = ((/* implicit */signed char) ((arr_4 [i_0 + 1] [i_0 - 1]) < (arr_4 [i_0 - 2] [i_0 - 1])));
            var_21 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_18)) && (((/* implicit */_Bool) (signed char)-110)))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) ((8062798470617189819LL) < (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))))))));
        }
        var_22 = ((/* implicit */unsigned long long int) max((((/* implicit */signed char) ((2147483629) >= (var_2)))), ((signed char)42)));
        var_23 = ((/* implicit */long long int) ((var_1) <= (((((/* implicit */int) ((var_13) <= (((/* implicit */long long int) ((/* implicit */int) var_16)))))) & (((/* implicit */int) ((var_19) <= (var_2))))))));
    }
    for (unsigned long long int i_2 = 2; i_2 < 19; i_2 += 4) 
    {
        arr_11 [i_2] = ((/* implicit */short) ((((((/* implicit */_Bool) min((((/* implicit */int) arr_9 [i_2])), (-6)))) ? ((~(-8062798470617189807LL))) : (8062798470617189827LL))) <= (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) (signed char)-102)) & (((/* implicit */int) var_8)))) <= (((/* implicit */int) (signed char)-21))))))));
        var_24 = ((/* implicit */unsigned int) var_18);
    }
    var_25 = ((/* implicit */short) ((long long int) var_18));
    var_26 = ((/* implicit */signed char) var_1);
    var_27 = ((/* implicit */int) var_16);
}
