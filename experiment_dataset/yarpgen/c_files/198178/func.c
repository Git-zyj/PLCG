/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198178
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
    /* vectorizable */
    for (short i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        arr_3 [(short)10] [(signed char)3] = ((/* implicit */signed char) (~(((/* implicit */int) arr_2 [i_0 + 2]))));
        arr_4 [i_0 - 1] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0] [i_0 - 3]))));
        arr_5 [(_Bool)1] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)64066)))))));
        /* LoopSeq 1 */
        for (long long int i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            arr_8 [i_0 - 3] [i_1] [(unsigned char)3] = ((/* implicit */unsigned char) (~(arr_6 [i_0 + 2] [i_1])));
            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_1 + 3])) || (((/* implicit */_Bool) arr_7 [i_1 + 1]))));
        }
        arr_9 [i_0] = ((/* implicit */_Bool) arr_6 [i_0] [i_0]);
    }
    for (long long int i_2 = 1; i_2 < 21; i_2 += 3) 
    {
        var_19 ^= ((/* implicit */_Bool) max(((+(min((arr_11 [(unsigned char)3]), (((/* implicit */unsigned int) arr_10 [(unsigned short)9] [i_2])))))), (((/* implicit */unsigned int) (!(((arr_11 [i_2]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2] [i_2]))))))))));
        var_20 = min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_10 [i_2 + 1] [(_Bool)1]))))), (((((/* implicit */_Bool) ((arr_11 [i_2]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2 - 1] [i_2])))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_8))))) : (max((((/* implicit */unsigned int) arr_10 [i_2 - 1] [i_2])), (arr_11 [(unsigned char)5]))))));
    }
    var_21 ^= ((/* implicit */long long int) ((max((((/* implicit */long long int) 0U)), (2784000248942990751LL))) < (min(((~(3268361520842612142LL))), (((/* implicit */long long int) (~(var_10))))))));
}
