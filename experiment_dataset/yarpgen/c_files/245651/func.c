/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245651
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned char) min((((((/* implicit */unsigned long long int) (~(9223372036854775807LL)))) % (((arr_1 [i_0]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)10484))))))), (((/* implicit */unsigned long long int) ((((arr_1 [i_0]) <= (arr_1 [i_0]))) && (((/* implicit */_Bool) arr_0 [i_0])))))));
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */unsigned long long int) max((arr_0 [3LL]), (((/* implicit */unsigned int) (short)-10485)))))))) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (short)-10491)) : (1586420102)))))) : (((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)115))))) % (((/* implicit */unsigned long long int) max((3416090757U), (arr_0 [i_0]))))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            var_22 = arr_3 [i_0] [i_1] [8];
            var_23 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)157)), (arr_3 [i_0] [(_Bool)1] [i_1 + 1])))) % (min((max((arr_0 [i_1 + 2]), (((/* implicit */unsigned int) (unsigned char)115)))), (((/* implicit */unsigned int) (_Bool)1))))));
        }
        var_24 |= ((/* implicit */short) max((((/* implicit */long long int) (unsigned char)255)), (((((/* implicit */_Bool) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) (unsigned char)187))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_6)) & (((/* implicit */int) (unsigned char)141))))) : (((-5LL) | (((/* implicit */long long int) arr_0 [i_0]))))))));
        arr_4 [(unsigned short)2] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (short)30346))))), (min((arr_1 [i_0]), (((/* implicit */unsigned long long int) (_Bool)0))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [(signed char)7])) && (((/* implicit */_Bool) ((var_11) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(short)7]))) : (arr_1 [i_0]))))))) : ((~(((/* implicit */int) ((((/* implicit */int) (unsigned char)167)) <= (((/* implicit */int) (signed char)63)))))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_3 = 3; i_3 < 9; i_3 += 4) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_25 = min((((((/* implicit */_Bool) 733641847U)) ? (((/* implicit */int) ((short) arr_0 [i_2]))) : ((~(((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) arr_10 [i_4] [i_5] [i_2])));
                        arr_18 [i_5] = ((/* implicit */long long int) (unsigned char)68);
                        var_26 = ((/* implicit */_Bool) ((max((((/* implicit */long long int) var_19)), (((((/* implicit */_Bool) (short)7168)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [8] [i_3 - 2] [7LL]))) : (arr_11 [(_Bool)1] [(_Bool)1] [(_Bool)1]))))) * (max((min((arr_11 [i_3] [i_4] [i_5]), (((/* implicit */long long int) arr_12 [(unsigned short)12] [i_2])))), (((/* implicit */long long int) arr_6 [8ULL] [(unsigned char)11]))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_6 = 0; i_6 < 13; i_6 += 2) 
        {
            for (int i_7 = 0; i_7 < 13; i_7 += 1) 
            {
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                {
                    {
                        arr_26 [i_8] [i_7] [i_2] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)125)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)210))) : (699105065069624316LL)));
                        arr_27 [i_2] [i_2] [i_6] [i_8] [i_8] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */int) (((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_20 [i_7] [(unsigned short)12] [i_2]))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))) % (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_6 [i_2] [10U])) <= (((/* implicit */int) arr_17 [i_6] [i_6] [i_6] [i_6])))))) <= (arr_0 [i_8 - 1]))))));
                        arr_28 [i_8] [i_8] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) arr_22 [3] [i_6] [i_7] [i_8])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_5)))))))), (((((/* implicit */_Bool) ((arr_11 [i_7] [i_6] [i_2]) - (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_6] [(_Bool)1])))))) ? (((((/* implicit */_Bool) (signed char)2)) ? (4216745500U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)2047))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_6] [i_6] [i_6] [12ULL])))))));
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */unsigned char) (signed char)7);
    }
    var_28 = ((/* implicit */signed char) var_10);
    var_29 = max(((unsigned char)15), (((/* implicit */unsigned char) (_Bool)1)));
    var_30 = ((/* implicit */unsigned char) max((2718679588U), (((/* implicit */unsigned int) (_Bool)0))));
}
