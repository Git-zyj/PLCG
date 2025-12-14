/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224398
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
    var_16 = ((/* implicit */unsigned int) var_13);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (+(min((((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0])) % (((/* implicit */int) arr_1 [i_0]))))), (min((((/* implicit */unsigned int) var_9)), (var_4)))))));
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_0] [i_0] = ((/* implicit */signed char) min((max((arr_4 [i_0] [i_1] [i_1]), (arr_4 [i_0] [i_1] [1U]))), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) max((arr_0 [i_0] [i_1]), (arr_0 [i_0] [i_1])))) != (arr_3 [i_1]))))));
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 19; i_3 += 4) 
                {
                    {
                        arr_11 [i_3] [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) (-(arr_0 [i_1] [i_2])))) : ((-(max((arr_3 [i_1]), (arr_9 [i_0] [i_1] [i_2] [i_3])))))));
                        arr_12 [i_2] = ((((/* implicit */unsigned int) max((max((582259394), (((/* implicit */int) (unsigned char)232)))), (min((var_13), (((/* implicit */int) arr_7 [i_0] [i_2] [i_0]))))))) <= (((((/* implicit */_Bool) min((arr_6 [i_0] [i_0]), (((/* implicit */unsigned int) arr_7 [i_3] [i_1] [i_0]))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_3] [(_Bool)1] [(signed char)7]))) & (var_15))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [10] [i_2] [i_3]))))));
                        arr_13 [i_1] [i_3] = ((/* implicit */unsigned char) arr_8 [i_0] [i_2]);
                        arr_14 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_3] [i_2] [i_1] [i_0])) ? (arr_10 [i_0] [i_1] [i_2] [i_3]) : (arr_10 [i_0] [i_1] [i_2] [i_3])))), (max((((15709504362159798270ULL) - (((/* implicit */unsigned long long int) 19LL)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_1])) << (((var_14) - (1980823834784403649LL))))))))));
                    }
                } 
            } 
        }
        for (signed char i_4 = 4; i_4 < 16; i_4 += 4) 
        {
            var_17 |= ((/* implicit */unsigned int) max((min((((/* implicit */long long int) arr_8 [i_4 - 3] [i_4])), (var_14))), (((/* implicit */long long int) max((((((/* implicit */int) (signed char)104)) ^ (((/* implicit */int) (short)15174)))), (arr_8 [i_4 + 3] [i_4 + 1]))))));
            var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) arr_7 [i_0] [i_4] [i_0]))));
        }
        for (unsigned char i_5 = 0; i_5 < 19; i_5 += 2) 
        {
            var_19 = ((/* implicit */int) ((arr_9 [i_0] [i_5] [i_0] [i_0]) < (arr_3 [i_0])));
            arr_21 [i_0] [i_5] = ((/* implicit */unsigned short) arr_8 [i_0] [i_0]);
            var_20 *= ((/* implicit */unsigned long long int) ((signed char) arr_19 [(_Bool)1] [(_Bool)1]));
        }
    }
    /* vectorizable */
    for (unsigned short i_6 = 2; i_6 < 18; i_6 += 1) 
    {
        arr_25 [i_6] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_22 [i_6]))));
        var_21 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_22 [i_6])) || (((/* implicit */_Bool) arr_24 [i_6 - 1])))) ? (((long long int) var_6)) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_6 + 3])))));
        var_22 |= ((/* implicit */unsigned int) ((((long long int) arr_22 [(unsigned char)4])) * (((/* implicit */long long int) ((int) arr_23 [i_6])))));
        var_23 |= ((/* implicit */short) ((arr_24 [i_6 - 2]) >= (arr_24 [i_6 + 2])));
        var_24 = ((/* implicit */unsigned int) ((_Bool) 1578351272U));
    }
}
