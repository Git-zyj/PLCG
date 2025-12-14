/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228704
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
    var_20 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */int) ((var_16) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))))) : (((/* implicit */int) min((((/* implicit */short) var_11)), (var_19))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)112))))) : ((-(((/* implicit */int) (unsigned short)27720))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (unsigned int i_2 = 3; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)-19388)))))))))));
                                var_22 = ((/* implicit */unsigned char) max((max((((/* implicit */int) (short)19402)), ((~(((/* implicit */int) arr_9 [i_1] [i_2] [i_3] [i_1])))))), (((/* implicit */int) ((unsigned short) max((4294967295U), (4294967295U)))))));
                            }
                        } 
                    } 
                    arr_13 [i_2] = ((/* implicit */unsigned long long int) var_15);
                    arr_14 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) arr_3 [i_0] [i_0 + 1] [i_0 + 1])) ? (9223372036854775808ULL) : (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0 + 1] [i_0 - 2] [i_0] [10U])))));
                    var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) max(((+(8969451983228671140ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_4)), (66507884U)))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_5 = 1; i_5 < 15; i_5 += 2) 
    {
        var_24 = ((/* implicit */unsigned char) (!(((arr_16 [i_5 - 1]) < (((/* implicit */int) arr_15 [i_5 - 1]))))));
        arr_18 [2ULL] [i_5 + 2] = (!(((/* implicit */_Bool) ((long long int) 1LL))));
    }
    /* vectorizable */
    for (long long int i_6 = 1; i_6 < 15; i_6 += 4) 
    {
        arr_22 [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_3))));
        arr_23 [i_6] = ((_Bool) (short)19402);
        /* LoopNest 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (int i_8 = 1; i_8 < 15; i_8 += 4) 
            {
                {
                    var_25 = ((/* implicit */signed char) var_16);
                    arr_31 [i_6] [5LL] [5LL] = ((/* implicit */unsigned char) ((signed char) var_4));
                    /* LoopSeq 1 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        arr_34 [i_6] [i_7] [i_8] [i_9] = ((/* implicit */_Bool) -5);
                        /* LoopSeq 1 */
                        for (unsigned char i_10 = 0; i_10 < 16; i_10 += 2) 
                        {
                            arr_37 [i_6] [i_7] [i_8 + 1] [i_9] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_6 + 1])) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_19))) : (8725724278030336LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)28)))));
                            arr_38 [i_10] [i_10] [i_8] [i_8] [4U] [0LL] [i_8] |= (+(((/* implicit */int) arr_15 [i_8 + 1])));
                            arr_39 [i_10] [i_6] [i_8 - 1] [i_6] [3U] = ((/* implicit */unsigned long long int) 240);
                        }
                        var_26 &= ((/* implicit */_Bool) (-(var_15)));
                    }
                }
            } 
        } 
        arr_40 [(unsigned short)9] [i_6] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)63864))));
    }
    var_27 *= ((/* implicit */short) var_9);
}
