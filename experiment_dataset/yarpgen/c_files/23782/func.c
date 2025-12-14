/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23782
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
    var_20 = ((/* implicit */_Bool) var_11);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) min((arr_0 [i_0 - 3] [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) * (((/* implicit */int) var_3))))))))));
        arr_4 [i_0] [i_0 - 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_0 [i_0] [i_0 + 1])))) ? (min((2132894646U), (((/* implicit */unsigned int) arr_2 [i_0] [i_0 + 1])))) : (((/* implicit */unsigned int) (+(min((((/* implicit */int) var_14)), (arr_2 [i_0] [i_0]))))))));
    }
    for (unsigned short i_1 = 2; i_1 < 20; i_1 += 3) 
    {
        arr_7 [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_1 - 2] [i_1 - 2])) ? (((/* implicit */unsigned long long int) ((((unsigned int) arr_5 [i_1] [i_1])) / (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)13143)) >= (((/* implicit */int) (short)13143))))))))) : (arr_6 [i_1] [i_1 + 1])));
        arr_8 [(unsigned short)14] [(unsigned short)14] = ((/* implicit */int) ((long long int) (unsigned char)20));
    }
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? ((~(((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) var_18)) ? ((+(((/* implicit */int) (short)13133)))) : (((/* implicit */int) var_1))))));
    var_22 = ((/* implicit */unsigned int) var_5);
    /* LoopNest 3 */
    for (long long int i_2 = 0; i_2 < 12; i_2 += 3) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 3) 
        {
            for (unsigned int i_4 = 0; i_4 < 12; i_4 += 3) 
            {
                {
                    arr_19 [i_2] [i_2] [i_2] = ((/* implicit */signed char) (-(((/* implicit */int) ((_Bool) arr_2 [i_2] [i_3])))));
                    var_23 = ((/* implicit */short) arr_2 [i_2] [i_2]);
                    arr_20 [i_2] [i_3] [i_2] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_14 [i_2] [i_2] [i_4]))));
                    arr_21 [i_4] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (~(((/* implicit */int) (short)13143))))), (((((/* implicit */_Bool) ((arr_11 [i_2] [i_2]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_2] [i_2] [i_2])))))) ? (min((((/* implicit */unsigned int) (short)13144)), (2162072650U))) : ((+(2162072650U)))))));
                }
            } 
        } 
    } 
}
