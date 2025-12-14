/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191906
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
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) arr_1 [i_0]))));
            arr_6 [i_0] [9U] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(204812259U))))));
            var_19 = ((/* implicit */signed char) arr_0 [i_0 + 1]);
            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((var_4) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) ? (63U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))));
        }
        /* LoopSeq 1 */
        for (long long int i_2 = 3; i_2 < 12; i_2 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_3 = 2; i_3 < 13; i_3 += 3) 
            {
                /* LoopSeq 1 */
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    arr_13 [i_0] [10] [9LL] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0] [i_2 + 2] [i_4 - 1])) >> (((((/* implicit */int) (unsigned short)55073)) - (55061)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3825196834U)) ? (((/* implicit */unsigned long long int) var_13)) : (arr_11 [i_0] [i_0] [i_3] [(_Bool)1] [i_4] [(_Bool)1])))) ? (((/* implicit */int) ((unsigned short) (unsigned short)55073))) : (((/* implicit */int) (unsigned short)55808)))) : (max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)8)) : (((/* implicit */int) arr_5 [i_4])))), ((-(((/* implicit */int) (_Bool)1))))))));
                    arr_14 [i_0] [i_2] [i_3] [i_0] [i_2] [i_0] = ((/* implicit */signed char) ((_Bool) (unsigned short)10480));
                }
                arr_15 [i_0] [i_0] [i_3] = ((/* implicit */short) max((3857147131U), (((/* implicit */unsigned int) (-((-(((/* implicit */int) (unsigned short)26051)))))))));
                var_21 = ((/* implicit */unsigned long long int) ((short) arr_0 [9]));
                var_22 ^= ((/* implicit */unsigned int) min(((+(((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_3 [(unsigned char)11] [i_2] [i_3])) : (((/* implicit */int) arr_3 [i_0 + 4] [i_2 - 2] [i_3 - 1]))))));
            }
            for (short i_5 = 1; i_5 < 12; i_5 += 1) 
            {
                arr_18 [i_0] [(unsigned short)5] [(unsigned short)5] = ((/* implicit */_Bool) (~((~(9223372036854775807LL)))));
                /* LoopSeq 2 */
                for (int i_6 = 1; i_6 < 11; i_6 += 3) /* same iter space */
                {
                    arr_21 [i_0] [i_2] [(signed char)9] [(unsigned char)9] = ((/* implicit */long long int) ((signed char) (+(((/* implicit */int) arr_19 [i_5 + 2] [i_2 - 2] [i_0 + 2])))));
                    var_23 = ((/* implicit */signed char) ((unsigned char) max((((-9223372036854775807LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)10))))), (((arr_12 [i_0] [i_2] [i_5] [i_0]) + (((/* implicit */long long int) var_14)))))));
                    var_24 *= min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [(unsigned char)8] [(unsigned char)8] [(unsigned char)8] [i_0 + 1])) ? (((/* implicit */int) arr_9 [i_0 + 3] [(_Bool)1] [i_5] [i_6])) : (((/* implicit */int) arr_10 [2] [i_2] [(unsigned short)4] [9U]))))), (arr_11 [i_6] [10U] [i_6] [i_6 + 1] [10U] [i_0 + 3]));
                }
                for (int i_7 = 1; i_7 < 11; i_7 += 3) /* same iter space */
                {
                    var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) (short)-32700))));
                    var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_19 [i_7 + 1] [i_0 + 3] [i_5 + 2]) ? (((/* implicit */int) arr_19 [i_7 + 3] [i_0 + 1] [i_5 + 1])) : ((-2147483647 - 1))))) ? ((+(max((((/* implicit */long long int) 2027905677U)), (arr_22 [i_0] [i_2] [i_2] [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8191)))));
                }
                var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_4) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)55073)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)26051))) : (-9223372036854775779LL))))))) || (arr_7 [i_0]))))));
            }
            var_28 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_23 [i_0] [i_0])) <= (((((/* implicit */_Bool) var_12)) ? (var_3) : (((/* implicit */int) var_5))))))) << (((((/* implicit */int) (short)-32700)) + (32710)))));
            var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_8 [i_0 + 1] [i_0 + 4] [i_2 + 1]) ? (((/* implicit */int) arr_8 [i_0 + 4] [i_0 + 2] [i_2 + 2])) : (((/* implicit */int) arr_8 [i_0 + 2] [i_0 + 2] [i_2 + 2]))))) ? (var_15) : (((((/* implicit */int) arr_9 [i_0 + 1] [i_0 + 2] [i_2 - 3] [i_2 - 3])) << (((var_9) - (18370199527940909013ULL))))))))));
        }
        arr_24 [i_0] [(unsigned short)5] = arr_16 [10LL] [10LL] [6LL] [11];
        /* LoopNest 3 */
        for (unsigned char i_8 = 1; i_8 < 13; i_8 += 4) 
        {
            for (unsigned short i_9 = 1; i_9 < 13; i_9 += 3) 
            {
                for (unsigned int i_10 = 1; i_10 < 13; i_10 += 1) 
                {
                    {
                        var_30 = ((/* implicit */_Bool) arr_4 [i_0]);
                        arr_35 [(_Bool)1] [i_8] [5ULL] [i_0] = ((_Bool) (signed char)-32);
                        var_31 -= ((/* implicit */_Bool) 9223372036854775807LL);
                    }
                } 
            } 
        } 
    }
    for (signed char i_11 = 1; i_11 < 20; i_11 += 2) 
    {
        /* LoopNest 3 */
        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
        {
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                for (unsigned long long int i_14 = 1; i_14 < 20; i_14 += 3) 
                {
                    {
                        arr_45 [i_11] = ((/* implicit */int) arr_44 [i_11] [i_14] [i_11] [i_14]);
                        arr_46 [i_11] = ((/* implicit */_Bool) ((short) (-(10))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_15 = 2; i_15 < 19; i_15 += 4) 
                        {
                            var_32 = ((/* implicit */unsigned char) 6448156037773935396LL);
                            var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) arr_40 [i_14] [i_15] [i_15] [i_14 + 1]))));
                            var_34 = ((/* implicit */unsigned char) -6448156037773935379LL);
                            var_35 ^= ((/* implicit */long long int) (-(((/* implicit */int) arr_42 [i_11] [i_14] [i_11] [i_11]))));
                        }
                        for (long long int i_16 = 1; i_16 < 19; i_16 += 4) 
                        {
                            arr_52 [i_11] [i_12] [i_12] [(short)5] [(_Bool)1] [i_14] [(_Bool)1] = ((/* implicit */int) ((4955390779898129478ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)8)))));
                            var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((arr_48 [i_11] [i_11] [i_11]) ? (var_0) : (((/* implicit */int) arr_36 [i_12] [i_16]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((min((arr_36 [0] [i_14]), (var_1))), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_15))))))))) : (((((/* implicit */_Bool) (unsigned short)55830)) ? (((299750725U) / (((/* implicit */unsigned int) var_15)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)13))) != (-3525496498534556126LL))))))))))));
                            arr_53 [i_11] [i_13] [i_11] [i_11] = max((((((/* implicit */int) var_7)) | (((/* implicit */int) arr_49 [i_11] [i_11 - 1] [i_12] [i_14] [i_16] [i_16])))), (((/* implicit */int) min((arr_44 [i_16] [i_11] [i_11] [i_12]), (((/* implicit */unsigned short) ((_Bool) (unsigned short)9739)))))));
                        }
                        var_37 *= ((/* implicit */unsigned char) var_6);
                    }
                } 
            } 
        } 
        arr_54 [i_11] [i_11] = ((/* implicit */unsigned long long int) var_11);
    }
    var_38 = ((/* implicit */_Bool) var_1);
    var_39 = (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (min((((/* implicit */unsigned long long int) (short)30768)), (5579363823646345562ULL)))))));
}
