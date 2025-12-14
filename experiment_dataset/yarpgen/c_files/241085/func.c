/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241085
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
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */_Bool) (unsigned short)65535);
                /* LoopNest 3 */
                for (short i_2 = 2; i_2 < 18; i_2 += 4) 
                {
                    for (unsigned short i_3 = 1; i_3 < 19; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (~(-1624611919))))));
                                var_19 = ((/* implicit */short) min((((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22))) : (18446744073709551615ULL))), (((/* implicit */unsigned long long int) (+(var_5))))));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((short) ((((/* implicit */int) (signed char)(-127 - 1))) > (((/* implicit */int) (unsigned short)17)))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_5 = 0; i_5 < 22; i_5 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 3) 
                    {
                        for (int i_7 = 0; i_7 < 22; i_7 += 1) 
                        {
                            {
                                var_20 -= ((/* implicit */unsigned short) var_3);
                                arr_23 [i_0] [i_1] [i_1] [i_1] &= ((/* implicit */int) ((((arr_3 [i_6]) * (arr_14 [i_0] [i_1] [i_5] [i_6] [i_7]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)126)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_8 = 0; i_8 < 22; i_8 += 1) 
                    {
                        for (int i_9 = 0; i_9 < 22; i_9 += 3) 
                        {
                            {
                                arr_30 [(_Bool)1] [i_1] [i_1] [(_Bool)1] = ((/* implicit */short) var_4);
                                arr_31 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) (unsigned short)1))))) : (((/* implicit */int) ((arr_25 [i_0] [12LL]) == (18446744073709551615ULL))))));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_10 = 2; i_10 < 19; i_10 += 2) 
                {
                    arr_35 [i_0] [i_1] [i_0] [i_0] &= ((/* implicit */long long int) (+(((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_10)))))) % (1794518067U)))));
                    var_21 ^= ((/* implicit */unsigned long long int) (signed char)(-127 - 1));
                }
                var_22 *= ((/* implicit */unsigned int) (+(((/* implicit */int) ((_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned short)65518))))))));
                /* LoopNest 3 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (unsigned short i_12 = 2; i_12 < 21; i_12 += 3) 
                    {
                        for (signed char i_13 = 3; i_13 < 21; i_13 += 1) 
                        {
                            {
                                var_23 -= ((((/* implicit */unsigned long long int) ((arr_11 [i_1] [i_12] [i_1] [i_12] [i_12 - 2] [i_12]) ? (((/* implicit */int) (signed char)81)) : (((/* implicit */int) arr_11 [i_11] [i_11] [i_11] [18] [i_12 + 1] [i_12]))))) * (min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (signed char)31)), ((unsigned short)9)))), (8954038149933400682ULL))));
                                var_24 = ((/* implicit */int) ((((((/* implicit */int) (signed char)36)) - (((/* implicit */int) arr_13 [i_12] [i_12] [i_12] [i_12 + 1] [i_12])))) != (((/* implicit */int) (signed char)15))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */_Bool) 68719476735ULL);
    var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) (+(var_0))))));
    var_27 = ((/* implicit */_Bool) ((max(((~(1ULL))), (((/* implicit */unsigned long long int) var_3)))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_2)) > (((((/* implicit */_Bool) (unsigned short)65518)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_16)))))))));
}
