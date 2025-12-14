/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52738
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
    var_17 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_9), (((/* implicit */long long int) (unsigned char)216))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_15)), (var_6)))) : (min((18446744073709551612ULL), (((/* implicit */unsigned long long int) (unsigned char)214))))))) ? (((/* implicit */long long int) min((((/* implicit */int) var_5)), ((-(((/* implicit */int) var_4))))))) : (min((((((/* implicit */_Bool) (unsigned short)16095)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_1))), (((/* implicit */long long int) max((1907532432U), (((/* implicit */unsigned int) (unsigned char)214))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */long long int) (+(var_6)))), (min((max((arr_7 [i_2] [i_0] [i_0] [i_0]), (((/* implicit */long long int) var_6)))), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)0)))))))));
                    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (short i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1)))))));
                            arr_15 [i_0] [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_4] [i_2] [i_0])) ? (arr_3 [i_1]) : (((/* implicit */unsigned int) arr_10 [i_0] [i_1] [i_0] [i_2] [i_3] [i_4]))))));
                            var_20 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_3] [i_1] [i_0 + 1] [i_3] [i_0 + 1] [i_1])) ? (((/* implicit */long long int) arr_13 [i_0] [(unsigned char)9] [i_0 + 1] [i_3] [i_4] [i_4])) : (var_9)));
                        }
                        for (short i_5 = 0; i_5 < 19; i_5 += 3) /* same iter space */
                        {
                            var_21 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_4))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)28)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3072))) : (8256140728057758943ULL)))) ? (144115188073758720LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))) : ((~((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [4LL] [i_0] [i_0]))) : (9223372036854775807LL)))))));
                            var_22 = min((((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_17 [i_2] [i_2] [i_2] [i_2] [i_2] [i_0]))))) ? (((((/* implicit */_Bool) (unsigned short)24356)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_0 [i_1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))), (max((((/* implicit */long long int) ((((/* implicit */_Bool) 3ULL)) ? (((/* implicit */int) (unsigned char)240)) : (((/* implicit */int) (unsigned char)62))))), (((((/* implicit */_Bool) arr_17 [i_0] [i_5] [i_3] [(_Bool)1] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] [i_0]))) : (-1792450606181666204LL))))));
                            var_23 -= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) max(((_Bool)1), ((_Bool)1)))), (min((arr_3 [i_0]), (((/* implicit */unsigned int) var_5))))));
                            arr_19 [i_5] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) (short)-7949)), (arr_13 [i_1] [i_3] [(signed char)13] [i_2] [i_1] [i_0])))) ? ((((_Bool)1) ? (14811704161356823656ULL) : (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [5U])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))))) ? (max((13731467414883218005ULL), (max((4639490431088270021ULL), (((/* implicit */unsigned long long int) arr_18 [i_0] [i_0] [i_0] [i_0 + 1] [i_0])))))) : (((/* implicit */unsigned long long int) max((max((((/* implicit */int) var_15)), (arr_5 [i_5] [i_0] [i_1]))), (((/* implicit */int) (!(((/* implicit */_Bool) 1792450606181666204LL))))))))));
                            arr_20 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [(short)8] [i_0] [i_0] &= max((max((((/* implicit */unsigned long long int) max((arr_7 [i_0] [6U] [i_2] [i_3]), (((/* implicit */long long int) var_6))))), (min((arr_14 [i_0] [i_1] [i_0] [8LL]), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0])))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) max((((/* implicit */signed char) var_13)), (arr_12 [i_3] [i_2] [i_2] [i_3]))))))));
                        }
                        for (short i_6 = 0; i_6 < 19; i_6 += 3) /* same iter space */
                        {
                            arr_24 [(unsigned char)12] [i_0] [i_3] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) min((arr_6 [i_0] [i_1] [i_3]), (13731467414883218005ULL)))) ? ((-(((/* implicit */int) var_14)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)40877))))))), (((/* implicit */int) max((var_10), (max((var_14), (((/* implicit */short) (_Bool)1)))))))));
                            var_24 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_1)), (16113561836392026484ULL)))) ? (((/* implicit */int) max(((unsigned short)3), (((/* implicit */unsigned short) (short)497))))) : (((/* implicit */int) min((var_3), (((/* implicit */unsigned short) (unsigned char)34)))))))) ? (((/* implicit */unsigned int) max((((/* implicit */int) arr_11 [i_3] [i_0] [i_2] [i_3] [i_0 + 1] [i_0 + 1])), (((((/* implicit */_Bool) 6344671793473914357ULL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_22 [i_6] [(unsigned short)12] [i_2] [i_1] [(unsigned short)12] [i_0]))))))) : ((-((-(4134033408U)))))));
                            arr_25 [i_0] [i_0] [i_0] [(unsigned short)10] [(unsigned short)18] [(unsigned short)12] [(unsigned short)12] |= ((/* implicit */unsigned int) (-(min(((-(((/* implicit */int) arr_16 [(unsigned short)0] [(unsigned short)0])))), (((((/* implicit */_Bool) 4715276658826333611ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0))))))));
                            arr_26 [i_0] [i_1] [(unsigned short)18] [i_2] [i_1] = ((/* implicit */int) min((max((min((arr_4 [i_0] [i_1] [i_2]), (((/* implicit */long long int) var_2)))), (((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_0]))))))), (((/* implicit */long long int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_1 [i_0]))))), (var_16))))));
                        }
                        /* vectorizable */
                        for (short i_7 = 0; i_7 < 19; i_7 += 3) /* same iter space */
                        {
                            var_25 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)61957)) ? (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_23 [i_0] [i_1] [i_2] [i_3] [(unsigned short)2] [i_1])))) : (((/* implicit */int) arr_17 [i_0] [i_0 + 1] [i_0 + 1] [i_0] [i_0] [(unsigned short)16]))));
                            var_26 &= ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [12U])) ? (arr_14 [i_0 + 1] [i_0] [i_0] [i_0 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)122)))));
                        }
                        /* LoopSeq 3 */
                        for (long long int i_8 = 0; i_8 < 19; i_8 += 4) 
                        {
                            var_27 = ((/* implicit */short) min((max(((~(((/* implicit */int) arr_18 [i_8] [i_0] [i_0] [i_1] [i_0])))), (((/* implicit */int) min((var_12), (var_14)))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
                            arr_33 [(unsigned char)1] [i_0] [i_0] [i_3] [i_0 + 1] = min((max((((/* implicit */long long int) (short)-32761)), (min((10LL), (((/* implicit */long long int) (_Bool)0)))))), (max((-1792450606181666202LL), (((/* implicit */long long int) (signed char)-46)))));
                            arr_34 [i_8] [i_8] [i_0] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */unsigned int) (-((-(min((((/* implicit */long long int) var_8)), (311427470823657610LL)))))));
                            arr_35 [i_1] [i_1] [i_1] [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (short)7949)) ? (((/* implicit */int) arr_11 [i_8] [i_3] [i_3] [i_2] [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) var_15))))));
                        }
                        for (short i_9 = 1; i_9 < 15; i_9 += 3) /* same iter space */
                        {
                            var_28 &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)53708)) ? (((((/* implicit */_Bool) (short)32763)) ? (2761506795012773283ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7949))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-5279))) : (3580227265U))))))) ? (6792662550186341012LL) : (0LL));
                            arr_38 [i_0] [i_3] = ((/* implicit */signed char) min((((/* implicit */long long int) (~(((/* implicit */int) var_16))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3))))) ? (min((arr_2 [i_0]), (((/* implicit */long long int) arr_37 [7U] [7U] [i_2] [i_2] [(short)2] [i_0])))) : ((+(2250492760916655109LL)))))));
                            var_29 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (+(max((((/* implicit */long long int) arr_3 [i_0])), (7258876307367649654LL)))))), (((max((arr_16 [i_2] [i_0]), ((_Bool)1))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) 3580227245U)) ? (7521049835872497820ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11843)))))))));
                        }
                        for (short i_10 = 1; i_10 < 15; i_10 += 3) /* same iter space */
                        {
                            var_30 = max((max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-39))))), (((((/* implicit */_Bool) arr_12 [i_0] [i_2] [i_10] [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_40 [i_0] [i_2]))))), (((/* implicit */unsigned long long int) max(((_Bool)1), ((_Bool)1)))));
                            var_31 &= ((/* implicit */unsigned char) min(((+(1953861162U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((7LL), (((/* implicit */long long int) (unsigned short)44307))))) ? (((/* implicit */int) min((var_10), (((/* implicit */short) arr_0 [i_0]))))) : (((/* implicit */int) max((var_4), ((short)-10)))))))));
                        }
                    }
                    for (unsigned long long int i_11 = 1; i_11 < 18; i_11 += 4) 
                    {
                        arr_44 [i_0] [i_0] [i_0] [i_11 + 1] = ((/* implicit */signed char) min((((/* implicit */long long int) (short)32767)), (((((/* implicit */_Bool) max((((/* implicit */int) (short)1401)), (-192124189)))) ? (0LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) 171822897U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)54)))))))));
                        /* LoopSeq 1 */
                        for (long long int i_12 = 0; i_12 < 19; i_12 += 1) 
                        {
                            var_32 = ((/* implicit */signed char) min((783568097), (((/* implicit */int) (_Bool)1))));
                            arr_47 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-32749)) ? (359791678) : (((/* implicit */int) (short)-32761))))), (((((/* implicit */_Bool) min((arr_18 [i_12] [i_11] [i_0] [i_1] [i_0]), (((/* implicit */unsigned short) arr_22 [(_Bool)1] [i_0] [i_2] [i_11] [(signed char)18] [i_12]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_2] [i_11 + 1] [i_11] [i_0])) ? (((/* implicit */int) arr_11 [i_12] [i_0 + 1] [i_2] [(_Bool)1] [i_0 + 1] [11LL])) : (((/* implicit */int) var_3))))) : (((var_13) ? (5494258281537134769ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1])))))))));
                        }
                        var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned short) var_15))))) ? (((var_13) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_0 + 1] [i_2] [i_1] [i_11] [i_2] [(unsigned short)12]))) : (4142071108U))) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10)))))))) ? (((/* implicit */long long int) (-(((/* implicit */int) max((var_12), (((/* implicit */short) var_13)))))))) : (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (max((((/* implicit */long long int) var_3)), (arr_7 [i_11] [i_0] [i_0] [i_0])))))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_13 = 4; i_13 < 8; i_13 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned char i_14 = 2; i_14 < 9; i_14 += 4) 
        {
            for (long long int i_15 = 2; i_15 < 9; i_15 += 4) 
            {
                for (short i_16 = 2; i_16 < 9; i_16 += 2) 
                {
                    {
                        var_34 -= ((/* implicit */signed char) (-((+(((var_13) ? (arr_58 [i_13] [i_14] [i_13] [i_13]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_14])))))))));
                        var_35 &= ((/* implicit */int) ((((/* implicit */_Bool) (-(min((((/* implicit */long long int) -918835654)), (-8822016339480286563LL)))))) ? ((-(max((((/* implicit */long long int) var_5)), (-2250492760916655110LL))))) : ((((_Bool)1) ? (-2250492760916655105LL) : (arr_4 [i_16] [i_14 - 1] [i_16 - 2])))));
                    }
                } 
            } 
        } 
        var_36 -= ((/* implicit */unsigned long long int) (~(max((((/* implicit */long long int) (short)4226)), (((((/* implicit */_Bool) 4300243669262825624ULL)) ? (((/* implicit */long long int) 2908345907U)) : (-4LL)))))));
        arr_61 [(unsigned short)10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (9LL)))) ? (((((/* implicit */_Bool) var_16)) ? (arr_48 [i_13 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)164))))) : (((/* implicit */long long int) (+(((/* implicit */int) var_16)))))));
    }
    var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), (var_5)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_3), (((/* implicit */unsigned short) var_15)))))) : (max((4300243669262825624ULL), (((/* implicit */unsigned long long int) var_7))))))));
}
