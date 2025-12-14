/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198500
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
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 12; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */long long int) ((unsigned long long int) max((min((((/* implicit */unsigned long long int) (unsigned short)24)), (arr_3 [i_1] [i_1] [i_0]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_0] [i_0]))))))));
                var_16 ^= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((min((arr_3 [i_0] [(_Bool)1] [i_1 - 3]), (((/* implicit */unsigned long long int) arr_5 [i_0 - 1] [(signed char)5] [i_0 - 1])))) < (((((/* implicit */unsigned long long int) arr_1 [10])) % (var_7)))))), (min((((/* implicit */unsigned long long int) max((arr_1 [(_Bool)1]), (((/* implicit */unsigned int) (_Bool)1))))), (arr_3 [i_1 + 1] [i_1] [i_1 - 2])))));
                var_17 = ((/* implicit */unsigned long long int) ((max((arr_0 [i_0]), (arr_0 [i_0]))) % (arr_0 [i_0])));
            }
        } 
    } 
    var_18 -= ((/* implicit */long long int) ((((((/* implicit */_Bool) min((var_12), (var_14)))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (((long long int) var_0)))) <= (((/* implicit */long long int) ((var_0) + (var_3))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        var_19 = ((/* implicit */int) arr_7 [i_2]);
        /* LoopSeq 2 */
        for (unsigned int i_3 = 2; i_3 < 18; i_3 += 4) 
        {
            arr_12 [i_2] = ((/* implicit */int) ((arr_10 [i_3 + 3] [i_3]) == (((/* implicit */long long int) ((var_8) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
            var_20 = ((/* implicit */long long int) arr_6 [i_3 + 2]);
        }
        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 1) 
        {
            arr_15 [i_4] [i_2] = ((/* implicit */long long int) arr_9 [i_2]);
            var_21 = ((/* implicit */unsigned long long int) arr_11 [i_2]);
            var_22 -= ((/* implicit */unsigned int) var_13);
            var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_4])) * (((/* implicit */int) arr_9 [i_2]))));
        }
        var_24 = ((/* implicit */unsigned short) arr_7 [i_2]);
    }
    for (short i_5 = 2; i_5 < 14; i_5 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_6 = 0; i_6 < 17; i_6 += 2) 
        {
            var_25 = ((int) max((arr_11 [i_5 - 2]), (arr_11 [i_5 - 2])));
            arr_20 [i_5] = ((/* implicit */short) min((((/* implicit */long long int) arr_9 [i_6])), (var_13)));
            /* LoopNest 3 */
            for (unsigned int i_7 = 1; i_7 < 14; i_7 += 1) 
            {
                for (unsigned long long int i_8 = 3; i_8 < 15; i_8 += 1) 
                {
                    for (unsigned long long int i_9 = 1; i_9 < 13; i_9 += 4) 
                    {
                        {
                            var_26 -= ((/* implicit */unsigned long long int) arr_6 [i_9]);
                            var_27 = ((/* implicit */unsigned int) arr_22 [i_5]);
                            var_28 = ((/* implicit */long long int) arr_22 [i_6]);
                        }
                    } 
                } 
            } 
        }
        var_29 &= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_18 [i_5] [i_5 - 1] [i_5]) == (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))) <= (max((arr_21 [2ULL] [i_5 + 2]), (arr_18 [i_5] [i_5 + 2] [i_5 + 1])))));
        var_30 -= ((/* implicit */long long int) ((((int) arr_22 [2])) << (((min((min((arr_18 [i_5] [i_5] [i_5]), (var_8))), (((/* implicit */unsigned int) arr_8 [i_5 - 2])))) - (1U)))));
    }
    for (long long int i_10 = 0; i_10 < 25; i_10 += 3) 
    {
        var_31 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((arr_31 [i_10] [i_10]) <= (arr_31 [i_10] [i_10])))), (arr_28 [i_10] [i_10])));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_11 = 0; i_11 < 25; i_11 += 1) 
        {
            var_32 = ((/* implicit */long long int) ((arr_29 [i_10] [i_10]) + (((/* implicit */unsigned long long int) arr_31 [i_10] [i_10]))));
            /* LoopNest 2 */
            for (long long int i_12 = 2; i_12 < 23; i_12 += 4) 
            {
                for (long long int i_13 = 1; i_13 < 24; i_13 += 4) 
                {
                    {
                        var_33 ^= ((/* implicit */long long int) ((short) ((arr_32 [i_12]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_34 [i_12] [i_11] [i_12]))));
                        var_34 = ((/* implicit */long long int) ((((507904U) << (((var_8) - (1659830806U))))) < (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [15LL] [15LL] [i_13] [i_13 - 1])))));
                        var_35 = ((/* implicit */int) (-(arr_30 [i_10])));
                    }
                } 
            } 
            arr_41 [i_10] [i_10] = ((/* implicit */int) arr_36 [i_10] [i_10] [i_10]);
            arr_42 [i_10] [i_11] = ((/* implicit */long long int) ((3678777674U) * (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
            var_36 = ((/* implicit */unsigned long long int) arr_36 [i_10] [i_11] [i_11]);
        }
        /* vectorizable */
        for (unsigned long long int i_14 = 4; i_14 < 23; i_14 += 4) /* same iter space */
        {
            var_37 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_40 [i_14 - 2] [i_14 - 4])) * (((/* implicit */int) arr_40 [i_14 - 4] [i_14 - 2]))));
            var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_37 [i_14 + 1] [i_14 - 2] [i_14 - 1] [2ULL])) || (((/* implicit */_Bool) arr_29 [i_10] [i_10]))));
        }
        for (unsigned long long int i_15 = 4; i_15 < 23; i_15 += 4) /* same iter space */
        {
            arr_51 [i_10] = ((/* implicit */short) max((arr_48 [i_15 - 3]), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_39 [i_10])) ? (arr_38 [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)127))))) >= (((/* implicit */unsigned long long int) var_13)))))));
            var_39 = ((/* implicit */short) arr_48 [i_15]);
            arr_52 [i_15] [i_15] &= ((/* implicit */short) arr_43 [i_15] [i_10] [i_15]);
            var_40 = ((/* implicit */unsigned int) (((~(((/* implicit */int) arr_45 [i_15 - 2])))) ^ (((/* implicit */int) ((arr_29 [i_15 - 4] [i_10]) < (arr_30 [i_10]))))));
        }
        arr_53 [i_10] = ((/* implicit */short) ((((arr_49 [i_10] [19ULL] [19ULL]) << (((arr_49 [i_10] [i_10] [i_10]) - (3189726134U))))) >= (arr_49 [i_10] [i_10] [i_10])));
    }
    /* vectorizable */
    for (long long int i_16 = 0; i_16 < 13; i_16 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_17 = 2; i_17 < 11; i_17 += 1) /* same iter space */
        {
            var_41 = ((/* implicit */long long int) ((arr_26 [i_16] [i_17 + 2] [i_17 + 2] [i_17 + 1] [i_17 + 2] [i_17 - 1] [i_17 - 2]) < (arr_26 [i_16] [i_17 + 2] [i_17 + 2] [i_17 + 1] [i_17 + 2] [i_17 - 1] [i_17 - 2])));
            var_42 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_23 [i_17] [i_16] [i_17 - 1] [i_17 + 2] [i_17 + 2])) + (2147483647))) << (((((arr_38 [i_17]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) - (12664913915625334239ULL)))));
            var_43 = ((/* implicit */unsigned long long int) max((var_43), (((((/* implicit */_Bool) arr_37 [i_17 + 2] [i_17 + 2] [i_17] [i_17])) ? (((/* implicit */unsigned long long int) arr_26 [i_16] [i_17 - 1] [i_17] [i_17 - 1] [i_17 + 1] [i_17 - 1] [i_17 + 1])) : (arr_34 [i_17 - 1] [i_17 + 1] [i_16])))));
            var_44 = ((/* implicit */signed char) arr_33 [i_17] [i_17] [i_17]);
        }
        for (unsigned long long int i_18 = 2; i_18 < 11; i_18 += 1) /* same iter space */
        {
            var_45 &= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65501)))))) ^ (arr_34 [i_16] [(_Bool)1] [i_16])));
            var_46 = ((/* implicit */unsigned int) arr_56 [i_16] [i_18]);
            var_47 ^= ((/* implicit */unsigned short) ((arr_29 [i_16] [i_16]) ^ (arr_29 [i_16] [i_16])));
            var_48 = ((/* implicit */unsigned int) ((var_13) / (((((-7637128178434403535LL) + (9223372036854775807LL))) << (((((((/* implicit */int) arr_33 [i_16] [i_16] [i_16])) + (12865))) - (9)))))));
            var_49 = ((/* implicit */long long int) ((((/* implicit */int) arr_23 [i_18 + 2] [i_16] [i_18 - 2] [i_16] [i_18])) < (((/* implicit */int) arr_23 [i_18 + 2] [i_16] [i_18 - 2] [i_16] [i_16]))));
        }
        var_50 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-32756)) ? (((/* implicit */int) arr_47 [i_16])) : (((/* implicit */int) arr_47 [i_16]))));
        arr_63 [i_16] = ((/* implicit */int) ((((/* implicit */_Bool) arr_35 [i_16] [i_16] [i_16] [i_16])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_16] [i_16] [(unsigned short)0] [i_16])))));
        var_51 = ((/* implicit */short) ((signed char) arr_49 [i_16] [i_16] [i_16]));
    }
}
