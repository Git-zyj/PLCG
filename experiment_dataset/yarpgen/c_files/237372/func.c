/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237372
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            {
                arr_5 [(short)18] [(unsigned char)8] = ((/* implicit */int) ((((/* implicit */int) arr_4 [i_0])) >= ((~(((/* implicit */int) arr_0 [i_1 + 1] [(signed char)1]))))));
                arr_6 [(unsigned short)4] [(unsigned char)0] [i_1 + 1] = max((((((/* implicit */int) arr_1 [(signed char)10] [i_1 - 1])) | (((/* implicit */int) arr_1 [(signed char)18] [i_1 - 1])))), (((/* implicit */int) max((arr_1 [(unsigned short)4] [i_1 - 1]), (arr_1 [(short)6] [i_1 - 1])))));
                arr_7 [(unsigned char)18] [i_1 + 2] [(unsigned char)18] = ((/* implicit */short) var_5);
                arr_8 [2LL] [2LL] = ((/* implicit */signed char) ((((/* implicit */int) max((arr_0 [i_1 - 1] [i_1 - 1]), (arr_0 [i_1 - 1] [i_1 - 1])))) ^ (((((/* implicit */int) min((arr_0 [13] [i_1 - 1]), (arr_4 [i_1])))) | (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0])) >= (((/* implicit */int) arr_2 [i_0])))))))));
                arr_9 [8ULL] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) arr_1 [2] [i_1 - 1])) < (((/* implicit */int) arr_1 [12] [i_1 + 1])))))));
            }
        } 
    } 
    var_19 = ((/* implicit */short) max((max((((var_7) << (((/* implicit */int) (_Bool)1)))), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_16))))))), (var_12)));
}
