/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191187
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
    var_19 = (signed char)14;
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        var_20 ^= arr_1 [i_0 + 3] [i_0];
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (long long int i_2 = 3; i_2 < 10; i_2 += 4) 
            {
                for (unsigned int i_3 = 2; i_3 < 11; i_3 += 1) 
                {
                    {
                        var_21 = ((/* implicit */signed char) max((var_21), ((signed char)8)));
                        arr_12 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) arr_4 [i_3] [i_1]);
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */unsigned char) arr_5 [i_0 + 4] [i_0 - 2] [i_0 - 3]);
        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_0] [i_0 + 1])) ? ((~(var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 + 4] [i_0] [i_0])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0 + 2])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (signed char)14))))) ? (((/* implicit */long long int) var_4)) : (((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0 - 1] [i_0] [i_0] [i_0]))) | (arr_11 [i_0 - 3] [i_0] [i_0 - 3] [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_10 [i_0 + 3] [i_0] [i_0 - 1] [i_0 - 3] [i_0 + 2]), (arr_10 [i_0 + 1] [i_0 - 2] [i_0 + 1] [i_0 - 3] [i_0 + 1]))))))))));
    }
    for (unsigned int i_4 = 0; i_4 < 14; i_4 += 1) 
    {
        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) (unsigned char)7))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_4] [i_4])) ? (((/* implicit */int) (short)-24394)) : (((/* implicit */int) arr_15 [i_4]))))), (((((/* implicit */_Bool) arr_15 [i_4])) ? (11449058089182699174ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_4]))))))) : (((/* implicit */unsigned long long int) (((((-(arr_13 [i_4] [8LL]))) + (2147483647))) << ((((((-(arr_13 [i_4] [i_4]))) + (601478364))) - (21)))))))))));
        /* LoopSeq 1 */
        for (short i_5 = 1; i_5 < 13; i_5 += 3) 
        {
            /* LoopNest 3 */
            for (signed char i_6 = 2; i_6 < 11; i_6 += 1) 
            {
                for (unsigned char i_7 = 0; i_7 < 14; i_7 += 1) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */int) ((((/* implicit */_Bool) (short)9826)) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_4] [(signed char)10]))) - (arr_23 [i_4] [i_5] [i_6] [i_7] [i_8] [i_8]))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)10)), (arr_19 [i_6] [i_6] [i_7] [i_8])))) ? (max((((/* implicit */unsigned int) (_Bool)1)), (arr_27 [i_4] [i_4] [i_6] [i_7] [i_8]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_14 [i_4] [i_5 + 1]))))))));
                            arr_28 [i_4] [i_4] [i_6] [i_6 + 1] [i_6] [i_4] = ((/* implicit */long long int) ((_Bool) min((arr_13 [i_5 + 1] [i_5 - 1]), (arr_13 [i_5 + 1] [i_5 + 1]))));
                            arr_29 [i_6] [i_5] [7LL] [i_5 + 1] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned short)715)) ? (((/* implicit */int) (signed char)8)) : (((/* implicit */int) (unsigned char)243))))));
                            var_26 = ((/* implicit */_Bool) arr_21 [i_4] [i_4] [i_6] [i_4] [i_4] [6ULL]);
                        }
                    } 
                } 
            } 
            arr_30 [i_4] [i_4] [i_5] = ((/* implicit */short) (-(((/* implicit */int) (short)3938))));
            var_27 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_27 [i_4] [i_5] [i_5 + 1] [i_4] [i_4])) ? (((/* implicit */int) arr_21 [i_4] [(_Bool)1] [4ULL] [i_5 - 1] [(_Bool)1] [i_5])) : (((/* implicit */int) (!((_Bool)0)))))), (((/* implicit */int) (short)-11551))));
        }
    }
}
