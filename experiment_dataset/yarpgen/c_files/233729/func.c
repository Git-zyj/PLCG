/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233729
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
    /* LoopSeq 3 */
    for (signed char i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        var_10 = ((/* implicit */int) min((var_10), (((/* implicit */int) ((max((max((((/* implicit */long long int) (signed char)98)), (arr_1 [i_0] [i_0]))), (min((((/* implicit */long long int) 242115593)), (arr_1 [i_0] [i_0]))))) % (((((/* implicit */_Bool) (-(arr_1 [i_0] [i_0 + 1])))) ? (((/* implicit */long long int) (~(arr_0 [i_0] [i_0])))) : (arr_2 [i_0 - 1] [(unsigned char)0]))))))));
        var_11 = ((/* implicit */int) min((min(((~(arr_2 [i_0] [i_0]))), (((/* implicit */long long int) max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned int) 1113006780))))))), (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((arr_2 [23LL] [i_0]) & (arr_1 [i_0 + 1] [i_0 + 1]))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_2 [i_0] [i_0]))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) (+((+((-(((/* implicit */int) var_1))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((unsigned int) (unsigned char)0)) & (((/* implicit */unsigned int) 1624645606)))))));
        arr_8 [15LL] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((((arr_2 [i_1] [i_1]) + (9223372036854775807LL))) >> (((-2147483629) - (-2147483634))))) : (((/* implicit */long long int) ((1215773132) >> (((1083370718482646180LL) - (1083370718482646160LL)))))))) != (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [i_1])))));
    }
    for (int i_2 = 3; i_2 < 24; i_2 += 4) 
    {
        var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) max((arr_9 [9]), (arr_9 [i_2])))) % ((-(arr_10 [i_2])))))) ? (((/* implicit */long long int) -1617111363)) : ((-(((-7380943674780006712LL) - (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_2] [i_2]))))))))))));
        arr_12 [i_2] [i_2] = arr_10 [i_2];
        var_13 += (unsigned char)222;
        arr_13 [i_2] &= 1130878391;
    }
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 10; i_3 += 4) 
    {
        for (long long int i_4 = 2; i_4 < 10; i_4 += 1) 
        {
            {
                arr_18 [(signed char)1] [(signed char)1] [i_4] = ((/* implicit */int) min((((((long long int) (short)17878)) >> ((((~(907040655))) + (907040704))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_0 [i_3] [i_4]) - (((/* implicit */unsigned int) var_3))))) ? (((/* implicit */int) min((((/* implicit */short) arr_9 [i_4])), ((short)32750)))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_3] [i_4]))) == (1142459347U)))))))));
                arr_19 [i_3] [i_3] [i_4] &= ((/* implicit */signed char) arr_2 [i_3] [i_3]);
            }
        } 
    } 
}
