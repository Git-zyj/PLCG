/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45623
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
    var_13 = ((/* implicit */int) max((((/* implicit */long long int) var_10)), ((((_Bool)1) ? (((long long int) (unsigned char)4)) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65523)))))))));
    var_14 = ((/* implicit */signed char) (!(((min((var_6), (((/* implicit */int) (_Bool)1)))) >= (((((/* implicit */_Bool) var_6)) ? (var_3) : (var_9)))))));
    var_15 = var_3;
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_16 ^= ((/* implicit */unsigned short) var_2);
        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) var_4))) ? (max((1023U), (((/* implicit */unsigned int) (unsigned short)20)))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0])) - (var_3))))));
    }
    for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (arr_3 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)250)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_12)), (var_5)))))))) : (min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_11)) : (arr_4 [i_1] [i_1]))), (((/* implicit */unsigned long long int) arr_2 [i_1]))))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 1; i_2 < 14; i_2 += 4) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_19 = ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) | ((+((+((-9223372036854775807LL - 1LL)))))));
                    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) arr_2 [(unsigned char)11]))));
                    var_21 = ((/* implicit */short) (+(min((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)5))) ^ (var_4))), (((/* implicit */unsigned int) (_Bool)1))))));
                }
            } 
        } 
        var_22 = ((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */long long int) var_4)) / ((-9223372036854775807LL - 1LL))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_12), (var_2))))) : (1ULL)))));
        var_23 = ((/* implicit */int) (-(8589934590ULL)));
    }
    /* vectorizable */
    for (long long int i_4 = 2; i_4 < 10; i_4 += 4) 
    {
        var_24 = ((/* implicit */long long int) (unsigned short)6);
        var_25 = ((/* implicit */signed char) ((long long int) (short)16352));
        var_26 = ((/* implicit */signed char) arr_3 [i_4 - 1]);
        /* LoopSeq 4 */
        for (int i_5 = 0; i_5 < 14; i_5 += 2) 
        {
            /* LoopSeq 4 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                arr_18 [i_6] [i_6] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) 4294967273U)) : (arr_9 [i_4])))));
                var_27 ^= ((((/* implicit */_Bool) 18446744065119617025ULL)) ? (((/* implicit */int) ((unsigned short) (unsigned short)0))) : (((/* implicit */int) (unsigned short)23)));
            }
            for (signed char i_7 = 0; i_7 < 14; i_7 += 2) 
            {
                var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) (!(arr_14 [i_4 - 2]))))));
                arr_21 [i_4 + 4] [5ULL] [i_7] [3U] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (arr_15 [i_4] [i_4 + 2] [i_4 - 2] [i_7]) : (arr_15 [i_4] [i_5] [i_5] [i_4 - 2])));
                var_29 &= ((/* implicit */long long int) ((4294967283U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)247)))));
                arr_22 [i_4] [(signed char)5] [i_7] [(unsigned char)10] = ((/* implicit */unsigned short) var_1);
            }
            for (unsigned int i_8 = 0; i_8 < 14; i_8 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_9 = 0; i_9 < 14; i_9 += 2) 
                {
                    var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (1012U) : (0U)));
                    var_31 = ((/* implicit */long long int) ((unsigned char) var_11));
                }
                arr_29 [i_4] [i_4] [i_4] = ((/* implicit */signed char) ((long long int) (-(-1LL))));
                var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2305843009213693948LL)) ? ((+(((/* implicit */int) (signed char)3)))) : (((/* implicit */int) arr_0 [i_4 + 2]))));
            }
            for (unsigned short i_10 = 0; i_10 < 14; i_10 += 4) 
            {
                var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) ((unsigned int) 1043U)))));
                var_34 |= ((/* implicit */unsigned short) ((signed char) (signed char)111));
                arr_32 [i_4 + 4] [i_4] = ((/* implicit */signed char) arr_12 [i_10]);
            }
            var_35 = (-(var_10));
            var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) ((_Bool) (unsigned short)65493))))))));
        }
        for (signed char i_11 = 4; i_11 < 12; i_11 += 3) 
        {
            var_37 = ((((/* implicit */_Bool) -9223372036854775805LL)) ? (127) : (((/* implicit */int) var_8)));
            arr_36 [i_11] [(unsigned char)5] = ((/* implicit */long long int) (_Bool)1);
        }
        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
        {
            arr_40 [i_4] [i_12] = ((/* implicit */unsigned char) arr_19 [i_4]);
            /* LoopSeq 1 */
            for (short i_13 = 1; i_13 < 13; i_13 += 4) 
            {
                /* LoopSeq 2 */
                for (signed char i_14 = 0; i_14 < 14; i_14 += 2) /* same iter space */
                {
                    var_38 = ((/* implicit */signed char) (_Bool)1);
                    arr_47 [1U] [i_13] [i_13] &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_4] [i_4] [i_13] [i_4])) ? (((/* implicit */int) arr_16 [i_4] [i_12] [i_13] [i_14])) : (((/* implicit */int) var_12))));
                    var_39 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_8))));
                    var_40 -= ((/* implicit */signed char) ((unsigned int) (!(((/* implicit */_Bool) (unsigned short)23)))));
                }
                for (signed char i_15 = 0; i_15 < 14; i_15 += 2) /* same iter space */
                {
                    arr_52 [i_13 + 1] [6U] [i_13 + 1] [i_13 + 1] |= ((/* implicit */unsigned short) ((-9223372036854775796LL) % (((/* implicit */long long int) arr_11 [i_4 - 1]))));
                    arr_53 [i_4 + 1] [i_12 - 1] [i_15] = ((/* implicit */unsigned int) ((arr_13 [i_4 + 1]) + (((/* implicit */int) ((signed char) var_6)))));
                    var_41 = ((/* implicit */int) max((var_41), (((/* implicit */int) (-(0U))))));
                    /* LoopSeq 3 */
                    for (long long int i_16 = 3; i_16 < 13; i_16 += 1) /* same iter space */
                    {
                        var_42 = ((/* implicit */unsigned long long int) (~(arr_37 [i_13 + 1] [i_13 - 1] [i_13 - 1])));
                        var_43 += ((/* implicit */_Bool) var_2);
                        var_44 += ((/* implicit */long long int) ((var_3) ^ (((/* implicit */int) arr_14 [i_13 - 1]))));
                        arr_58 [11LL] [i_16] [(_Bool)1] [i_16] [i_16 + 1] = ((((((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) != (2305843009213693956LL))) ? (((/* implicit */long long int) (+(var_5)))) : ((-9223372036854775807LL - 1LL)));
                        var_45 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)236)) ? ((-2147483647 - 1)) : (((/* implicit */int) (unsigned short)31)))));
                    }
                    for (long long int i_17 = 3; i_17 < 13; i_17 += 1) /* same iter space */
                    {
                        var_46 = (+(((/* implicit */int) arr_55 [i_4 + 4] [i_12 - 1] [i_13 + 1] [i_17 - 1])));
                        var_47 += ((/* implicit */signed char) ((int) arr_27 [i_12 - 1] [i_13 - 1] [i_17 + 1] [11LL] [i_17]));
                        var_48 = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)-115))));
                    }
                    for (long long int i_18 = 3; i_18 < 13; i_18 += 1) /* same iter space */
                    {
                        var_49 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)233)) ? (((long long int) 125829120)) : (((/* implicit */long long int) ((/* implicit */int) ((var_9) > (((/* implicit */int) (_Bool)1))))))));
                        var_50 = ((/* implicit */signed char) (short)32736);
                        var_51 = ((/* implicit */unsigned long long int) min((var_51), (((/* implicit */unsigned long long int) arr_26 [i_4 - 1] [i_4 - 2]))));
                    }
                }
                arr_64 [i_4] [i_12] [i_13] = ((/* implicit */signed char) ((((/* implicit */int) arr_7 [i_13 + 1] [i_13 + 1] [i_13 + 1] [i_13 + 1])) - (((/* implicit */int) (unsigned short)23))));
                var_52 = ((/* implicit */_Bool) var_5);
                var_53 += ((/* implicit */_Bool) var_0);
            }
            var_54 += ((/* implicit */int) var_12);
        }
        for (int i_19 = 0; i_19 < 14; i_19 += 4) 
        {
            arr_67 [i_4 + 4] [i_19] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 10U)) || (((/* implicit */_Bool) var_2))));
            arr_68 [i_19] [i_4] = ((/* implicit */unsigned short) ((arr_54 [i_4 + 3] [i_4 - 2]) > (((/* implicit */unsigned long long int) var_11))));
            var_55 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_4 + 2] [15U])) ? (29ULL) : (((/* implicit */unsigned long long int) arr_8 [i_4 + 2] [i_19]))));
            var_56 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65526)) ? ((-2147483647 - 1)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
        }
    }
}
