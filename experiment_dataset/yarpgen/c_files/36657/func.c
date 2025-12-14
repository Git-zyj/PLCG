/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36657
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = (-(4503599627370495LL));
        var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((((/* implicit */int) ((4294967295U) != (13U)))) <= (((/* implicit */int) (((!((_Bool)0))) || (((/* implicit */_Bool) arr_0 [i_0]))))))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_8 [(short)17] [i_2] [i_2 + 1] [i_2] = ((/* implicit */long long int) ((((/* implicit */long long int) max((((/* implicit */int) var_1)), (((((/* implicit */_Bool) (unsigned short)26080)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)-9717))))))) != (max((((/* implicit */long long int) (unsigned short)26077)), (4503599627370494LL)))));
                    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_0]))))), ((+(16106127360ULL))))), (((/* implicit */unsigned long long int) ((36U) > (0U)))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_3 = 1; i_3 < 24; i_3 += 1) 
        {
            for (long long int i_4 = 0; i_4 < 25; i_4 += 2) 
            {
                {
                    var_15 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 13U)) ? (((((/* implicit */_Bool) 1152921504606846720LL)) ? (((/* implicit */int) (unsigned char)5)) : (((/* implicit */int) (unsigned short)12)))) : (((((/* implicit */_Bool) 1152921504606846720LL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)65535)))))) >> (((min(((~(((/* implicit */int) arr_5 [i_0])))), (((/* implicit */int) var_2)))) + (4)))));
                    arr_13 [(unsigned short)12] [(unsigned short)12] [i_3] [i_4] = ((/* implicit */unsigned char) (-((+(((/* implicit */int) (_Bool)0))))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 3; i_6 < 24; i_6 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */int) (+(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)118))) % (8191U)))));
                                var_17 = ((/* implicit */unsigned int) arr_17 [i_6 - 3] [i_6] [(unsigned short)23] [i_6] [i_6 - 3]);
                                arr_20 [i_0] [i_0] [i_3] [i_4] [i_5] [i_6] = ((/* implicit */long long int) (-(min((((/* implicit */int) arr_12 [i_3 - 1] [i_6 - 3] [i_6 + 1])), (((((/* implicit */int) var_3)) % (((/* implicit */int) (_Bool)1))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_7 = 0; i_7 < 25; i_7 += 4) 
                    {
                        for (unsigned char i_8 = 1; i_8 < 24; i_8 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) 9223372036854775807LL);
                                arr_26 [i_3] = ((/* implicit */_Bool) arr_25 [i_0] [(_Bool)1] [i_4] [i_7] [i_8]);
                                var_19 ^= ((/* implicit */unsigned short) ((((/* implicit */long long int) (-(arr_10 [i_3 - 1] [i_8 - 1] [i_8])))) != (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (-1LL)))));
                                arr_27 [i_4] [i_7] &= ((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)37111)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) << (((arr_14 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_8 - 1]) - (30807467688471317LL))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_28 [i_0] = min(((+(((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0])))), (((((/* implicit */int) (unsigned short)20)) ^ (((/* implicit */int) (unsigned short)28425)))));
    }
    var_20 = ((/* implicit */unsigned short) var_6);
}
