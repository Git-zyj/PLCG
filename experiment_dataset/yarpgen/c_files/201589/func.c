/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201589
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [(short)12] [i_1] [i_2] [(signed char)7] [i_4])) ? (((/* implicit */int) arr_11 [i_0] [i_1] [i_0] [i_2] [i_4])) : (((/* implicit */int) arr_11 [i_0] [(short)4] [i_2] [i_3] [i_4]))))) && (((/* implicit */_Bool) ((int) arr_6 [i_0] [i_0] [i_0] [i_0])))));
                                var_10 = ((/* implicit */unsigned char) min((var_10), (((/* implicit */unsigned char) ((((/* implicit */int) max((arr_7 [i_0] [i_1] [i_2]), (((/* implicit */unsigned short) arr_9 [i_0] [(_Bool)1] [i_0] [i_0]))))) ^ (min((((/* implicit */int) ((_Bool) var_2))), (max((-629471296), (((/* implicit */int) var_2)))))))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (signed char i_5 = 0; i_5 < 18; i_5 += 1) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (int i_7 = 0; i_7 < 18; i_7 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) max((arr_2 [i_0]), (var_7))))) ? (min((((/* implicit */int) arr_15 [i_0] [i_0])), (2041083671))) : (((/* implicit */int) arr_20 [i_6] [i_6]))));
                                arr_23 [i_0] [i_0] [i_0] [i_0] = (-((~(((/* implicit */int) (signed char)-65)))));
                            }
                        } 
                    } 
                    arr_24 [i_5] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) min((((/* implicit */short) (_Bool)0)), ((short)19789)))) - ((~(((/* implicit */int) arr_7 [i_0] [i_1] [i_5]))))));
                    /* LoopNest 2 */
                    for (signed char i_8 = 0; i_8 < 18; i_8 += 1) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                arr_32 [i_8] [i_0] [i_5] [i_8] [i_1] [i_8] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((int) (+(2460523886181223487ULL))))), (((long long int) ((int) (_Bool)1)))));
                                var_12 = ((/* implicit */_Bool) ((((/* implicit */int) min((arr_6 [i_0] [i_0] [i_5] [i_9]), (((/* implicit */unsigned char) arr_8 [i_0]))))) >> (((max((((/* implicit */int) var_6)), (((((/* implicit */int) (unsigned short)24240)) ^ (-2041083671))))) + (29037)))));
                                arr_33 [i_0] [i_1] [i_5] [i_8] [i_0] [i_8] [10] = max((((var_9) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 11190057982552099924ULL)))) : (((((/* implicit */_Bool) 1333087521)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-31621))) : (-4255110471568437027LL))))), (((/* implicit */long long int) ((((/* implicit */int) arr_22 [i_0] [i_1] [i_5] [i_0] [i_9])) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [(_Bool)1])))))))));
                                arr_34 [i_0] = ((/* implicit */unsigned char) max((-1LL), (((/* implicit */long long int) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)31620)) : (((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) ((short) 11190057982552099924ULL))))))));
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (short i_10 = 0; i_10 < 18; i_10 += 4) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            arr_41 [i_0] [i_1] [i_0] [i_11] = (i_0 % 2 == zero) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_10 [i_0] [i_0])) ? (((/* implicit */int) arr_10 [i_0] [i_11])) : (-27))) >> ((((~(((/* implicit */int) arr_1 [i_0] [i_1])))) + (8)))))) : (((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) arr_10 [i_0] [i_0])) ? (((/* implicit */int) arr_10 [i_0] [i_11])) : (-27))) + (2147483647))) >> ((((~(((/* implicit */int) arr_1 [i_0] [i_1])))) + (8))))));
                            var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) ((((((((/* implicit */_Bool) 2041083666)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_11] [i_10] [i_10] [i_1] [i_10] [i_0]))) : (7256686091157451662ULL))) & (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-31621)) & (((/* implicit */int) (short)31620))))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_1))))))))));
                            var_14 = ((/* implicit */unsigned short) (((~(((arr_25 [i_0] [i_0] [i_10] [i_11]) ? (((/* implicit */int) arr_11 [i_0] [7] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_25 [i_0] [i_0] [i_0] [i_0])))))) | ((((_Bool)1) ? (var_5) : ((~(((/* implicit */int) (short)32750))))))));
                        }
                    } 
                } 
                arr_42 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((((((/* implicit */_Bool) arr_40 [i_0] [i_1] [i_0] [i_1] [i_0])) ? (((/* implicit */int) arr_31 [i_0] [10ULL] [i_1] [i_1] [10ULL])) : (((/* implicit */int) arr_17 [i_0] [i_1] [(_Bool)1])))) & (((((/* implicit */int) arr_19 [i_0] [i_1] [i_1] [i_1])) & (((/* implicit */int) var_7)))))) % (((/* implicit */int) ((_Bool) (unsigned char)92)))));
                var_15 = ((/* implicit */signed char) max(((~(arr_30 [i_0] [i_1] [i_1] [i_0] [i_1] [i_0] [i_0]))), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) max((arr_35 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) arr_21 [(signed char)8] [(signed char)8]))))))))));
            }
        } 
    } 
    var_16 |= ((/* implicit */unsigned long long int) var_2);
    /* LoopNest 3 */
    for (int i_12 = 0; i_12 < 11; i_12 += 2) 
    {
        for (unsigned char i_13 = 1; i_13 < 8; i_13 += 1) 
        {
            for (long long int i_14 = 0; i_14 < 11; i_14 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    for (short i_15 = 0; i_15 < 11; i_15 += 4) 
                    {
                        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((long long int) min((arr_25 [i_12] [i_14] [i_14] [i_15]), (arr_38 [i_12] [i_13]))))), (((min((((/* implicit */unsigned long long int) arr_27 [i_12] [i_12])), (arr_16 [i_13 + 1] [i_14] [i_13 + 1]))) << (((/* implicit */int) (_Bool)1)))))))));
                        arr_54 [i_12] [i_12] [(_Bool)1] [i_13] [i_14] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) max((var_7), (arr_47 [1] [1] [1])))) ^ (min((arr_44 [(unsigned short)4]), (((/* implicit */int) arr_22 [i_12] [i_13 + 2] [i_14] [i_12] [i_13 + 3]))))))) < ((-(max((((/* implicit */unsigned long long int) (short)-31627)), (11190057982552099913ULL)))))));
                    }
                    for (unsigned char i_16 = 0; i_16 < 11; i_16 += 1) /* same iter space */
                    {
                        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) arr_4 [i_13 - 1] [i_13 + 2]))) ? (((/* implicit */int) ((_Bool) ((_Bool) var_0)))) : (((((/* implicit */_Bool) (unsigned char)124)) ? (((((/* implicit */int) (unsigned short)47560)) | (((/* implicit */int) (unsigned char)240)))) : (((/* implicit */int) (short)-31627))))));
                        arr_59 [i_12] [(unsigned char)9] [i_14] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(min((12724239984233032216ULL), (((/* implicit */unsigned long long int) (short)-31627))))))) ? (((/* implicit */int) ((_Bool) (unsigned char)20))) : (max((-2052546115), (((/* implicit */int) (unsigned char)127))))));
                        var_19 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((arr_4 [i_13 - 1] [i_13 + 2]), (((/* implicit */unsigned char) arr_15 [i_12] [i_13 + 2]))))), (max((((((/* implicit */_Bool) 144115188075855871LL)) ? (arr_40 [i_14] [i_13] [i_14] [i_14] [i_16]) : (arr_16 [i_12] [i_12] [i_12]))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) arr_2 [i_12])), (arr_21 [7] [i_16]))))))));
                    }
                    for (unsigned char i_17 = 0; i_17 < 11; i_17 += 1) /* same iter space */
                    {
                        var_20 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) max((((/* implicit */int) var_8)), (((((/* implicit */int) var_2)) % (((/* implicit */int) var_8))))))), (((unsigned long long int) min((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)85))))));
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_53 [i_12] [i_13] [i_14] [i_17])) | (((/* implicit */int) (_Bool)1))))) ? ((((((_Bool)1) ? (((/* implicit */int) arr_8 [i_13])) : (((/* implicit */int) arr_4 [i_13] [i_17])))) >> (((((/* implicit */int) max(((short)31626), (((/* implicit */short) arr_58 [10LL] [i_14]))))) - (31620))))) : (((/* implicit */int) max((arr_60 [i_13 - 1] [i_13 + 1] [i_13 + 3] [i_13 - 1]), (((/* implicit */unsigned char) (signed char)107)))))));
                        var_22 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_8)), (max((13905467381882015040ULL), (((/* implicit */unsigned long long int) -2041083650))))));
                    }
                    for (unsigned char i_18 = 0; i_18 < 11; i_18 += 1) /* same iter space */
                    {
                        var_23 |= ((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (-2147483634)));
                        var_24 ^= ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_60 [7] [i_13 + 3] [i_18] [(_Bool)1])) ? (2146084349) : (((/* implicit */int) arr_60 [i_12] [i_13 + 1] [0] [(short)7]))))));
                        /* LoopSeq 1 */
                        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                        {
                            arr_68 [i_19] [i_18] [i_18] [i_14] [i_13 + 3] [i_12] = ((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)65535)), (min((462589071), (((/* implicit */int) (unsigned short)63993))))));
                            var_25 = ((/* implicit */unsigned char) arr_27 [i_12] [i_12]);
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) max((arr_11 [i_12] [i_13] [i_12] [i_18] [i_13 + 3]), (arr_11 [i_12] [i_13] [i_14] [i_18] [i_13 - 1]))))));
                            var_27 = ((/* implicit */unsigned char) arr_58 [i_12] [i_12]);
                        }
                        var_28 = ((/* implicit */int) ((((/* implicit */_Bool) min((16599198023995325402ULL), (((/* implicit */unsigned long long int) (short)-31632))))) ? (((/* implicit */unsigned long long int) max(((~(-136371346))), (((/* implicit */int) ((((/* implicit */int) arr_3 [(unsigned char)15] [i_18])) >= (((/* implicit */int) arr_9 [i_12] [i_12] [i_12] [i_12])))))))) : (7256686091157451703ULL)));
                        var_29 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_36 [i_13] [i_13] [i_13 + 1] [i_13 + 1])) < (min((var_0), (((/* implicit */unsigned long long int) arr_50 [i_13 + 1] [i_13]))))));
                    }
                    var_30 |= ((((_Bool) arr_7 [i_13 + 1] [i_13 + 1] [i_13 - 1])) ? (((/* implicit */int) ((_Bool) arr_43 [i_13 + 1] [i_13 + 1]))) : (((/* implicit */int) arr_2 [i_13 + 2])));
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */int) ((min(((+(((/* implicit */int) var_6)))), (((var_7) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7)))))) < ((-(min((-700679441), (((/* implicit */int) (signed char)31))))))));
}
