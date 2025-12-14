/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232029
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
    var_11 |= var_0;
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) arr_1 [i_0]))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) arr_1 [i_0]);
        /* LoopSeq 1 */
        for (long long int i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            arr_7 [i_0] = arr_3 [i_1] [i_0];
            var_13 += ((/* implicit */long long int) arr_4 [i_1 + 2]);
            arr_8 [i_0] = ((((/* implicit */_Bool) 7127932325554077310LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)121))) : (max((arr_3 [i_1] [i_1 + 1]), (arr_6 [i_1] [i_1 + 2] [i_1 + 2]))));
            /* LoopSeq 1 */
            for (long long int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                var_14 -= ((((/* implicit */_Bool) max((arr_5 [i_1 + 3]), (arr_5 [i_1 + 2])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? ((-9223372036854775807LL - 1LL)) : (-7127932325554077311LL)))) : (((((/* implicit */_Bool) arr_11 [i_1 + 1] [i_1 + 3] [i_1 + 3] [i_1])) ? (arr_11 [i_1 + 3] [i_1 + 3] [(signed char)1] [i_1 + 3]) : (arr_11 [i_1 - 2] [i_0] [i_2] [i_0]))));
                var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) (-9223372036854775807LL - 1LL)))));
            }
        }
    }
    for (unsigned char i_3 = 1; i_3 < 19; i_3 += 1) 
    {
        var_16 -= ((/* implicit */signed char) (unsigned char)14);
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 23; i_4 += 1) 
        {
            for (unsigned int i_5 = 3; i_5 < 20; i_5 += 1) 
            {
                {
                    arr_23 [i_3] [i_3] [i_4] = ((/* implicit */long long int) arr_19 [i_3] [i_3 + 1]);
                    var_17 = (signed char)-85;
                }
            } 
        } 
    }
    for (unsigned char i_6 = 2; i_6 < 23; i_6 += 1) 
    {
        arr_26 [i_6] = ((/* implicit */unsigned int) min((((/* implicit */long long int) max((arr_25 [i_6]), (arr_25 [i_6])))), (min((max((-4637295926130996991LL), (((/* implicit */long long int) arr_25 [i_6])))), (((/* implicit */long long int) (signed char)-85))))));
        arr_27 [16U] |= ((/* implicit */unsigned int) (unsigned char)25);
        /* LoopNest 2 */
        for (unsigned char i_7 = 0; i_7 < 24; i_7 += 1) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 4; i_9 < 23; i_9 += 1) 
                    {
                        for (unsigned int i_10 = 2; i_10 < 21; i_10 += 1) 
                        {
                            {
                                arr_37 [i_6] = ((/* implicit */unsigned char) 4831834451932977340LL);
                                var_18 = ((/* implicit */signed char) arr_31 [i_6] [i_6] [i_6] [17LL]);
                                arr_38 [i_8] [i_6] [i_8] [i_6] [17U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_33 [i_6] [i_10 - 1] [7U] [i_9])) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -8998767825018148686LL)) ? (((/* implicit */long long int) arr_31 [i_6] [i_6 - 2] [i_6] [i_6])) : (-5690112024338879855LL))))))) : (((/* implicit */int) (unsigned char)170))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */long long int) min((((unsigned int) ((((/* implicit */_Bool) arr_36 [i_8] [i_6 - 2] [i_7] [i_6 - 2] [i_6 - 2])) ? (2754007451293684361LL) : (arr_30 [3LL] [i_6] [i_6] [i_6])))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_6] [i_6]))) == (3566636072U))))));
                    var_20 ^= ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_25 [i_7])) ? (arr_33 [i_7] [i_7] [i_6] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)112))))), (((/* implicit */unsigned long long int) (unsigned char)212))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) min(((signed char)-107), ((signed char)(-127 - 1)))))) >= (4831834451932977364LL))))) : (min((max((arr_28 [i_6] [i_6]), (((/* implicit */unsigned int) arr_35 [i_6] [i_6])))), (arr_29 [i_6 - 1] [i_6]))));
                }
            } 
        } 
        var_21 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-78)) ? (((((/* implicit */_Bool) arr_32 [i_6] [i_6] [i_6] [i_6] [i_6])) ? (2495624099U) : (arr_34 [i_6] [i_6] [i_6]))) : (arr_28 [23LL] [23LL]))))));
    }
    var_22 = ((/* implicit */unsigned long long int) var_1);
    /* LoopNest 2 */
    for (unsigned int i_11 = 2; i_11 < 11; i_11 += 3) 
    {
        for (unsigned int i_12 = 0; i_12 < 15; i_12 += 4) 
        {
            {
                var_23 = ((/* implicit */signed char) (~(-5052752643676574939LL)));
                /* LoopNest 2 */
                for (signed char i_13 = 0; i_13 < 15; i_13 += 3) 
                {
                    for (unsigned int i_14 = 1; i_14 < 13; i_14 += 3) 
                    {
                        {
                            var_24 ^= ((/* implicit */signed char) (-(((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 2575365505U))))));
                            var_25 |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_39 [i_14 - 1])) ? (arr_39 [i_14 + 1]) : ((~(arr_39 [i_14 + 1])))));
                            arr_53 [i_14] [i_14] = ((/* implicit */unsigned int) arr_17 [i_11 - 2] [i_11 + 2]);
                            var_26 = max((535822336U), (((((/* implicit */_Bool) 2959894874U)) ? (((((/* implicit */_Bool) arr_19 [i_11] [i_11])) ? (arr_36 [i_14] [i_11] [i_12] [i_12] [i_11]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_11] [i_12]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-28))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned int i_15 = 2; i_15 < 15; i_15 += 4) 
    {
        arr_56 [i_15] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) arr_19 [i_15] [i_15])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_15] [21U])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_15] [0ULL] [i_15] [i_15]))) : (1541006279U)))) ? (max((16373140726800402716ULL), (((/* implicit */unsigned long long int) 6855717765273745755LL)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_31 [6U] [6U] [6U] [6U])) ? (arr_19 [i_15] [i_15]) : (arr_34 [i_15] [i_15] [i_15]))))))));
        var_27 = ((((/* implicit */_Bool) (~(arr_28 [i_15 + 2] [i_15 - 2])))) ? (((/* implicit */long long int) min((arr_28 [i_15 + 2] [i_15 - 2]), (arr_28 [i_15 + 2] [i_15 - 2])))) : ((-(arr_32 [i_15] [3LL] [i_15 - 1] [i_15 - 1] [i_15]))));
        var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (unsigned char)40)) : (((/* implicit */int) (signed char)-85))));
    }
    for (long long int i_16 = 0; i_16 < 16; i_16 += 4) /* same iter space */
    {
        var_29 *= ((/* implicit */unsigned int) arr_32 [i_16] [i_16] [i_16] [i_16] [i_16]);
        arr_59 [i_16] [11LL] = ((/* implicit */long long int) (+(((/* implicit */int) arr_22 [i_16] [2U] [(signed char)13] [15U]))));
        var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 8159567779469124109ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_16] [i_16] [i_16] [i_16]))) : (((((/* implicit */_Bool) arr_22 [i_16] [i_16] [i_16] [i_16])) ? (((/* implicit */long long int) 1335072421U)) : (-4404452502976896439LL)))));
        arr_60 [i_16] = ((/* implicit */signed char) (~(arr_19 [i_16] [i_16])));
    }
    for (long long int i_17 = 0; i_17 < 16; i_17 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned int i_18 = 2; i_18 < 15; i_18 += 3) /* same iter space */
        {
            arr_65 [i_18] [i_18] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_62 [i_18 + 1]))));
            var_31 = ((/* implicit */unsigned int) ((max((72057594037927935LL), (((/* implicit */long long int) arr_18 [i_18 - 1] [i_18] [i_18])))) << ((((~(2959894885U))) - (1335072407U)))));
            var_32 ^= 5052752643676574946LL;
            /* LoopNest 3 */
            for (unsigned int i_19 = 0; i_19 < 16; i_19 += 3) 
            {
                for (unsigned long long int i_20 = 0; i_20 < 16; i_20 += 4) 
                {
                    for (signed char i_21 = 4; i_21 < 15; i_21 += 3) 
                    {
                        {
                            arr_72 [i_21] [i_18] [i_19] [i_21] [i_18] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max((arr_34 [i_18 - 2] [(signed char)15] [i_18 - 2]), (arr_34 [i_18 + 1] [i_18 + 1] [13U])))), (arr_55 [i_18 - 2])));
                            arr_73 [i_17] [i_18] [(signed char)6] [i_19] [(signed char)6] [(signed char)6] [i_18] = ((/* implicit */long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 3651128299U))))), (min((arr_61 [i_17]), (arr_61 [i_20])))));
                            var_33 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1466382614280412139LL)) ? (17746695403554473677ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1)))))) ? (4398046511103ULL) : (((/* implicit */unsigned long long int) min((670407027U), (((/* implicit */unsigned int) arr_54 [i_17])))))))) ? (((((/* implicit */_Bool) arr_15 [i_21])) ? (arr_68 [i_17] [(signed char)7] [i_17] [i_21 - 4]) : (((((/* implicit */long long int) 1979289461U)) | (arr_32 [i_21 - 2] [i_17] [i_17] [i_17] [i_17]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_71 [i_17] [i_17] [i_17] [i_17] [i_21])))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_22 = 2; i_22 < 15; i_22 += 3) /* same iter space */
        {
            arr_76 [i_22] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_74 [i_22 - 2])) ? ((~(2025669538592661479LL))) : (max((-3433996877789439014LL), (((/* implicit */long long int) 4294967295U)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) -5052752643676574946LL)) ? (arr_57 [i_17] [i_22 - 2]) : (arr_57 [i_17] [i_22 - 2]))))));
            var_34 -= ((/* implicit */signed char) 2725667217U);
        }
        var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) 5052752643676574946LL)) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_64 [i_17] [i_17])), (-5052752643676574947LL)))) : (max((10134642590817685209ULL), (((/* implicit */unsigned long long int) max((arr_17 [i_17] [i_17]), (((/* implicit */long long int) arr_21 [i_17] [i_17] [i_17] [i_17])))))))));
    }
    for (unsigned int i_23 = 3; i_23 < 12; i_23 += 3) 
    {
        arr_79 [i_23 + 1] [i_23 + 1] |= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((arr_46 [i_23 + 1] [i_23 - 1]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_23 - 1] [i_23 - 1] [i_23] [i_23])))))), (11162444733583233906ULL)));
        arr_80 [i_23] [i_23] = ((/* implicit */long long int) arr_46 [12U] [12U]);
    }
}
