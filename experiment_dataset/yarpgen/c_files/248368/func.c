/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248368
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
    var_15 |= ((/* implicit */unsigned char) var_6);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) /* same iter space */
        {
            arr_7 [i_0] [i_0] = ((/* implicit */_Bool) (((-(min((466007449U), (466007449U))))) - ((~((+(var_4)))))));
            var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_4 [(unsigned char)13] [12U] [12U]), (((/* implicit */short) arr_0 [i_0 + 1])))))) ^ (((15516788673406288897ULL) | (((/* implicit */unsigned long long int) 16U)))))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                var_17 = (+(((/* implicit */int) (!(var_6)))));
                /* LoopSeq 1 */
                for (unsigned char i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)102)) ? (((/* implicit */int) arr_2 [i_3])) : (((/* implicit */int) arr_2 [i_0 + 1]))));
                    var_19 |= ((/* implicit */unsigned int) ((short) (~(arr_1 [i_0] [i_1]))));
                    arr_12 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_0 + 1] [13U] [i_2])) | ((~(((/* implicit */int) (signed char)85))))));
                }
            }
        }
        /* vectorizable */
        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 4) /* same iter space */
        {
            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_0] [i_4] [i_0 - 1])) ? (1870033527499402246ULL) : (((/* implicit */unsigned long long int) ((arr_10 [i_4] [i_0] [i_4] [i_0]) >> (((var_3) - (1458505317U))))))));
            var_21 = ((/* implicit */unsigned char) ((unsigned short) (unsigned char)93));
            arr_15 [i_0] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 7441902059104911999ULL)) ? (((((/* implicit */_Bool) 9741533864083808641ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-12032)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0] [(unsigned char)13])))))));
            /* LoopSeq 2 */
            for (signed char i_5 = 4; i_5 < 16; i_5 += 3) 
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 20; i_6 += 3) 
                {
                    for (long long int i_7 = 0; i_7 < 20; i_7 += 1) 
                    {
                        {
                            arr_24 [(short)17] [1ULL] [i_5] [i_6] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [(_Bool)1] [i_5 - 1] [i_0 + 1] [i_0 + 1])) ? ((+(((/* implicit */int) arr_4 [3ULL] [3ULL] [3ULL])))) : (((((/* implicit */int) arr_0 [i_6])) << (((/* implicit */int) (unsigned char)6))))));
                            var_22 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_5] [i_4] [i_0 - 1] [i_5]))) - (5906488633226936589ULL))));
                            var_23 = ((((/* implicit */int) arr_20 [i_0 - 1] [(unsigned char)2] [i_5 - 2] [i_5 - 4])) - (((/* implicit */int) (unsigned char)161)));
                        }
                    } 
                } 
                var_24 |= ((/* implicit */unsigned short) (+((~(((/* implicit */int) (unsigned char)107))))));
                var_25 |= ((/* implicit */unsigned char) (+(arr_16 [i_0 + 1] [i_0 + 1])));
            }
            for (int i_8 = 0; i_8 < 20; i_8 += 4) 
            {
                var_26 = ((/* implicit */unsigned char) (-((~(((/* implicit */int) var_0))))));
                var_27 = ((/* implicit */short) ((((/* implicit */int) arr_19 [(unsigned char)0] [i_0 + 1] [i_4] [i_4])) != (((/* implicit */int) arr_19 [i_4] [14U] [i_4] [(short)10]))));
                arr_28 [i_8] [i_4] [i_8] [(unsigned char)8] = ((/* implicit */long long int) (unsigned char)96);
            }
        }
        for (unsigned char i_9 = 2; i_9 < 18; i_9 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_10 = 1; i_10 < 19; i_10 += 1) 
            {
                for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 4) 
                {
                    {
                        var_28 |= ((/* implicit */unsigned short) ((((var_13) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_25 [i_0 - 1] [i_9 + 1])) << (((/* implicit */int) arr_25 [1ULL] [i_9 + 2]))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned int i_12 = 0; i_12 < 20; i_12 += 4) 
                        {
                            arr_41 [i_9] [i_11] |= ((/* implicit */short) 16U);
                            var_29 = ((/* implicit */long long int) (short)24774);
                            arr_42 [i_0 - 1] [i_9] [i_9] [(unsigned char)13] [5LL] = ((/* implicit */int) (-(arr_11 [i_0 - 1] [(short)14] [i_0] [i_0 - 1] [i_10 + 1] [i_11])));
                            var_30 = ((/* implicit */int) (-(511U)));
                        }
                        for (signed char i_13 = 2; i_13 < 19; i_13 += 4) 
                        {
                            var_31 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) min((-4260164667901645432LL), (((/* implicit */long long int) var_8))))) - (((((/* implicit */_Bool) 5559507690026052588LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_0] [(unsigned char)10] [i_9] [i_0] [i_13]))) : (18446744073709551615ULL))))) - (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))));
                            arr_46 [i_9] [i_9] = (-(((/* implicit */int) ((arr_36 [i_13 - 1] [i_13 - 2] [i_13 + 1]) > (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_35 [i_10]))))))))));
                        }
                        for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                        {
                            var_32 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) ((arr_45 [i_9] [(_Bool)1] [9U] [i_9]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [3U] [i_9]))))))) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_22 [i_0 - 1])))))));
                            var_33 = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_49 [i_14] [(signed char)4] [i_10] [i_9 + 2] [i_0 - 1])) ? (((-455666880) + (((/* implicit */int) (unsigned char)0)))) : (((/* implicit */int) arr_49 [i_0 + 1] [i_0 + 1] [i_9 - 1] [i_10 + 1] [i_11]))))), (max((((arr_36 [i_9] [i_9] [i_14 - 1]) << (((/* implicit */int) (signed char)22)))), (((/* implicit */unsigned int) arr_8 [i_11] [i_9] [i_0]))))));
                            arr_50 [(unsigned char)9] [i_9] = ((/* implicit */unsigned int) min((((/* implicit */unsigned char) ((((/* implicit */int) (short)29254)) != (((/* implicit */int) (signed char)-6))))), (max((arr_23 [i_14] [i_14] [7U] [i_14] [i_14] [i_14 - 1] [i_14]), (((/* implicit */unsigned char) arr_34 [i_9 + 1] [i_9 + 2]))))));
                        }
                    }
                } 
            } 
            var_34 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7473))) - (3554007157U))))));
            var_35 = min((((/* implicit */int) arr_8 [i_0] [i_0] [i_9])), (((((/* implicit */int) arr_17 [i_0 + 1])) >> (((((1505664053) ^ (((/* implicit */int) (signed char)-117)))) + (1505664077))))));
            /* LoopSeq 2 */
            for (unsigned int i_15 = 0; i_15 < 20; i_15 += 2) 
            {
                arr_53 [i_0] [i_9 + 1] [i_15] [i_15] |= ((/* implicit */signed char) ((unsigned char) 1734526376U));
                arr_54 [4U] [i_15] [i_15] |= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (short)28860)), (1679078458829388199ULL)));
            }
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_17 = 3; i_17 < 16; i_17 += 4) 
                {
                    for (unsigned long long int i_18 = 0; i_18 < 20; i_18 += 3) 
                    {
                        {
                            arr_63 [(_Bool)0] [i_9] |= ((/* implicit */long long int) 16576710546210149390ULL);
                            var_36 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) (unsigned short)58058))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */_Bool) 0U)) && ((_Bool)1))))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                /* vectorizable */
                for (short i_19 = 0; i_19 < 20; i_19 += 3) 
                {
                    var_37 = ((/* implicit */unsigned long long int) arr_47 [i_0 - 1]);
                    arr_66 [i_0] [i_9 - 1] [i_0] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_26 [i_9] [i_9] [i_0 + 1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_56 [i_9 + 1] [i_9 + 1] [i_9 - 2] [i_9 + 1])));
                    var_38 = ((/* implicit */unsigned char) ((((/* implicit */int) var_7)) > ((+(((/* implicit */int) arr_5 [0U] [0ULL] [i_16]))))));
                    var_39 = ((/* implicit */unsigned int) min((var_39), (((/* implicit */unsigned int) (-(arr_59 [i_0 - 1] [i_0 - 1] [i_9 + 2] [i_9]))))));
                }
                /* vectorizable */
                for (short i_20 = 0; i_20 < 20; i_20 += 1) 
                {
                    arr_69 [i_20] [i_9] [i_9] [i_0] = ((/* implicit */int) arr_45 [i_0] [i_0] [i_16] [i_9]);
                    arr_70 [i_20] [i_9] [i_16] [i_9] [i_9] [17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)20115)) ? (((/* implicit */int) arr_68 [i_0])) : ((+(1851599244)))));
                    var_40 = ((/* implicit */unsigned char) (((~(1505664039))) / (((/* implicit */int) arr_5 [i_9 + 1] [i_9 + 1] [i_9 + 1]))));
                    var_41 = ((/* implicit */unsigned int) min((var_41), ((+(arr_64 [i_0 + 1])))));
                    arr_71 [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_0 - 1])) ? (((/* implicit */int) arr_17 [i_0 - 1])) : (((/* implicit */int) arr_17 [i_0 + 1]))));
                }
                for (short i_21 = 0; i_21 < 20; i_21 += 1) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        var_42 |= ((/* implicit */unsigned int) (+(((/* implicit */int) var_12))));
                        var_43 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_9] [i_0] [16] [i_9] [i_9 + 1] [12ULL]))) % (((((/* implicit */_Bool) 3664583393U)) ? (5906488633226936594ULL) : (1870033527499402246ULL)))));
                        var_44 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_16]))));
                    }
                    for (signed char i_23 = 0; i_23 < 20; i_23 += 1) 
                    {
                        var_45 = ((/* implicit */unsigned int) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_44 [12ULL] [i_9 - 2] [i_9] [i_9] [i_9 - 2] [i_9 - 2] [12ULL])), ((unsigned short)7473)))) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_44 [i_9] [i_9] [i_9] [19U] [i_9 - 2] [i_9 + 1] [i_9])))))));
                        var_46 = ((/* implicit */signed char) (+(((/* implicit */int) arr_32 [i_0 + 1] [i_23] [1U] [i_21]))));
                        var_47 = ((/* implicit */signed char) ((max((((/* implicit */unsigned int) min((((/* implicit */int) (signed char)15)), (-1505664054)))), (min((arr_11 [i_0 - 1] [i_0 - 1] [i_16] [i_21] [i_23] [i_0 - 1]), (((/* implicit */unsigned int) arr_68 [0ULL])))))) << ((((-(((/* implicit */int) (_Bool)1)))) + (5)))));
                        var_48 = ((/* implicit */signed char) ((max(((-(((/* implicit */int) arr_19 [i_9] [i_9] [i_9] [i_9])))), (((/* implicit */int) arr_32 [i_0 + 1] [i_9 + 1] [i_9 + 1] [i_9 + 1])))) - (((((/* implicit */int) arr_30 [i_0 - 1] [i_0 + 1] [i_9 - 1])) >> (((/* implicit */int) arr_30 [i_0 + 1] [i_0 + 1] [i_9 - 2]))))));
                    }
                    arr_81 [i_9] [i_9] [(_Bool)1] [16] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)80)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-71))) : (arr_77 [i_21] [0U] [i_16] [i_0] [i_9] [i_0] [i_0]))), (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : ((((((_Bool)1) ? (((/* implicit */unsigned int) 1505664053)) : (214326978U))) >> ((((~(var_13))) - (5035889062062274139LL)))))));
                }
                arr_82 [(unsigned short)2] [i_0] [(unsigned short)2] |= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-125))) <= (min((((16711843884101184396ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned long long int) arr_64 [i_0 + 1]))))));
            }
            var_49 = ((/* implicit */signed char) var_14);
        }
        var_50 = ((/* implicit */unsigned long long int) var_0);
    }
    /* vectorizable */
    for (unsigned long long int i_24 = 0; i_24 < 15; i_24 += 1) 
    {
        var_51 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */unsigned int) arr_59 [8U] [(unsigned char)9] [i_24] [i_24])) | (var_1)))) ^ (-341308041068772998LL)));
        arr_87 [i_24] = ((/* implicit */signed char) var_1);
    }
}
