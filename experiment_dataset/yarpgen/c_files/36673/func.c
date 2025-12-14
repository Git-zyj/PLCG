/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36673
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
    var_10 &= 2147483647;
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) var_0))));
        var_12 = ((/* implicit */unsigned short) arr_2 [i_0 + 2]);
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 10; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 2; i_3 < 8; i_3 += 3) 
                {
                    {
                        arr_11 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) arr_8 [i_0 + 2] [i_2 - 1] [i_3 + 2]))));
                        var_13 = ((/* implicit */short) (((~(-1943413746))) & (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (1180911689) : (((/* implicit */int) (short)30025))))));
                        var_14 -= ((((var_6) - (((/* implicit */unsigned int) ((/* implicit */int) ((var_6) > (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))))) != (((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_0 + 1] [i_0 + 2] [i_0])) + (((/* implicit */int) arr_8 [i_3] [i_1] [i_0]))))));
                    }
                } 
            } 
        } 
        var_15 = ((/* implicit */unsigned short) max(((-(var_5))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) arr_4 [i_0] [i_0 - 1]))))));
    }
    for (long long int i_4 = 2; i_4 < 21; i_4 += 1) 
    {
        var_16 = ((/* implicit */unsigned short) ((((((((/* implicit */int) (short)24327)) != (((/* implicit */int) (unsigned char)208)))) ? (18446744073709551594ULL) : (((/* implicit */unsigned long long int) ((unsigned int) var_4))))) * (((/* implicit */unsigned long long int) ((9223372036854775807LL) + (((/* implicit */long long int) ((/* implicit */int) (short)-32760))))))));
        arr_15 [i_4] &= ((/* implicit */_Bool) min((4294967284U), (((/* implicit */unsigned int) min(((-(((/* implicit */int) (unsigned short)0)))), (((/* implicit */int) (short)-24327)))))));
    }
    var_17 |= ((/* implicit */long long int) var_7);
    var_18 ^= ((/* implicit */signed char) ((int) var_4));
    var_19 = ((/* implicit */_Bool) var_7);
}
