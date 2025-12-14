/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233583
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
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 4] [i_0 + 4])))));
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(arr_3 [i_0 + 1])));
            arr_10 [i_0 + 3] [8] |= ((/* implicit */unsigned int) ((signed char) var_5));
        }
        for (unsigned long long int i_2 = 3; i_2 < 10; i_2 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (int i_3 = 1; i_3 < 9; i_3 += 1) 
            {
                var_19 = ((/* implicit */unsigned long long int) (+(arr_11 [i_0 - 1])));
                var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_7 [i_2 - 2]))));
            }
            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (+(var_5))))));
            var_22 = ((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_2 - 1]))));
            var_23 |= ((/* implicit */int) ((unsigned int) arr_13 [i_0 + 4] [(signed char)1] [i_0 + 1] [i_2 - 2]));
        }
        for (unsigned long long int i_4 = 3; i_4 < 10; i_4 += 1) /* same iter space */
        {
            arr_18 [i_0] [i_0] [8U] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0 + 2]))) : (var_12)));
            /* LoopSeq 1 */
            for (long long int i_5 = 0; i_5 < 12; i_5 += 3) 
            {
                var_24 = ((/* implicit */int) (+(arr_11 [i_0 + 3])));
                var_25 = ((/* implicit */unsigned int) (+(((unsigned long long int) var_2))));
            }
        }
    }
    /* vectorizable */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_26 = ((/* implicit */int) var_5);
        var_27 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_22 [i_6]))));
        /* LoopNest 2 */
        for (signed char i_7 = 3; i_7 < 12; i_7 += 4) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    arr_28 [i_8] [i_8] [i_7] [i_6] = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)21184))));
                    arr_29 [i_7] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0)))))));
                    var_28 |= ((/* implicit */signed char) ((arr_23 [i_7 + 1]) ^ (arr_23 [i_8])));
                    /* LoopSeq 2 */
                    for (signed char i_9 = 0; i_9 < 13; i_9 += 1) 
                    {
                        var_29 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)32767))) | ((-9223372036854775807LL - 1LL))));
                        arr_33 [i_6] [i_7] [i_8] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)21189)))))));
                        var_30 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_26 [i_6] [(signed char)9] [i_8] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_22 [i_7 - 2])))));
                    }
                    for (long long int i_10 = 0; i_10 < 13; i_10 += 4) 
                    {
                        var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_18)) ? (((unsigned long long int) (unsigned short)21184)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))));
                        var_32 |= ((/* implicit */short) arr_32 [i_8] [i_10]);
                        var_33 = arr_24 [i_6] [i_7 - 2] [i_7 - 2];
                    }
                }
            } 
        } 
        var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295ULL)) ? (((/* implicit */int) (unsigned short)62406)) : (((/* implicit */int) (short)-32767))))) ? (((/* implicit */int) ((short) -9223372036854775794LL))) : (((/* implicit */int) (_Bool)1))));
    }
    for (signed char i_11 = 0; i_11 < 24; i_11 += 2) 
    {
        arr_39 [i_11] [i_11] = ((/* implicit */_Bool) arr_37 [(signed char)17] [i_11]);
        /* LoopSeq 1 */
        for (unsigned long long int i_12 = 4; i_12 < 23; i_12 += 4) 
        {
            var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) ((unsigned char) arr_41 [i_11] [i_12])))));
            var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) max((min((arr_37 [i_12 - 3] [i_12 + 1]), (((/* implicit */long long int) (short)-5319)))), (((/* implicit */long long int) var_11)))))));
            var_37 = ((/* implicit */unsigned long long int) var_12);
        }
        /* LoopSeq 3 */
        for (long long int i_13 = 0; i_13 < 24; i_13 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_14 = 3; i_14 < 23; i_14 += 4) 
            {
                for (unsigned char i_15 = 1; i_15 < 23; i_15 += 2) 
                {
                    {
                        var_38 = max((((unsigned int) (short)-31679)), (((/* implicit */unsigned int) max((((/* implicit */signed char) ((arr_44 [i_11] [i_13] [i_15]) || (((/* implicit */_Bool) var_2))))), (var_14)))));
                        var_39 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_46 [(unsigned char)20] [i_14 - 2] [i_15 + 1]))));
                    }
                } 
            } 
            var_40 = ((/* implicit */short) max((var_40), (((/* implicit */short) min((min((((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL))))), ((~(((/* implicit */int) arr_48 [i_11] [i_11] [(short)10] [i_11])))))), (((/* implicit */int) max((arr_43 [i_11] [i_13]), (var_16)))))))));
        }
        for (unsigned int i_16 = 0; i_16 < 24; i_16 += 1) 
        {
            var_41 = ((/* implicit */signed char) max((var_41), (((/* implicit */signed char) ((max((((arr_44 [i_11] [i_16] [i_16]) ? (9223372036854775794LL) : (((/* implicit */long long int) ((/* implicit */int) arr_47 [i_11] [i_11] [i_11] [14LL] [i_11] [i_11]))))), (((/* implicit */long long int) (~(((/* implicit */int) var_14))))))) | (((/* implicit */long long int) 1570288548)))))));
            var_42 |= ((/* implicit */unsigned short) min((min((((/* implicit */long long int) arr_36 [i_16])), (arr_40 [i_11] [i_16] [i_16]))), (((/* implicit */long long int) (-(((/* implicit */int) (short)-32761)))))));
            /* LoopNest 2 */
            for (unsigned char i_17 = 0; i_17 < 24; i_17 += 1) 
            {
                for (unsigned char i_18 = 4; i_18 < 23; i_18 += 4) 
                {
                    {
                        arr_58 [i_17] [i_16] [i_17] [i_18] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3653355203U)) ? (arr_53 [i_16] [i_18 - 2] [i_18 - 4] [i_18 + 1]) : (((/* implicit */int) min(((signed char)-125), (arr_50 [i_11] [i_16] [i_17]))))))));
                        var_43 = (!(((/* implicit */_Bool) max((((/* implicit */long long int) (+(((/* implicit */int) arr_36 [i_11]))))), (9223372036854775801LL)))));
                    }
                } 
            } 
            arr_59 [i_11] [i_11] [i_16] = ((/* implicit */long long int) (~((~(min((arr_55 [i_16] [(short)18]), (((/* implicit */int) var_15))))))));
        }
        /* vectorizable */
        for (unsigned short i_19 = 0; i_19 < 24; i_19 += 4) 
        {
            var_44 |= ((/* implicit */_Bool) ((unsigned short) arr_40 [i_11] [i_11] [i_19]));
            var_45 |= ((/* implicit */long long int) arr_51 [i_11]);
        }
    }
    var_46 = ((/* implicit */signed char) (short)32757);
}
