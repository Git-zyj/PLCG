/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22739
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
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_14 = max((13548127170226607719ULL), (((/* implicit */unsigned long long int) (signed char)59)));
                arr_6 [(signed char)8] [(signed char)8] [(signed char)8] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) 8796092760064LL)) ? (3216281190U) : (((/* implicit */unsigned int) 1097310295))));
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1342604040U)) ? (((/* implicit */int) (signed char)-74)) : (((/* implicit */int) (unsigned short)410))));
    /* LoopSeq 2 */
    for (unsigned char i_2 = 0; i_2 < 18; i_2 += 2) 
    {
        var_16 = ((/* implicit */unsigned char) arr_9 [i_2] [i_2]);
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 3) 
        {
            var_17 = ((/* implicit */unsigned long long int) (~((((-2147483647 - 1)) & (((/* implicit */int) var_5))))));
            var_18 += ((/* implicit */signed char) arr_7 [i_2]);
        }
        var_19 *= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_7)), (((((/* implicit */_Bool) max((((/* implicit */int) var_4)), (arr_7 [i_2])))) ? (((/* implicit */unsigned long long int) ((arr_7 [i_2]) - (arr_8 [i_2])))) : (((((/* implicit */_Bool) arr_8 [i_2])) ? (var_3) : (((/* implicit */unsigned long long int) arr_7 [i_2]))))))));
    }
    for (short i_4 = 1; i_4 < 20; i_4 += 3) 
    {
        arr_15 [i_4 + 1] [i_4 + 2] = ((/* implicit */short) ((((((((/* implicit */unsigned long long int) 1218065825)) == (2991256154789298952ULL))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-37)))) * ((~(((/* implicit */int) max((var_6), (((/* implicit */short) arr_12 [i_4] [i_4 + 1])))))))));
        var_20 ^= ((/* implicit */signed char) arr_12 [i_4 - 1] [i_4 - 1]);
        var_21 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_12 [i_4 - 1] [i_4])), ((-(((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_4] [i_4 + 1]))) / (5574342082646563697LL)))))));
    }
    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) 31U)) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)-26801))) | ((-9223372036854775807LL - 1LL))))) ? (-357860590) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((max((9025593146970461404ULL), (((/* implicit */unsigned long long int) 9223372036854775807LL)))) >= (((/* implicit */unsigned long long int) max((2027145531), (((/* implicit */int) (unsigned char)253))))))))));
}
