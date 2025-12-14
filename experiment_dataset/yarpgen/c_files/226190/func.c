/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226190
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
    var_15 += ((/* implicit */unsigned long long int) ((((long long int) min((var_3), (var_13)))) + (((/* implicit */long long int) ((((/* implicit */_Bool) 915426185U)) ? (((var_8) - (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)250)) : (((/* implicit */int) var_1))))))))));
    var_16 -= ((/* implicit */unsigned int) (-(((/* implicit */int) (short)-26579))));
    var_17 |= ((/* implicit */short) 4294967277U);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        var_18 -= ((/* implicit */_Bool) var_9);
        /* LoopNest 3 */
        for (unsigned char i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned char i_3 = 4; i_3 < 10; i_3 += 2) 
                {
                    {
                        var_19 += ((/* implicit */long long int) (~(((/* implicit */int) ((var_10) >= (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2] [i_2] [i_2]))))))));
                        arr_12 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) var_6);
                        var_20 += (~(((/* implicit */int) ((var_10) == (1426739071609213156LL)))));
                        var_21 += ((/* implicit */unsigned char) (_Bool)1);
                        var_22 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_0)) == (((/* implicit */int) (_Bool)0)))))) : (((long long int) (unsigned short)4119))));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */long long int) min((var_23), ((~(((long long int) var_9))))));
        arr_13 [i_0] = ((/* implicit */short) ((unsigned int) var_4));
        arr_14 [i_0] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)96))));
    }
    for (short i_4 = 1; i_4 < 20; i_4 += 1) 
    {
        /* LoopSeq 3 */
        for (long long int i_5 = 0; i_5 < 23; i_5 += 3) 
        {
            /* LoopNest 2 */
            for (short i_6 = 0; i_6 < 23; i_6 += 3) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 4) 
                {
                    {
                        arr_24 [i_5] [i_5] = ((/* implicit */short) (+(((unsigned int) arr_20 [i_5] [i_5] [i_6] [i_4 + 1]))));
                        arr_25 [0U] [i_5] [i_4 - 1] [i_4] = ((/* implicit */long long int) (+((-(var_7)))));
                        arr_26 [i_7] |= ((/* implicit */int) min((((((/* implicit */_Bool) ((arr_15 [i_4]) ^ (var_9)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) var_1)), (var_13)))) : (((((/* implicit */_Bool) arr_15 [i_5])) ? (9072023772673347902ULL) : (((/* implicit */unsigned long long int) var_11)))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_7] [i_6] [i_5] [i_7]))) | ((-(arr_19 [i_7])))))));
                    }
                } 
            } 
            arr_27 [i_5] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_4 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_5] [9LL] [i_4 + 3] [i_4]))) : (arr_16 [i_4 + 1])))), (2553078796492661802ULL)));
            var_24 |= ((/* implicit */int) max((((long long int) 9072023772673347928ULL)), (max((arr_22 [i_5] [i_5] [i_4] [i_4] [i_4]), (arr_22 [i_4] [i_4 + 3] [i_4 - 1] [i_4 - 1] [i_4 + 1])))));
            var_25 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_7))));
            var_26 = ((/* implicit */unsigned char) ((unsigned long long int) arr_18 [i_5]));
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            arr_31 [i_4] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)4119))))) ? (arr_15 [i_8]) : (((/* implicit */int) var_5))))) ? ((+(((/* implicit */int) (unsigned short)28662)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_23 [i_4] [20] [i_8] [10])))))))));
            var_27 += ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) arr_28 [i_4 + 3] [i_4 + 3] [i_4])) && (((/* implicit */_Bool) var_3)))));
            var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) ((arr_21 [i_4] [2ULL] [i_4]) << ((((+(((unsigned long long int) arr_23 [i_4] [(unsigned char)12] [i_8] [i_8])))) - (4923820899273697940ULL))))))));
            arr_32 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((-(var_13))), (((/* implicit */int) arr_18 [14LL]))))) ? (((((/* implicit */_Bool) ((arr_23 [i_4] [(short)4] [(short)4] [i_8]) << (((9072023772673347935ULL) - (9072023772673347895ULL)))))) ? (max((2894397952U), (((/* implicit */unsigned int) var_13)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (unsigned short)60066)))))))) : (max((((unsigned int) var_6)), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)25796))) >= (17592186044352ULL))))))));
        }
        for (signed char i_9 = 0; i_9 < 23; i_9 += 1) 
        {
            var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (+(var_9)))) < (var_6))))));
            /* LoopNest 2 */
            for (signed char i_10 = 2; i_10 < 22; i_10 += 3) 
            {
                for (int i_11 = 0; i_11 < 23; i_11 += 1) 
                {
                    {
                        var_30 += ((/* implicit */long long int) var_6);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_12 = 1; i_12 < 21; i_12 += 3) 
                        {
                            var_31 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (unsigned short)4110)))) == (((((/* implicit */_Bool) arr_39 [i_9] [i_10] [i_11] [i_10])) ? (var_6) : (((/* implicit */unsigned int) var_13))))));
                            arr_44 [i_12] [i_11] [i_10] [i_4] [i_9] [i_9] [i_4] |= ((/* implicit */long long int) ((((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) -3673406062702783115LL)))) ? (var_6) : (var_8)));
                            var_32 = ((/* implicit */unsigned short) var_12);
                            var_33 = (~(((/* implicit */int) ((18U) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_4 - 1] [i_9] [i_12])))))));
                            arr_45 [i_4] [i_11] [i_9] [i_9] [i_9] [i_4] = ((/* implicit */int) arr_35 [i_4 + 1] [i_12 - 1]);
                        }
                        for (unsigned char i_13 = 1; i_13 < 21; i_13 += 1) 
                        {
                            arr_49 [i_4] [i_9] [i_9] [15LL] [i_11] [i_9] [i_13] = ((/* implicit */signed char) var_4);
                            var_34 |= ((/* implicit */int) (-(min((((((/* implicit */_Bool) (unsigned char)103)) ? (17592186044370ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))), (((/* implicit */unsigned long long int) arr_21 [i_4] [12LL] [i_10 - 1]))))));
                            arr_50 [i_4] [i_9] [i_10] [i_11] [i_11] [(_Bool)1] [i_13 - 1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_14))))) <= (min((18U), (((/* implicit */unsigned int) arr_28 [i_10 - 2] [i_10 - 2] [i_13]))))));
                        }
                    }
                } 
            } 
        }
        var_35 = ((/* implicit */signed char) var_10);
        arr_51 [i_4 + 2] = ((/* implicit */unsigned char) max(((-(var_2))), ((~(arr_17 [i_4 + 1])))));
    }
}
