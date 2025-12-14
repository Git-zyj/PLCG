/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33404
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
    for (short i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        arr_3 [5U] [5U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0 - 1]))) : (((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0])) ? (arr_2 [i_0]) : (max((((/* implicit */long long int) var_19)), (arr_2 [(unsigned char)10])))))));
        /* LoopSeq 4 */
        for (unsigned int i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            var_20 |= ((/* implicit */unsigned short) ((((arr_2 [i_1 + 1]) == (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1 + 1] [(unsigned short)4]))))) ? (min((var_13), (((/* implicit */long long int) arr_5 [i_0 - 1] [i_0 - 2])))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((arr_1 [5LL] [(unsigned short)9]) < (arr_1 [i_0] [i_0]))))) == (min((arr_4 [2LL]), (((/* implicit */long long int) var_2))))))))));
            var_21 -= ((/* implicit */signed char) max((((/* implicit */long long int) min((arr_0 [i_0 - 2] [i_0 - 2]), (arr_0 [i_0 - 2] [i_0 - 2])))), (((((/* implicit */_Bool) arr_5 [i_0 - 2] [i_0 - 2])) ? (arr_2 [i_0 - 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0 - 2] [i_0 - 2])))))));
        }
        for (long long int i_2 = 1; i_2 < 9; i_2 += 2) /* same iter space */
        {
            arr_8 [i_0 + 1] [i_2] = ((/* implicit */unsigned short) ((signed char) min((((/* implicit */long long int) (-(((/* implicit */int) var_2))))), (arr_6 [i_0] [i_0] [i_2 + 1]))));
            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0 - 2] [i_2 + 1])) ? (((arr_2 [i_0 + 1]) & (arr_2 [i_2 + 2]))) : (min((((/* implicit */long long int) ((int) var_5))), (((arr_7 [i_2]) ^ (arr_4 [i_0])))))));
            /* LoopSeq 1 */
            for (short i_3 = 0; i_3 < 11; i_3 += 3) 
            {
                arr_12 [(_Bool)1] [(unsigned char)5] [i_2] [i_0 + 1] = ((/* implicit */unsigned short) (+(min((arr_2 [3LL]), (arr_2 [i_2 + 1])))));
                var_23 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (min((((((/* implicit */_Bool) arr_10 [i_0] [i_2] [i_0] [i_2])) ? (arr_6 [5] [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2] [i_3]))) : (var_3))))) : (min((var_12), (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_6 [i_0] [i_2 + 1] [i_3]) : (arr_7 [i_0])))))));
                arr_13 [3U] [i_2] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2])) ? (var_1) : (var_13)))) ? (((((/* implicit */int) arr_10 [i_0] [6LL] [i_2] [i_3])) * (((/* implicit */int) arr_11 [i_0 - 2] [i_2 + 1] [i_2] [i_0])))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_10 [i_0] [i_0] [i_2] [i_0])), (arr_11 [i_0] [i_0] [i_2] [i_2]))))))), (min((((arr_2 [i_0]) / (((/* implicit */long long int) ((/* implicit */int) var_9))))), (((arr_6 [i_3] [(unsigned short)6] [(unsigned short)6]) / (arr_6 [i_2] [i_2] [1LL])))))));
            }
        }
        for (long long int i_4 = 1; i_4 < 9; i_4 += 2) /* same iter space */
        {
            arr_16 [i_0 + 1] [i_4] = ((/* implicit */unsigned short) var_19);
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 3) 
            {
                for (unsigned short i_6 = 2; i_6 < 9; i_6 += 4) 
                {
                    {
                        arr_21 [i_4] [i_4 + 1] [i_5] [(signed char)5] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 181731662U)) ? (14ULL) : (((/* implicit */unsigned long long int) arr_7 [i_6 - 2]))))) ? (((((/* implicit */_Bool) arr_7 [i_6])) ? (var_14) : (arr_7 [i_4 + 1]))) : ((+(arr_7 [i_0 + 1]))));
                        var_24 += ((/* implicit */long long int) arr_15 [(unsigned short)6] [(unsigned short)6]);
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned short i_7 = 1; i_7 < 9; i_7 += 2) 
            {
                for (unsigned char i_8 = 0; i_8 < 11; i_8 += 4) 
                {
                    for (unsigned char i_9 = 1; i_9 < 9; i_9 += 1) 
                    {
                        {
                            arr_31 [i_7] [i_4] [i_0] [i_8] [i_7] = ((/* implicit */unsigned short) arr_9 [i_0]);
                            arr_32 [i_4] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) arr_15 [i_0] [i_4])))) ? (((((/* implicit */_Bool) var_16)) ? (var_5) : (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_0] [i_7] [i_7] [i_8])))))) && (((/* implicit */_Bool) (((~(var_3))) & (((var_12) ^ (arr_9 [i_0]))))))));
                        }
                    } 
                } 
            } 
        }
        for (long long int i_10 = 1; i_10 < 9; i_10 += 2) /* same iter space */
        {
            arr_35 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_10 + 1] [i_0 - 2] [i_0] [(unsigned char)6])) ? (((/* implicit */int) arr_11 [(_Bool)1] [i_0 - 2] [i_0] [i_0])) : (((/* implicit */int) arr_11 [(unsigned short)10] [i_0 - 1] [i_0] [i_0 - 1])))))));
            arr_36 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((arr_24 [i_0] [(unsigned short)6] [i_0] [i_0]) ? (min((arr_7 [i_0 - 1]), (arr_7 [i_0 - 1]))) : (max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_1))))), ((+(var_10)))))));
        }
    }
    for (unsigned char i_11 = 2; i_11 < 18; i_11 += 3) 
    {
        arr_39 [i_11] [i_11 - 2] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_37 [i_11 + 1])) / (((arr_38 [i_11] [(unsigned short)12]) ? (((/* implicit */int) arr_37 [(signed char)14])) : (((/* implicit */int) arr_37 [(unsigned char)16]))))))) ? (((((long long int) var_18)) * (((((/* implicit */_Bool) arr_37 [15LL])) ? (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_11 - 1] [i_11]))) : (var_4))))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_38 [i_11] [9LL])) / (((/* implicit */int) arr_37 [i_11]))))) ? (min((((/* implicit */long long int) var_6)), (var_3))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_37 [i_11]), (arr_37 [i_11 + 1]))))))));
        arr_40 [14] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_37 [i_11 - 1])) ^ ((~(((arr_38 [i_11] [i_11 + 1]) ? (((/* implicit */int) arr_37 [i_11])) : (((/* implicit */int) arr_37 [10U]))))))));
    }
    var_25 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((var_15) ^ (((/* implicit */int) var_9)))) : (((/* implicit */int) var_18))))) ? (min((max((var_4), (((/* implicit */long long int) var_15)))), (((/* implicit */long long int) (-(((/* implicit */int) var_18))))))) : ((-(((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : (var_13))))));
}
