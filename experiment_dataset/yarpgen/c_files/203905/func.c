/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203905
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
    var_19 = min((max((((/* implicit */int) ((var_17) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))), ((~(((/* implicit */int) var_15)))))), (((/* implicit */int) var_4)));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */signed char) (+(((arr_1 [i_0 - 1] [i_1]) << (((arr_1 [i_0 + 1] [i_0 + 1]) - (205987826)))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (((+(((((/* implicit */_Bool) (short)30948)) ? (((/* implicit */int) (unsigned char)188)) : (((/* implicit */int) (signed char)-111)))))) | (((/* implicit */int) max((var_11), (((/* implicit */unsigned short) ((((/* implicit */int) arr_4 [i_0 + 1] [i_1] [i_1])) <= (((/* implicit */int) (signed char)124))))))))));
                arr_7 [i_0] = ((/* implicit */unsigned short) (-(min((((/* implicit */int) (unsigned short)43095)), (((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (signed char)-121))))))));
                var_20 ^= ((/* implicit */short) ((((/* implicit */int) arr_2 [i_0])) < (((/* implicit */int) ((short) arr_1 [i_0 + 1] [i_0])))));
                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) arr_3 [i_0] [i_1] [13ULL])), (arr_1 [i_0 + 1] [i_0 + 1])))) ? (((/* implicit */int) (signed char)-20)) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_4 [i_1] [(unsigned char)9] [i_0 + 1])), ((unsigned short)20763))))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_2 = 0; i_2 < 19; i_2 += 2) 
    {
        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) arr_8 [i_2]))));
        var_23 += ((/* implicit */short) var_4);
        arr_12 [(short)5] [(short)5] = ((_Bool) ((unsigned short) (-(((/* implicit */int) (signed char)-99)))));
    }
}
