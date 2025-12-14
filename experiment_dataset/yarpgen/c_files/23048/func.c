/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23048
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
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */long long int) ((short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)36861))) - (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_0 [i_0]))))));
        var_16 = ((/* implicit */unsigned int) var_15);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                for (short i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    {
                        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)36866)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [4] [i_2] [i_1] [4]))))))))))));
                        arr_12 [i_1] = arr_10 [i_0 + 1] [i_0 - 1] [i_2] [i_1];
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) min((((int) max((var_7), (((/* implicit */int) (unsigned short)28657))))), ((-(((/* implicit */int) (!(((/* implicit */_Bool) -1376142015))))))))))));
    }
    for (long long int i_4 = 0; i_4 < 25; i_4 += 1) 
    {
        var_19 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) arr_14 [i_4])), (arr_13 [i_4])));
        /* LoopSeq 3 */
        for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 2) 
        {
            var_20 = ((/* implicit */short) (unsigned short)9835);
            /* LoopNest 3 */
            for (unsigned int i_6 = 1; i_6 < 24; i_6 += 3) 
            {
                for (unsigned int i_7 = 3; i_7 < 21; i_7 += 1) 
                {
                    for (short i_8 = 4; i_8 < 23; i_8 += 2) 
                    {
                        {
                            var_21 += ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_5])) ? ((-(((/* implicit */int) arr_15 [i_7])))) : (((/* implicit */int) (!(((/* implicit */_Bool) 1724848028U)))))))), (2290619103889281275LL)));
                            arr_25 [2U] [i_7 + 2] [i_7] [(unsigned short)23] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_8] [i_8 + 2] [i_8] [i_8 + 2])) && (((/* implicit */_Bool) (short)-22107))))) - (((/* implicit */int) ((signed char) (unsigned short)25475)))))) ? ((~(arr_17 [i_4] [i_6 - 1] [i_7 + 2] [i_8 - 2]))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_17 [i_6 - 1] [i_5] [i_8 + 2] [i_7 + 2])))));
                            arr_26 [i_4] [i_4] [i_6] [i_6 + 1] [i_7] [i_8] &= ((/* implicit */unsigned long long int) arr_15 [i_5]);
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 25; i_9 += 3) 
            {
                for (unsigned short i_10 = 0; i_10 < 25; i_10 += 1) 
                {
                    {
                        arr_33 [i_4] [i_5] [i_4] [i_10] = ((/* implicit */signed char) var_15);
                        /* LoopSeq 1 */
                        for (signed char i_11 = 1; i_11 < 23; i_11 += 3) 
                        {
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) (short)15))) ? (((((/* implicit */_Bool) arr_23 [0LL] [i_9] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_13 [i_10]) >= (((/* implicit */unsigned int) var_7)))))) : (((3474522702770869925ULL) - (var_0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_21 [i_4] [i_5] [i_10] [i_11 + 2]), (((signed char) arr_21 [i_10] [i_10] [i_9] [i_10]))))))));
                            arr_36 [i_4] [i_5] [9] = ((/* implicit */unsigned int) arr_27 [i_4] [i_4] [i_10] [i_11]);
                            arr_37 [i_9] [i_9] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)-32759)) || (((/* implicit */_Bool) arr_30 [i_11] [i_9] [i_5] [i_4])))) ? ((~(((/* implicit */int) arr_21 [i_4] [i_5] [i_10] [i_11])))) : (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) -1675538553)))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_32 [i_4] [i_9] [i_10] [i_11])) && (((/* implicit */_Bool) arr_32 [i_4] [i_5] [17U] [i_10]))))) : (arr_20 [i_11 - 1] [8U] [i_11 + 2] [i_11] [i_11])));
                        }
                        arr_38 [i_10] [i_9] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_6)) : (var_10)));
                        arr_39 [i_4] [i_4] [(signed char)12] [i_9] [i_9] [i_10] = ((/* implicit */short) (~(arr_20 [4] [i_5] [i_5] [i_5] [i_5])));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (long long int i_12 = 1; i_12 < 23; i_12 += 1) 
            {
                for (unsigned int i_13 = 0; i_13 < 25; i_13 += 1) 
                {
                    for (unsigned short i_14 = 0; i_14 < 25; i_14 += 3) 
                    {
                        {
                            var_23 &= ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) arr_20 [i_14] [7U] [i_12] [7U] [i_4])) : (((arr_44 [i_5] [24U] [i_12] [i_14]) >> (((((((/* implicit */_Bool) arr_24 [i_4] [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_41 [i_5] [i_12] [i_5] [i_14])))) - (19897))))));
                            var_24 += ((((/* implicit */_Bool) (unsigned short)28675)) ? (((((/* implicit */_Bool) arr_45 [i_12 - 1])) ? (arr_45 [i_12 + 2]) : (arr_45 [i_12 + 1]))) : (((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)36866))) <= (arr_35 [i_13] [i_13])))), ((~(((/* implicit */int) (short)23155))))))));
                            var_25 = ((/* implicit */short) (unsigned short)22069);
                            arr_49 [i_4] [i_13] [i_4] [i_4] [i_4] [i_4] [(short)12] = min((((((/* implicit */_Bool) ((int) 6428530811906839446ULL))) ? (1675538552) : (((/* implicit */int) var_3)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_32 [i_12] [i_12 - 1] [i_12] [i_12 + 1])) == (arr_27 [i_12] [i_12] [i_12] [i_12 - 1])))));
                            arr_50 [20] [20] [i_12] [i_12] [i_12] [19ULL] [i_13] = ((/* implicit */int) ((unsigned int) arr_19 [i_4] [i_13] [i_14]));
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_15 = 0; i_15 < 25; i_15 += 1) /* same iter space */
        {
            arr_54 [i_4] [i_4] [i_15] = ((/* implicit */unsigned short) min((arr_41 [i_4] [10] [i_15] [i_15]), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_4])) && (((/* implicit */_Bool) var_13)))))));
            var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) arr_32 [i_4] [23LL] [(unsigned short)20] [i_4]))));
        }
        for (unsigned int i_16 = 0; i_16 < 25; i_16 += 1) /* same iter space */
        {
            arr_57 [i_4] [i_4] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_43 [i_16] [(unsigned short)4] [i_16] [i_4])) ? (arr_51 [i_16]) : (((((/* implicit */_Bool) arr_24 [i_4] [i_4] [i_4] [i_4] [i_4])) ? (arr_32 [i_4] [(signed char)22] [i_16] [i_4]) : (arr_31 [i_4] [i_16] [i_4])))))) + (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)22069))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_8))))) : (arr_48 [i_16] [i_16] [i_16] [(short)7] [i_16] [i_4] [i_4])))));
            arr_58 [i_16] = ((/* implicit */unsigned int) (!(((((((/* implicit */_Bool) arr_28 [i_16])) ? (((/* implicit */int) (signed char)-30)) : (((/* implicit */int) arr_21 [i_4] [i_4] [i_16] [i_16])))) < (((/* implicit */int) ((short) arr_22 [i_4] [i_4] [i_4])))))));
            var_27 = ((/* implicit */long long int) min((var_27), (4302579687730579962LL)));
        }
        arr_59 [i_4] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_22 [i_4] [i_4] [i_4]))));
        arr_60 [i_4] = ((/* implicit */short) min((((((((/* implicit */_Bool) arr_42 [i_4] [i_4])) && (((/* implicit */_Bool) var_1)))) ? (((((/* implicit */_Bool) (short)-30213)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_4] [(signed char)6] [i_4] [i_4]))) : (arr_34 [i_4] [i_4] [i_4] [0ULL] [0ULL]))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28695))))), (((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [(signed char)21]))) % (arr_56 [i_4]))))));
    }
    var_28 = ((/* implicit */unsigned short) min((((((/* implicit */int) (!(((/* implicit */_Bool) 1393799183))))) / ((~(((/* implicit */int) var_11)))))), ((~(((/* implicit */int) min((((/* implicit */short) var_5)), (var_8))))))));
    /* LoopSeq 2 */
    for (signed char i_17 = 0; i_17 < 13; i_17 += 1) 
    {
        var_29 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) arr_52 [0LL] [i_17])) ? (arr_32 [i_17] [i_17] [i_17] [(signed char)18]) : ((~(((/* implicit */int) (short)-10758)))))) + (2147483647))) << (((max((541760040U), (((/* implicit */unsigned int) arr_53 [i_17] [i_17])))) - (541760040U)))));
        var_30 = ((/* implicit */unsigned short) (~((((+(arr_44 [i_17] [i_17] [i_17] [i_17]))) >> ((((~(((/* implicit */int) var_3)))) + (19937)))))));
        arr_63 [i_17] [i_17] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_17] [i_17] [i_17] [i_17] [i_17])) || (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1675538548)) ? (arr_27 [i_17] [i_17] [i_17] [i_17]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_62 [i_17] [i_17])))))) && (((/* implicit */_Bool) arr_46 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17]))))));
    }
    for (unsigned int i_18 = 0; i_18 < 23; i_18 += 3) 
    {
        var_31 |= ((/* implicit */unsigned int) arr_31 [i_18] [i_18] [i_18]);
        var_32 = ((/* implicit */int) (unsigned short)10841);
    }
}
