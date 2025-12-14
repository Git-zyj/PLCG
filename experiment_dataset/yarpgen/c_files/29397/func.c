/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29397
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
    var_19 = ((/* implicit */unsigned short) var_17);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 12; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_9 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)107))))) || (((/* implicit */_Bool) ((long long int) arr_3 [i_1 + 3] [i_1 - 3])))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 1; i_3 < 12; i_3 += 3) /* same iter space */
                    {
                        var_20 = ((/* implicit */long long int) var_6);
                        arr_14 [i_0] [i_1] [i_2] [(signed char)5] [i_2] [i_3 + 1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_3 + 2] [i_3 + 2])))))));
                        arr_15 [i_2] [i_1] [i_2] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)7)) | (var_11)))) ? (1807442337) : (min((((/* implicit */int) ((-1807442337) <= (((/* implicit */int) arr_3 [i_0] [i_0]))))), (max((3), (62181698)))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_4 = 1; i_4 < 12; i_4 += 3) /* same iter space */
                    {
                        arr_19 [i_0] [i_0] [i_0] [i_2] [5LL] = ((/* implicit */long long int) arr_18 [i_0] [i_0]);
                        /* LoopSeq 3 */
                        for (unsigned short i_5 = 0; i_5 < 15; i_5 += 1) 
                        {
                            var_21 = ((/* implicit */signed char) (((-9223372036854775807LL - 1LL)) + (2181843386368LL)));
                            arr_23 [(signed char)7] [i_1] [i_2] [i_2] [(signed char)5] = ((/* implicit */signed char) arr_10 [i_2] [i_1] [i_2] [i_2] [i_5]);
                            var_22 -= ((/* implicit */signed char) arr_10 [i_0] [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_5]);
                            var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_5] [i_1] [i_0] [(signed char)8] [i_5])) ? (1710014640U) : (((/* implicit */unsigned int) (+(1807442337)))))))));
                        }
                        for (signed char i_6 = 0; i_6 < 15; i_6 += 3) 
                        {
                            var_24 -= ((/* implicit */unsigned short) (-(((/* implicit */int) ((9223372036854775807LL) > (9223372036854775807LL))))));
                            arr_28 [i_0] [i_1] [i_2] [i_1] [i_1] [i_4] [i_4 + 2] = ((/* implicit */unsigned short) arr_6 [i_2]);
                        }
                        for (long long int i_7 = 3; i_7 < 13; i_7 += 2) 
                        {
                            var_25 = ((/* implicit */signed char) ((unsigned int) arr_20 [i_1 + 3] [i_1 - 2] [i_1 - 3]));
                            var_26 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_18))))) ? (0) : (arr_4 [i_1 - 2] [i_4 + 2])));
                            var_27 ^= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)7829))) >= (arr_5 [i_0] [i_1 + 3] [(unsigned char)6])));
                            arr_31 [i_0] [i_1] [i_2] [i_2] [i_7] = ((/* implicit */unsigned int) (unsigned short)53806);
                        }
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_8 = 0; i_8 < 25; i_8 += 1) 
    {
        for (unsigned short i_9 = 2; i_9 < 23; i_9 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    var_28 = ((/* implicit */int) max((var_28), (max((((((/* implicit */_Bool) arr_36 [i_9 + 1] [i_9 - 1] [i_9 + 2] [i_9 + 2])) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_17)))), (-950796706)))));
                    arr_40 [i_10] [(signed char)6] [i_10] = ((/* implicit */unsigned int) ((signed char) ((max(((-2147483647 - 1)), (((/* implicit */int) var_14)))) + (((/* implicit */int) min((var_18), ((signed char)-37)))))));
                }
                for (long long int i_11 = 0; i_11 < 25; i_11 += 2) 
                {
                    arr_43 [i_8] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_6)), (min((((/* implicit */long long int) (unsigned short)65535)), (var_15)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_35 [i_8] [i_11] [i_9 - 1])))) : (min((max((9223372036854775807LL), (((/* implicit */long long int) var_4)))), (((/* implicit */long long int) (signed char)-112))))));
                    var_29 = ((/* implicit */int) max((var_29), (5)));
                    var_30 |= ((/* implicit */unsigned short) max((((((/* implicit */int) (unsigned short)11730)) % (((/* implicit */int) arr_36 [i_8] [i_9 + 2] [(signed char)22] [i_9 - 1])))), (((/* implicit */int) min(((unsigned char)192), (((/* implicit */unsigned char) arr_36 [i_9] [i_9 - 2] [i_9 + 2] [i_9 - 1])))))));
                    var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) ((701943032) <= ((~(0))))))));
                }
                for (unsigned short i_12 = 2; i_12 < 23; i_12 += 3) 
                {
                    var_32 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)244)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)11740))) : ((-9223372036854775807LL - 1LL))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_13 = 0; i_13 < 25; i_13 += 1) 
                    {
                        var_33 += ((/* implicit */signed char) (-(((/* implicit */int) var_10))));
                        arr_50 [i_8] [i_8] [i_12 + 2] [i_13] &= ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_12))) - (4194303U))) - (((/* implicit */unsigned int) 3))));
                        var_34 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))));
                    }
                }
                var_35 = arr_41 [i_9];
            }
        } 
    } 
    var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-95)))))));
    /* LoopNest 3 */
    for (signed char i_14 = 0; i_14 < 25; i_14 += 2) 
    {
        for (signed char i_15 = 1; i_15 < 23; i_15 += 1) 
        {
            for (unsigned short i_16 = 0; i_16 < 25; i_16 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (int i_17 = 0; i_17 < 25; i_17 += 2) 
                    {
                        var_37 |= ((/* implicit */signed char) max((294440780), (((/* implicit */int) (_Bool)1))));
                        var_38 = ((/* implicit */long long int) (-(max((((/* implicit */int) arr_46 [i_17] [i_16] [i_15] [i_14])), (var_0)))));
                        var_39 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_1), (arr_39 [i_14] [i_15 + 2] [i_16])))) ? (max((-7477009757035677187LL), (((/* implicit */long long int) arr_37 [i_14] [i_16] [i_15 - 1])))) : (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)22), (((/* implicit */unsigned short) arr_39 [i_14] [i_15 - 1] [i_16]))))))));
                    }
                    for (unsigned int i_18 = 0; i_18 < 25; i_18 += 2) 
                    {
                        arr_62 [i_16] [i_16] = ((/* implicit */signed char) ((long long int) max((((((/* implicit */int) var_10)) / (((/* implicit */int) (unsigned short)63488)))), (((((/* implicit */int) (unsigned char)121)) / (((/* implicit */int) (signed char)31)))))));
                        arr_63 [i_18] [8] [i_16] [i_18] = ((/* implicit */unsigned short) (signed char)55);
                    }
                    for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
                    {
                        var_40 -= (((!(((/* implicit */_Bool) (-(var_11)))))) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) ((unsigned short) -283388292))));
                        arr_66 [i_14] [i_15] [i_15] [i_19 - 1] [i_14] |= ((/* implicit */unsigned int) (signed char)-73);
                        var_41 = (signed char)16;
                        var_42 = ((/* implicit */long long int) max((max((arr_33 [i_14] [i_15 + 1]), (((/* implicit */int) (signed char)-67)))), (min((((/* implicit */int) var_1)), (-1484549263)))));
                        var_43 ^= ((/* implicit */unsigned int) var_13);
                    }
                    /* LoopSeq 2 */
                    for (long long int i_20 = 0; i_20 < 25; i_20 += 3) 
                    {
                        arr_69 [i_14] [20LL] [i_16] [i_20] [i_14] |= ((/* implicit */unsigned short) (-(var_4)));
                        var_44 = ((/* implicit */signed char) ((((/* implicit */int) arr_57 [i_15] [4])) >= (((/* implicit */int) ((arr_34 [i_15 + 2] [i_15 - 1]) < (((/* implicit */long long int) ((((/* implicit */int) var_6)) << (((((/* implicit */int) arr_68 [i_14] [i_15] [i_15 + 1] [i_15] [i_16] [i_20])) - (2895)))))))))));
                        arr_70 [i_16] [i_16] [i_15] [i_16] = ((/* implicit */long long int) min(((-(((/* implicit */int) arr_36 [i_15 - 1] [i_15 + 2] [i_15 - 1] [i_15 + 1])))), ((~(((/* implicit */int) (signed char)16))))));
                    }
                    for (unsigned char i_21 = 0; i_21 < 25; i_21 += 4) 
                    {
                        arr_73 [i_16] [i_21] = ((/* implicit */int) min(((-(1790725933368065550LL))), (((/* implicit */long long int) (unsigned short)65521))));
                        var_45 = ((/* implicit */long long int) max((var_45), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)53806))))) || (((/* implicit */_Bool) (unsigned short)36341)))))));
                    }
                }
            } 
        } 
    } 
}
