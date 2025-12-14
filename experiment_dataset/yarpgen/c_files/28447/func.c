/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28447
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-52)) ? (((/* implicit */int) (unsigned short)61098)) : (((/* implicit */int) var_11))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) arr_1 [i_0]);
        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) arr_1 [i_0]))));
    }
    for (long long int i_1 = 1; i_1 < 8; i_1 += 3) 
    {
        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (-((+(((/* implicit */int) arr_3 [i_1]))))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [13])) ? (((/* implicit */int) arr_5 [i_1 - 1])) : (((/* implicit */int) arr_6 [i_1 + 2]))))), (((((/* implicit */_Bool) arr_3 [i_1 + 1])) ? (((/* implicit */unsigned long long int) arr_2 [i_1 - 1])) : (arr_1 [i_1]))))))))));
        var_21 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_1])) != (((/* implicit */int) arr_6 [i_1])))))) >= (max((arr_1 [i_1]), (((/* implicit */unsigned long long int) arr_6 [i_1])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_1 [i_1 + 2]) : (arr_1 [i_1])))) ? (((/* implicit */unsigned int) ((arr_6 [i_1]) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_5 [i_1]))))) : (arr_2 [i_1])))) : (((arr_1 [i_1]) << (((/* implicit */int) ((arr_2 [(short)4]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))))))))));
        arr_7 [i_1] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9346))) >= (16379205236212223855ULL))) ? (arr_2 [(signed char)15]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)32665)) != (((/* implicit */int) (signed char)-94))))))));
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            arr_10 [i_1] = ((min((((/* implicit */unsigned long long int) (signed char)-26)), (2067538837497327761ULL))) / (((((arr_1 [i_2]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1]))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) arr_6 [i_1 + 2])), (arr_5 [i_1]))))))));
            var_22 = ((/* implicit */signed char) (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) 10895709876665633210ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)41624))) : (2467873652345003506ULL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-49)) ? (((/* implicit */int) (signed char)115)) : (((/* implicit */int) (unsigned short)23911)))))))));
            /* LoopNest 2 */
            for (unsigned char i_3 = 0; i_3 < 10; i_3 += 3) 
            {
                for (signed char i_4 = 0; i_4 < 10; i_4 += 4) 
                {
                    {
                        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) arr_14 [i_4]))));
                        var_24 = ((/* implicit */long long int) arr_6 [i_2]);
                        var_25 = ((/* implicit */long long int) arr_11 [(unsigned char)4] [(unsigned char)4] [i_4]);
                    }
                } 
            } 
            var_26 = ((/* implicit */unsigned long long int) min((var_26), (min((((((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_1]))))) ? (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [0]))) : (arr_1 [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_12 [i_2] [i_1])) == (arr_11 [i_1] [i_1] [i_2]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_1])) ? (((/* implicit */int) arr_13 [i_1 + 1])) : (((/* implicit */int) arr_5 [i_2]))))) ? (((((/* implicit */int) arr_0 [(short)0])) + (((/* implicit */int) arr_0 [20ULL])))) : (((((/* implicit */int) arr_13 [i_2])) & (((/* implicit */int) arr_9 [i_1])))))))))));
            arr_15 [i_1] = ((/* implicit */signed char) ((arr_14 [i_1]) | (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)0)))))));
        }
    }
    var_27 = ((/* implicit */unsigned short) ((var_5) >= (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 12424167059635745432ULL)) ? (10895709876665633224ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))) >= (((/* implicit */unsigned long long int) min((-1795731091), (((/* implicit */int) (signed char)0)))))))))));
}
