/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222839
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            arr_4 [i_1] [i_0] |= ((/* implicit */unsigned short) arr_2 [i_0]);
            var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) arr_0 [i_1]))));
            arr_5 [i_1] = ((((/* implicit */_Bool) 32767U)) ? (4294934525U) : (((/* implicit */unsigned int) 219095423)));
            var_15 *= ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 2031914931U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-71))) : (min((4294934506U), (((/* implicit */unsigned int) (short)7889))))))) != (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_10))))), (var_1)))));
            /* LoopSeq 1 */
            for (short i_2 = 1; i_2 < 15; i_2 += 1) 
            {
                var_16 += ((/* implicit */short) ((((/* implicit */int) max((var_13), ((unsigned short)52829)))) + (((/* implicit */int) (unsigned char)101))));
                arr_8 [i_0] [i_2] = ((/* implicit */_Bool) (((-(arr_2 [i_0]))) & (((/* implicit */int) var_6))));
            }
        }
        /* vectorizable */
        for (int i_3 = 4; i_3 < 17; i_3 += 2) 
        {
            var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) (~(arr_2 [i_3 - 3]))))));
            arr_12 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (unsigned char)96);
        }
        for (unsigned short i_4 = 2; i_4 < 17; i_4 += 4) 
        {
            var_18 ^= ((/* implicit */signed char) var_4);
            arr_15 [i_0] [i_4] [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) arr_7 [i_4] [i_4 - 2] [i_4])) ^ (-813623962))) - ((~(arr_13 [i_0])))));
            var_19 += ((/* implicit */signed char) max(((+((~(arr_3 [i_0]))))), (((/* implicit */unsigned int) arr_0 [i_4]))));
            /* LoopSeq 1 */
            for (unsigned char i_5 = 0; i_5 < 18; i_5 += 2) 
            {
                var_20 = ((/* implicit */unsigned short) var_1);
                arr_18 [i_0] [i_4] [i_5] |= ((/* implicit */short) var_12);
                var_21 = ((/* implicit */int) min((var_21), (((((((/* implicit */int) (signed char)-42)) & (((/* implicit */int) (signed char)64)))) + (((/* implicit */int) ((((/* implicit */unsigned int) arr_13 [i_4])) != (var_3))))))));
            }
        }
        var_22 = ((((/* implicit */unsigned long long int) arr_13 [i_0])) + (var_11));
        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) arr_0 [i_0]))));
        arr_19 [i_0] [i_0] &= ((/* implicit */long long int) ((var_7) & (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))));
        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_0 [i_0])), (32756U)))) ? (7741386594956861699ULL) : (7961665415096274848ULL))))));
    }
    for (signed char i_6 = 4; i_6 < 16; i_6 += 1) 
    {
        arr_24 [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-14945)) ? (0ULL) : (((/* implicit */unsigned long long int) 4294934529U))));
        var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) (~(((((/* implicit */_Bool) arr_22 [16ULL])) ? (((((/* implicit */_Bool) 4294934527U)) ? (((/* implicit */long long int) 32756U)) : (var_8))) : (((/* implicit */long long int) ((unsigned int) var_0))))))))));
    }
    var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) (-(var_10))))));
}
