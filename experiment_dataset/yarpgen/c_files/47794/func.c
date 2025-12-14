/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47794
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
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (signed char)0)) ? (982377181U) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)90))) | (253633705U))))), (((/* implicit */unsigned int) (unsigned short)8192))));
        var_20 ^= ((/* implicit */signed char) max((((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 1]))) : (883584587U))), (((/* implicit */unsigned int) arr_1 [i_0 + 2]))));
        var_21 = ((/* implicit */unsigned short) var_11);
    }
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_1 = 3; i_1 < 19; i_1 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned short) (_Bool)0);
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_1 [i_1]);
        var_23 -= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)4614)) >> (((/* implicit */int) (signed char)0))))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) + (17687426330555224120ULL)))));
    }
    for (long long int i_2 = 3; i_2 < 19; i_2 += 4) /* same iter space */
    {
        arr_10 [i_2] = (!((_Bool)0));
        var_24 += ((/* implicit */unsigned long long int) (_Bool)1);
        /* LoopSeq 2 */
        for (unsigned int i_3 = 1; i_3 < 20; i_3 += 2) 
        {
            arr_15 [i_3] [i_2] [i_3] = max((((((/* implicit */int) var_8)) - (((/* implicit */int) arr_3 [i_2 + 2])))), (((/* implicit */int) min((arr_8 [i_3 + 1] [i_2 + 1]), (((/* implicit */unsigned char) (_Bool)1))))));
            var_25 = ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_2])) || (((/* implicit */_Bool) arr_13 [i_3])))))) < (((unsigned int) 3621976647098927279LL))))) : (((((/* implicit */int) ((((/* implicit */int) (signed char)-71)) <= (((/* implicit */int) (unsigned char)0))))) | (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_8)))))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 3) 
        {
            var_26 = ((/* implicit */unsigned long long int) min((max(((signed char)-71), (((/* implicit */signed char) (_Bool)1)))), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_2 - 1] [i_4]))) / (-2703585240105676637LL)))))))));
            var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((8538903592839235068ULL), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))))) ? (((/* implicit */int) (signed char)-71)) : (((/* implicit */int) (signed char)107))));
        }
    }
    for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 3) 
    {
        arr_23 [(unsigned short)14] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 18357856402324405241ULL)))) ^ (var_3)));
        var_28 += 2408773174U;
    }
    for (unsigned int i_6 = 0; i_6 < 24; i_6 += 1) 
    {
        var_29 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 402653184U)) | (((((/* implicit */unsigned long long int) ((/* implicit */int) ((-8925596559751662616LL) == (((/* implicit */long long int) arr_19 [i_6])))))) / (var_2)))));
        /* LoopSeq 1 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_29 [i_7] = ((/* implicit */unsigned long long int) ((var_14) / (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) max((var_6), (2929668488U))))))));
            var_30 = ((/* implicit */unsigned char) min((var_30), (var_11)));
        }
        var_31 = arr_26 [16U] [i_6];
    }
    /* LoopNest 2 */
    for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 2) 
    {
        for (int i_9 = 0; i_9 < 19; i_9 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_10 = 0; i_10 < 19; i_10 += 2) 
                {
                    var_32 = ((/* implicit */_Bool) (~(((/* implicit */int) max(((unsigned short)64117), ((unsigned short)49977))))));
                    arr_39 [i_8] [i_9] [i_10] = ((/* implicit */unsigned short) (~(max((var_3), (((/* implicit */unsigned int) arr_0 [i_8]))))));
                    arr_40 [i_8] [i_9] [i_10] = ((/* implicit */unsigned char) -1LL);
                    /* LoopNest 2 */
                    for (long long int i_11 = 3; i_11 < 18; i_11 += 3) 
                    {
                        for (unsigned short i_12 = 3; i_12 < 16; i_12 += 3) 
                        {
                            {
                                var_33 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)24))) != (((((((var_7) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned short)20554)) - (20554))))) + ((~(-3645927094049571016LL)))))));
                                var_34 = ((/* implicit */unsigned short) ((unsigned int) 1886194122U));
                            }
                        } 
                    } 
                    var_35 = ((/* implicit */long long int) min((((/* implicit */int) (!(arr_3 [i_10])))), (arr_31 [i_8] [i_8])));
                }
                for (short i_13 = 3; i_13 < 17; i_13 += 2) 
                {
                    var_36 = ((/* implicit */int) (signed char)64);
                    arr_50 [i_13] [i_9] [i_9] [i_13] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((arr_6 [i_8]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))))))));
                    /* LoopSeq 1 */
                    for (signed char i_14 = 0; i_14 < 19; i_14 += 4) 
                    {
                        var_37 = ((/* implicit */signed char) max((((((arr_0 [i_9]) ? (((/* implicit */unsigned long long int) -1LL)) : (var_10))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((3621976647098927279LL) < (-4333844991273133664LL))))))), (var_2)));
                        var_38 = ((/* implicit */int) ((((/* implicit */long long int) ((((int) (unsigned short)52013)) + (((/* implicit */int) arr_51 [i_13]))))) + ((-(var_7)))));
                        var_39 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((unsigned long long int) (_Bool)1))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_46 [i_8] [(unsigned char)15] [i_13] [10ULL]))))) | (((((/* implicit */_Bool) arr_4 [i_9] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [1LL] [i_13 - 2]))) : (arr_12 [i_8]))))))));
                        var_40 = (unsigned short)42622;
                        var_41 = ((/* implicit */int) var_14);
                    }
                    var_42 = ((/* implicit */unsigned int) max((var_42), (min((((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_19)))))), (max((((/* implicit */unsigned int) arr_36 [(unsigned short)13] [(unsigned short)13] [i_13])), (4098115968U)))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_15 = 0; i_15 < 19; i_15 += 1) 
                    {
                        var_43 = ((/* implicit */unsigned char) 9223372036854775807LL);
                        arr_55 [i_8] [i_9] [16ULL] [16ULL] &= ((/* implicit */int) (~(arr_42 [i_13 - 1] [i_9] [i_13 + 1] [i_9] [(unsigned char)8] [i_13 - 3])));
                    }
                    for (unsigned char i_16 = 0; i_16 < 19; i_16 += 3) 
                    {
                        var_44 = (-(196851328U));
                        var_45 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)55415))) == (238946717U)))) != (((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (unsigned short)511)) - (505)))))))) < (((/* implicit */int) var_5))));
                    }
                }
                var_46 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)16771))));
            }
        } 
    } 
}
