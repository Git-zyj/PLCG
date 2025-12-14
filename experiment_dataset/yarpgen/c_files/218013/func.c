/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218013
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
    var_15 = ((/* implicit */signed char) var_5);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        arr_2 [9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) || (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)42499)))))));
        arr_3 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 + 1]))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            var_16 = ((/* implicit */long long int) arr_1 [i_0 + 1] [i_0 - 1]);
            var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (~(((((/* implicit */int) (signed char)97)) & (((/* implicit */int) arr_1 [i_0] [i_0])))))))));
            var_18 ^= ((/* implicit */unsigned long long int) (((-(arr_4 [i_0] [i_0]))) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))));
            arr_6 [i_1] [i_0] [i_0 + 2] = (~(((((/* implicit */int) var_4)) >> (((var_5) - (2662086595355061853LL))))));
            /* LoopSeq 3 */
            for (int i_2 = 0; i_2 < 20; i_2 += 1) /* same iter space */
            {
                var_19 *= ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (signed char)-60)) + (60)))));
                arr_10 [i_2] [i_2] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_0] [i_0 + 2] [i_2]))));
                /* LoopSeq 2 */
                for (signed char i_3 = 2; i_3 < 19; i_3 += 1) 
                {
                    arr_13 [4U] [i_1] [i_1] [4U] [i_1] [(unsigned char)14] |= ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_3 - 1] [i_0 - 1])) >> (((((-6444928847244360377LL) + (((/* implicit */long long int) ((/* implicit */int) (short)24576))))) + (6444928847244335832LL)))));
                    /* LoopSeq 1 */
                    for (unsigned short i_4 = 0; i_4 < 20; i_4 += 4) 
                    {
                        arr_17 [i_4] [i_3] [i_2] [i_2] [i_2] [i_1] [i_0 - 1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) arr_1 [i_1] [i_2])) == (6)))) == ((+(((/* implicit */int) (signed char)127))))));
                        arr_18 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)2)) ? (((/* implicit */unsigned long long int) 0U)) : (67108352ULL)));
                    }
                    arr_19 [i_3 - 1] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_11 [i_0] [i_2] [i_0 + 1] [i_1]))));
                }
                for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 1) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_6 = 0; i_6 < 20; i_6 += 2) 
                    {
                        arr_24 [i_2] [i_1] [i_2] [i_5] [i_6] [i_1] = ((/* implicit */short) (!((_Bool)0)));
                        var_20 ^= var_10;
                        arr_25 [i_2] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 9223372036854775807LL))));
                    }
                    for (unsigned int i_7 = 0; i_7 < 20; i_7 += 1) 
                    {
                        arr_30 [(short)1] [i_1] [(signed char)3] [i_2] [i_7] [i_2] [(_Bool)1] = ((/* implicit */unsigned short) -6444928847244360347LL);
                        arr_31 [i_2] [13LL] [i_5] [13LL] = ((/* implicit */unsigned short) arr_27 [i_7] [i_5] [9U] [i_1] [(unsigned short)0]);
                    }
                    arr_32 [i_0 + 1] [i_2] [i_2] [i_0] = ((unsigned int) arr_20 [i_0 + 2] [1LL] [i_0 - 1] [i_0 - 1] [1LL] [17LL]);
                }
                arr_33 [i_2] [i_2] = ((/* implicit */unsigned int) ((arr_5 [i_1]) != (((/* implicit */unsigned int) -1179360980))));
            }
            for (int i_8 = 0; i_8 < 20; i_8 += 1) /* same iter space */
            {
                arr_36 [(unsigned short)6] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_28 [i_1] [i_1] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) arr_4 [i_0 + 1] [(_Bool)1])) : (13902677024030160752ULL)));
                var_21 = ((/* implicit */unsigned char) ((int) var_10));
                arr_37 [i_1] = ((/* implicit */unsigned char) ((18446744073642443257ULL) + (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-118)))))));
            }
            for (int i_9 = 0; i_9 < 20; i_9 += 1) /* same iter space */
            {
                arr_41 [i_0] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) (signed char)-44))) && (((/* implicit */_Bool) var_1))));
                arr_42 [i_0] [i_0] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_26 [i_9] [i_1] [i_0]))));
            }
        }
        arr_43 [(unsigned short)7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-32759)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) (unsigned short)1))));
        arr_44 [i_0 + 2] = ((((/* implicit */_Bool) arr_34 [i_0 + 1] [i_0 - 1])) ? (arr_34 [i_0] [i_0 + 2]) : (var_14));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_10 = 3; i_10 < 14; i_10 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_11 = 0; i_11 < 17; i_11 += 3) 
        {
            /* LoopSeq 1 */
            for (int i_12 = 0; i_12 < 17; i_12 += 3) 
            {
                arr_51 [i_12] [i_11] [i_12] = ((/* implicit */signed char) ((216172782113783808ULL) + (((/* implicit */unsigned long long int) (-(752376819U))))));
                var_22 -= arr_46 [i_10 + 3] [i_10 - 3];
                var_23 = ((signed char) var_0);
                var_24 = ((/* implicit */unsigned int) arr_46 [i_12] [i_10]);
                arr_52 [i_12] [i_11] [i_10 - 1] [i_12] = ((/* implicit */unsigned char) (((-(((/* implicit */int) arr_28 [i_10 + 3] [i_11] [i_12] [5])))) + ((-(((/* implicit */int) var_9))))));
            }
            var_25 -= ((signed char) arr_50 [i_11]);
            arr_53 [i_11] [i_11] [i_10] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_14 [(_Bool)1] [i_10 - 2] [i_10 + 2] [i_10 + 3] [i_10 + 3]))));
        }
        arr_54 [i_10] = ((/* implicit */int) (((-(-6444928847244360330LL))) >> (((arr_4 [i_10 - 2] [i_10]) - (3899272250861065699LL)))));
        arr_55 [i_10] [7ULL] = ((((/* implicit */_Bool) (-(var_8)))) ? (((long long int) arr_15 [i_10 - 3] [6U])) : (((/* implicit */long long int) var_6)));
    }
    for (unsigned int i_13 = 3; i_13 < 14; i_13 += 2) /* same iter space */
    {
        var_26 = ((/* implicit */int) min(((~(6444928847244360378LL))), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)225)))))));
        arr_60 [i_13] = min((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [(unsigned char)15] [i_13] [i_13]))) > (4286853542316427859ULL))))) <= (arr_45 [i_13])))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((17464036022836956678ULL) >= (((/* implicit */unsigned long long int) arr_4 [i_13] [i_13]))))) : ((-(((/* implicit */int) var_3)))))));
    }
}
