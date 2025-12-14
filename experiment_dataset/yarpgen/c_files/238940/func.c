/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238940
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
    var_12 = ((/* implicit */unsigned int) var_1);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 3; i_0 < 23; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) ((signed char) (!(((/* implicit */_Bool) ((unsigned short) arr_1 [i_0]))))));
        var_13 = ((/* implicit */_Bool) max(((~(((unsigned long long int) (signed char)31)))), (((/* implicit */unsigned long long int) max((var_11), (arr_1 [i_0 - 3]))))));
    }
    for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            arr_11 [i_1] = ((/* implicit */int) max(((unsigned short)1023), ((unsigned short)64494)));
            var_14 |= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_2 [(signed char)4])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((/* implicit */int) (short)28551))))));
            var_15 = (signed char)22;
        }
        for (signed char i_3 = 2; i_3 < 8; i_3 += 4) 
        {
            arr_15 [(unsigned char)8] [i_1] = ((/* implicit */signed char) arr_3 [i_3 + 3]);
            var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (signed char)-96))));
        }
        arr_16 [i_1] [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_13 [i_1]))));
    }
    /* vectorizable */
    for (signed char i_4 = 3; i_4 < 11; i_4 += 4) 
    {
        /* LoopSeq 2 */
        for (signed char i_5 = 0; i_5 < 12; i_5 += 2) 
        {
            arr_23 [i_4] = ((/* implicit */signed char) (-(((/* implicit */int) arr_1 [i_5]))));
            var_17 = ((/* implicit */signed char) (-(((/* implicit */int) arr_18 [i_4] [i_5]))));
            arr_24 [i_4] = ((signed char) var_4);
            var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) var_1)) != (((/* implicit */int) arr_2 [i_4 - 2]))));
            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_4 - 2])) ? (((/* implicit */int) arr_2 [i_4 - 1])) : (((/* implicit */int) arr_2 [i_4 - 1]))));
        }
        for (unsigned int i_6 = 2; i_6 < 8; i_6 += 4) 
        {
            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) var_7))));
            var_21 = arr_25 [i_4] [i_4] [i_6];
        }
        var_22 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_28 [i_4])) ? ((-(15226301985906625978ULL))) : (((/* implicit */unsigned long long int) var_6))));
    }
    var_23 = ((/* implicit */unsigned long long int) var_7);
    var_24 |= (~(85778160U));
}
