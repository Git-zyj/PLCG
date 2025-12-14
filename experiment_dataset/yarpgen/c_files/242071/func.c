/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242071
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
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (signed char i_3 = 1; i_3 < 9; i_3 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_3 - 1] [i_3 + 1] [i_3] [i_3 - 1])) ? (((/* implicit */int) max((arr_8 [i_0] [i_3 - 1] [i_2] [i_3]), (arr_8 [i_3 - 1] [i_3] [i_3 + 1] [i_3])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_3 - 1] [9LL] [i_3])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) -6134335522762305317LL)) : (var_17)))))))));
                            var_21 = ((/* implicit */long long int) ((unsigned long long int) arr_0 [i_3 - 1]));
                            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_5 [7LL] [i_3 + 1] [i_3 + 1]))) ? (min((((((/* implicit */_Bool) arr_0 [3ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) : (var_17))), (((/* implicit */unsigned long long int) max((((/* implicit */int) var_12)), (var_6)))))) : (((/* implicit */unsigned long long int) ((int) var_9)))));
                            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) max((arr_5 [i_3] [2LL] [8ULL]), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_0])))))) ? (((/* implicit */unsigned long long int) 48LL)) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) arr_6 [(unsigned short)2])) : (min((arr_5 [i_0] [(unsigned char)8] [i_2]), (arr_5 [(signed char)6] [i_1] [i_2])))))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */short) min((min((min((((/* implicit */int) var_2)), (-104031066))), (((/* implicit */int) (signed char)-75)))), (((/* implicit */int) arr_9 [i_0] [i_1] [(unsigned char)0]))));
                /* LoopSeq 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((((/* implicit */int) arr_9 [(unsigned char)0] [i_1] [i_0])) | (((/* implicit */int) var_7)))))));
                    arr_13 [i_1] [i_1] [(_Bool)1] [i_1] = ((signed char) min((arr_8 [i_4] [i_1] [i_0] [i_0]), (arr_8 [i_4] [(_Bool)1] [i_0] [i_0])));
                }
                /* vectorizable */
                for (unsigned long long int i_5 = 3; i_5 < 8; i_5 += 3) 
                {
                    var_26 = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_12 [(signed char)1] [(signed char)1] [i_0])) ? (((/* implicit */long long int) arr_4 [i_0] [0LL] [i_5])) : (6134335522762305316LL)))));
                    var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? ((-(((/* implicit */int) arr_7 [(signed char)8] [(signed char)8] [(signed char)8] [(signed char)4])))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (signed char)18)) : (((/* implicit */int) arr_0 [i_1]))))));
                }
            }
        } 
    } 
    var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) min((((/* implicit */long long int) var_6)), (max((var_5), (((/* implicit */long long int) var_14)))))))));
}
