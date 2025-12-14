/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4292
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned char i_2 = 3; i_2 < 18; i_2 += 4) 
            {
                {
                    var_17 &= ((/* implicit */unsigned short) var_12);
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        var_18 = ((/* implicit */unsigned short) (((+(5609616085598599605ULL))) << (((min((arr_7 [i_3] [i_2 - 2] [i_2 + 2] [i_2 - 1]), (((/* implicit */unsigned int) (short)-32754)))) - (3748474080U)))));
                        var_19 = var_1;
                    }
                    for (short i_4 = 0; i_4 < 20; i_4 += 4) 
                    {
                        var_20 = ((/* implicit */int) var_6);
                        arr_13 [(unsigned char)19] [i_2] [i_2] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(var_9)))) ? (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_11 [10LL] [i_1] [i_2 + 2] [i_4])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_4]))))))) : (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [(signed char)8] [(signed char)8] [i_0] [i_0])) ? (max((((/* implicit */unsigned long long int) (short)32754)), (arr_4 [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) min((arr_7 [(unsigned short)8] [i_1] [(unsigned short)8] [i_4]), (arr_6 [i_0] [i_1] [i_1]))))))));
                        var_21 = ((((/* implicit */_Bool) var_4)) ? (4258103429U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4258103429U)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3))))));
                    }
                    var_22 ^= ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) - (71057674U)))) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (max((arr_2 [i_1]), (((/* implicit */int) var_11)))))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 3) 
    {
        /* LoopSeq 2 */
        for (short i_6 = 0; i_6 < 10; i_6 += 3) 
        {
            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (+(((((((/* implicit */_Bool) (unsigned char)169)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (71057658U))) | (arr_7 [(short)2] [i_6] [(short)13] [(short)2]))))))));
            arr_19 [i_5] = ((/* implicit */signed char) max((((unsigned long long int) (!(((/* implicit */_Bool) var_12))))), (((/* implicit */unsigned long long int) (+(3103707083U))))));
        }
        for (long long int i_7 = 0; i_7 < 10; i_7 += 1) 
        {
            arr_22 [i_5] [i_7] [(_Bool)1] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max((36863872U), (((/* implicit */unsigned int) min(((short)32754), (((/* implicit */short) (unsigned char)75)))))))), (((unsigned long long int) arr_2 [i_5]))));
            arr_23 [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) ((unsigned char) 926989351U));
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_8 = 0; i_8 < 10; i_8 += 4) 
            {
                var_24 = ((/* implicit */unsigned int) ((signed char) arr_16 [i_8] [i_7]));
                var_25 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) arr_8 [i_5] [0ULL] [i_5] [i_8] [i_7])))));
                /* LoopNest 2 */
                for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                {
                    for (unsigned char i_10 = 0; i_10 < 10; i_10 += 3) 
                    {
                        {
                            var_26 -= ((/* implicit */signed char) ((unsigned int) ((var_1) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(short)14] [(short)3]))))));
                            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) 12660431069662629499ULL))) ? (arr_5 [i_9 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_9 - 1] [i_7] [i_8]))))))));
                        }
                    } 
                } 
            }
        }
        var_28 = ((/* implicit */unsigned char) ((signed char) (+((+(((/* implicit */int) (unsigned short)6465)))))));
    }
    /* vectorizable */
    for (short i_11 = 0; i_11 < 11; i_11 += 3) 
    {
        arr_35 [i_11] = ((/* implicit */int) var_5);
        var_29 = ((/* implicit */unsigned int) ((signed char) arr_11 [i_11] [i_11] [(short)19] [i_11]));
        var_30 = ((/* implicit */unsigned int) 5609616085598599605ULL);
    }
    for (unsigned short i_12 = 0; i_12 < 13; i_12 += 2) 
    {
        var_31 = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (short)32754)), (4223909621U)))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_12 [i_12]))))), (((/* implicit */unsigned long long int) 3103707072U))));
        arr_38 [(unsigned char)3] &= ((/* implicit */unsigned int) min((arr_12 [i_12]), (((((/* implicit */_Bool) arr_12 [i_12])) ? (arr_12 [i_12]) : (arr_12 [i_12])))));
        /* LoopSeq 2 */
        for (signed char i_13 = 0; i_13 < 13; i_13 += 4) /* same iter space */
        {
            arr_41 [i_12] [11LL] &= ((/* implicit */unsigned long long int) (short)-2083);
            var_32 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(1191260213U)))) - (max((arr_10 [i_12] [11U] [i_12] [i_13] [i_13]), (arr_4 [i_12] [i_13] [i_13]))))))));
            var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) max(((~(max((((/* implicit */long long int) arr_7 [i_12] [i_12] [i_13] [i_13])), (-4197585822173496718LL))))), (2145386496LL))))));
            arr_42 [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_12] [i_12] [i_12]))) : (arr_10 [i_12] [i_12] [3ULL] [i_13] [i_13])))))) ? (4223909621U) : (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-1)))))));
            arr_43 [i_12] [i_12] [i_12] = ((/* implicit */signed char) ((short) var_16));
        }
        for (signed char i_14 = 0; i_14 < 13; i_14 += 4) /* same iter space */
        {
            arr_47 [i_14] [(unsigned short)10] [i_12] = ((/* implicit */unsigned long long int) var_13);
            /* LoopSeq 1 */
            for (long long int i_15 = 0; i_15 < 13; i_15 += 1) 
            {
                var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) min(((!(((/* implicit */_Bool) (-(var_9)))))), ((!(((/* implicit */_Bool) 2305843009213693952ULL)))))))));
                var_35 *= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_0 [i_14] [i_15]))))))), (min((71057682U), (((/* implicit */unsigned int) -561380193))))));
            }
            /* LoopNest 2 */
            for (short i_16 = 0; i_16 < 13; i_16 += 1) 
            {
                for (unsigned long long int i_17 = 0; i_17 < 13; i_17 += 3) 
                {
                    {
                        var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) min(((+(((/* implicit */int) var_12)))), (((((/* implicit */_Bool) arr_9 [i_12] [i_14] [i_16] [(short)2] [i_17] [i_16])) ? (((/* implicit */int) arr_9 [i_12] [i_12] [i_14] [i_16] [i_16] [i_17])) : (7))))))));
                        var_37 = ((/* implicit */_Bool) max((var_37), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32745)) ? (arr_10 [i_14] [i_14] [i_14] [i_14] [i_14]) : (((/* implicit */unsigned long long int) arr_6 [i_16] [i_16] [i_16]))))) && (((/* implicit */_Bool) ((arr_54 [i_12] [i_12] [i_12] [i_17]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_54 [i_12] [i_14] [i_16] [i_17]))) : (var_7))))))));
                    }
                } 
            } 
            var_38 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_48 [i_12] [i_14] [i_12] [i_14])) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_12] [i_12]))) : (1191260189U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-3416)))))))), (((((/* implicit */_Bool) max((18446744073709551615ULL), (var_2)))) ? (((arr_5 [3ULL]) >> (((4223909622U) - (4223909574U))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)191)))))))));
            var_39 = ((/* implicit */unsigned long long int) (-(2606687286U)));
        }
    }
    var_40 = ((/* implicit */short) ((unsigned int) ((unsigned long long int) (!(((/* implicit */_Bool) 3114349582123490039LL))))));
}
