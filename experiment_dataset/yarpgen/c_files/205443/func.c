/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205443
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
    var_13 -= var_8;
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            {
                arr_5 [i_0 - 3] [(_Bool)1] [i_1] = ((/* implicit */unsigned char) (-(var_10)));
                var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) (-(3380714095U))))));
                arr_6 [(signed char)18] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((var_9) <= (arr_1 [i_0] [14LL]))))))) < (-6457150956862512879LL)));
                /* LoopSeq 2 */
                for (unsigned short i_2 = 1; i_2 < 20; i_2 += 1) 
                {
                    arr_11 [i_2] = ((/* implicit */_Bool) var_8);
                    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */int) var_12)) >= (((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) > (arr_10 [i_0 - 1] [i_1] [i_1] [(unsigned char)14])))) - (((/* implicit */int) (!(((/* implicit */_Bool) -6457150956862512879LL))))))))))));
                }
                for (signed char i_3 = 0; i_3 < 21; i_3 += 4) 
                {
                    var_16 = max((max((((/* implicit */unsigned int) var_12)), (402653184U))), (max((arr_10 [i_0] [i_0 - 1] [(unsigned short)18] [i_3]), (arr_10 [i_0 - 3] [i_0 - 1] [i_0 - 3] [i_3]))));
                    var_17 ^= ((/* implicit */long long int) (-((((-(var_10))) | (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_0 [i_0]))))))));
                    arr_14 [i_0] [i_1] [5ULL] = ((/* implicit */_Bool) var_1);
                    arr_15 [i_0 - 2] [i_0 - 2] [(unsigned short)13] [i_0 + 1] = ((/* implicit */unsigned short) max(((~(5101815729848990235LL))), (max((-3026003005609774280LL), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_9)))))))));
                }
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_4 = 0; i_4 < 10; i_4 += 3) /* same iter space */
    {
        arr_19 [i_4] = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) min((var_7), (arr_2 [(unsigned short)11] [17U])))))))));
        /* LoopNest 3 */
        for (long long int i_5 = 1; i_5 < 8; i_5 += 1) 
        {
            for (unsigned int i_6 = 0; i_6 < 10; i_6 += 1) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 3) 
                {
                    {
                        arr_27 [i_4] [(_Bool)1] [i_4] [i_4] = ((/* implicit */signed char) arr_20 [i_5]);
                        arr_28 [i_4] [i_5] [i_6] [i_4] = ((/* implicit */unsigned char) arr_10 [9U] [i_7] [13U] [i_4]);
                        var_18 -= ((/* implicit */_Bool) var_8);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_8 = 3; i_8 < 8; i_8 += 4) 
                        {
                            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (_Bool)0))));
                            arr_31 [i_5] [i_5] [i_6] [i_4] [i_8] = ((/* implicit */unsigned short) var_3);
                            arr_32 [i_4] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_20 [i_4]))));
                        }
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned int i_9 = 1; i_9 < 8; i_9 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_10 = 2; i_10 < 8; i_10 += 4) /* same iter space */
            {
                arr_38 [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_12 [(signed char)12])) ? (2147483648U) : (var_1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))) : (2147483136ULL)));
                arr_39 [i_4] [i_9 + 2] [i_10] [i_10] |= ((/* implicit */signed char) (_Bool)1);
                /* LoopNest 2 */
                for (unsigned short i_11 = 0; i_11 < 10; i_11 += 4) 
                {
                    for (unsigned short i_12 = 0; i_12 < 10; i_12 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */int) arr_20 [(_Bool)1]);
                            arr_45 [i_12] [i_12] [i_4] [(_Bool)0] [i_4] [9U] [i_4] = ((/* implicit */unsigned long long int) (_Bool)1);
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned short i_13 = 2; i_13 < 8; i_13 += 4) /* same iter space */
            {
                var_21 = arr_43 [(_Bool)1] [i_4] [i_4] [i_9 + 1] [i_9] [(unsigned short)2] [(unsigned short)8];
                arr_49 [(unsigned short)8] [i_9] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_36 [i_4]) ? (((/* implicit */int) (signed char)-100)) : (((/* implicit */int) arr_7 [i_4] [i_4] [i_4]))))) ? (arr_16 [(unsigned char)7] [7LL]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
            }
            arr_50 [i_4] [i_4] = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_9 - 1] [i_9 + 2])) && (((((/* implicit */_Bool) -4515960926278240801LL)) || (((/* implicit */_Bool) (unsigned short)0)))))))));
            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (_Bool)0))));
            var_23 = ((/* implicit */unsigned short) arr_22 [i_4] [i_4] [i_4] [i_4]);
        }
        arr_51 [i_4] = ((/* implicit */signed char) (+(0ULL)));
    }
    for (unsigned int i_14 = 0; i_14 < 10; i_14 += 3) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) arr_33 [i_14]))));
        var_25 |= ((/* implicit */unsigned long long int) (unsigned char)173);
        /* LoopNest 3 */
        for (signed char i_15 = 0; i_15 < 10; i_15 += 1) 
        {
            for (long long int i_16 = 0; i_16 < 10; i_16 += 4) 
            {
                for (signed char i_17 = 0; i_17 < 10; i_17 += 3) 
                {
                    {
                        var_26 &= ((/* implicit */_Bool) var_9);
                        var_27 *= ((/* implicit */unsigned short) 3179048616448122883LL);
                        /* LoopSeq 2 */
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
                        {
                            var_28 ^= ((/* implicit */signed char) ((arr_9 [i_18] [i_15] [i_14]) / (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_23 [i_16] [i_16]))))));
                            var_29 = ((/* implicit */signed char) arr_46 [(signed char)4] [i_16] [i_16] [i_15]);
                        }
                        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
                        {
                            var_30 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((unsigned char) (!(((/* implicit */_Bool) var_12)))))), (arr_57 [i_16] [i_17])));
                            arr_65 [i_14] [i_15] [1LL] [i_17] [0U] = ((/* implicit */unsigned short) (_Bool)1);
                            arr_66 [(signed char)6] [4ULL] [(signed char)4] [i_17] [1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((9223372036854775807LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)7)))))) ? (((/* implicit */int) ((unsigned short) (unsigned short)65024))) : ((~(((/* implicit */int) arr_12 [i_15])))))))));
                            var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_61 [i_19] [i_16] [i_15] [i_14]))) >= (arr_35 [i_15] [i_15] [i_19])))), ((~(var_1)))))) ? ((~(((/* implicit */int) (signed char)-104)))) : (((/* implicit */int) (unsigned char)103))));
                            arr_67 [i_14] [i_15] [i_16] [8LL] [i_17] [i_17] [i_19] = ((/* implicit */unsigned long long int) var_7);
                        }
                    }
                } 
            } 
        } 
    }
}
