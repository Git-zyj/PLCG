/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37919
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_11 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? ((-(var_0))) : (((/* implicit */unsigned long long int) var_2)))) >= (((/* implicit */unsigned long long int) arr_2 [i_0]))));
        var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_1 [i_0])) : (var_10)))) >= (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2565574431U)) ? (arr_2 [i_0]) : (((/* implicit */int) arr_0 [i_0]))))) / (((18316054080425497083ULL) / (14987251990525891160ULL))))))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 1; i_1 < 23; i_1 += 3) /* same iter space */
    {
        var_13 = (-(var_1));
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            arr_11 [i_2] [i_2] = ((/* implicit */unsigned short) ((arr_9 [i_2]) << (((arr_9 [i_1 + 1]) - (1262012715U)))));
            arr_12 [(signed char)23] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_1 + 2])) >= (((/* implicit */int) var_3))));
            var_14 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) var_7)))));
        }
        var_15 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 + 2])))))) ? (((/* implicit */int) arr_10 [i_1 + 1] [i_1 + 2])) : (((/* implicit */int) ((((/* implicit */unsigned long long int) var_2)) <= (555446442731449606ULL))))));
    }
    for (unsigned int i_3 = 1; i_3 < 23; i_3 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        for (int i_4 = 2; i_4 < 23; i_4 += 3) 
        {
            /* LoopSeq 2 */
            for (short i_5 = 0; i_5 < 25; i_5 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned short i_6 = 2; i_6 < 24; i_6 += 4) 
                {
                    for (short i_7 = 1; i_7 < 24; i_7 += 2) 
                    {
                        {
                            arr_26 [i_3] = ((/* implicit */short) (-((-((-(((/* implicit */int) arr_8 [i_3] [i_6] [i_6]))))))));
                            arr_27 [i_4] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_8)) ? (max((var_1), (((/* implicit */int) var_6)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) var_4)) >= (arr_5 [i_3])))))));
                            var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_16 [i_4 + 2] [i_6 - 2] [i_7 - 1]), (arr_16 [i_4 + 2] [i_6 - 1] [i_7 - 1])))) ? (min((arr_16 [i_4 + 1] [i_6 - 1] [i_7 + 1]), (var_0))) : (min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_16 [i_4 - 1] [i_6 + 1] [i_7 - 1])))));
                            var_17 = ((/* implicit */_Bool) 14987251990525891144ULL);
                        }
                    } 
                } 
                var_18 *= ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)511)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (5900108988475307127ULL))), (((((/* implicit */_Bool) arr_3 [i_3])) ? (14987251990525891144ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_3] [i_3 - 1] [i_3] [1] [i_3] [i_3 + 2] [1])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_3]))) : (max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) var_3)), (arr_19 [i_3] [i_4] [i_4] [i_5])))), ((-(arr_5 [i_5])))))));
                var_19 = ((/* implicit */int) arr_13 [i_3 + 2]);
            }
            for (signed char i_8 = 1; i_8 < 21; i_8 += 1) 
            {
                var_20 = ((/* implicit */_Bool) ((unsigned char) var_9));
                arr_30 [i_3] [i_4] [i_8] [i_3] = ((/* implicit */unsigned int) max((((/* implicit */long long int) min((arr_20 [i_4] [i_4 + 1] [i_4 + 2]), (((/* implicit */short) arr_6 [i_3 - 1]))))), (var_2)));
            }
            var_21 -= ((/* implicit */unsigned char) var_6);
        }
        for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned int i_10 = 0; i_10 < 25; i_10 += 2) 
            {
                var_22 = ((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) arr_23 [i_3 + 1] [i_3] [i_3] [i_3]))))) <= (((/* implicit */int) arr_32 [i_3 + 1] [i_3 + 1]))))), (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)41700))))) ? (((((/* implicit */_Bool) (short)511)) ? (((/* implicit */int) var_9)) : (var_10))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) var_10)) >= (7876769240903238785ULL))))))));
                arr_37 [(signed char)17] [13] [i_10] [i_10] = 1060497878U;
                /* LoopSeq 2 */
                for (long long int i_11 = 0; i_11 < 25; i_11 += 2) 
                {
                    arr_40 [i_3 + 1] [i_10] = max(((((-(arr_39 [i_3]))) << (((arr_28 [i_3 + 2] [2] [i_10]) - (382241949U))))), (((/* implicit */unsigned long long int) arr_13 [i_3])));
                    var_23 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_7 [i_3] [i_9] [i_3])) << (((/* implicit */int) arr_8 [i_3] [i_10] [i_10]))))))), (((((/* implicit */_Bool) arr_3 [i_10])) ? (((/* implicit */unsigned long long int) arr_9 [i_3 - 1])) : (5900108988475307127ULL)))));
                    var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((unsigned char) (+(((/* implicit */int) var_7))))))));
                    var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) (~((~(var_0))))))));
                }
                for (unsigned long long int i_12 = 1; i_12 < 24; i_12 += 2) 
                {
                    var_26 = ((/* implicit */_Bool) ((((unsigned long long int) (+(var_10)))) / (((((/* implicit */_Bool) min((((/* implicit */int) (short)-8)), (var_10)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57296))) / (3459492083183660469ULL)))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_13 = 3; i_13 < 22; i_13 += 1) 
                    {
                        var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_3 [i_3])) ? (((/* implicit */int) arr_7 [i_3] [i_3] [i_10])) : (((/* implicit */int) (short)-495))))))) >= ((-(min((arr_28 [(_Bool)1] [i_9] [i_10]), (((/* implicit */unsigned int) var_3)))))))))));
                        arr_45 [i_3 + 2] [i_3 - 1] [i_3] [i_3] [i_3] [i_3 + 1] [i_3] = ((/* implicit */unsigned int) (short)511);
                        var_28 = ((/* implicit */int) min((((((/* implicit */_Bool) var_10)) ? (arr_41 [i_3] [i_3] [i_12 - 1] [i_12] [i_13] [i_13]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_3 + 1]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_43 [i_3 + 1] [i_9] [i_9] [i_12 - 1] [14ULL] [i_10])) ? (((/* implicit */int) var_5)) : ((-(((/* implicit */int) var_9)))))))));
                        var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) min((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */_Bool) (+(arr_33 [i_3] [i_3])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_5)))) : ((~(var_0))))))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_14 = 1; i_14 < 24; i_14 += 1) 
                    {
                        arr_49 [i_3] [i_9] [i_10] [i_12] [i_14 - 1] [i_9] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)192)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_14 + 1] [i_14 - 1] [i_10])))));
                        var_30 = ((/* implicit */_Bool) ((unsigned short) arr_36 [i_3] [i_3 + 2] [i_3 + 2] [i_3]));
                        var_31 = ((/* implicit */long long int) min((var_31), (var_2)));
                    }
                }
                var_32 &= ((/* implicit */short) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (3459492083183660456ULL)))));
                var_33 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((4251676115018706047ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_35 [i_3] [(signed char)4]))))) : ((+(var_0)))))));
            }
            for (unsigned int i_15 = 4; i_15 < 22; i_15 += 1) 
            {
                var_34 = ((/* implicit */int) max((var_34), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) max((((/* implicit */short) var_8)), (arr_14 [i_3 + 1])))) : (((var_10) - (arr_25 [i_3] [i_3] [(signed char)23] [i_3])))))));
                var_35 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((unsigned long long int) var_4))) ? (((((/* implicit */_Bool) var_2)) ? (arr_15 [i_3 + 2]) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((/* implicit */long long int) arr_17 [i_3 + 2] [i_15 - 2])))) >= (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)245)) << (((min((2465768090077948471ULL), (((/* implicit */unsigned long long int) arr_51 [i_3 + 2] [3ULL] [i_15])))) - (50668ULL))))))));
            }
            arr_52 [i_3] [i_3] = ((/* implicit */int) ((((((((/* implicit */_Bool) var_5)) ? (var_4) : (5141721075174043051LL))) << (((((/* implicit */int) arr_31 [(_Bool)1] [i_9])) - (202))))) >= (((((/* implicit */_Bool) (short)1023)) ? (arr_15 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
        }
        for (unsigned long long int i_16 = 0; i_16 < 25; i_16 += 3) /* same iter space */
        {
            arr_56 [i_3] [i_16] [i_3] = arr_36 [i_16] [i_3 + 1] [i_3] [i_3];
            var_36 -= ((/* implicit */_Bool) var_8);
            /* LoopNest 2 */
            for (unsigned char i_17 = 0; i_17 < 25; i_17 += 4) 
            {
                for (int i_18 = 0; i_18 < 25; i_18 += 2) 
                {
                    {
                        var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 12546635085234244482ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_16])))))))) ? ((+(((((/* implicit */int) arr_18 [(signed char)8] [i_16] [i_16] [i_16])) / (((/* implicit */int) var_7)))))) : (((/* implicit */int) arr_46 [i_3] [i_16] [i_16] [i_17] [0LL] [i_16])))))));
                        arr_61 [i_3] [i_16] [i_17] [i_16] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) (+(4294967292U)))) ? (((var_6) ? (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_3 - 1] [i_16]))) : (arr_13 [i_3]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) <= (555446442731449580ULL)))))))));
                        arr_62 [i_3] [(unsigned char)24] [(unsigned char)24] [(_Bool)1] = ((/* implicit */signed char) var_8);
                        arr_63 [i_18] [i_17] [i_16] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_3 + 1])) ? (min((((/* implicit */long long int) arr_3 [i_3 + 2])), (-1009963642119581606LL))) : (((/* implicit */long long int) (+(arr_3 [i_3 - 1]))))));
                        arr_64 [i_18] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_5 [i_3 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)20851))) : (arr_5 [i_3 + 1]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-503)))))));
                    }
                } 
            } 
        }
        /* LoopSeq 1 */
        for (int i_19 = 0; i_19 < 25; i_19 += 3) 
        {
            var_38 = ((/* implicit */long long int) min((var_38), (((/* implicit */long long int) ((((/* implicit */int) max((arr_47 [(signed char)18] [i_3 - 1] [i_3 - 1] [(_Bool)1] [i_3 + 1]), (arr_47 [i_3 + 2] [i_3 + 1] [i_3 - 1] [i_3] [i_3 + 1])))) | (((((/* implicit */_Bool) arr_47 [i_3] [i_3 + 1] [i_3 - 1] [i_3 + 2] [i_3 - 1])) ? (((/* implicit */int) arr_46 [i_3] [i_3 - 1] [i_3 + 2] [(unsigned char)21] [i_3 - 1] [i_3 + 1])) : (((/* implicit */int) arr_47 [i_3] [i_3 + 1] [i_3 - 1] [(unsigned short)5] [i_3 + 2])))))))));
            var_39 = ((/* implicit */unsigned int) (((-((-(3459492083183660466ULL))))) << (((/* implicit */int) ((((/* implicit */int) ((signed char) (short)511))) <= (((/* implicit */int) var_6)))))));
        }
        /* LoopNest 2 */
        for (unsigned char i_20 = 0; i_20 < 25; i_20 += 1) 
        {
            for (unsigned char i_21 = 0; i_21 < 25; i_21 += 2) 
            {
                {
                    var_40 -= ((/* implicit */unsigned int) var_7);
                    var_41 = ((/* implicit */unsigned char) max((var_41), (((/* implicit */unsigned char) max((802642955U), (((/* implicit */unsigned int) var_5)))))));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_22 = 1; i_22 < 22; i_22 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_23 = 0; i_23 < 0; i_23 += 1) 
                        {
                            var_42 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_70 [i_3] [i_23 + 1] [i_3 + 1])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_20 [i_20] [i_20] [i_20]), (((/* implicit */short) (unsigned char)19)))))) + (1674624790225433854ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((-2991547569623354370LL) <= (((/* implicit */long long int) ((/* implicit */int) var_7)))))) << (((min((var_4), (((/* implicit */long long int) 725724801)))) - (725724795LL))))))));
                            arr_78 [i_3] [i_20] [i_21] [i_3] [i_23] = ((/* implicit */unsigned int) arr_16 [i_23 + 1] [i_20] [i_3]);
                        }
                        for (long long int i_24 = 0; i_24 < 25; i_24 += 1) 
                        {
                            arr_83 [i_3] [i_20] [i_21] [i_24] [i_21] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_72 [i_3 + 2])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_72 [i_3 + 1])))) <= (((/* implicit */int) ((((/* implicit */long long int) (-(var_1)))) <= (var_2))))));
                            var_43 = ((/* implicit */unsigned char) var_4);
                            var_44 = ((/* implicit */long long int) ((unsigned short) min((var_8), (((/* implicit */unsigned char) arr_48 [i_3 + 2] [i_21] [i_22 - 1])))));
                            var_45 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_14 [i_22 + 1])) ? (((/* implicit */int) arr_69 [i_3])) : (((/* implicit */int) arr_71 [7] [i_21] [i_22 + 3] [i_24])))));
                        }
                        arr_84 [i_3] [8ULL] [(short)16] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) ((short) (~(((/* implicit */int) arr_72 [i_3 + 1])))));
                    }
                    for (long long int i_25 = 1; i_25 < 21; i_25 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_26 = 2; i_26 < 23; i_26 += 1) 
                        {
                            var_46 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) min((arr_3 [i_3]), (((/* implicit */int) (short)502))))) ? (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)38606), ((unsigned short)44683))))) : (((((/* implicit */_Bool) 7427231187011747811LL)) ? (-1942207990298379057LL) : (((/* implicit */long long int) ((/* implicit */int) (short)8567)))))))));
                            var_47 ^= ((/* implicit */unsigned char) var_0);
                        }
                        arr_90 [i_3] [i_20] [(unsigned short)3] [1U] = ((/* implicit */unsigned short) ((min((var_1), (((/* implicit */int) arr_4 [i_3 + 2])))) + (((/* implicit */int) max((((/* implicit */unsigned short) arr_4 [i_3 + 1])), ((unsigned short)20851))))));
                        var_48 = ((/* implicit */unsigned char) max((min(((-(8943544137139427909LL))), (((/* implicit */long long int) min((var_7), (((/* implicit */unsigned char) var_6))))))), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) >= (((((-1009963642119581606LL) + (9223372036854775807LL))) << (((725724815) - (725724815))))))))));
                        var_49 = ((/* implicit */unsigned long long int) (unsigned short)41774);
                    }
                    for (unsigned long long int i_27 = 1; i_27 < 22; i_27 += 4) 
                    {
                        var_50 = ((/* implicit */int) ((signed char) (-(((/* implicit */int) (short)-503)))));
                        var_51 = ((/* implicit */short) var_8);
                        arr_94 [i_21] [i_3] [i_3] |= (-(((/* implicit */int) max((((/* implicit */signed char) arr_23 [i_3] [i_3] [i_21] [(unsigned short)6])), (arr_44 [i_27 + 3])))));
                    }
                    for (int i_28 = 1; i_28 < 23; i_28 += 1) 
                    {
                        var_52 = ((/* implicit */long long int) max((var_52), (((/* implicit */long long int) (((-(((/* implicit */int) ((_Bool) arr_54 [i_3] [(unsigned short)8]))))) <= ((((((-(((/* implicit */int) (unsigned short)22667)))) + (2147483647))) << (((((/* implicit */int) (short)503)) - (503))))))))));
                        var_53 -= ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */int) var_3)) << (((((/* implicit */int) (short)-1)) + (18)))))) ? (max((((/* implicit */int) var_6)), (var_1))) : (((/* implicit */int) ((((/* implicit */int) var_5)) <= (2147483647)))))) >= ((-(((/* implicit */int) max(((unsigned char)243), (((/* implicit */unsigned char) (signed char)0)))))))));
                    }
                }
            } 
        } 
    }
    var_54 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) (~(2199023255488LL))))) ? (max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (4124201007393640035LL))), (max((((/* implicit */long long int) (unsigned char)141)), (var_2))))) : (((long long int) ((long long int) (unsigned char)99)))));
    var_55 = ((/* implicit */long long int) (((-((-(var_10))))) << (((((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_5)) ? (15991586097017296043ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_10) <= (((/* implicit */int) var_6)))))))) - (15991586097017296043ULL)))));
}
