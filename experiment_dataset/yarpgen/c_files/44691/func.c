/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44691
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
    var_18 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-58)) + (2147483647))) >> (((min((((/* implicit */unsigned long long int) 7204582029558259454LL)), (67319629253641088ULL))) - (67319629253641085ULL)))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 6; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            arr_17 [i_0] [i_0 - 1] [i_1] [i_1] [i_0 - 1] [i_3] [i_0] = var_2;
                            arr_18 [i_4] [i_3] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */int) arr_14 [i_0] [i_0] [i_0 + 2] [i_0] [i_0 + 3])) > (((/* implicit */int) arr_3 [i_0] [i_0])))))));
                        }
                        var_19 -= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)183)) ? (((/* implicit */int) (unsigned short)7153)) : (((/* implicit */int) (signed char)70))))) ? ((~(4208384709U))) : (max((var_8), (((/* implicit */unsigned int) var_4)))))) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (max((arr_11 [i_2] [i_0] [i_2]), (var_2))) : (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_14))))))))));
                    }
                    arr_19 [i_0] [i_1] [i_0] = ((arr_13 [i_0 + 4] [i_0 + 4] [i_1] [i_1] [i_2]) & (((/* implicit */int) arr_15 [i_2] [i_1] [9ULL] [i_1] [i_1])));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_5 = 2; i_5 < 10; i_5 += 3) 
    {
        for (int i_6 = 3; i_6 < 13; i_6 += 2) 
        {
            {
                arr_24 [i_5] [i_5] = max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)64730)) / (var_2)))), (min((((/* implicit */unsigned long long int) (unsigned char)188)), (0ULL))));
                var_20 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((min((((/* implicit */int) var_16)), (arr_20 [i_5] [i_5]))) < (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) >= (arr_23 [i_5 + 4] [i_5] [i_5])))))))));
                var_21 = (i_5 % 2 == 0) ? (((/* implicit */signed char) min((max((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))), (((((var_2) + (2147483647))) << (((arr_23 [i_5] [i_5] [i_5]) - (7416587657680175469ULL))))))), (arr_21 [i_5] [i_6])))) : (((/* implicit */signed char) min((max((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))), (((((var_2) + (2147483647))) << (((((arr_23 [i_5] [i_5] [i_5]) - (7416587657680175469ULL))) - (13250228271912823146ULL))))))), (arr_21 [i_5] [i_6]))));
            }
        } 
    } 
}
