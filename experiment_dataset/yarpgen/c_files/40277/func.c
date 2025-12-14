/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40277
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
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned int) (+(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)89))))) ^ (arr_1 [i_0])))));
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((arr_1 [0ULL]) - (arr_1 [i_0]))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0] [i_0])) ^ (((/* implicit */int) (signed char)123))))))))));
        var_12 = arr_1 [i_0];
        /* LoopSeq 3 */
        for (unsigned char i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (signed char i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (unsigned short i_4 = 0; i_4 < 21; i_4 += 4) 
                    {
                        {
                            arr_12 [i_0] [i_1] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */short) arr_11 [i_0] [i_1] [i_2] [i_3] [i_4]);
                            arr_13 [i_0] [i_0] [i_2] [i_3] [i_1] = ((/* implicit */unsigned short) var_0);
                        }
                    } 
                } 
            } 
            arr_14 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) (!(min((arr_8 [i_1 + 1] [i_1] [i_1] [i_1 + 2]), ((!(((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_1]))))))));
            var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((int) ((min((var_1), (((/* implicit */int) (signed char)-123)))) - (((/* implicit */int) var_5))))))));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
        {
            arr_18 [i_5] [9LL] [i_5] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_5])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((((/* implicit */int) var_7)) != (((/* implicit */int) (_Bool)1)))))))) ^ (((((/* implicit */_Bool) (+(-2131181625358585679LL)))) ? (((/* implicit */unsigned long long int) ((arr_8 [i_5] [i_5] [i_5] [i_0]) ? (((/* implicit */int) (signed char)123)) : (((/* implicit */int) (unsigned short)62138))))) : (var_10)))));
            var_14 = ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_5] [i_5] [i_5])) ? (arr_1 [i_5]) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_17 [i_5] [i_5] [i_5])) ? (((/* implicit */int) arr_0 [i_5] [i_0])) : (((/* implicit */int) arr_0 [i_5] [i_0])))), (((((/* implicit */_Bool) (signed char)9)) ? (((/* implicit */int) (signed char)9)) : (((/* implicit */int) arr_8 [i_0] [i_5] [i_5] [i_5])))))))));
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
        {
            arr_22 [i_0] [i_0] = ((/* implicit */unsigned char) (unsigned short)44420);
            var_15 *= var_2;
            /* LoopSeq 1 */
            for (unsigned char i_7 = 1; i_7 < 19; i_7 += 1) 
            {
                var_16 = (!(((/* implicit */_Bool) (-((~(((/* implicit */int) arr_0 [(short)11] [(short)11]))))))));
                /* LoopNest 2 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (signed char i_9 = 1; i_9 < 19; i_9 += 3) 
                    {
                        {
                            arr_30 [i_8] [i_9] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_10 [i_7 - 1] [i_9 + 2] [i_9]))));
                            var_17 = ((/* implicit */_Bool) var_2);
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned short) ((max(((-(5181788452253173627LL))), (((/* implicit */long long int) ((((/* implicit */int) arr_16 [i_0] [i_6] [i_0])) ^ (arr_5 [i_0] [i_6] [i_6] [i_6])))))) ^ (((/* implicit */long long int) (+((((_Bool)1) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2)))))))));
                /* LoopSeq 3 */
                for (long long int i_10 = 1; i_10 < 19; i_10 += 2) /* same iter space */
                {
                    arr_33 [i_10] = ((/* implicit */signed char) (+(((/* implicit */int) arr_28 [(unsigned char)2] [i_6] [i_7] [i_6] [i_6] [(unsigned char)2]))));
                    var_19 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (arr_32 [i_0] [i_10] [i_6] [i_7] [i_10] [i_10]))))))) - (((int) var_4))));
                    arr_34 [i_10] [i_6] [i_7] [i_7] [i_10] = ((/* implicit */unsigned int) ((signed char) (unsigned short)3403));
                }
                for (long long int i_11 = 1; i_11 < 19; i_11 += 2) /* same iter space */
                {
                    arr_37 [i_11] [i_11] [i_7] [i_6] [i_0] [i_0] = ((/* implicit */_Bool) var_5);
                    var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), (min((((/* implicit */int) var_7)), (arr_17 [i_11 + 1] [i_11] [i_0])))))) ? (((((/* implicit */_Bool) arr_36 [i_7 + 1] [i_11 + 1] [i_11 + 2])) ? (arr_36 [i_7 + 2] [i_11 + 2] [i_11 - 1]) : (arr_36 [i_7 + 2] [i_11 + 2] [i_11 + 1]))) : (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_0] [i_6] [i_6] [i_6] [i_7] [i_11])))));
                    arr_38 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((_Bool) arr_17 [i_7 + 1] [i_7 + 1] [i_0])) ? ((~(arr_36 [i_7 - 1] [i_7 - 1] [i_11 - 1]))) : (((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned char) arr_19 [i_6] [i_7] [i_11 - 1]))))) ? (((/* implicit */long long int) (~(var_6)))) : (min((((/* implicit */long long int) arr_15 [i_0] [i_0] [i_0])), (arr_32 [i_0] [i_0] [i_7] [i_0] [i_7 + 1] [i_11 - 1])))))));
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-((-(arr_21 [i_0] [i_0])))))) ? ((~(((((/* implicit */_Bool) arr_19 [i_7] [(_Bool)1] [(_Bool)1])) ? (5181788452253173627LL) : (-7392536348221421569LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) arr_35 [i_7 - 1] [i_7 + 1] [i_7 + 2] [i_7] [i_7 + 2] [i_7 + 1]))))));
                }
                for (long long int i_12 = 1; i_12 < 19; i_12 += 2) /* same iter space */
                {
                    arr_43 [i_0] [i_6] [i_7] [i_12] = ((/* implicit */_Bool) (-((~(var_1)))));
                    var_22 = ((var_0) + ((-(arr_23 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 1]))));
                    var_23 = ((/* implicit */unsigned short) ((long long int) (-(((/* implicit */int) (!((_Bool)1)))))));
                    var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_40 [i_12] [i_12 + 1] [i_12] [i_12] [i_12] [i_12 - 1])), (arr_28 [i_12] [i_12 + 1] [i_12] [i_12] [(unsigned short)20] [i_12 - 1])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_12] [i_12 + 1] [i_12] [i_12])) ? (((/* implicit */int) arr_41 [i_12] [i_12 + 1] [i_12] [(unsigned short)19])) : (((/* implicit */int) arr_41 [i_12] [i_12 + 1] [i_12] [i_12]))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_28 [i_12] [i_12 + 1] [i_12 + 1] [i_12 + 1] [i_12] [i_12 - 1]))) - (var_3))))))));
                    var_25 = ((/* implicit */signed char) (+(((/* implicit */int) arr_19 [i_6] [i_6] [i_6]))));
                }
            }
        }
    }
    var_26 = ((/* implicit */long long int) max((((/* implicit */short) var_2)), (var_5)));
}
