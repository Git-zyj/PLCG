/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246733
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) max((max((arr_0 [i_0]), (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (var_3)))))), (arr_1 [i_0])));
        var_10 ^= ((/* implicit */short) var_1);
        var_11 ^= ((/* implicit */int) ((((((arr_2 [i_0]) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1))))) <= ((((_Bool)1) ? (((((/* implicit */int) (short)-1142)) + (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (short)-29671))))));
    }
    /* vectorizable */
    for (long long int i_1 = 3; i_1 < 14; i_1 += 4) 
    {
        var_12 -= ((/* implicit */unsigned long long int) arr_6 [i_1 - 1] [i_1 + 2]);
        arr_7 [i_1] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1 + 2]))))) != (arr_5 [i_1 - 3] [i_1])));
        arr_8 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_5 [i_1 - 3] [i_1]) : (((/* implicit */int) arr_6 [i_1 + 2] [i_1 - 1])))))));
    }
    /* LoopSeq 3 */
    for (long long int i_2 = 0; i_2 < 12; i_2 += 4) /* same iter space */
    {
        var_13 += ((/* implicit */unsigned long long int) ((((arr_5 [i_2] [i_2]) + (2147483647))) << (((/* implicit */int) (_Bool)0))));
        arr_12 [i_2] [i_2] = max((((/* implicit */unsigned long long int) var_8)), (15023742700368350850ULL));
    }
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 12; i_3 += 4) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_3])) ? (((/* implicit */int) ((short) (unsigned short)61456))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_3] [i_3])))))));
        arr_16 [i_3] = ((/* implicit */long long int) ((unsigned short) 4232210216U));
        arr_17 [i_3] &= (+(var_2));
    }
    for (unsigned long long int i_4 = 1; i_4 < 12; i_4 += 1) 
    {
        var_15 *= ((/* implicit */long long int) ((arr_18 [2U] [i_4 + 1]) ? (((/* implicit */int) arr_18 [4ULL] [i_4 - 1])) : (((((/* implicit */_Bool) 12663658496781982010ULL)) ? (((/* implicit */int) arr_18 [10] [i_4 + 1])) : (((/* implicit */int) arr_18 [8ULL] [i_4 - 1]))))));
        var_16 ^= ((/* implicit */unsigned long long int) (~(arr_20 [12ULL])));
        /* LoopSeq 1 */
        for (unsigned long long int i_5 = 4; i_5 < 10; i_5 += 4) 
        {
            var_17 = ((/* implicit */short) ((((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_19 [i_4])) : (arr_23 [i_4 - 1] [i_5 - 3] [i_4]))) <= (((/* implicit */int) ((_Bool) var_8))))) ? (max((((((/* implicit */_Bool) var_2)) ? (-250207045) : (((/* implicit */int) arr_19 [i_4])))), (((/* implicit */int) ((_Bool) var_3))))) : (((/* implicit */int) max((((-44039344336618610LL) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (arr_18 [i_4] [i_5 - 3]))))));
            var_18 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */int) ((unsigned short) 1204407045U))) > (((/* implicit */int) (unsigned char)8)))));
            arr_24 [i_4 - 1] [i_5 - 1] [i_5] &= ((((/* implicit */_Bool) ((long long int) arr_20 [i_5]))) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) arr_20 [i_5])), (var_8)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_4 [i_5 - 1])))) : (max((((/* implicit */unsigned long long int) arr_22 [i_5])), (var_9))))) : (((/* implicit */unsigned long long int) var_6)));
        }
        arr_25 [i_4] [i_4 + 1] = ((/* implicit */signed char) (-(((/* implicit */int) ((signed char) ((((/* implicit */int) (short)21637)) >> (((456169605U) - (456169595U)))))))));
        arr_26 [(signed char)10] &= ((/* implicit */long long int) ((unsigned long long int) 8410587962694793145ULL));
    }
}
