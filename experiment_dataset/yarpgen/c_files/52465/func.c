/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52465
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        var_10 = ((/* implicit */unsigned long long int) arr_1 [i_0 - 1] [i_0 + 1]);
        arr_3 [i_0] = ((/* implicit */long long int) (short)12554);
    }
    /* LoopSeq 3 */
    for (short i_1 = 0; i_1 < 20; i_1 += 1) /* same iter space */
    {
        var_11 = ((/* implicit */_Bool) (+(((/* implicit */int) min((arr_7 [(signed char)2] [i_1]), (arr_7 [i_1] [i_1]))))));
        arr_8 [i_1] = ((/* implicit */long long int) ((unsigned short) (_Bool)1));
        var_12 = ((/* implicit */signed char) (+(min((((/* implicit */int) max((arr_7 [i_1] [i_1]), (((/* implicit */unsigned short) var_9))))), (min((var_1), (((/* implicit */int) (unsigned short)0))))))));
    }
    for (short i_2 = 0; i_2 < 20; i_2 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) arr_0 [i_2]))));
        arr_11 [i_2] = ((/* implicit */unsigned char) arr_10 [i_2]);
        var_14 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned long long int) arr_2 [i_2] [i_2])) <= (arr_5 [i_2] [i_2])))) & (arr_2 [i_2] [i_2])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_4 [i_2] [(unsigned char)5])))) ? (arr_5 [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2] [i_2]))))))));
    }
    for (short i_3 = 0; i_3 < 20; i_3 += 1) /* same iter space */
    {
        var_15 -= ((_Bool) ((arr_13 [i_3] [i_3]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_3])))));
        var_16 ^= ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_3] [i_3])) && (((var_0) == (((/* implicit */long long int) arr_2 [i_3] [i_3]))))))), (max((((/* implicit */int) var_2)), (min((arr_1 [i_3] [i_3]), (((/* implicit */int) arr_10 [i_3]))))))));
    }
}
