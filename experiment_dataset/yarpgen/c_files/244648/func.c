/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244648
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
    var_17 = (unsigned short)9486;
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) == (arr_2 [1])))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_1)) : (arr_2 [(unsigned short)18])))))) % (min((((/* implicit */unsigned long long int) arr_0 [i_0])), (arr_1 [i_0])))));
        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) min((max((((/* implicit */long long int) arr_2 [i_0])), (2287828610704211968LL))), (((/* implicit */long long int) min((arr_2 [i_0]), (arr_2 [i_0])))))))));
    }
    for (unsigned char i_1 = 4; i_1 < 14; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_2 = 1; i_2 < 12; i_2 += 3) 
        {
            var_20 = ((/* implicit */unsigned long long int) (unsigned short)9486);
            var_21 *= ((/* implicit */unsigned char) min((max((((/* implicit */unsigned long long int) (unsigned char)9)), (arr_4 [i_1 - 4] [i_1 - 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)30)) ? (((/* implicit */int) (unsigned char)30)) : (((/* implicit */int) (unsigned char)28))))) ? (arr_8 [i_2 + 2]) : (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) arr_2 [i_2])))))))));
            arr_10 [i_2] [i_2] &= ((/* implicit */unsigned char) arr_6 [0ULL] [i_2]);
            var_22 &= ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (min((max((((/* implicit */unsigned long long int) arr_7 [i_1] [i_2] [i_2])), (arr_1 [18ULL]))), (((/* implicit */unsigned long long int) arr_9 [i_2] [i_2])))) : (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7))))), (arr_1 [i_2])))));
            arr_11 [i_1] [i_2] = ((/* implicit */unsigned short) 4398046511103LL);
        }
        arr_12 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((-(arr_2 [i_1]))), (arr_2 [i_1])))) ? (min((min((((/* implicit */unsigned long long int) arr_3 [(unsigned short)14])), (9209991567096861727ULL))), (((/* implicit */unsigned long long int) -2287828610704211968LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(_Bool)1])))));
        arr_13 [i_1] &= (unsigned char)29;
        /* LoopNest 2 */
        for (long long int i_3 = 2; i_3 < 13; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
            {
                {
                    arr_19 [i_1] [i_3] = ((/* implicit */short) var_8);
                    arr_20 [i_3] &= ((/* implicit */long long int) arr_5 [i_1] [i_1]);
                }
            } 
        } 
        var_23 ^= ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) arr_6 [i_1 + 1] [i_1 - 4])) ? (arr_6 [i_1 + 1] [i_1 - 4]) : (arr_6 [i_1 + 1] [i_1 - 4]))));
    }
    for (int i_5 = 1; i_5 < 20; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (unsigned short i_7 = 2; i_7 < 20; i_7 += 2) 
            {
                {
                    var_24 |= ((arr_21 [i_5] [i_6]) >> (((((/* implicit */int) (signed char)(-127 - 1))) + (149))));
                    var_25 ^= ((/* implicit */long long int) var_11);
                    arr_27 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) arr_2 [i_6]);
                }
            } 
        } 
        arr_28 [12ULL] |= ((/* implicit */unsigned short) arr_21 [i_5] [i_5]);
        /* LoopNest 3 */
        for (long long int i_8 = 2; i_8 < 20; i_8 += 3) 
        {
            for (short i_9 = 0; i_9 < 22; i_9 += 2) 
            {
                for (short i_10 = 0; i_10 < 22; i_10 += 2) 
                {
                    {
                        var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) min((((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) ^ (29360128ULL)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_5])) ? (9236752506612689868ULL) : (9209991567096861727ULL)))) ? (((/* implicit */int) arr_3 [i_9])) : (((/* implicit */int) max(((unsigned char)28), (((/* implicit */unsigned char) arr_3 [i_5])))))))))))));
                        arr_39 [i_5] [i_5] [(unsigned short)0] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)247))) && (((/* implicit */_Bool) max((((/* implicit */long long int) min((arr_2 [i_9]), (((/* implicit */int) (unsigned char)36))))), (min((arr_38 [20]), (((/* implicit */long long int) arr_35 [i_5])))))))));
                        arr_40 [i_5] [i_8] [9LL] [i_5] [15ULL] = ((/* implicit */int) ((((/* implicit */_Bool) arr_36 [i_5 + 1] [i_5] [i_5] [i_8 - 1])) && ((((-9223372036854775807LL - 1LL)) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)247)))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_11 = 1; i_11 < 15; i_11 += 3) 
    {
        arr_43 [i_11] [i_11] = ((/* implicit */unsigned short) max((min((arr_21 [i_11] [i_11]), (max((((/* implicit */long long int) arr_31 [i_11] [i_11] [i_11] [i_11])), (var_2))))), (((/* implicit */long long int) var_8))));
        arr_44 [i_11] = ((/* implicit */long long int) var_0);
        /* LoopNest 3 */
        for (unsigned int i_12 = 4; i_12 < 18; i_12 += 3) 
        {
            for (int i_13 = 0; i_13 < 19; i_13 += 1) 
            {
                for (int i_14 = 3; i_14 < 18; i_14 += 2) 
                {
                    {
                        arr_52 [i_11] [i_11] [i_13] [i_11] = ((/* implicit */unsigned long long int) arr_38 [16ULL]);
                        arr_53 [14ULL] [i_12] [i_14] &= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_50 [i_12] [i_12] [i_12 + 1])) ? (arr_50 [i_12] [i_12] [i_12 - 1]) : (((/* implicit */int) var_15)))), (arr_2 [(_Bool)1])));
                    }
                } 
            } 
        } 
    }
}
