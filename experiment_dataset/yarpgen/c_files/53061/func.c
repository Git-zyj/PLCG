/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53061
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
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            {
                arr_4 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) arr_1 [i_0 - 1])), (((((/* implicit */_Bool) (unsigned short)32713)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned short)32726))))))) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) arr_2 [i_1] [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) arr_2 [i_1] [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) var_12))))));
                var_18 = ((/* implicit */unsigned char) ((short) arr_2 [i_1] [i_1 - 1] [i_1]));
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned char) (-(((((((/* implicit */int) (unsigned short)5462)) - (((/* implicit */int) var_6)))) % ((~(((/* implicit */int) arr_3 [i_0] [i_1]))))))));
                var_19 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)60069))));
                var_20 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_3) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_8)) >= (((/* implicit */int) var_9))))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)5484)) || (((/* implicit */_Bool) arr_3 [i_1 + 1] [i_0 + 1]))))) : (((/* implicit */int) arr_0 [(short)1] [(short)1]))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_2 = 2; i_2 < 11; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 2) 
        {
            for (short i_4 = 0; i_4 < 13; i_4 += 4) 
            {
                {
                    var_21 ^= ((/* implicit */signed char) ((short) (+(((/* implicit */int) arr_2 [i_3] [i_3] [i_2 + 2])))));
                    arr_13 [i_2] [i_3] [i_4] [i_3] = ((/* implicit */signed char) ((short) ((short) arr_7 [i_2 - 1])));
                    arr_14 [i_2 + 2] [i_2 + 2] [i_4] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_10 [i_2 - 2] [i_2 - 2] [i_4]))) ? ((+((-(((/* implicit */int) var_12)))))) : (((/* implicit */int) ((((var_17) * (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2]))))) < (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_2] [i_2] [i_2 + 1]))))))));
                    arr_15 [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_15))));
                    var_22 -= ((/* implicit */signed char) max((((/* implicit */unsigned int) var_10)), (arr_9 [i_2] [i_3])));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) var_10))));
}
