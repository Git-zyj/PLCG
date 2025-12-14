/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232611
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
    var_20 = ((/* implicit */unsigned int) (+(max((1ULL), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_15)))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_21 = (+(((arr_1 [i_1 + 1]) - (((/* implicit */long long int) ((/* implicit */int) var_14))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 21; i_4 += 2) 
                        {
                            {
                                arr_13 [i_4] [i_4] [i_1] [i_2] [i_1] [(_Bool)1] [i_0] = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)16295))));
                                var_22 = ((/* implicit */unsigned char) arr_12 [4U] [i_0] [i_1] [i_0] [i_0] [i_0] [i_0]);
                                arr_14 [i_0] [i_3] [8LL] [i_3] [i_4 + 2] &= ((/* implicit */long long int) var_15);
                                var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_10) - (var_17)))) ? (4ULL) : (((/* implicit */unsigned long long int) ((int) arr_4 [i_0] [i_1 + 1] [i_2])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 = var_0;
    /* LoopSeq 2 */
    for (int i_5 = 1; i_5 < 14; i_5 += 3) 
    {
        var_25 = ((/* implicit */unsigned char) (((+((-(1112234182U))))) > (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_12 [i_5] [i_5] [(signed char)20] [18] [i_5 + 1] [i_5] [i_5])))))));
        var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) (+(arr_0 [i_5 + 1] [i_5 - 1]))))));
    }
    for (unsigned char i_6 = 0; i_6 < 12; i_6 += 2) 
    {
        arr_20 [i_6] = ((/* implicit */long long int) max((29ULL), (((/* implicit */unsigned long long int) ((signed char) ((unsigned long long int) (short)16158))))));
        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) arr_5 [i_6]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (unsigned short)49259)))))) : (((((/* implicit */_Bool) var_4)) ? (arr_11 [i_6] [i_6] [i_6] [(unsigned short)0] [i_6] [i_6]) : (arr_11 [i_6] [8ULL] [i_6] [2ULL] [i_6] [i_6])))));
        /* LoopSeq 1 */
        for (short i_7 = 3; i_7 < 11; i_7 += 3) 
        {
            /* LoopNest 2 */
            for (signed char i_8 = 2; i_8 < 10; i_8 += 1) 
            {
                for (unsigned short i_9 = 0; i_9 < 12; i_9 += 4) 
                {
                    {
                        arr_27 [i_8] = ((/* implicit */_Bool) arr_0 [i_9] [i_7 - 3]);
                        var_28 = ((/* implicit */unsigned long long int) ((int) max((arr_10 [i_9] [(unsigned short)1] [i_8 + 2] [i_7] [i_6] [i_6]), (arr_10 [i_6] [i_7] [i_8 + 2] [i_8] [i_8] [(signed char)1]))));
                        var_29 = ((/* implicit */unsigned long long int) var_6);
                    }
                } 
            } 
            var_30 = ((/* implicit */_Bool) max((var_30), ((!(((/* implicit */_Bool) (~((~(((/* implicit */int) arr_2 [i_6])))))))))));
        }
        arr_28 [i_6] = ((/* implicit */short) min(((~(((/* implicit */int) arr_7 [i_6] [i_6] [i_6] [i_6])))), ((~(((/* implicit */int) (unsigned short)16305))))));
    }
    /* LoopSeq 2 */
    for (unsigned int i_10 = 1; i_10 < 19; i_10 += 1) 
    {
        arr_32 [i_10] [i_10] = ((/* implicit */long long int) (+((-(min((arr_6 [i_10] [i_10] [i_10]), (((/* implicit */unsigned int) arr_29 [i_10]))))))));
        var_31 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_19) : (((/* implicit */int) arr_29 [i_10]))))))) ? (max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_29 [i_10])))), (((/* implicit */int) arr_10 [i_10] [i_10 + 1] [i_10] [i_10 + 1] [i_10 + 1] [i_10 - 1])))) : ((+(((/* implicit */int) (short)-16439))))));
    }
    for (unsigned int i_11 = 1; i_11 < 12; i_11 += 1) 
    {
        arr_37 [13U] = ((/* implicit */long long int) var_18);
        arr_38 [1] [1] = ((/* implicit */_Bool) var_6);
        /* LoopSeq 4 */
        for (unsigned short i_12 = 2; i_12 < 10; i_12 += 2) 
        {
            arr_41 [i_12 + 1] = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (-1997904273) : (((/* implicit */int) (unsigned char)224))))), (var_0))) / (((/* implicit */unsigned long long int) var_7))));
            arr_42 [i_11] [i_11] [i_12] &= ((/* implicit */unsigned int) ((((/* implicit */int) (((!(((/* implicit */_Bool) arr_11 [i_11 + 2] [(_Bool)1] [i_11 + 1] [i_11] [i_11] [(_Bool)1])))) && (((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-105)))))))) <= (min(((+(((/* implicit */int) arr_35 [i_11])))), (arr_5 [i_12])))));
            var_32 *= ((/* implicit */signed char) min((((arr_4 [i_11 - 1] [i_12 + 4] [i_12 + 2]) % (arr_4 [i_11 + 2] [i_12 - 1] [i_12 + 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_35 [(signed char)6])), (var_6)))) << (((((/* implicit */int) min((var_18), (((/* implicit */unsigned short) (short)10487))))) - (10459))))))));
        }
        for (short i_13 = 0; i_13 < 14; i_13 += 2) 
        {
            arr_47 [i_13] = ((/* implicit */short) (-(((/* implicit */int) arr_36 [i_11 - 1] [i_11]))));
            arr_48 [i_13] [i_13] [i_13] = ((/* implicit */signed char) ((((((_Bool) 1722911268)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))))) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)14)))));
        }
        for (unsigned int i_14 = 0; i_14 < 14; i_14 += 3) 
        {
            arr_53 [i_14] [i_14] [i_11 - 1] = ((/* implicit */int) max(((((((_Bool)0) ? (29ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_43 [i_11] [i_14])))))), (((/* implicit */unsigned long long int) (-(-1684010205))))));
            var_33 = (+((-(((/* implicit */int) var_16)))));
        }
        for (short i_15 = 0; i_15 < 14; i_15 += 3) 
        {
            var_34 = var_16;
            var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) var_1))));
            /* LoopSeq 1 */
            for (signed char i_16 = 4; i_16 < 12; i_16 += 2) 
            {
                arr_60 [i_15] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((_Bool) arr_1 [i_15]))) : (((/* implicit */int) arr_59 [i_16 + 2])))) + (((((/* implicit */_Bool) arr_10 [i_16] [i_16] [i_16 - 3] [i_16 - 4] [i_16 + 1] [i_16 - 4])) ? (((/* implicit */int) arr_2 [i_16])) : (((/* implicit */int) ((short) arr_17 [i_11 + 1] [i_16 - 1])))))));
                var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) ((((unsigned long long int) ((var_4) < (((/* implicit */int) var_6))))) | (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_59 [i_16 - 4]))))))))));
                arr_61 [i_15] [i_16 + 1] [i_16] [i_16] = ((/* implicit */short) max((((/* implicit */int) min((((/* implicit */signed char) arr_35 [i_11 - 1])), (var_16)))), (((arr_35 [i_11 - 1]) ? (((/* implicit */int) arr_35 [i_11 + 2])) : (((/* implicit */int) var_9))))));
                arr_62 [i_11] [i_15] [i_16] = ((/* implicit */unsigned short) arr_59 [i_16 - 1]);
                var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_3))) ? (((((/* implicit */int) var_3)) % (((/* implicit */int) (!(((/* implicit */_Bool) 0ULL))))))) : (((/* implicit */int) var_13))));
            }
            arr_63 [4] [i_11] [i_11] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)-105))));
            arr_64 [i_11] |= ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_14))))), (var_0))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_11] [i_15] [i_11])))));
        }
        arr_65 [(unsigned char)3] = ((/* implicit */_Bool) ((int) max((arr_15 [i_11 + 1]), (((/* implicit */unsigned long long int) var_1)))));
    }
}
