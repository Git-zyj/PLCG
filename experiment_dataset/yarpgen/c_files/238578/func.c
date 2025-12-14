/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238578
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
    var_19 = ((/* implicit */_Bool) var_6);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        var_20 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_0 [i_0 + 1]))), (((arr_0 [i_0 - 3]) | (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 - 1])))))));
        var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_0 [i_0])))) ? ((~(((/* implicit */int) var_15)))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) var_4)))))))));
        arr_4 [i_0 - 3] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */int) (signed char)(-127 - 1))) % (((/* implicit */int) (signed char)47))))) ? (((((/* implicit */_Bool) var_3)) ? (arr_1 [i_0 - 2]) : (arr_1 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 + 1])))))));
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-21674)) ? (((/* implicit */int) (signed char)54)) : (((/* implicit */int) (_Bool)1))));
        arr_5 [i_0] = ((/* implicit */unsigned short) arr_2 [i_0 - 1]);
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_2 = 2; i_2 < 11; i_2 += 1) 
        {
            var_23 = ((/* implicit */unsigned int) var_15);
            arr_10 [i_1] [i_1] = ((((/* implicit */_Bool) arr_7 [i_2 - 1] [i_2 + 2])) ? ((~(((/* implicit */int) var_15)))) : (((/* implicit */int) arr_7 [i_2 + 1] [i_2 + 1])));
        }
        for (unsigned short i_3 = 3; i_3 < 12; i_3 += 1) 
        {
            arr_14 [i_3] [i_1] [i_1] = ((((/* implicit */_Bool) arr_11 [i_3 - 1] [i_3 - 1])) ? (((/* implicit */unsigned long long int) (-(arr_0 [i_3])))) : (arr_11 [i_3 + 1] [i_3]));
            var_24 = (~(((/* implicit */int) var_2)));
            arr_15 [i_1] [i_1] [i_3] = ((/* implicit */signed char) (+(((/* implicit */int) arr_7 [(signed char)6] [i_3 - 3]))));
        }
        arr_16 [i_1] = (~(((((/* implicit */int) var_0)) / (((/* implicit */int) arr_6 [i_1])))));
    }
    for (signed char i_4 = 0; i_4 < 11; i_4 += 1) 
    {
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_3 [i_4]), (((/* implicit */unsigned short) var_3))))) ? ((-(((/* implicit */int) arr_2 [i_4])))) : ((~(((/* implicit */int) (signed char)124))))));
        var_26 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_4] [i_4] [i_4])) ^ (((/* implicit */int) arr_8 [i_4] [i_4]))))) ? (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) var_9)) : (var_5)))) ? (((/* implicit */int) min(((short)-1), ((short)19124)))) : ((~(((/* implicit */int) arr_8 [i_4] [i_4])))))) : (((int) (~(arr_11 [i_4] [i_4]))))));
        var_27 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) max((arr_7 [i_4] [i_4]), (var_8)))))))));
    }
    /* LoopNest 2 */
    for (short i_5 = 0; i_5 < 17; i_5 += 1) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 1) 
        {
            {
                var_28 = (-((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_5] [i_6]))))))));
                var_29 = ((((/* implicit */_Bool) arr_22 [i_5])) ? (((/* implicit */int) ((arr_22 [i_5]) == (arr_22 [i_6])))) : (((/* implicit */int) ((arr_22 [i_5]) > (arr_22 [i_6])))));
                arr_25 [i_5] [i_6] = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (-(18446744073709551615ULL)))))))));
                arr_26 [i_5] [i_6] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)104))));
            }
        } 
    } 
    var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) var_12))));
}
