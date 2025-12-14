/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26642
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))) : (arr_0 [i_0])));
        arr_3 [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) ((arr_1 [i_0]) == (((/* implicit */int) (unsigned char)236)))))));
    }
    for (signed char i_1 = 4; i_1 < 10; i_1 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            for (int i_3 = 3; i_3 < 8; i_3 += 3) 
            {
                for (unsigned char i_4 = 2; i_4 < 9; i_4 += 3) 
                {
                    {
                        var_16 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) arr_6 [i_2] [i_4 - 2]))))));
                        arr_13 [(signed char)9] [(signed char)9] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-1)))))) : (((((/* implicit */long long int) ((/* implicit */int) (short)-6355))) / (arr_6 [i_4] [i_1 - 1])))))));
                        arr_14 [i_1 - 4] [i_1 - 4] [i_1 - 4] [i_4] [i_2] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_10 [i_1 - 3] [i_3 - 3] [i_4] [i_4 - 2])))) ? (((/* implicit */int) arr_10 [i_1 + 1] [i_3 + 3] [i_4] [i_4 - 1])) : (((((/* implicit */int) var_5)) ^ (((/* implicit */int) (signed char)118))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (short i_5 = 4; i_5 < 9; i_5 += 4) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_6 = 0; i_6 < 11; i_6 += 3) 
            {
                var_17 += ((/* implicit */signed char) (+(((/* implicit */int) var_5))));
                arr_22 [i_6] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_6 [i_1 - 1] [i_1 - 3])) ? (arr_6 [i_1] [i_1 - 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_1] [i_1 - 3] [i_6] [i_1]))))) / (arr_6 [i_1] [i_1 - 3])));
            }
            for (long long int i_7 = 0; i_7 < 11; i_7 += 3) 
            {
                arr_25 [i_1] [i_5] [i_7] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) - (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) (signed char)-21)))))) : (((/* implicit */int) var_8))));
                arr_26 [(signed char)9] [(short)6] [i_7] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)243))))) ? ((+(((/* implicit */int) (unsigned char)0)))) : (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (signed char)127)))))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_9 = 0; i_9 < 11; i_9 += 3) 
                    {
                        arr_31 [i_1] [i_5] [i_7] [i_9] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) 5171772075687809312LL))) ? (((/* implicit */long long int) ((/* implicit */int) ((14243205267205882463ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)59366))))))) : (-9035722612493919364LL)));
                        var_18 &= ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1]))) < (-173386157778666248LL)))) % (((/* implicit */int) (signed char)32)));
                    }
                    for (signed char i_10 = 0; i_10 < 11; i_10 += 4) /* same iter space */
                    {
                        arr_36 [i_7] [i_8] |= ((/* implicit */long long int) var_8);
                        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) arr_1 [i_8]))));
                    }
                    for (signed char i_11 = 0; i_11 < 11; i_11 += 4) /* same iter space */
                    {
                        arr_41 [i_1] [i_5] [i_7] [i_5] [i_5] = ((/* implicit */_Bool) ((unsigned char) 5171772075687809300LL));
                        arr_42 [i_1 - 2] [i_1 - 2] [i_7] [i_8] [i_11] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)216)) ? (((/* implicit */int) (unsigned char)160)) : (arr_33 [i_1] [i_5] [i_7] [i_8] [i_1])))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)105))) : ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                    }
                    arr_43 [i_8] [i_1 - 1] [i_5 - 2] [i_1 - 1] = ((/* implicit */long long int) var_2);
                    var_20 = ((/* implicit */long long int) (-(((/* implicit */int) arr_20 [i_1] [i_1 - 2] [i_1]))));
                    arr_44 [i_1] [i_5] [(signed char)1] [i_8] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (signed char)-89)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (173386157778666245LL)))));
                    /* LoopSeq 1 */
                    for (signed char i_12 = 0; i_12 < 11; i_12 += 4) 
                    {
                        var_21 = ((((1399355897808545825LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)215))))) & (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_12] [i_5] [i_12]))));
                        var_22 *= ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)65532))));
                        var_23 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)8064)) + (((/* implicit */int) (unsigned char)159))));
                    }
                }
                /* vectorizable */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    var_24 += ((/* implicit */signed char) (!(((/* implicit */_Bool) ((int) (signed char)-103)))));
                    var_25 -= (((!(((/* implicit */_Bool) var_6)))) ? (5831340852871432401LL) : (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_1 - 4] [i_5 - 2]))));
                }
                for (unsigned short i_14 = 0; i_14 < 11; i_14 += 3) 
                {
                    arr_55 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)159)) ? (((/* implicit */int) (signed char)-88)) : (((/* implicit */int) (short)4095))));
                    var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) (+(((((/* implicit */int) ((_Bool) 1598010784))) ^ ((-(((/* implicit */int) (signed char)-24)))))))))));
                    var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) var_1))));
                }
            }
            /* vectorizable */
            for (int i_15 = 3; i_15 < 9; i_15 += 3) 
            {
                var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)0)))))));
                var_29 += ((/* implicit */signed char) ((((/* implicit */_Bool) 8160720636128763221LL)) ? (((/* implicit */long long int) (-(((/* implicit */int) (signed char)3))))) : (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */long long int) -824912246)) : (5874426148295096855LL)))));
                var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) ((114266486487864162LL) + (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_5 - 4]))))))));
            }
            var_31 = ((/* implicit */short) max((var_31), (var_8)));
            arr_58 [i_5] [i_1] [i_1] = ((/* implicit */unsigned char) ((long long int) (-(((/* implicit */int) arr_52 [i_1] [i_5] [i_5 + 2] [i_5 + 2] [i_5])))));
            var_32 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)-52))))) ? (((/* implicit */int) (signed char)-63)) : (((/* implicit */int) ((var_1) || (((/* implicit */_Bool) (unsigned char)97)))))))) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_34 [i_1 - 1] [i_1 - 1] [i_1 - 3] [i_5 - 3] [i_5 + 1])))))));
        }
    }
    var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) (((((-(((/* implicit */int) var_8)))) + (2147483647))) >> (((((/* implicit */_Bool) min((1757743161), (((/* implicit */int) var_4))))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (((4481290478332430733LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-22))))))))))));
}
