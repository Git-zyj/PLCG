/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227250
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
    var_20 = ((/* implicit */signed char) ((-1433584837684229823LL) < (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (1073741568ULL))))))));
    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) var_17))));
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 21; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_22 = ((/* implicit */signed char) arr_3 [i_0 - 2] [i_1] [i_1]);
                var_23 -= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0 - 1])) >> (((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (var_0))) - (4290906429179766955LL)))))), (((unsigned long long int) ((arr_3 [(signed char)18] [i_0] [16LL]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)59))))))));
                arr_4 [i_0] [i_0] [8LL] = min((var_8), (((/* implicit */long long int) (short)10538)));
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 23; i_2 += 2) /* same iter space */
                {
                    arr_8 [i_0] [i_1] [(unsigned char)11] = ((/* implicit */long long int) ((max((min((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])), (var_13))), (max((((/* implicit */unsigned long long int) var_12)), (var_4))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)34)))));
                    var_24 = ((/* implicit */unsigned long long int) arr_5 [i_0 - 4] [i_0] [i_0 - 1]);
                    arr_9 [i_1] [i_1] [(short)8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_3 [i_0] [i_0 - 2] [i_1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)39)), (arr_5 [i_2] [i_0] [i_0])))))))) ? (max((((/* implicit */long long int) arr_0 [i_0 + 1] [i_0 + 1])), (max((var_5), (((/* implicit */long long int) arr_0 [i_0] [(short)21])))))) : (((max((var_5), (((/* implicit */long long int) var_15)))) - (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)133), ((unsigned char)123)))))))));
                }
                for (signed char i_3 = 0; i_3 < 23; i_3 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 23; i_4 += 2) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 23; i_5 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned char) min((var_8), (((/* implicit */long long int) max((arr_12 [i_0 + 1]), (arr_12 [i_0 + 1]))))));
                                arr_18 [i_1] [i_1] [i_3] [(unsigned char)0] [(unsigned char)12] [i_5] [(unsigned char)16] = ((/* implicit */unsigned char) max(((short)-1), (max((arr_1 [i_0 - 2]), (arr_1 [i_0 + 2])))));
                                var_26 *= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((4456674249102705490LL) ^ (4668038123399434520LL)))) ^ (max((((/* implicit */unsigned long long int) (signed char)(-127 - 1))), (18158513697557839872ULL)))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */unsigned char) (!(((((/* implicit */long long int) ((/* implicit */int) ((arr_3 [i_0] [i_0] [(short)3]) <= (arr_3 [i_0 + 1] [(unsigned char)0] [(unsigned char)0]))))) < (((((/* implicit */_Bool) arr_0 [(short)8] [i_1])) ? (var_19) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_3] [(unsigned char)8] [i_0])))))))));
                }
                var_28 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_15 [i_0] [i_0 - 3] [i_0] [i_0 - 1])) ? (((/* implicit */int) arr_17 [i_0 - 1])) : (((/* implicit */int) arr_15 [(signed char)8] [i_1] [i_1] [i_0 - 1])))) < (((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_0] [(signed char)12] [i_0 - 2] [i_0 - 1])) || (((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_0 - 1] [i_0 - 1])))))));
            }
        } 
    } 
}
