/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206296
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
    var_20 &= ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (((((/* implicit */int) (signed char)24)) + (((/* implicit */int) var_14)))) : (((/* implicit */int) max(((short)18), (((/* implicit */short) (signed char)63)))))))) & (((long long int) ((var_12) - (((/* implicit */long long int) var_7)))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 15; i_3 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            arr_17 [i_0] [i_0] [i_0] [(unsigned char)3] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_3 - 3] [i_3 + 2] [i_3 - 1] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)112))) : (arr_10 [i_3 + 2] [i_3 - 2] [i_3 + 1] [i_3])));
                            arr_18 [i_4] [i_0] [i_2] [1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((signed char) ((long long int) var_1)));
                            var_21 = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_1] [i_1] [i_1]))) ^ (3179951880771721011LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (short)39)))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (var_17))));
                            var_22 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)18)) << (((965353516) - (965353513)))));
                        }
                        for (long long int i_5 = 0; i_5 < 17; i_5 += 4) 
                        {
                            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_7 [i_0] [i_1])) : (((/* implicit */int) arr_7 [i_3] [i_5]))));
                            var_24 = ((/* implicit */int) ((((/* implicit */_Bool) (short)-36)) ? (var_8) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)1))) ^ (arr_4 [i_0]))))));
                            var_25 = ((/* implicit */signed char) (~(arr_5 [i_0])));
                        }
                        var_26 = ((/* implicit */long long int) arr_15 [i_0] [i_1] [i_2] [i_3] [i_3]);
                    }
                    for (long long int i_6 = 0; i_6 < 17; i_6 += 2) 
                    {
                        arr_24 [i_0] [i_0] [i_0] [i_6] [8LL] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_12)), (arr_14 [i_0] [i_0] [i_0] [i_6] [i_6] [i_6])))) ? (var_6) : (arr_19 [i_0] [i_1] [i_2] [i_6] [i_6])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)39)) >= (((/* implicit */int) (short)-18)))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0]))))) ? (((0LL) | (((/* implicit */long long int) ((/* implicit */int) (signed char)112))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_18)))))))));
                        var_27 &= ((/* implicit */int) (((+(((((/* implicit */_Bool) arr_10 [3] [i_1] [(short)16] [(short)16])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)121))))))) * (var_8)));
                        arr_25 [i_6] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_13)), (arr_10 [i_0] [i_0] [(signed char)16] [i_6])))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_15 [i_0] [i_0] [i_0] [6LL] [i_0])), (((unsigned int) (short)-1))))) : (((6LL) % (((/* implicit */long long int) 2147483645))))));
                        var_28 = ((/* implicit */long long int) min((arr_6 [i_0] [i_0] [i_0]), ((+(((/* implicit */int) var_11))))));
                        var_29 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_15)), ((~(((((/* implicit */_Bool) var_7)) ? (var_18) : (((/* implicit */unsigned long long int) -9LL))))))));
                    }
                    arr_26 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((_Bool) ((arr_11 [i_0] [i_1] [i_1] [i_1]) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)112))))));
                    var_30 &= ((/* implicit */int) (+(min((((/* implicit */long long int) 1841344618)), (-6777022946944871334LL)))));
                }
            } 
        } 
        var_31 &= ((int) max((((((/* implicit */_Bool) var_3)) ? (4313791615878596006ULL) : (((/* implicit */unsigned long long int) arr_21 [(unsigned char)6] [i_0] [i_0] [(unsigned char)6])))), (((var_18) * (var_19)))));
    }
    for (unsigned char i_7 = 0; i_7 < 20; i_7 += 2) 
    {
        var_32 += ((/* implicit */unsigned char) ((_Bool) 2452410887U));
        arr_31 [i_7] = ((/* implicit */signed char) max((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_17)), (var_19)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) var_13)) : (arr_27 [i_7] [i_7])))) : (((((/* implicit */_Bool) (unsigned char)20)) ? (((/* implicit */long long int) -144840035)) : (0LL))))), (((/* implicit */long long int) (+(arr_27 [i_7] [i_7]))))));
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 4) 
    {
        var_33 *= ((/* implicit */unsigned int) min((((/* implicit */long long int) (-(((unsigned int) var_19))))), (var_10)));
        var_34 = ((/* implicit */int) (~(max((((/* implicit */unsigned long long int) (signed char)-68)), (7500859962250623725ULL)))));
        /* LoopSeq 4 */
        for (signed char i_9 = 0; i_9 < 21; i_9 += 1) 
        {
            var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) max((-2544998075259661478LL), (((/* implicit */long long int) ((((/* implicit */int) var_11)) != (((/* implicit */int) ((0U) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-32))))))))))))));
            /* LoopNest 2 */
            for (signed char i_10 = 1; i_10 < 20; i_10 += 2) 
            {
                for (unsigned char i_11 = 0; i_11 < 21; i_11 += 4) 
                {
                    {
                        var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) (~(var_17))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_12 = 2; i_12 < 19; i_12 += 1) 
                        {
                            var_37 = ((/* implicit */short) ((arr_34 [i_10 - 1]) | (((/* implicit */unsigned long long int) var_15))));
                            var_38 = ((/* implicit */unsigned short) 25LL);
                            var_39 = ((/* implicit */long long int) 2147483645);
                            arr_45 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (var_8) : (((/* implicit */unsigned long long int) arr_44 [i_10 + 1] [i_10] [i_12 - 2] [i_12 - 1] [i_12 - 2] [i_12 - 2] [i_12 - 2]))));
                        }
                        for (short i_13 = 0; i_13 < 21; i_13 += 1) 
                        {
                            var_40 = ((/* implicit */unsigned int) ((short) ((short) ((unsigned long long int) arr_36 [16U] [i_10] [i_10] [12LL]))));
                            arr_49 [i_11] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */signed char) var_12);
                        }
                        var_41 = ((/* implicit */unsigned long long int) max((var_41), (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */unsigned long long int) var_3)) == (arr_39 [i_8] [i_9] [i_10 - 1] [i_11])))))));
                        var_42 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((669421133) & (((/* implicit */int) (unsigned char)22))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_35 [i_8] [i_8] [i_11]))))) : ((~(arr_44 [(signed char)18] [i_9] [i_9] [(unsigned char)20] [i_9] [i_9] [i_9])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_32 [i_10 - 1] [i_10 + 1]), (arr_32 [i_10 + 1] [i_10 - 1]))))) : (max((3767552448U), (((/* implicit */unsigned int) ((-7) % (((/* implicit */int) (short)-23)))))))));
                    }
                } 
            } 
        }
        for (long long int i_14 = 0; i_14 < 21; i_14 += 3) 
        {
            var_43 = ((/* implicit */long long int) var_6);
            var_44 = ((/* implicit */unsigned long long int) 2147483645);
            /* LoopNest 3 */
            for (signed char i_15 = 3; i_15 < 20; i_15 += 2) 
            {
                for (long long int i_16 = 1; i_16 < 17; i_16 += 2) 
                {
                    for (unsigned int i_17 = 0; i_17 < 21; i_17 += 1) 
                    {
                        {
                            arr_62 [i_14] [i_14] [i_17] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)18)) ? (15149306989446871311ULL) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) (unsigned short)1))))))));
                            arr_63 [i_17] [i_17] [i_17] [i_17] [i_17] = (_Bool)0;
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (unsigned int i_18 = 0; i_18 < 21; i_18 += 2) /* same iter space */
        {
            arr_66 [i_18] [i_18] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)-16967)) + (2147483647))) >> (((1698162093U) - (1698162093U)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 0LL)) || (((/* implicit */_Bool) var_5))))) : ((~(((/* implicit */int) arr_41 [i_8] [i_18] [i_18]))))));
            var_45 &= ((/* implicit */unsigned long long int) arr_54 [i_8] [(unsigned char)5] [(short)16] [i_18]);
            arr_67 [i_8] = ((/* implicit */int) ((((7500859962250623755ULL) + (((/* implicit */unsigned long long int) 589570885U)))) >= (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)39))) / (9223372036854775790LL))))));
        }
        for (unsigned int i_19 = 0; i_19 < 21; i_19 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                for (int i_21 = 0; i_21 < 21; i_21 += 3) 
                {
                    for (unsigned short i_22 = 3; i_22 < 19; i_22 += 3) 
                    {
                        {
                            var_46 &= ((/* implicit */long long int) ((((/* implicit */_Bool) (~((+(((/* implicit */int) arr_58 [i_19] [i_19] [i_19]))))))) ? ((-(var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_46 [i_22] [i_8] [i_20] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) (short)56))) : (9010846230386402114LL))) >= (((/* implicit */long long int) var_2))))))));
                            var_47 = ((/* implicit */short) max((var_47), (((short) min((arr_56 [i_22] [i_22 - 1] [i_22 - 2] [i_22 + 1] [i_22 - 3]), (var_0))))));
                            var_48 = ((/* implicit */unsigned int) arr_37 [i_21] [i_20] [i_19] [i_8]);
                            var_49 = ((/* implicit */int) (short)1);
                            var_50 &= ((/* implicit */signed char) max((((/* implicit */short) (unsigned char)40)), ((short)26)));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_23 = 0; i_23 < 21; i_23 += 2) 
            {
                for (unsigned long long int i_24 = 0; i_24 < 21; i_24 += 1) 
                {
                    {
                        var_51 = ((/* implicit */_Bool) min((var_51), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_9)), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_43 [i_8] [i_19])), (arr_55 [9U])))) ? (((((/* implicit */_Bool) var_10)) ? (var_18) : (var_5))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)30)), (var_10)))))))))));
                        var_52 = ((/* implicit */unsigned long long int) max((var_52), (min((((((/* implicit */_Bool) 8)) ? (((/* implicit */unsigned long long int) 9010846230386402114LL)) : (15149306989446871333ULL))), (((/* implicit */unsigned long long int) (~(arr_79 [i_8] [i_19] [i_19] [i_24]))))))));
                    }
                } 
            } 
        }
    }
    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
    {
        arr_88 [i_25] [i_25] = ((/* implicit */unsigned short) arr_87 [i_25]);
        /* LoopSeq 1 */
        for (int i_26 = 0; i_26 < 22; i_26 += 1) 
        {
            var_53 = ((/* implicit */long long int) min(((+(((/* implicit */int) ((short) var_16))))), (((/* implicit */int) min((((/* implicit */short) (unsigned char)22)), ((short)-7))))));
            arr_92 [i_25] [i_25] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5ULL)) ? (((/* implicit */int) (unsigned char)202)) : (((/* implicit */int) (short)0))))) ? (((((/* implicit */_Bool) ((var_10) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)-2)))))) ? (((var_18) >> (((arr_87 [i_26]) + (7518545005227669247LL))))) : ((+(arr_86 [7]))))) : (((((/* implicit */_Bool) (unsigned char)58)) ? (((unsigned long long int) (_Bool)1)) : (((/* implicit */unsigned long long int) var_12))))));
            var_54 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */unsigned int) var_16)) & ((~(788933714U))))));
            var_55 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) / ((((+(var_19))) / (((arr_86 [i_25]) / (((/* implicit */unsigned long long int) var_3))))))));
        }
        var_56 = ((/* implicit */signed char) (((~(-8217374045655512232LL))) ^ (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_6))))));
        /* LoopNest 3 */
        for (unsigned char i_27 = 0; i_27 < 22; i_27 += 4) 
        {
            for (unsigned int i_28 = 0; i_28 < 22; i_28 += 2) 
            {
                for (unsigned char i_29 = 0; i_29 < 22; i_29 += 4) 
                {
                    {
                        var_57 = ((/* implicit */unsigned char) max((var_57), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (((~(((/* implicit */int) (unsigned char)209)))) & (((/* implicit */int) arr_91 [i_25] [i_25]))))) ? (((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_17)) : (var_6))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)29)) ? (arr_96 [i_25]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-18007)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))));
                        var_58 &= ((/* implicit */signed char) var_2);
                        var_59 = ((/* implicit */signed char) arr_89 [i_25] [i_27] [4U]);
                        arr_101 [i_25] [i_25] [i_25] [i_25] = ((/* implicit */long long int) arr_99 [i_28] [i_28] [i_28] [i_28]);
                    }
                } 
            } 
        } 
    }
}
