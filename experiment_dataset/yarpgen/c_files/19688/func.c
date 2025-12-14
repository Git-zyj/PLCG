/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19688
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
    var_14 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((short) var_7))))))));
    var_15 += ((/* implicit */signed char) 297463224);
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) (-(arr_0 [i_0])));
        var_16 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */int) var_7))))) ? (arr_0 [i_0]) : (arr_0 [i_0])));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            var_17 &= ((/* implicit */unsigned char) ((int) arr_1 [i_0] [i_1]));
            var_18 = ((/* implicit */short) ((((/* implicit */unsigned int) -297463225)) * (4095U)));
        }
        for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            var_19 ^= ((/* implicit */int) ((long long int) (short)(-32767 - 1)));
            var_20 = ((/* implicit */unsigned long long int) arr_5 [i_0] [i_2] [i_2]);
        }
        var_21 *= ((/* implicit */unsigned char) arr_6 [i_0] [i_0]);
    }
    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 2) 
    {
        var_22 = (!(((/* implicit */_Bool) ((unsigned char) arr_4 [i_3]))));
        arr_11 [i_3] [i_3] = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_4 [i_3])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)-13445)))))))));
    }
    /* LoopSeq 1 */
    for (short i_4 = 0; i_4 < 24; i_4 += 4) 
    {
        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_13 [i_4] [i_4])) ? (((/* implicit */int) arr_13 [i_4] [i_4])) : (((/* implicit */int) var_6))))))) ? (((/* implicit */int) arr_13 [i_4] [i_4])) : (((/* implicit */int) arr_13 [i_4] [i_4])))))));
        var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) max((var_8), (arr_12 [i_4]))))))))))));
    }
    var_25 = ((/* implicit */unsigned long long int) max((var_25), (((((((/* implicit */_Bool) ((((/* implicit */int) (short)32754)) + (297463224)))) ? (max((var_4), (((/* implicit */unsigned long long int) 297463218)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)(-127 - 1))) + (((/* implicit */int) (unsigned char)153))))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1))))))));
}
