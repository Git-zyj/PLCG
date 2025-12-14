/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26097
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
    var_10 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            {
                var_11 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_1 + 2])) ? (879670500U) : (879670528U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3854721150U)) ? (1435443074U) : (2390510265U)))) : (6602903701377846059ULL)));
                var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) 888097312U)) ? ((-(879670496U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((879670507U) > (3415296768U)))))));
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    var_13 ^= ((/* implicit */unsigned long long int) (unsigned char)6);
                    var_14 = ((/* implicit */long long int) min((var_14), (((((/* implicit */_Bool) min((arr_8 [i_1 + 1] [i_1 - 1]), (arr_8 [i_1 + 2] [i_1 + 2])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_8 [i_1 + 2] [i_1 - 1])) != (2218736387303206434ULL))))) : (arr_8 [i_1 + 3] [i_1 + 1])))));
                    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-53)) ? (arr_6 [i_0] [i_1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (((((/* implicit */_Bool) ((var_0) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)63))) : (-422475143110236118LL)))) ? (5207466479156189194LL) : (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_1 [i_2] [i_2])), (879670522U)))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((arr_3 [10U] [i_0]), (3415296796U)))) || (((/* implicit */_Bool) arr_6 [i_0] [i_0] [(unsigned short)0]))))))));
                }
                arr_9 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((15881341474415219524ULL) >> (((3415296800U) - (3415296759U))))), (max((((/* implicit */unsigned long long int) 3415296795U)), (2305843009213693951ULL)))))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((arr_0 [i_1 - 1] [i_0]) - (((/* implicit */long long int) ((/* implicit */int) var_9)))))) : (arr_5 [i_1 - 1] [i_1 - 2] [i_1]))) : (((/* implicit */unsigned long long int) (~(max((arr_0 [i_0] [i_1]), (arr_6 [i_0] [i_0] [i_0]))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */int) 2565402599294332092ULL);
}
