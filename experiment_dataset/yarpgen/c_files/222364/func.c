/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222364
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
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_2 [i_0])) : (max((((var_9) * (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [(unsigned short)12] [i_0])))))))));
        var_14 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 2])) + ((-(((/* implicit */int) (_Bool)1)))))) << (((((/* implicit */int) var_1)) - (46)))));
    }
    for (long long int i_1 = 0; i_1 < 25; i_1 += 4) 
    {
        /* LoopSeq 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_15 = ((/* implicit */unsigned short) var_3);
            var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_7 [i_1])))))));
            var_17 += ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1))));
        }
        for (short i_3 = 0; i_3 < 25; i_3 += 4) /* same iter space */
        {
            arr_13 [i_1] [i_1] = ((/* implicit */signed char) arr_10 [i_1]);
            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (arr_8 [i_1] [i_1] [i_1])))) ? (arr_8 [i_1] [12U] [i_3]) : (((/* implicit */long long int) max((arr_10 [i_3]), (((/* implicit */unsigned int) arr_11 [i_1] [i_1])))))));
        }
        for (short i_4 = 0; i_4 < 25; i_4 += 4) /* same iter space */
        {
            var_19 -= ((/* implicit */signed char) -6200796843196009817LL);
            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((((((/* implicit */_Bool) arr_10 [i_1])) ? (arr_8 [i_4] [i_4] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_1] [(unsigned char)18] [i_4]))))) + (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
            /* LoopSeq 1 */
            for (signed char i_5 = 3; i_5 < 22; i_5 += 4) 
            {
                arr_19 [i_4] [(signed char)4] [(signed char)4] = ((/* implicit */int) var_10);
                /* LoopSeq 1 */
                for (unsigned char i_6 = 1; i_6 < 22; i_6 += 4) 
                {
                    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) 6291580957993667939ULL))));
                    /* LoopSeq 1 */
                    for (int i_7 = 2; i_7 < 23; i_7 += 1) 
                    {
                        var_22 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) arr_20 [i_4] [i_4] [i_5] [i_4])) || (((/* implicit */_Bool) arr_21 [i_1] [i_1] [i_5] [i_5])))) ? ((-(((/* implicit */int) (signed char)52)))) : (((/* implicit */int) (short)959)))) > (((/* implicit */int) var_0))));
                        arr_25 [0LL] [i_4] [i_5 + 2] [i_6] [i_5 + 2] = ((/* implicit */unsigned short) var_0);
                    }
                }
                var_23 = ((/* implicit */_Bool) max((arr_9 [i_5 - 3]), (((/* implicit */signed char) (_Bool)1))));
                var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (!(((/* implicit */_Bool) 3039562136U)))))));
                var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_16 [i_1] [i_1])) : ((~(((/* implicit */int) ((arr_8 [(unsigned char)13] [(unsigned char)13] [i_5 + 1]) <= (((/* implicit */long long int) var_5)))))))));
            }
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_8 = 2; i_8 < 24; i_8 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_9 = 3; i_9 < 21; i_9 += 1) 
            {
                for (unsigned short i_10 = 1; i_10 < 22; i_10 += 4) 
                {
                    for (unsigned long long int i_11 = 1; i_11 < 24; i_11 += 4) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -3700862623206005963LL))));
                            var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-947)) ? (((/* implicit */unsigned long long int) arr_22 [i_11 + 1] [i_11 - 1])) : (var_3)));
                            arr_42 [i_1] [i_1] [i_10 + 1] [i_10 + 1] [i_11 + 1] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_16 [i_8] [i_8]))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)-947)) : (((/* implicit */int) arr_33 [i_1] [i_9] [i_1] [(unsigned char)16])))) : (var_9)));
                            var_28 += ((/* implicit */long long int) ((unsigned char) (unsigned short)10667));
                        }
                    } 
                } 
            } 
            var_29 = ((/* implicit */int) ((signed char) var_13));
        }
        arr_43 [(unsigned char)24] = ((/* implicit */signed char) ((long long int) ((short) (-(((/* implicit */int) (_Bool)1))))));
    }
    for (unsigned short i_12 = 0; i_12 < 13; i_12 += 1) 
    {
        var_30 ^= ((/* implicit */unsigned long long int) var_7);
        var_31 = ((/* implicit */long long int) arr_45 [i_12] [i_12]);
        var_32 -= ((/* implicit */signed char) var_13);
        /* LoopSeq 4 */
        for (long long int i_13 = 3; i_13 < 11; i_13 += 1) 
        {
            /* LoopSeq 1 */
            for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
            {
                var_33 = ((/* implicit */short) var_1);
                var_34 = ((/* implicit */unsigned char) ((((_Bool) (short)-952)) ? (((/* implicit */int) arr_50 [4U] [i_13])) : ((-(((/* implicit */int) ((((/* implicit */int) (signed char)53)) < (((/* implicit */int) var_2)))))))));
                var_35 = ((/* implicit */unsigned long long int) (+(var_9)));
                arr_52 [i_13] [i_13] [i_13 - 2] = ((signed char) ((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (((/* implicit */int) arr_34 [i_13 - 2] [i_13 + 1] [i_13 + 2] [i_13])) : (((/* implicit */int) arr_34 [i_13 - 2] [i_13] [i_14 - 1] [i_14 - 1]))));
            }
            var_36 = ((/* implicit */unsigned char) max(((unsigned short)65535), (((/* implicit */unsigned short) var_8))));
        }
        for (unsigned char i_15 = 0; i_15 < 13; i_15 += 3) 
        {
            arr_56 [i_12] = ((/* implicit */unsigned char) max((arr_27 [i_15]), (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-12)))))));
            arr_57 [(_Bool)1] = ((/* implicit */unsigned char) ((long long int) (_Bool)1));
            /* LoopSeq 1 */
            for (unsigned short i_16 = 1; i_16 < 12; i_16 += 4) 
            {
                arr_60 [i_12] [i_12] [i_12] [i_12] = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (((((/* implicit */_Bool) arr_26 [i_12] [i_15])) ? (5974238235217998900ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) <= (((/* implicit */unsigned long long int) ((arr_15 [i_15] [i_15]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
                var_37 ^= var_8;
            }
            var_38 ^= ((/* implicit */long long int) (~(((/* implicit */int) arr_41 [i_12] [i_12]))));
            var_39 = ((/* implicit */short) var_10);
        }
        for (unsigned short i_17 = 0; i_17 < 13; i_17 += 4) 
        {
            var_40 = ((/* implicit */unsigned int) min((var_40), (((/* implicit */unsigned int) arr_26 [i_12] [i_12]))));
            var_41 = ((/* implicit */signed char) ((long long int) (unsigned char)255));
        }
        for (unsigned short i_18 = 4; i_18 < 10; i_18 += 1) 
        {
            var_42 = ((/* implicit */signed char) arr_20 [(short)4] [i_12] [(unsigned short)10] [i_12]);
            arr_66 [i_12] = ((unsigned char) (unsigned char)85);
            var_43 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)219)) ? (((/* implicit */int) (unsigned char)36)) : (((/* implicit */int) (short)1725)))));
        }
    }
    var_44 = ((/* implicit */unsigned long long int) (_Bool)1);
}
