/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47512
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
    var_17 = ((unsigned long long int) var_4);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned int i_1 = 4; i_1 < 9; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((717628016642184078ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7032))))))) | (((((_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_7)))) : (var_14)))));
                    var_19 ^= ((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-8))) < (1495851537U))) ? ((+(((/* implicit */int) arr_0 [i_1 + 1] [i_1 - 2])))) : ((-(((/* implicit */int) (signed char)-77)))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (short i_3 = 3; i_3 < 11; i_3 += 1) 
    {
        var_20 = ((/* implicit */unsigned int) var_15);
        /* LoopNest 2 */
        for (unsigned short i_4 = 3; i_4 < 9; i_4 += 2) 
        {
            for (short i_5 = 0; i_5 < 12; i_5 += 3) 
            {
                {
                    arr_15 [i_5] [i_4] [i_5] [i_5] = min((((/* implicit */short) (!((_Bool)1)))), (var_16));
                    var_21 = arr_10 [6U] [i_4 - 1] [i_5];
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned short i_6 = 0; i_6 < 12; i_6 += 1) /* same iter space */
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned short i_7 = 0; i_7 < 12; i_7 += 1) 
            {
                var_22 = ((/* implicit */short) ((unsigned char) (+(-1462638587524986789LL))));
                var_23 |= ((/* implicit */unsigned long long int) ((signed char) 92533909U));
                arr_21 [i_3] [i_3] = ((/* implicit */signed char) (+(((/* implicit */int) var_1))));
            }
            for (unsigned short i_8 = 0; i_8 < 12; i_8 += 3) 
            {
                var_24 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_9 [i_3])) < (((/* implicit */int) (signed char)0))))) <= ((-(((/* implicit */int) arr_8 [i_3]))))))) >= (((/* implicit */int) arr_14 [(signed char)6]))));
                arr_25 [i_3] [i_3 + 1] [i_3 - 3] [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)8128)) ? (((/* implicit */int) (short)19038)) : (((/* implicit */int) (short)(-32767 - 1))))))));
            }
            /* vectorizable */
            for (long long int i_9 = 0; i_9 < 12; i_9 += 3) 
            {
                var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) (signed char)-52))));
                /* LoopNest 2 */
                for (unsigned char i_10 = 0; i_10 < 12; i_10 += 3) 
                {
                    for (int i_11 = 0; i_11 < 12; i_11 += 3) 
                    {
                        {
                            arr_35 [i_3 - 1] [i_6] [i_9] [i_10] [i_3 - 1] [i_9] [(unsigned short)2] = ((/* implicit */long long int) (~((~(((/* implicit */int) arr_30 [i_3 - 2] [i_3] [i_6] [i_9] [i_10] [(signed char)8]))))));
                            arr_36 [i_3 - 3] [i_3] [i_9] = ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)196)));
                            var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) -1349717606))));
                            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)-29931))))) ? (arr_16 [i_3] [i_3 - 3]) : (((/* implicit */int) arr_14 [i_9]))));
                        }
                    } 
                } 
                var_28 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)17273)) < (((/* implicit */int) (short)32640))));
                arr_37 [i_3 - 3] [i_3 - 3] [10] [i_9] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [4ULL] [i_6] [(signed char)4])) ? (arr_24 [i_3] [i_3] [i_3]) : (arr_19 [i_3 - 1] [(signed char)8] [i_3] [i_3])))) ? (((/* implicit */int) var_8)) : ((+(((/* implicit */int) arr_22 [i_3 - 1] [i_6]))))));
                var_29 += ((/* implicit */unsigned short) (_Bool)1);
            }
            /* LoopNest 2 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                for (long long int i_13 = 0; i_13 < 12; i_13 += 1) 
                {
                    {
                        arr_42 [i_12] [i_6] [i_12] [i_13] = (~(((((/* implicit */_Bool) arr_33 [i_3 - 3] [i_3] [i_3] [i_3] [i_3 - 3])) ? (arr_33 [i_3 - 2] [i_3 - 2] [i_3] [i_3] [i_3 - 2]) : (((/* implicit */int) (short)-19039)))));
                        var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (min((((/* implicit */unsigned long long int) 872654974U)), (arr_26 [i_3 - 2] [0U] [0U] [i_13]))) : (((/* implicit */unsigned long long int) min((21), (((((/* implicit */int) (signed char)-24)) & (((/* implicit */int) (signed char)112))))))))))));
                        /* LoopSeq 1 */
                        for (int i_14 = 0; i_14 < 12; i_14 += 2) 
                        {
                            arr_46 [i_12] [i_14] [i_14] [(short)10] [i_14] [i_14] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_3] [i_6] [i_12] [i_13] [i_12])) ? (((/* implicit */unsigned int) arr_33 [i_3 - 1] [i_3 - 1] [i_12] [i_13] [i_14])) : ((-(var_6))))))));
                            var_31 -= ((/* implicit */short) ((((((((/* implicit */_Bool) (signed char)48)) ? (((/* implicit */long long int) arr_40 [i_3] [i_6] [i_13])) : (arr_27 [i_14]))) % (((/* implicit */long long int) arr_16 [i_3 - 2] [i_3 - 1])))) == (((/* implicit */long long int) (~(((/* implicit */int) max((((/* implicit */unsigned short) var_2)), (arr_43 [i_6] [i_6] [i_6] [(unsigned short)6] [i_14])))))))));
                        }
                    }
                } 
            } 
        }
        for (unsigned short i_15 = 0; i_15 < 12; i_15 += 1) /* same iter space */
        {
            var_32 = ((/* implicit */unsigned long long int) ((min((((long long int) arr_43 [(unsigned char)2] [i_15] [i_15] [i_15] [(unsigned char)2])), (((/* implicit */long long int) arr_44 [i_3 - 2] [i_3 - 1] [i_3 + 1] [i_3 - 3] [(unsigned short)10])))) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_29 [(signed char)4] [4LL] [i_15] [i_3])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)(-127 - 1))))))))))));
            var_33 = ((/* implicit */signed char) max((((/* implicit */unsigned short) (short)32640)), (min((((/* implicit */unsigned short) (signed char)0)), (min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)42349)))))));
            /* LoopNest 3 */
            for (unsigned long long int i_16 = 0; i_16 < 12; i_16 += 2) 
            {
                for (unsigned char i_17 = 3; i_17 < 10; i_17 += 1) 
                {
                    for (unsigned long long int i_18 = 0; i_18 < 12; i_18 += 1) 
                    {
                        {
                            arr_60 [i_3 - 3] [i_3 - 3] [i_16] [i_17 - 3] [i_18] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */short) var_15)), (arr_50 [i_15])))) ? (((/* implicit */int) (unsigned short)52183)) : ((-(((/* implicit */int) arr_10 [i_16] [9LL] [i_16]))))));
                            arr_61 [i_3] [2LL] [i_16] [i_16] [i_17 + 1] [i_18] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? (((/* implicit */int) (_Bool)1)) : (min((((/* implicit */int) (signed char)(-127 - 1))), (var_0)))));
                        }
                    } 
                } 
            } 
            arr_62 [i_15] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */long long int) (~(max((var_9), (var_5)))))) / (min((min((((/* implicit */long long int) var_15)), (1148417904979476480LL))), (((/* implicit */long long int) arr_19 [i_3] [i_3] [i_15] [i_15]))))));
        }
    }
    for (unsigned short i_19 = 0; i_19 < 23; i_19 += 4) 
    {
        arr_67 [i_19] = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) arr_63 [i_19] [i_19])) ? (((arr_64 [i_19] [i_19]) + (var_5))) : (arr_64 [i_19] [i_19]))) + (2147483647))) >> (((var_14) + (2653790326240550576LL)))));
        arr_68 [i_19] = max(((!((!(((/* implicit */_Bool) arr_66 [i_19])))))), (((((/* implicit */_Bool) (~(var_9)))) || (((((/* implicit */int) var_16)) < (((/* implicit */int) var_1)))))));
        arr_69 [i_19] [i_19] = ((/* implicit */long long int) ((((arr_64 [i_19] [i_19]) - (arr_64 [i_19] [i_19]))) >= (arr_64 [i_19] [i_19])));
        var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((int) arr_66 [i_19]))))))));
    }
}
