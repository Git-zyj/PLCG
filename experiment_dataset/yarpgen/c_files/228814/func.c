/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228814
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        /* LoopSeq 4 */
        for (unsigned short i_1 = 3; i_1 < 19; i_1 += 2) 
        {
            var_18 = ((/* implicit */unsigned long long int) min((var_5), (((/* implicit */unsigned short) arr_4 [i_1]))));
            var_19 = ((/* implicit */unsigned int) max((((/* implicit */int) min((arr_3 [i_1 + 1] [i_1] [i_0]), (max((((/* implicit */unsigned char) (signed char)-123)), ((unsigned char)57)))))), ((+(((/* implicit */int) arr_4 [i_1 - 2]))))));
            var_20 = ((/* implicit */int) (!(((((int) var_1)) < (((/* implicit */int) var_15))))));
            arr_5 [i_0] [(signed char)3] = ((/* implicit */int) var_0);
            arr_6 [i_1 - 3] [(_Bool)1] [0U] = ((/* implicit */unsigned int) (~((+(var_6)))));
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 17; i_2 += 3) 
        {
            var_21 = ((/* implicit */int) (!((_Bool)1)));
            arr_11 [i_0] [i_2 + 3] [i_2 - 1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_15)))))));
        }
        for (signed char i_3 = 0; i_3 < 20; i_3 += 1) /* same iter space */
        {
            arr_14 [13] [i_3] [i_3] = ((/* implicit */int) ((unsigned char) max(((+(var_7))), (((/* implicit */unsigned long long int) arr_12 [i_3] [i_3])))));
            var_22 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((signed char) arr_8 [i_3])))));
        }
        for (signed char i_4 = 0; i_4 < 20; i_4 += 1) /* same iter space */
        {
            var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((unsigned short) max((min((((/* implicit */unsigned long long int) var_11)), (var_4))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8)))))))))));
            arr_18 [i_0] = ((/* implicit */signed char) ((unsigned char) var_4));
        }
        var_24 *= ((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) arr_13 [(unsigned char)6])), (var_0)))), ((+(var_4))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [(unsigned short)18] [i_0] [i_0])))))));
        arr_19 [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_13)), (min((arr_0 [i_0]), (arr_0 [i_0])))));
    }
    var_25 = ((/* implicit */unsigned int) max((((/* implicit */int) var_10)), (max(((+(((/* implicit */int) (signed char)-110)))), (((/* implicit */int) var_14))))));
    var_26 -= ((/* implicit */_Bool) (-(var_3)));
}
