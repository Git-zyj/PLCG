/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212042
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_12 ^= ((/* implicit */unsigned long long int) ((max((arr_1 [2] [2]), (arr_1 [i_0] [(signed char)14]))) % (max((arr_1 [i_0] [(signed char)16]), (((/* implicit */unsigned int) min(((short)-32743), (((/* implicit */short) arr_4 [i_0] [i_1] [i_1])))))))));
                var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_1 [(signed char)14] [(signed char)14])) ? (arr_1 [14] [(unsigned char)0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)59375))))))))));
                arr_5 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (((/* implicit */int) (short)-1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)6169)) != (((/* implicit */int) (unsigned short)59399)))))) : ((-(arr_0 [(short)12])))))) ? (((arr_1 [i_0] [i_0]) + (((arr_0 [i_1]) & (((/* implicit */unsigned int) ((/* implicit */int) (short)-27209))))))) : (((/* implicit */unsigned int) min(((-(((/* implicit */int) arr_3 [i_0] [(unsigned char)17])))), (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (((/* implicit */int) arr_4 [8] [i_1] [1LL]))))))));
                arr_6 [(unsigned char)11] [i_0] [i_1] = ((/* implicit */_Bool) min(((+(((((/* implicit */int) arr_4 [i_0] [i_1] [i_0])) & (((/* implicit */int) arr_3 [i_0] [i_1])))))), (((/* implicit */int) arr_3 [i_0] [i_0]))));
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) var_8);
    var_15 ^= ((/* implicit */_Bool) ((((/* implicit */int) var_11)) & (((((((/* implicit */int) var_6)) >= (((/* implicit */int) var_4)))) ? (((/* implicit */int) max(((unsigned short)59375), ((unsigned short)59375)))) : (((((/* implicit */int) (unsigned short)6160)) << (((2024169634767401820ULL) - (2024169634767401802ULL)))))))));
}
