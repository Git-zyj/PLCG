/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24747
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
    var_15 &= ((/* implicit */int) var_4);
    var_16 = ((/* implicit */int) (+(0LL)));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (short)32767))));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                for (unsigned short i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    {
                        var_18 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)48)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) max((((/* implicit */unsigned short) (short)-32763)), (arr_5 [i_0] [i_1] [i_2] [i_3]))))));
                        var_19 = ((/* implicit */short) (-(((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */int) (unsigned short)2047)) : (((/* implicit */int) (short)32767))))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned short i_4 = 0; i_4 < 24; i_4 += 1) 
            {
                var_20 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (~(((/* implicit */int) (short)0))))) ? (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (short)-32748)) : (((/* implicit */int) (signed char)4)))) : (((/* implicit */int) (signed char)-20)))) == ((+(((/* implicit */int) (_Bool)1))))));
                var_21 = ((/* implicit */short) (unsigned short)0);
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned short i_6 = 0; i_6 < 24; i_6 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */long long int) max(((signed char)-20), ((signed char)27)));
                            arr_17 [i_0] [i_1] [i_0] [i_5] [i_1] |= ((/* implicit */_Bool) (unsigned short)0);
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned short i_7 = 0; i_7 < 24; i_7 += 3) 
            {
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 21; i_8 += 1) 
                {
                    for (int i_9 = 4; i_9 < 22; i_9 += 4) 
                    {
                        {
                            arr_26 [i_0] [i_7] [i_7] [i_8 - 1] [i_9] = ((/* implicit */signed char) (+(((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0]))));
                            var_23 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65535))));
                            var_24 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (signed char)38)) : (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (short)32763)) : (((/* implicit */int) (_Bool)1))))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */long long int) (signed char)0);
                var_26 -= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32763))) : ((-9223372036854775807LL - 1LL))))) || (((/* implicit */_Bool) ((18446744073709551615ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
            }
            var_27 = ((/* implicit */int) (short)32763);
            /* LoopSeq 1 */
            for (long long int i_10 = 0; i_10 < 24; i_10 += 4) 
            {
                arr_30 [i_1] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (short)32767))))), (((/* implicit */long long int) ((signed char) 536870911ULL)))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) : (0LL)));
                var_28 = (short)(-32767 - 1);
                /* LoopNest 2 */
                for (signed char i_11 = 2; i_11 < 22; i_11 += 4) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        {
                            var_29 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2147483641)) ? (((/* implicit */int) (unsigned short)127)) : (((/* implicit */int) (signed char)-1))));
                            var_30 &= ((((((/* implicit */_Bool) min((((/* implicit */int) (short)32767)), (0)))) && ((!(((/* implicit */_Bool) (short)-1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) 9223372036854775799LL)))))) : (18446744073709551610ULL));
                            arr_37 [i_12] [i_1] [i_10] [12ULL] [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (_Bool)0)), (arr_5 [i_1] [i_1] [i_10] [i_1])));
                            var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_12])) ? (((/* implicit */int) (unsigned short)20)) : (((/* implicit */int) (short)32767))));
                        }
                    } 
                } 
                arr_38 [i_0] [i_1] [i_10] &= ((/* implicit */unsigned long long int) var_0);
                var_32 = ((/* implicit */unsigned long long int) (((-(((((/* implicit */_Bool) (unsigned short)0)) ? (18446744073709551612ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))))))) > (((/* implicit */unsigned long long int) var_10))));
            }
        }
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            var_33 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))));
            var_34 -= ((/* implicit */unsigned long long int) (((~(((/* implicit */int) (signed char)(-127 - 1))))) <= ((~(67108863)))));
        }
        /* LoopNest 2 */
        for (signed char i_14 = 0; i_14 < 24; i_14 += 1) 
        {
            for (unsigned short i_15 = 0; i_15 < 24; i_15 += 4) 
            {
                {
                    var_35 = ((0) == (((/* implicit */int) (_Bool)1)));
                    var_36 = ((/* implicit */unsigned short) (~(min((((((/* implicit */_Bool) 0ULL)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)9))))), (((/* implicit */long long int) (unsigned short)192))))));
                }
            } 
        } 
    }
    var_37 |= ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)0))))) : (((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)65535)), (1073733632)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)98))) : (var_6)))));
}
