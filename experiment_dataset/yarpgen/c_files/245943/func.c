/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245943
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    {
                        var_10 = ((/* implicit */unsigned short) var_5);
                        var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((arr_5 [15LL] [15LL] [(short)19]) & (((/* implicit */unsigned int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned int) min((((/* implicit */short) (signed char)-73)), (arr_8 [i_0] [19ULL]))))))) ? (((((/* implicit */_Bool) (-(var_1)))) ? (min((var_5), (arr_5 [(signed char)11] [(signed char)11] [15LL]))) : (arr_5 [(short)14] [17U] [(signed char)13]))) : (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0]))) ^ (arr_4 [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)421))) : (1902049225U)))));
                    }
                } 
            } 
        } 
        var_12 = ((/* implicit */short) arr_1 [19LL]);
        /* LoopSeq 4 */
        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 3) 
        {
            var_13 &= ((/* implicit */unsigned long long int) arr_3 [i_0]);
            arr_14 [i_0] = ((/* implicit */unsigned long long int) 1169321240U);
            var_14 *= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_9 [i_0] [(short)18] [i_0] [i_4])) ? (arr_9 [18ULL] [(short)8] [(short)8] [i_4]) : (((/* implicit */int) (signed char)-77))))));
            var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min(((unsigned short)422), (((/* implicit */unsigned short) (signed char)-77))))), (((((/* implicit */_Bool) arr_12 [i_0])) ? (var_2) : (((/* implicit */unsigned long long int) arr_5 [4U] [3ULL] [12ULL]))))))) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_6 [21LL])), (((unsigned short) arr_3 [(signed char)20]))))))));
        }
        /* vectorizable */
        for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 1) 
        {
            var_16 = ((/* implicit */short) (signed char)-73);
            var_17 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)97))))) ? (arr_1 [i_0]) : (((((/* implicit */unsigned long long int) arr_4 [i_0] [i_5] [8U] [8U])) / (arr_1 [(signed char)21])))));
        }
        /* vectorizable */
        for (signed char i_6 = 0; i_6 < 22; i_6 += 4) 
        {
            arr_22 [i_0] [(unsigned char)0] = ((/* implicit */_Bool) var_8);
            /* LoopNest 3 */
            for (unsigned short i_7 = 0; i_7 < 22; i_7 += 1) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (unsigned short i_9 = 0; i_9 < 22; i_9 += 2) 
                    {
                        {
                            var_18 ^= ((/* implicit */int) ((((var_5) > (((/* implicit */unsigned int) arr_2 [i_8])))) ? (arr_17 [i_0] [(_Bool)1] [(signed char)19]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-77)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)65102)))))));
                            arr_30 [i_0] [(signed char)9] [i_7] [i_8] [i_9] = ((/* implicit */signed char) ((((/* implicit */int) arr_26 [i_0] [i_6] [(_Bool)1] [15U])) > (((/* implicit */int) arr_18 [i_7] [i_0]))));
                            var_19 = ((/* implicit */_Bool) var_1);
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_10 = 0; i_10 < 22; i_10 += 4) 
        {
            var_20 = ((/* implicit */long long int) min((((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [5ULL] [i_0]))) >= (var_4)))), ((signed char)79)));
            arr_34 [i_0] [i_0] [0LL] = ((/* implicit */unsigned int) min((max((((/* implicit */long long int) 2800673102U)), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_10] [(_Bool)1] [(signed char)7] [i_0] [(_Bool)1] [(_Bool)1]))) : (var_1))))), (((/* implicit */long long int) var_7))));
        }
    }
    var_21 = ((((((/* implicit */_Bool) min((var_5), (var_5)))) ? ((+(4588209948152107810ULL))) : (((var_9) * (var_0))))) - (var_8));
    /* LoopSeq 1 */
    for (unsigned short i_11 = 0; i_11 < 14; i_11 += 1) 
    {
        var_22 = ((/* implicit */unsigned int) ((int) max((arr_35 [i_11]), (((/* implicit */short) var_6)))));
        /* LoopSeq 1 */
        for (short i_12 = 0; i_12 < 14; i_12 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_13 = 2; i_13 < 12; i_13 += 4) 
            {
                for (int i_14 = 0; i_14 < 14; i_14 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_15 = 2; i_15 < 13; i_15 += 4) 
                        {
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_43 [i_13 - 2] [i_13 + 2])), (arr_15 [i_12])))) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) arr_29 [i_11] [i_11] [i_13] [i_14] [i_13] [i_13] [i_13]))));
                            var_24 &= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_7 [(signed char)13] [i_13 + 2] [i_15 - 2] [i_15 - 2])), (var_1)))), ((-(var_9)))));
                        }
                        for (int i_16 = 2; i_16 < 13; i_16 += 4) 
                        {
                            var_25 ^= ((/* implicit */unsigned long long int) var_7);
                            var_26 ^= ((/* implicit */unsigned long long int) var_7);
                            arr_49 [(_Bool)1] [i_12] [6U] [(_Bool)1] [10] = ((/* implicit */unsigned short) (+((-(((/* implicit */int) arr_38 [(_Bool)1] [3LL]))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_17 = 0; i_17 < 14; i_17 += 1) 
                        {
                            arr_52 [1U] [1U] [1U] [1U] [1U] [0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_29 [i_11] [18ULL] [i_12] [10ULL] [i_13 - 2] [i_13] [i_17])) ? (((/* implicit */int) arr_29 [2ULL] [i_12] [i_12] [i_11] [i_17] [i_12] [i_12])) : (((/* implicit */int) arr_29 [(short)14] [(signed char)14] [(short)14] [(unsigned char)12] [i_17] [i_13] [(short)2]))));
                            arr_53 [i_13] [(unsigned short)8] [8U] [i_13] [i_13] = ((/* implicit */unsigned char) (unsigned short)65111);
                            var_27 = ((/* implicit */unsigned char) arr_41 [i_11] [i_13 - 2] [i_13 - 2] [(signed char)10]);
                        }
                        arr_54 [5] [i_12] [i_12] [8U] = ((/* implicit */long long int) ((((/* implicit */_Bool) 311060622U)) ? (11578619188115474624ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65090)))));
                        var_28 = max((((((/* implicit */_Bool) 1923411686U)) ? (((/* implicit */int) arr_18 [i_13] [i_12])) : (((/* implicit */int) arr_18 [i_12] [i_13])))), (((/* implicit */int) arr_18 [14U] [i_12])));
                        arr_55 [i_14] [(unsigned short)10] [(unsigned short)10] [(_Bool)1] = ((/* implicit */unsigned long long int) var_1);
                    }
                } 
            } 
            arr_56 [2ULL] = ((/* implicit */unsigned char) arr_44 [i_11] [i_11] [i_11] [i_12] [i_12] [i_11]);
        }
    }
    var_29 = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65107))) : (var_2));
}
