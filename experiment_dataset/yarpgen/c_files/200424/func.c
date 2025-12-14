/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200424
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 16; i_1 += 1) 
        {
            {
                arr_6 [(unsigned char)4] [(unsigned char)4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_1 + 3])) ? (14707497673408871825ULL) : (var_14)))) ? (((((/* implicit */_Bool) arr_1 [i_1 - 3] [i_1 - 3])) ? (arr_1 [i_1] [i_0]) : (((/* implicit */int) var_17)))) : (((/* implicit */int) min(((unsigned char)240), ((unsigned char)10))))))) && (((/* implicit */_Bool) ((unsigned char) ((unsigned char) (_Bool)0))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        {
                            var_20 += ((/* implicit */unsigned char) (((+(((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_3])))) & (((((/* implicit */int) arr_8 [i_0] [i_0] [i_2] [i_3])) | (((/* implicit */int) arr_8 [i_3] [i_1] [i_2] [i_3]))))));
                            /* LoopSeq 1 */
                            for (unsigned int i_4 = 0; i_4 < 19; i_4 += 2) 
                            {
                                var_21 += ((/* implicit */unsigned char) min((max((((/* implicit */unsigned long long int) ((2147483647) < (arr_7 [i_2] [i_3] [i_2] [(_Bool)1])))), (max((var_2), (arr_5 [i_0] [i_1] [i_4]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_15), (((/* implicit */unsigned int) arr_13 [i_0] [i_1] [i_2] [i_2] [i_1] [i_4] [i_2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_3] [(_Bool)1] [i_2] [i_2]))) : (((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_1] [i_2] [i_2] [18ULL] [i_4])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))))))))));
                                var_22 = ((/* implicit */signed char) (-(var_2)));
                            }
                            /* LoopSeq 1 */
                            for (unsigned char i_5 = 0; i_5 < 19; i_5 += 3) 
                            {
                                var_23 = ((/* implicit */_Bool) (unsigned char)222);
                                var_24 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [(_Bool)1] [i_2] [i_2] [i_2] [(signed char)18])) ? (var_0) : (((/* implicit */unsigned int) 2147483629))))) ? (var_2) : ((+(5990740447404560404ULL)))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (var_5) : (((max((1815865788249480051ULL), (((/* implicit */unsigned long long int) (unsigned short)57219)))) ^ (max((var_10), (((/* implicit */unsigned long long int) (signed char)-120))))))));
    var_26 = ((/* implicit */int) var_18);
    /* LoopNest 2 */
    for (short i_6 = 1; i_6 < 10; i_6 += 1) 
    {
        for (unsigned long long int i_7 = 2; i_7 < 10; i_7 += 2) 
        {
            {
                var_27 = ((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) var_18))))), (max((((/* implicit */short) arr_8 [i_6 - 1] [i_6 + 1] [i_7 - 2] [i_7 - 2])), (arr_18 [i_6 - 1] [i_7 + 1])))));
                /* LoopNest 3 */
                for (unsigned long long int i_8 = 3; i_8 < 8; i_8 += 2) 
                {
                    for (long long int i_9 = 1; i_9 < 9; i_9 += 1) 
                    {
                        for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_7] [i_8 + 2] [i_9 + 1])) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_10] [i_9] [i_8 + 2] [i_7 - 2] [i_6])))))) && (((/* implicit */_Bool) 1815865788249480049ULL))));
                                var_29 += ((/* implicit */signed char) ((((/* implicit */int) arr_22 [i_7] [i_7] [i_7] [i_7])) / (((/* implicit */int) var_13))));
                                var_30 += ((/* implicit */signed char) ((((/* implicit */int) arr_31 [10] [i_7] [i_9] [i_6 - 1] [i_7] [i_6 - 1])) > (((max(((_Bool)1), ((_Bool)1))) ? (((((/* implicit */int) arr_25 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_8 - 1] [i_9 + 2] [i_10])) ^ (((/* implicit */int) var_11)))) : (((((/* implicit */_Bool) arr_9 [i_7])) ? (arr_7 [i_6] [i_6] [i_6 + 1] [i_6 - 1]) : (((/* implicit */int) arr_10 [i_7 - 1] [i_8] [i_9] [i_10]))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
