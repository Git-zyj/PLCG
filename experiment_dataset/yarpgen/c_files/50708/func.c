/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50708
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
    var_17 = (+((+(max((((/* implicit */unsigned int) (signed char)123)), (4294967295U))))));
    var_18 = max((((/* implicit */unsigned long long int) min((var_5), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_0)))))))), (((((/* implicit */_Bool) var_6)) ? (min((var_14), (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_0] [i_0 + 2] [i_2] [i_2])) ? (((/* implicit */int) arr_6 [i_0] [i_0 - 3] [i_2] [i_0])) : (((/* implicit */int) arr_6 [i_0] [i_0 - 3] [i_0 - 3] [i_2]))));
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        arr_11 [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) > (arr_3 [i_0] [i_0 - 3])));
                        var_20 = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [i_0 - 3]))) ^ (var_0));
                        var_21 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0])))))));
                    }
                }
            } 
        } 
        var_22 -= ((/* implicit */long long int) ((((((/* implicit */int) var_12)) + (2147483647))) << (((arr_8 [i_0] [i_0 + 2] [i_0 + 3] [i_0] [i_0] [i_0]) - (4215151039U)))));
        arr_12 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)123)) << (((/* implicit */int) (_Bool)1))));
    }
    for (unsigned int i_4 = 0; i_4 < 19; i_4 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned short i_5 = 2; i_5 < 17; i_5 += 2) 
        {
            for (unsigned int i_6 = 4; i_6 < 18; i_6 += 2) 
            {
                for (unsigned int i_7 = 3; i_7 < 16; i_7 += 2) 
                {
                    {
                        arr_25 [i_4] [i_4] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)123))));
                        /* LoopSeq 1 */
                        for (long long int i_8 = 1; i_8 < 17; i_8 += 4) 
                        {
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) / (arr_26 [i_6] [i_6] [i_6] [i_6]))))) ? (((/* implicit */unsigned long long int) arr_14 [i_5])) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) != (var_14))) ? (arr_23 [i_5] [i_7] [i_7] [i_7]) : (((((/* implicit */_Bool) arr_19 [i_4] [i_6] [i_7])) ? (((/* implicit */unsigned long long int) arr_22 [i_4] [i_4] [i_4] [i_4])) : (arr_23 [i_4] [i_7] [i_4] [i_4])))))));
                            var_24 = ((/* implicit */unsigned long long int) arr_24 [i_4] [i_7]);
                            var_25 = ((/* implicit */unsigned int) ((short) var_6));
                            var_26 = ((/* implicit */unsigned char) ((unsigned short) ((signed char) var_3)));
                        }
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */signed char) arr_24 [i_4] [i_4]);
        /* LoopSeq 2 */
        for (unsigned short i_9 = 0; i_9 < 19; i_9 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_10 = 0; i_10 < 19; i_10 += 3) 
            {
                var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) min((var_12), (((/* implicit */short) (signed char)123)))))) - (((/* implicit */int) (_Bool)0))));
                var_29 ^= ((/* implicit */unsigned int) min(((((_Bool)1) && (((/* implicit */_Bool) (short)16128)))), (((arr_27 [i_4]) && (((/* implicit */_Bool) var_5))))));
                var_30 = max((((/* implicit */unsigned int) var_10)), (((((/* implicit */_Bool) var_9)) ? (arr_34 [i_9]) : (arr_34 [i_9]))));
                /* LoopNest 2 */
                for (unsigned long long int i_11 = 0; i_11 < 19; i_11 += 4) 
                {
                    for (short i_12 = 1; i_12 < 17; i_12 += 1) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) arr_17 [i_12 - 1] [i_12 - 1]))) && (((/* implicit */_Bool) var_16))));
                            var_32 = ((/* implicit */unsigned long long int) ((unsigned char) (!(((/* implicit */_Bool) ((unsigned char) arr_27 [i_9]))))));
                            var_33 = ((/* implicit */unsigned long long int) var_9);
                            var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) arr_18 [i_9] [i_11] [i_12]))));
                            var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_11] [i_12] [i_12] [i_12] [i_11] [i_12 + 1]))) + (arr_32 [i_12 + 1] [i_11] [i_12 + 1]))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_16 [i_4] [i_4] [i_4])) ? (arr_24 [i_10] [i_11]) : (arr_24 [i_4] [i_4]))) > (min((arr_14 [i_4]), (((/* implicit */unsigned int) arr_27 [i_11]))))))))))));
                        }
                    } 
                } 
            }
            /* LoopSeq 2 */
            for (unsigned long long int i_13 = 2; i_13 < 18; i_13 += 1) 
            {
                arr_41 [i_9] [i_9] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) 6590478830767229670ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-1072))));
                var_36 += ((/* implicit */unsigned char) min((((short) arr_31 [i_4] [i_4] [i_13 - 1])), (((/* implicit */short) arr_31 [i_4] [i_4] [i_4]))));
                /* LoopNest 2 */
                for (unsigned int i_14 = 0; i_14 < 19; i_14 += 2) 
                {
                    for (short i_15 = 2; i_15 < 15; i_15 += 4) 
                    {
                        {
                            var_37 = ((/* implicit */short) ((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (signed char)-127))));
                            var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) (signed char)119))) / (((/* implicit */int) max((((/* implicit */unsigned short) var_11)), (var_16))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) arr_43 [i_13] [i_9] [i_13]))))), (arr_13 [i_4] [i_4]))))) : (min((((/* implicit */unsigned int) ((unsigned char) var_16))), (((((/* implicit */_Bool) arr_38 [i_4] [i_9] [i_13] [i_14] [i_14] [i_15] [i_15])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))))));
                            var_39 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_16 = 0; i_16 < 19; i_16 += 2) 
            {
                var_40 |= ((/* implicit */short) (+(var_1)));
                arr_52 [i_9] [i_9] = ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((((/* implicit */int) arr_27 [i_9])) == (((/* implicit */int) var_6))))))), (((((/* implicit */_Bool) ((arr_32 [i_4] [i_9] [i_16]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) var_5))))));
                var_41 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_40 [i_9])) & (arr_51 [i_4] [i_9] [i_4])))) ? (((unsigned long long int) (~(((/* implicit */int) var_10))))) : (((/* implicit */unsigned long long int) (-(arr_26 [i_4] [i_4] [i_4] [i_4]))))));
                var_42 -= ((/* implicit */signed char) min((var_9), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) (signed char)123)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)27)))), (((/* implicit */int) (short)16128)))))));
            }
        }
        /* vectorizable */
        for (unsigned char i_17 = 0; i_17 < 19; i_17 += 3) 
        {
            arr_57 [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((var_8) >= (((/* implicit */unsigned int) ((/* implicit */int) ((arr_40 [i_17]) > (var_8)))))));
            var_43 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) arr_17 [i_4] [i_4]))) || (((/* implicit */_Bool) (~(arr_26 [i_4] [i_4] [i_4] [i_4]))))));
            /* LoopNest 2 */
            for (signed char i_18 = 1; i_18 < 17; i_18 += 3) 
            {
                for (short i_19 = 0; i_19 < 19; i_19 += 3) 
                {
                    {
                        var_44 += ((/* implicit */unsigned long long int) ((((arr_24 [i_4] [i_4]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_4] [i_19]))))) ? (arr_14 [i_18 + 2]) : (arr_14 [i_18 - 1])));
                        arr_64 [i_4] [i_18] [i_18] [i_4] [i_18] = ((/* implicit */signed char) var_12);
                        arr_65 [i_18] [i_18] [i_18] [i_18] = ((/* implicit */unsigned char) (-(arr_33 [i_18 - 1] [i_18 + 2] [i_18 - 1])));
                        var_45 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_46 [i_18] [i_18] [i_18 + 2] [i_18] [i_4] [i_18] [i_18 - 1])) * (((/* implicit */int) var_16))));
                    }
                } 
            } 
        }
        var_46 = ((/* implicit */int) arr_14 [i_4]);
    }
}
