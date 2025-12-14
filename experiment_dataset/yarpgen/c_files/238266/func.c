/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238266
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_4 = 4; i_4 < 23; i_4 += 3) /* same iter space */
                        {
                            arr_15 [i_3] [22] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_7 [i_0] [i_3] [i_3]))));
                            arr_16 [i_0] [i_2] [i_2] [i_3] [i_4 - 2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_1))));
                        }
                        for (unsigned int i_5 = 4; i_5 < 23; i_5 += 3) /* same iter space */
                        {
                            arr_19 [i_0] [i_1] [i_2] [i_3] [i_5] |= ((/* implicit */unsigned short) (-(max((((/* implicit */long long int) (signed char)121)), (8636502376722787619LL)))));
                            var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? ((+(((/* implicit */int) arr_5 [i_2] [i_3])))) : (((((/* implicit */_Bool) arr_18 [i_0] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5])) ? (arr_18 [i_5] [i_5 + 1] [i_5 - 4] [i_5 - 1] [i_5]) : (arr_18 [i_3] [i_5 - 4] [i_5 - 3] [i_5 + 1] [i_5])))));
                            arr_20 [i_2] [i_2] [(_Bool)1] [i_5 - 3] [i_5] = ((/* implicit */_Bool) (-(min((((/* implicit */unsigned long long int) arr_17 [i_0] [i_1] [i_2] [i_5 - 1])), (var_7)))));
                            var_11 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_5 + 1] [i_2] [i_5 + 1])))))));
                            var_12 = ((/* implicit */unsigned long long int) (~((~(((((/* implicit */_Bool) 2746781316204656376ULL)) ? (((/* implicit */int) arr_5 [i_2] [i_2])) : (var_0)))))));
                        }
                        arr_21 [i_2] [i_1] [i_1] [i_2] [(signed char)18] = ((/* implicit */short) max(((-(8253123095615798955LL))), (((/* implicit */long long int) (short)(-32767 - 1)))));
                    }
                    var_13 = ((/* implicit */unsigned long long int) var_8);
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */short) var_4);
    /* LoopNest 2 */
    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
    {
        for (long long int i_7 = 1; i_7 < 10; i_7 += 3) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_15 = ((/* implicit */unsigned long long int) var_1);
                        var_16 = ((/* implicit */int) min((var_16), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((signed char) var_6))) : (var_2)))));
                        var_17 = ((/* implicit */_Bool) (-(8636502376722787636LL)));
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                    {
                        var_18 = ((/* implicit */short) arr_3 [(_Bool)1] [i_7] [i_10 - 1]);
                        var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 8636502376722787624LL)) ? (((/* implicit */int) (_Bool)1)) : (-80268373))))));
                        /* LoopSeq 3 */
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            arr_41 [i_7] = ((/* implicit */short) ((unsigned int) var_3));
                            var_20 += ((/* implicit */signed char) (short)-10285);
                        }
                        for (unsigned int i_12 = 0; i_12 < 11; i_12 += 3) 
                        {
                            var_21 = ((/* implicit */int) var_8);
                            arr_45 [(signed char)9] [i_7] [i_7] [i_8] [i_12] = ((/* implicit */long long int) ((short) (-(var_6))));
                        }
                        for (int i_13 = 0; i_13 < 11; i_13 += 3) 
                        {
                            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_9 [i_10] [i_7] [i_8] [(unsigned char)13])))))));
                            var_23 -= var_7;
                        }
                        arr_48 [i_6] [i_6] [(unsigned short)10] [i_7] = ((/* implicit */short) (!(arr_42 [i_7] [i_10 - 1])));
                        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)5642)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (_Bool)1)))) : (130048LL)));
                    }
                    var_25 = ((/* implicit */_Bool) 2746781316204656372ULL);
                    var_26 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (8636502376722787624LL) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (arr_46 [i_6] [i_7] [i_6] [i_8 - 1]) : (((/* implicit */unsigned long long int) arr_18 [8LL] [i_8 - 1] [i_7 - 1] [i_6 - 1] [i_6]))));
                    var_27 *= ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)5620)) > (((/* implicit */int) arr_39 [i_8 - 1] [2ULL] [i_8 - 1] [i_7 + 1] [2ULL] [i_6 - 1]))));
                }
                /* vectorizable */
                for (int i_14 = 3; i_14 < 10; i_14 += 3) 
                {
                    arr_52 [i_7] = ((/* implicit */signed char) ((var_9) != (var_2)));
                    arr_53 [i_7] [i_14] = ((/* implicit */int) arr_17 [i_6] [i_7] [i_6] [i_14 - 2]);
                }
                for (signed char i_15 = 0; i_15 < 11; i_15 += 4) 
                {
                    /* LoopNest 2 */
                    for (int i_16 = 1; i_16 < 9; i_16 += 2) 
                    {
                        for (int i_17 = 0; i_17 < 11; i_17 += 3) 
                        {
                            {
                                var_28 *= min((max((((/* implicit */long long int) arr_32 [i_17] [i_16] [i_15] [i_6] [i_6])), ((-(arr_2 [i_6]))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_9))))));
                                var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)121))))));
                            }
                        } 
                    } 
                    arr_63 [i_7] [10LL] [i_7 - 1] [(signed char)7] = ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (short)(-32767 - 1))) ? (var_1) : (((/* implicit */int) var_8))))))) ? (min((min((var_7), (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) min((var_5), (var_5)))))) : (((/* implicit */unsigned long long int) min((arr_25 [i_6 - 1]), (var_1)))));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_18 = 1; i_18 < 9; i_18 += 3) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        for (unsigned long long int i_20 = 0; i_20 < 11; i_20 += 3) 
                        {
                            {
                                arr_73 [i_6] [i_6] [i_6] [i_7] [i_6] = ((/* implicit */_Bool) var_2);
                                arr_74 [i_6] [i_6] [i_18] [i_19] [i_7] [i_20] = ((/* implicit */short) (!(((/* implicit */_Bool) var_9))));
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) var_2))));
                    arr_75 [i_7] = ((/* implicit */unsigned int) var_4);
                    var_31 = ((/* implicit */_Bool) (~((+(var_7)))));
                }
                arr_76 [i_7] [(_Bool)1] [9LL] = ((/* implicit */short) arr_64 [i_6] [i_7] [10U] [i_7]);
                arr_77 [i_7] [i_7] = ((/* implicit */unsigned short) arr_8 [i_7] [i_7] [i_6] [i_7]);
            }
        } 
    } 
    var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) var_5))));
}
