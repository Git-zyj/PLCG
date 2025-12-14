/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246545
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
    var_17 = ((/* implicit */long long int) ((((_Bool) ((((/* implicit */int) var_14)) + (((/* implicit */int) var_12))))) ? (((((_Bool) var_10)) ? (((/* implicit */int) (signed char)109)) : (((((/* implicit */_Bool) (unsigned short)8843)) ? (((/* implicit */int) (unsigned short)61488)) : (((/* implicit */int) var_6)))))) : (max((((/* implicit */int) var_12)), ((-(((/* implicit */int) (unsigned short)61488))))))));
    var_18 = ((/* implicit */int) (~(((9223372036854775794LL) - (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
    var_19 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (signed char)-105)) : (((/* implicit */int) (short)32765)))) : (((/* implicit */int) var_15))))));
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 12; i_0 += 2) /* same iter space */
    {
        arr_3 [0] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_0 [i_0 - 1])) == (((/* implicit */int) arr_0 [i_0 + 1])))) ? (((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 + 1])))) : (((/* implicit */int) arr_0 [i_0 + 1]))));
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_2 [i_0 - 1])), (arr_0 [i_0 - 1])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-14))))) ? ((-(arr_1 [(_Bool)1]))) : (((/* implicit */int) (unsigned short)4048))))) : (min((((/* implicit */long long int) arr_0 [i_0 + 1])), (((long long int) (unsigned short)30293))))));
    }
    for (short i_1 = 1; i_1 < 12; i_1 += 2) /* same iter space */
    {
        arr_6 [(_Bool)1] [i_1] = ((/* implicit */_Bool) ((unsigned long long int) (~(((/* implicit */int) min(((unsigned short)35245), (((/* implicit */unsigned short) (signed char)-14))))))));
        var_21 -= arr_4 [i_1 + 1];
    }
    for (short i_2 = 1; i_2 < 12; i_2 += 2) /* same iter space */
    {
        arr_10 [i_2] = ((/* implicit */short) arr_5 [(signed char)3] [i_2]);
        arr_11 [i_2] = ((/* implicit */short) arr_2 [i_2 + 1]);
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) min((((/* implicit */unsigned short) var_12)), ((unsigned short)61488))))))) ? (((/* implicit */int) (signed char)13)) : (max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_4 [i_2])))), (((/* implicit */int) (signed char)-109))))));
        /* LoopSeq 1 */
        for (int i_3 = 0; i_3 < 13; i_3 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_4 = 3; i_4 < 9; i_4 += 3) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            arr_22 [i_6] [2] [i_4] [i_5] [i_6] = ((/* implicit */int) arr_4 [i_2]);
                            arr_23 [i_6] [i_3] [i_3] [i_3] [7LL] [i_3] = ((/* implicit */short) (((+(((/* implicit */int) (signed char)18)))) * ((-(((/* implicit */int) arr_4 [i_6 - 1]))))));
                            arr_24 [i_2] [i_3] [i_4] [i_6] [i_6] [i_6] = max((((var_7) - (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_4 + 1]))))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)35242)) | (((/* implicit */int) (short)-32766))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_7 = 0; i_7 < 13; i_7 += 2) 
                        {
                            arr_27 [i_2 - 1] [i_3] [i_4 + 3] [i_5] [i_7] = ((/* implicit */signed char) arr_25 [i_2] [i_2] [i_2 + 1] [3LL] [i_2]);
                            arr_28 [i_2 - 1] [i_3] [i_4] [(_Bool)1] [i_5] [i_3] [i_7] = ((/* implicit */unsigned short) (+(arr_14 [i_3] [i_4 + 2] [i_5])));
                        }
                        var_23 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) min((arr_26 [i_2] [i_2] [(signed char)0]), (var_15)))) ? (max((var_1), (((/* implicit */long long int) (signed char)-45)))) : (((/* implicit */long long int) ((/* implicit */int) (short)-21569))))), (((/* implicit */long long int) ((((/* implicit */int) ((_Bool) arr_17 [i_2] [i_4] [i_3] [i_2]))) & (((/* implicit */int) min((arr_25 [5ULL] [i_3] [i_4 + 2] [8LL] [i_5]), (arr_25 [i_2] [i_3] [i_3] [i_5] [i_3])))))))));
                        var_24 = ((/* implicit */long long int) (_Bool)1);
                        var_25 ^= ((/* implicit */long long int) (signed char)-33);
                    }
                } 
            } 
            arr_29 [i_3] = ((/* implicit */_Bool) (+(min((min((arr_21 [(short)7] [i_3] [(unsigned short)9] [i_3] [i_3]), (((/* implicit */long long int) arr_25 [i_2 + 1] [i_3] [i_3] [i_3] [i_2])))), (((/* implicit */long long int) arr_0 [i_2 - 1]))))));
            arr_30 [(unsigned short)10] = ((/* implicit */unsigned char) ((arr_13 [i_2 + 1] [i_2 + 1]) ? (((/* implicit */int) ((((/* implicit */int) arr_13 [i_2 + 1] [i_2 + 1])) <= (((((/* implicit */_Bool) arr_7 [i_2 - 1])) ? (((/* implicit */int) (unsigned char)124)) : (((/* implicit */int) (signed char)13))))))) : ((~(((/* implicit */int) max((((/* implicit */short) (_Bool)0)), ((short)32765))))))));
        }
    }
}
