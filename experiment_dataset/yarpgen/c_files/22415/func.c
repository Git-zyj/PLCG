/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22415
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
    var_18 = ((/* implicit */unsigned short) var_12);
    var_19 = ((/* implicit */short) min((min((max((((/* implicit */unsigned short) var_14)), (var_9))), (((/* implicit */unsigned short) min((((/* implicit */signed char) var_0)), ((signed char)74)))))), (var_9)));
    var_20 ^= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) var_2)) > (((/* implicit */int) var_6))))), (((((/* implicit */int) var_4)) & (((/* implicit */int) (unsigned short)0))))))) ? (min((((/* implicit */long long int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-75)))), (((var_10) % (((/* implicit */long long int) ((/* implicit */int) var_9))))))) : (((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))), (((var_0) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */long long int) (+(max((((/* implicit */unsigned int) min(((signed char)-75), ((signed char)98)))), (min((((/* implicit */unsigned int) arr_1 [i_1])), (arr_3 [i_0] [i_0])))))));
                var_22 ^= ((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_1]))))), (min((((/* implicit */long long int) var_12)), (1066550625345444243LL))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)0)), (arr_1 [i_0])))))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 1; i_2 < 9; i_2 += 4) 
                {
                    var_23 = ((/* implicit */unsigned long long int) min(((+(((((/* implicit */int) arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_2 + 3])) & (((/* implicit */int) var_5)))))), (((((/* implicit */int) min(((signed char)16), (arr_0 [i_0])))) + (((((/* implicit */int) var_6)) << (((((/* implicit */int) var_16)) + (4044)))))))));
                    arr_9 [i_1] [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) min((var_3), (((/* implicit */short) (signed char)55))))) ? (((/* implicit */int) arr_7 [i_0 + 2] [i_0] [i_2 + 1] [i_2 - 1])) : (((/* implicit */int) max((((/* implicit */short) arr_7 [i_2] [i_0] [i_0] [i_0 - 1])), (arr_5 [i_0] [i_0] [i_0] [i_2 + 1])))))), (((/* implicit */int) min((min((arr_2 [i_0]), (((/* implicit */unsigned short) arr_0 [i_0])))), (((/* implicit */unsigned short) max((((/* implicit */unsigned char) var_1)), (arr_1 [i_2])))))))));
                }
                for (unsigned short i_3 = 3; i_3 < 8; i_3 += 4) 
                {
                    var_24 &= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) max((min((((/* implicit */int) var_6)), (arr_13 [i_0 - 2]))), (((/* implicit */int) var_14))))), (((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) -1)) : (arr_11 [i_0] [i_0 - 1] [i_1] [i_0 - 1]))) / (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)74)))))))));
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                    {
                        for (unsigned char i_5 = 1; i_5 < 11; i_5 += 4) 
                        {
                            {
                                var_25 = ((((/* implicit */_Bool) min((-1066550625345444244LL), (((/* implicit */long long int) min((var_3), (((/* implicit */short) arr_19 [i_0] [i_1] [i_3 + 1] [i_0] [i_5])))))))) ? ((-((-(((/* implicit */int) var_0)))))) : (max((((/* implicit */int) var_6)), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)64)) : (((/* implicit */int) (unsigned char)20)))))));
                                var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (1066550625345444243LL) : (arr_12 [i_0 + 1] [i_0 - 2] [i_3 + 3] [i_4])))) ? ((~(min((((/* implicit */unsigned long long int) (_Bool)0)), (arr_11 [i_0] [i_0 - 3] [i_0 - 3] [i_0 - 1]))))) : (((/* implicit */unsigned long long int) max((var_15), (((/* implicit */long long int) (unsigned char)169))))))))));
                                var_27 -= ((/* implicit */unsigned long long int) max((((((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-88)), (var_12)))) ^ (((/* implicit */int) min((var_14), (var_13)))))), (max((((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)255)), (arr_2 [i_4])))), (max((((/* implicit */int) var_16)), (-1256094117)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_6 = 2; i_6 < 11; i_6 += 3) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_28 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_0)), (arr_17 [i_0] [i_0] [i_0]))))));
                                var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) max((min((arr_5 [i_0] [i_0] [i_3 - 2] [i_7]), (var_16))), (var_3)))), ((~(((((/* implicit */_Bool) 9223372036854775807LL)) ? (arr_11 [i_0] [i_1] [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_0 - 1])))))))))));
                                var_30 ^= ((((1066550625345444243LL) <= (1066550625345444243LL))) ? ((+(((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_11 [i_7] [i_3] [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_7]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((max((var_12), (((/* implicit */unsigned char) var_0)))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_21 [i_0 - 2] [i_0] [i_0 + 2] [i_0 - 3] [i_0 - 3] [i_0 - 1]))))))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
