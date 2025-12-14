/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216144
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
    var_15 = ((/* implicit */unsigned long long int) min((var_15), ((-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_11) && (((/* implicit */_Bool) var_10)))))) : (max((2305843008676823040ULL), (((/* implicit */unsigned long long int) (_Bool)0))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 3; i_0 < 24; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) var_13)) ? (64512U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44484))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (signed char i_2 = 3; i_2 < 24; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_1 [i_2 - 1] [i_2 + 1]))));
                    var_18 = (+(((/* implicit */int) arr_4 [i_2 - 2] [i_2] [i_2 - 2])));
                }
            } 
        } 
        var_19 = ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
        var_20 += ((/* implicit */long long int) ((0U) & (((/* implicit */unsigned int) (-2147483647 - 1)))));
        arr_6 [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_2 [i_0] [i_0 + 1] [i_0 + 1]))));
    }
    var_21 = ((((/* implicit */_Bool) var_7)) ? (min((min((((/* implicit */unsigned long long int) 1858770212)), (18446744073709551608ULL))), (var_12))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) var_10)), (var_1)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_3 = 2; i_3 < 16; i_3 += 4) 
    {
        arr_11 [i_3] = (unsigned char)203;
        /* LoopSeq 4 */
        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 1) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_4] [i_4])) ? ((+((-2147483647 - 1)))) : (((/* implicit */int) ((-1956056512) > (var_0))))));
            arr_15 [i_4] [(short)6] [(short)3] = ((/* implicit */unsigned char) 18446744073709551600ULL);
        }
        for (unsigned char i_5 = 0; i_5 < 17; i_5 += 1) /* same iter space */
        {
            var_23 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? ((+(((/* implicit */int) (signed char)101)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 1) 
            {
                var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((signed char) ((3744365598539056077ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1))))))))));
                arr_20 [i_6] [i_3] [i_3] [i_3] |= ((/* implicit */unsigned long long int) arr_8 [i_5]);
                /* LoopNest 2 */
                for (short i_7 = 1; i_7 < 14; i_7 += 4) 
                {
                    for (unsigned char i_8 = 0; i_8 < 17; i_8 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */signed char) (unsigned char)83);
                            var_26 &= ((/* implicit */unsigned int) (-(((int) 18446744073709551603ULL))));
                        }
                    } 
                } 
                arr_27 [i_5] [4] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)53)) ? (((/* implicit */unsigned long long int) var_13)) : (13ULL))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [(unsigned char)14])) ? (((/* implicit */int) arr_0 [(signed char)2])) : (((/* implicit */int) (unsigned char)52)))))));
                arr_28 [i_5] [i_5] [i_6] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_18 [i_3 + 1] [i_5]))));
            }
        }
        for (unsigned char i_9 = 0; i_9 < 17; i_9 += 1) /* same iter space */
        {
            arr_31 [i_3] [3ULL] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)52)) & (((/* implicit */int) (unsigned char)151))));
            arr_32 [i_9] [i_9] = ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((((/* implicit */_Bool) 10334977487618731058ULL)) || (((/* implicit */_Bool) (signed char)120))))) : (((/* implicit */int) (!(arr_9 [i_3])))));
        }
        for (unsigned char i_10 = 0; i_10 < 17; i_10 += 1) /* same iter space */
        {
            var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_3)))))));
            var_28 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) 33550336U)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)183))))) : (var_2)));
        }
        var_29 = ((/* implicit */long long int) (~(((/* implicit */int) (short)(-32767 - 1)))));
    }
}
