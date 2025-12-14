/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53256
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
    var_13 = ((/* implicit */unsigned int) var_6);
    var_14 = ((/* implicit */long long int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32760))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32739))) ^ (var_12))))), (((/* implicit */unsigned long long int) 2023311254U))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            arr_4 [i_0 - 1] [i_1] [i_1] |= ((/* implicit */long long int) (+(min((3701538823U), (((/* implicit */unsigned int) var_5))))));
            /* LoopSeq 4 */
            /* vectorizable */
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                /* LoopSeq 1 */
                for (long long int i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1 - 2] [i_3] [i_2] [i_0 - 1])))));
                    /* LoopSeq 2 */
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        var_16 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)0))));
                        var_17 *= ((/* implicit */unsigned int) (((((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) << (((9223372036854775807LL) - (9223372036854775807LL))))) << (((3689042942U) - (3689042942U)))));
                        var_18 = ((/* implicit */short) ((unsigned int) arr_12 [i_4 - 1] [i_4 - 1] [i_4] [i_4 - 1] [i_4 - 1]));
                    }
                    for (unsigned long long int i_5 = 2; i_5 < 15; i_5 += 4) 
                    {
                        var_19 = ((/* implicit */long long int) ((var_6) ? (((unsigned long long int) var_6)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_5] [i_5 + 3] [2ULL] [i_5 + 1] [(short)15])))));
                        var_20 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? (((((/* implicit */_Bool) 593428493U)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_1] [i_3] [i_2] [i_1]))))) : (((/* implicit */long long int) ((/* implicit */int) (short)0)))));
                    }
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1]))) : (12466531027342561783ULL)))) ? (((var_0) + (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_2] [i_3]))))) : (((/* implicit */long long int) (+(((/* implicit */int) var_1)))))));
                }
                /* LoopSeq 2 */
                for (unsigned short i_6 = 0; i_6 < 19; i_6 += 3) 
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_7 = 4; i_7 < 16; i_7 += 3) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_4))));
                        var_23 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) 33552384ULL)) ? (3382808350501332167LL) : (((/* implicit */long long int) 501052446U))))) ? (arr_12 [i_0 - 1] [i_7] [i_7] [(short)17] [i_0 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))));
                        var_24 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_7 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_0)));
                    }
                    for (unsigned int i_8 = 4; i_8 < 16; i_8 += 3) /* same iter space */
                    {
                        var_25 = ((/* implicit */unsigned int) ((var_9) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (unsigned short)65535))));
                        arr_26 [i_1] &= ((/* implicit */long long int) var_4);
                        var_26 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_3 [i_1] [i_1] [i_8]))));
                    }
                    for (unsigned int i_9 = 4; i_9 < 16; i_9 += 3) /* same iter space */
                    {
                        arr_31 [i_0] [i_9] [i_9] = ((/* implicit */unsigned int) (+(((var_7) / (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
                        var_27 *= ((/* implicit */short) (+(((unsigned int) (unsigned short)32767))));
                        arr_32 [i_0] [11U] [i_0] [i_0] = ((/* implicit */unsigned int) var_12);
                        var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((/* implicit */int) (short)-31169)) - (((/* implicit */int) var_1)))))));
                        arr_33 [i_2] [i_1] &= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) -3369536493838512681LL)) ? (var_0) : (((/* implicit */long long int) var_11))))));
                    }
                    var_29 += ((long long int) (-(((/* implicit */int) (unsigned short)65535))));
                    var_30 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6))));
                }
                for (unsigned int i_10 = 2; i_10 < 18; i_10 += 4) 
                {
                    var_31 = ((/* implicit */short) var_2);
                    arr_36 [i_0] [i_1] [i_1] [i_10] [i_0] [(unsigned short)3] = ((/* implicit */unsigned short) ((long long int) var_0));
                    arr_37 [i_0] [i_0] [i_0] [i_10] |= ((/* implicit */_Bool) (short)-26903);
                    var_32 ^= ((/* implicit */unsigned short) arr_23 [i_1 + 2] [i_1] [i_1 + 2] [i_1] [14ULL] [i_1] [i_1]);
                    arr_38 [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_0 + 1] [(signed char)6] [i_10 - 1] [i_0]))));
                }
                var_33 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_6))));
                arr_39 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) (~((+(((/* implicit */int) (short)25673))))));
                var_34 = ((/* implicit */long long int) (~(((/* implicit */int) arr_6 [i_1 + 3] [i_1 - 1] [i_1 + 3] [i_1 + 3]))));
            }
            for (unsigned int i_11 = 0; i_11 < 19; i_11 += 4) 
            {
                arr_43 [i_0] [(unsigned short)1] [10LL] = ((/* implicit */unsigned short) var_8);
                arr_44 [i_0] [i_0] [(short)5] [i_1] = ((/* implicit */short) ((min(((-(((/* implicit */int) var_3)))), (((/* implicit */int) var_1)))) % (min(((-(((/* implicit */int) var_1)))), (((/* implicit */int) arr_20 [i_1 - 2] [i_0]))))));
                var_35 ^= ((/* implicit */long long int) max((3701538820U), (((/* implicit */unsigned int) ((unsigned short) min((var_10), ((_Bool)1)))))));
                /* LoopNest 2 */
                for (unsigned int i_12 = 0; i_12 < 19; i_12 += 2) 
                {
                    for (signed char i_13 = 2; i_13 < 17; i_13 += 1) 
                    {
                        {
                            var_36 += ((/* implicit */signed char) (+(((((/* implicit */int) (short)(-32767 - 1))) * (((/* implicit */int) (unsigned short)0))))));
                            arr_50 [i_0] [i_1 - 2] [i_0] [i_12] [i_13 + 2] = arr_20 [i_0] [i_0];
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                arr_55 [i_0] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) 2594911824U)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [9LL]))))));
                var_37 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_14] [i_1] [(unsigned short)11])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : ((+(((/* implicit */int) var_8))))));
                var_38 = ((/* implicit */unsigned int) (((+(9223372036854775807LL))) / (((/* implicit */long long int) var_11))));
            }
            for (short i_15 = 2; i_15 < 18; i_15 += 1) 
            {
                var_39 = ((/* implicit */unsigned long long int) ((((var_11) < (((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_0] [(short)14] [i_0 + 2] [i_0 + 2]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_15 [17U] [i_0] [i_0 - 1] [i_0 - 1])))) : (((((/* implicit */_Bool) var_1)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_16 = 0; i_16 < 19; i_16 += 2) 
                {
                    var_40 = ((/* implicit */unsigned short) max((var_40), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_34 [i_0] [i_0] [(short)15] [(_Bool)1] [i_0])))) ? ((+(((/* implicit */int) var_6)))) : (((/* implicit */int) var_10)))))));
                    var_41 = ((/* implicit */long long int) arr_54 [i_0 - 1] [(unsigned short)1] [i_0] [i_15 - 1]);
                }
            }
        }
        arr_62 [i_0] [i_0] = min((min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17))) : (var_12))), (((/* implicit */unsigned long long int) arr_0 [16U])))), (((/* implicit */unsigned long long int) ((min((var_11), (((/* implicit */unsigned int) (short)-512)))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)-24687)))))))));
        arr_63 [16ULL] |= ((/* implicit */unsigned short) (((~(((/* implicit */int) (signed char)-8)))) > (((/* implicit */int) var_10))));
    }
}
