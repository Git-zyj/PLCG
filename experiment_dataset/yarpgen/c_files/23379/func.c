/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23379
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
    var_18 = ((/* implicit */int) ((((/* implicit */long long int) 63)) % (((long long int) var_12))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_19 -= ((-9223372036854775792LL) > (((/* implicit */long long int) ((/* implicit */int) (short)-15867))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    var_20 -= ((((/* implicit */int) arr_3 [i_0] [i_2])) >= (((/* implicit */int) ((unsigned char) 71))));
                    arr_8 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_1 [i_2] [(signed char)3]))));
                    var_21 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [i_1]))) + (arr_5 [i_2])))) ? (((var_17) / (-1934871806))) : (((int) -63))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 3) /* same iter space */
        {
            var_22 = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) && ((!(((/* implicit */_Bool) arr_5 [i_0]))))));
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 2; i_4 < 11; i_4 += 3) 
            {
                for (unsigned int i_5 = 1; i_5 < 10; i_5 += 3) 
                {
                    {
                        var_23 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) -70)) ? (((/* implicit */int) arr_1 [i_5 - 1] [i_4 + 2])) : ((-(((/* implicit */int) arr_3 [(signed char)1] [(signed char)1]))))));
                        var_24 -= ((/* implicit */unsigned long long int) ((short) ((arr_11 [i_3] [i_4] [i_5]) > (((/* implicit */long long int) ((/* implicit */int) (unsigned char)250))))));
                        var_25 += (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_5 - 1])) ? (arr_13 [i_0] [i_3] [i_4] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))));
                        var_26 |= ((/* implicit */_Bool) arr_14 [i_5 + 2] [i_0] [i_3] [i_0]);
                    }
                } 
            } 
            var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((unsigned char) arr_5 [i_0])))));
            var_28 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)127))))) ? (((((/* implicit */int) arr_4 [i_3])) / (((/* implicit */int) arr_9 [i_0] [i_3])))) : ((+(((/* implicit */int) var_1))))));
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 13; i_6 += 1) 
            {
                for (signed char i_7 = 0; i_7 < 13; i_7 += 4) 
                {
                    for (long long int i_8 = 1; i_8 < 11; i_8 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (signed char)-127)) : (((/* implicit */int) (!(((/* implicit */_Bool) -78)))))));
                            arr_24 [i_0] [i_8] [(_Bool)1] [i_0] [i_8 - 1] = ((/* implicit */signed char) ((arr_17 [i_8 - 1] [i_8 + 1] [i_8 + 2] [i_8 + 2]) << (((((/* implicit */int) arr_3 [i_0] [10LL])) - (62912)))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned short i_10 = 0; i_10 < 13; i_10 += 3) 
            {
                for (unsigned long long int i_11 = 0; i_11 < 13; i_11 += 2) 
                {
                    {
                        var_30 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_8))) & (arr_31 [i_9] [i_9] [i_10] [i_10] [i_10] [i_10])));
                        arr_32 [i_11] [i_11] [i_11] [i_11] [i_11] [i_9] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_22 [(signed char)7] [i_9] [i_9] [i_11] [i_11]))));
                    }
                } 
            } 
            var_31 += ((/* implicit */unsigned int) var_1);
        }
    }
    /* vectorizable */
    for (int i_12 = 1; i_12 < 13; i_12 += 1) 
    {
        var_32 -= ((/* implicit */short) arr_33 [i_12 - 1]);
        var_33 -= ((/* implicit */signed char) ((((((/* implicit */int) arr_33 [i_12])) >= (((/* implicit */int) var_12)))) ? ((+(((/* implicit */int) arr_33 [i_12])))) : (((/* implicit */int) ((((/* implicit */int) var_12)) < (((/* implicit */int) (short)-21573)))))));
        var_34 ^= ((/* implicit */unsigned char) ((((/* implicit */long long int) (~(((/* implicit */int) arr_33 [i_12]))))) >= (arr_34 [i_12 + 1])));
    }
}
