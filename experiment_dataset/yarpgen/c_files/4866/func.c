/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4866
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
    var_12 = ((/* implicit */short) var_0);
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 3; i_1 < 20; i_1 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 4) /* same iter space */
            {
                var_13 = ((/* implicit */long long int) 15345188859247813808ULL);
                /* LoopSeq 2 */
                for (unsigned short i_3 = 0; i_3 < 21; i_3 += 4) 
                {
                    arr_10 [i_0] [i_1 + 1] [14U] [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1))));
                    arr_11 [i_3] [i_2] = ((/* implicit */short) ((arr_3 [i_0 - 1] [i_0 - 1]) / (((/* implicit */long long int) ((/* implicit */int) var_5)))));
                }
                for (int i_4 = 0; i_4 < 21; i_4 += 2) 
                {
                    arr_15 [i_0 - 1] [i_0] [i_1] [i_2] [i_4] = ((/* implicit */signed char) (-(((((/* implicit */unsigned long long int) var_7)) * (15345188859247813808ULL)))));
                    arr_16 [(unsigned char)20] [i_2] [i_0 - 1] = ((/* implicit */unsigned char) var_6);
                }
            }
            for (unsigned short i_5 = 0; i_5 < 21; i_5 += 4) /* same iter space */
            {
                var_14 += (!(((/* implicit */_Bool) var_10)));
                /* LoopSeq 3 */
                for (unsigned int i_6 = 1; i_6 < 18; i_6 += 1) 
                {
                    arr_22 [0LL] [i_5] = ((/* implicit */unsigned int) arr_4 [i_0 - 1] [i_1 - 2] [i_6 - 1]);
                    arr_23 [(signed char)19] [i_1] [i_1] [i_1 - 2] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)22))));
                    /* LoopSeq 3 */
                    for (short i_7 = 2; i_7 < 18; i_7 += 3) 
                    {
                        arr_26 [i_0] [i_5] [i_5] [i_6] [i_7] |= ((/* implicit */unsigned long long int) (+(((var_3) & (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))));
                        arr_27 [(signed char)20] [i_7] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)5404))));
                    }
                    for (int i_8 = 1; i_8 < 18; i_8 += 1) 
                    {
                        var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) arr_24 [i_1]))));
                        arr_30 [i_8 + 3] [i_6] [14U] [i_1] [(signed char)11] = ((/* implicit */unsigned short) ((var_0) & (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_8 + 1] [i_6 + 1] [i_0])))));
                        arr_31 [(_Bool)0] [(_Bool)0] [(_Bool)1] [i_6 + 1] [i_8] = ((/* implicit */int) 15345188859247813808ULL);
                        arr_32 [(unsigned char)3] [i_1] [i_1] [i_5] [i_5] [i_1] = ((/* implicit */int) var_3);
                    }
                    for (signed char i_9 = 0; i_9 < 21; i_9 += 4) 
                    {
                        var_16 = ((/* implicit */long long int) var_9);
                        arr_36 [i_0] [(unsigned char)13] [(unsigned short)20] [i_0] [i_0] = ((/* implicit */int) var_9);
                    }
                    arr_37 [i_0] [i_0 - 1] [i_5] [(signed char)4] = ((/* implicit */unsigned char) (~(var_11)));
                }
                for (int i_10 = 0; i_10 < 21; i_10 += 4) 
                {
                    arr_41 [i_10] [i_5] [5LL] [i_1] [16] = ((/* implicit */short) (_Bool)0);
                    /* LoopSeq 1 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        arr_46 [i_11] [i_1 - 2] [i_5] [i_11] = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
                        arr_47 [i_0] [i_1] [(short)5] [i_5] [i_10] [i_11] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (signed char)-22)) ? (((/* implicit */int) (signed char)21)) : (((/* implicit */int) (unsigned short)60132))))));
                    }
                    arr_48 [i_0] [i_1 - 1] [(signed char)2] [i_1 - 1] = ((/* implicit */int) (!(arr_14 [i_0 - 1] [i_0 - 1] [i_1 + 1] [i_5])));
                }
                for (signed char i_12 = 3; i_12 < 18; i_12 += 2) 
                {
                    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_11)))) >= (arr_12 [i_0] [i_0 - 1] [i_5] [6ULL] [i_12] [i_12]))))));
                    /* LoopSeq 3 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        arr_54 [19] [i_12] [i_1] [i_12] [(signed char)4] [i_12] [i_13] = ((/* implicit */unsigned int) ((unsigned short) var_1));
                        arr_55 [(signed char)18] [i_12] [i_5] [i_12] [i_5] = ((/* implicit */unsigned short) (unsigned char)155);
                    }
                    for (signed char i_14 = 0; i_14 < 21; i_14 += 4) 
                    {
                        var_18 *= ((/* implicit */unsigned char) (+(((((/* implicit */unsigned int) ((/* implicit */int) var_9))) * (var_11)))));
                        var_19 *= ((/* implicit */signed char) ((((/* implicit */int) ((short) (unsigned char)155))) + (((/* implicit */int) ((unsigned char) -618677057)))));
                        arr_59 [i_0 - 1] [(_Bool)1] [i_12] = ((/* implicit */signed char) (-(((long long int) var_0))));
                        arr_60 [i_0] [i_1] [i_12] [i_12 - 3] [i_14] = ((/* implicit */signed char) 14177738591046140370ULL);
                    }
                    for (short i_15 = 0; i_15 < 21; i_15 += 1) 
                    {
                        var_20 *= ((/* implicit */int) (((+(-5061163958617616598LL))) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                        arr_63 [i_12] = ((/* implicit */short) ((unsigned int) (!(((/* implicit */_Bool) var_5)))));
                    }
                    arr_64 [i_12] [i_12] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_21 [(short)10] [i_5] [11LL] [i_12 + 2]))));
                    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((_Bool) (unsigned char)155)))));
                }
                /* LoopSeq 2 */
                for (unsigned char i_16 = 1; i_16 < 18; i_16 += 1) /* same iter space */
                {
                    arr_67 [i_1] [i_16 + 1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-77)) ? (((/* implicit */int) (unsigned char)54)) : (((/* implicit */int) (signed char)-77))))) < (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) % (var_11)))));
                    arr_68 [(_Bool)1] [3LL] [i_5] [14ULL] = ((/* implicit */long long int) var_1);
                    arr_69 [i_1] [i_5] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-22))));
                    arr_70 [i_0] [i_0 - 1] [i_0 - 1] [(_Bool)1] = ((((/* implicit */_Bool) arr_44 [i_0 - 1] [i_1 - 3] [i_16 + 2] [(signed char)10] [i_16] [i_16])) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (signed char)114)));
                    arr_71 [i_0] [i_0 - 1] [i_5] [i_16] [i_16] = ((/* implicit */unsigned short) ((short) 5132956898933046208LL));
                }
                for (unsigned char i_17 = 1; i_17 < 18; i_17 += 1) /* same iter space */
                {
                    arr_74 [i_17 + 3] = ((/* implicit */int) var_10);
                    arr_75 [i_0] [i_1] [i_0 - 1] [6U] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_65 [i_0] [i_0] [i_0] [i_0 - 1] [i_17 + 3])) : (((/* implicit */int) ((var_3) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                    arr_76 [i_0] [i_1 - 2] [i_5] [i_17 + 2] = ((/* implicit */short) ((signed char) var_8));
                }
            }
            arr_77 [i_0] = ((/* implicit */_Bool) var_7);
        }
        var_22 = ((/* implicit */unsigned char) (~(((((/* implicit */int) (unsigned short)15928)) >> (((127ULL) - (101ULL)))))));
        /* LoopSeq 1 */
        for (int i_18 = 1; i_18 < 20; i_18 += 1) 
        {
            arr_82 [i_18] [(_Bool)1] = ((/* implicit */short) var_9);
            /* LoopSeq 2 */
            for (int i_19 = 2; i_19 < 20; i_19 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                for (signed char i_20 = 0; i_20 < 21; i_20 += 1) 
                {
                    var_23 |= ((/* implicit */long long int) min(((-(((/* implicit */int) (signed char)76)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                    arr_87 [i_0] [i_18] [i_19] = ((/* implicit */long long int) min((((/* implicit */unsigned int) var_1)), (((unsigned int) min((var_6), (((/* implicit */short) var_10)))))));
                    arr_88 [0LL] [(unsigned short)11] [(unsigned char)7] [i_18] [i_20] [(short)13] = ((/* implicit */unsigned char) (signed char)-22);
                }
                /* LoopNest 2 */
                for (signed char i_21 = 2; i_21 < 20; i_21 += 4) 
                {
                    for (unsigned short i_22 = 0; i_22 < 21; i_22 += 1) 
                    {
                        {
                            arr_94 [i_18] = ((/* implicit */signed char) ((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)230))))) / (max((((/* implicit */unsigned int) var_8)), (var_11)))));
                            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) min((var_11), (((((/* implicit */_Bool) var_1)) ? ((-(var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_10)))))))))));
                        }
                    } 
                } 
                arr_95 [i_0] [i_0 - 1] [i_18] [i_19 - 2] = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) var_8))) + (arr_49 [i_0 - 1] [i_18 + 1] [i_18] [i_19 - 2] [i_19 + 1]))) ^ (((/* implicit */unsigned int) min((((/* implicit */int) var_5)), (arr_8 [i_0 - 1] [i_18 + 1] [(unsigned short)8]))))));
                arr_96 [16LL] [i_18] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))));
            }
            for (int i_23 = 2; i_23 < 20; i_23 += 4) /* same iter space */
            {
                arr_100 [i_18] = min((((((/* implicit */unsigned int) ((/* implicit */int) var_1))) / (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-22))) - (var_3))))), (((min((var_11), (((/* implicit */unsigned int) var_10)))) * (max((var_3), (var_3))))));
                /* LoopNest 2 */
                for (_Bool i_24 = 1; i_24 < 1; i_24 += 1) 
                {
                    for (unsigned short i_25 = 1; i_25 < 19; i_25 += 1) 
                    {
                        {
                            arr_109 [i_0 - 1] [i_18] [8] [i_0 - 1] [i_18] = ((/* implicit */unsigned long long int) (~(var_11)));
                            arr_110 [i_18 + 1] [i_18] [(short)13] = ((/* implicit */signed char) 5132956898933046208LL);
                            var_25 += ((/* implicit */unsigned short) (~(0U)));
                            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((unsigned int) var_11)))));
                        }
                    } 
                } 
                var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (unsigned char)25)) : (((/* implicit */int) (short)-14602))));
            }
            arr_111 [i_18] = ((/* implicit */signed char) min((max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 4294967295U))))), ((~(3111895716U))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? ((~(((/* implicit */int) arr_79 [19ULL] [i_18] [i_0])))) : (((/* implicit */int) var_4)))))));
            arr_112 [i_18] = ((/* implicit */short) ((((/* implicit */int) min((max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)165))), (((/* implicit */unsigned char) var_9))))) / (((/* implicit */int) (signed char)42))));
        }
    }
    var_28 = ((/* implicit */int) max((var_28), (-1369054740)));
    var_29 = ((/* implicit */signed char) max((((/* implicit */long long int) var_0)), ((-(-5132956898933046208LL)))));
}
