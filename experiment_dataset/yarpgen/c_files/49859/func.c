/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49859
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
    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (unsigned short)65531)))))))));
    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) min(((~(((/* implicit */int) var_4)))), (((/* implicit */int) var_8))))) ? (var_5) : (max((((/* implicit */int) var_11)), ((-(((/* implicit */int) var_16)))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            var_19 = (!(((/* implicit */_Bool) arr_5 [i_1 - 1] [i_1 - 1] [i_1 - 1])));
            /* LoopSeq 2 */
            for (int i_2 = 0; i_2 < 19; i_2 += 1) /* same iter space */
            {
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((short) (-(arr_2 [i_2]))));
                /* LoopSeq 3 */
                for (short i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    var_20 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (unsigned char)240)) - (209))))) >> (((((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_2]))) - (arr_2 [i_3]))) - (7508628489527787207LL)))));
                    var_21 += ((/* implicit */long long int) (+(((/* implicit */int) arr_6 [i_2] [i_0] [i_0]))));
                }
                for (short i_4 = 1; i_4 < 17; i_4 += 2) 
                {
                    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) 9ULL)) && (((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))));
                    arr_15 [i_4] [0] = (~(((arr_10 [i_0] [i_0] [i_4] [i_1 + 2] [(signed char)4]) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_2])))));
                    var_23 = (+(((((/* implicit */int) arr_4 [i_0])) << (((((/* implicit */int) var_3)) + (14685))))));
                    arr_16 [15] [15] [i_4] [i_4 + 2] [i_4] [(signed char)10] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) || (((/* implicit */_Bool) var_9))));
                }
                for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 4) 
                {
                    var_24 = ((/* implicit */signed char) arr_10 [i_0] [i_0] [i_5] [i_2] [i_5]);
                    var_25 *= ((/* implicit */unsigned char) ((((/* implicit */int) arr_10 [i_0] [i_0] [i_5] [6LL] [i_0])) >= (var_10)));
                }
                var_26 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_13 [(_Bool)1] [i_2] [i_1 + 1] [12])) % (((/* implicit */int) arr_13 [i_0] [i_0] [(unsigned char)7] [i_0])))))));
                /* LoopSeq 2 */
                for (signed char i_6 = 0; i_6 < 19; i_6 += 4) 
                {
                    var_27 |= ((/* implicit */long long int) 17ULL);
                    /* LoopSeq 2 */
                    for (unsigned int i_7 = 0; i_7 < 19; i_7 += 4) 
                    {
                        arr_24 [i_1 - 1] [i_1] [i_1 - 1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_5 [i_1] [(unsigned char)14] [i_7])) > (((/* implicit */int) (_Bool)1))))) << (((((/* implicit */int) (unsigned short)65528)) - (65509)))));
                        arr_25 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */long long int) var_6);
                        arr_26 [i_7] [i_7] = ((/* implicit */_Bool) (((~(-1911377435250161822LL))) ^ (((/* implicit */long long int) ((/* implicit */int) ((647123323006032026ULL) > (((/* implicit */unsigned long long int) var_10))))))));
                    }
                    for (int i_8 = 3; i_8 < 18; i_8 += 4) 
                    {
                        var_28 = ((/* implicit */long long int) ((((/* implicit */int) arr_19 [i_2] [i_8] [i_8 - 1] [i_8 - 2] [i_8 - 1] [(signed char)18])) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_6])))))));
                        var_29 = ((((/* implicit */int) arr_10 [i_1 - 1] [i_1 + 1] [i_6] [i_8 - 1] [(unsigned char)8])) != (((/* implicit */int) arr_10 [i_1 - 1] [i_1 + 1] [i_6] [i_8 - 1] [i_8 - 2])));
                    }
                }
                for (int i_9 = 0; i_9 < 19; i_9 += 3) 
                {
                    var_30 -= ((((/* implicit */int) var_3)) <= (((/* implicit */int) var_0)));
                    arr_32 [i_0] [i_0] [(unsigned short)4] [(unsigned short)4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_31 [i_1 + 2] [i_1] [i_2] [i_2]))));
                }
            }
            for (int i_10 = 0; i_10 < 19; i_10 += 1) /* same iter space */
            {
                var_31 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2614691073770214764LL))));
                var_32 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_12 [i_1 + 1] [i_1] [i_1 + 1] [i_10] [(short)5] [i_10])) << ((((~(arr_0 [i_10] [i_1]))) - (1874957537)))));
                arr_35 [i_0] [i_0] = ((/* implicit */unsigned int) arr_28 [(signed char)7] [i_1]);
                var_33 = ((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_1 + 2])) % (arr_3 [i_1 + 1])));
                var_34 |= ((/* implicit */long long int) arr_19 [i_0] [i_0] [(unsigned short)10] [i_1] [i_1] [i_10]);
            }
        }
        for (unsigned short i_11 = 0; i_11 < 19; i_11 += 4) 
        {
            arr_38 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (arr_2 [i_0])));
            /* LoopSeq 1 */
            for (unsigned short i_12 = 0; i_12 < 19; i_12 += 4) 
            {
                arr_42 [i_0] [i_11] [i_0] [i_12] |= ((/* implicit */short) (!(((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0] [(unsigned short)18]))));
                var_35 = ((/* implicit */unsigned int) (!(((((/* implicit */int) arr_13 [i_0] [i_0] [i_11] [i_12])) <= (var_10)))));
            }
            var_36 = ((/* implicit */short) (((!(arr_10 [i_0] [i_0] [i_11] [i_0] [i_11]))) ? (((/* implicit */int) arr_37 [i_0] [i_11])) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1))))))));
            var_37 = ((/* implicit */int) arr_14 [16LL] [i_11] [i_11] [i_11]);
        }
        var_38 = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) (-(arr_41 [i_0] [i_0] [i_0] [i_0]))))));
    }
    for (int i_13 = 2; i_13 < 20; i_13 += 1) 
    {
        arr_45 [i_13] [i_13] = ((/* implicit */long long int) ((unsigned short) ((((arr_44 [i_13 - 1]) + (2147483647))) >> (((((/* implicit */int) arr_43 [i_13 - 1] [i_13 - 2])) - (85))))));
        var_39 *= ((/* implicit */short) max((((((/* implicit */_Bool) arr_44 [i_13 + 1])) ? ((((_Bool)1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_43 [i_13] [i_13])))) : (max((((/* implicit */int) (_Bool)1)), ((-2147483647 - 1)))))), (((/* implicit */int) min((((/* implicit */short) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_8))))), (var_1))))));
        arr_46 [i_13] = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_15)), (17799620750703519586ULL))))));
    }
    var_40 = ((/* implicit */int) var_4);
}
