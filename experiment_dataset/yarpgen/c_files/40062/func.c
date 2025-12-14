/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40062
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
    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (min((var_7), (((/* implicit */long long int) var_3)))) : (var_0)))) ? (var_1) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)46)))))) ? (var_2) : (((((/* implicit */_Bool) var_3)) ? (var_7) : (var_2))))))));
    var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((1723676601U) < (4294967286U))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 13; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((((((/* implicit */int) arr_8 [i_0] [i_1] [i_2 + 1] [i_2 - 1])) != (((/* implicit */int) arr_8 [i_0] [10ULL] [11LL] [i_2 + 1])))) ? (min((arr_3 [i_2 - 1] [i_2 - 1]), (arr_3 [i_2] [i_2 + 1]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2] [i_1])) ? (arr_5 [i_2] [8LL] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2])))))) ? (2571290694U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2 - 1] [10ULL] [i_2] [i_1])))))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */short) (((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */long long int) (-((~(((/* implicit */int) arr_1 [i_2]))))))) : (arr_2 [i_0] [i_0])));
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_2] [9LL] = ((/* implicit */signed char) min((((long long int) (-(1723676601U)))), (((/* implicit */long long int) var_3))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3666541761U)) ? (1964880937U) : (max((((((/* implicit */_Bool) (unsigned short)8192)) ? (((/* implicit */unsigned int) 985290750)) : (1723676602U))), (577821176U)))));
                    arr_19 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_0]))) : ((+(arr_13 [i_2])))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 252U)), (18446744073709551612ULL)))) ? ((~(var_4))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_2] [i_0] [10ULL] [6LL] [i_0] [i_2])))))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)7572))))), (min((1557427076116480178ULL), (((/* implicit */unsigned long long int) arr_13 [i_1]))))))));
                    arr_20 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_8 [8LL] [i_1] [i_1] [8LL])), (arr_4 [i_0] [i_2])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_2]))) : (arr_11 [i_2] [i_1] [i_2] [i_0] [i_2] [i_1]))))));
                }
            } 
        } 
    } 
    var_16 = var_4;
    /* LoopNest 2 */
    for (signed char i_5 = 0; i_5 < 13; i_5 += 2) 
    {
        for (signed char i_6 = 0; i_6 < 13; i_6 += 2) 
        {
            {
                var_17 += ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_8 [i_5] [i_6] [(unsigned short)9] [i_6])) : (((/* implicit */int) arr_8 [(unsigned short)2] [i_5] [i_5] [i_5])))), (((int) arr_8 [i_5] [i_5] [i_5] [i_5]))));
                var_18 += ((/* implicit */short) min((1964880935U), (((/* implicit */unsigned int) (((-(var_9))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_8)))))))));
                arr_25 [i_5] [i_6] = ((/* implicit */unsigned int) (+(max((min((19ULL), (((/* implicit */unsigned long long int) 0)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3797231880402701580ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_5]))) : (arr_7 [i_5]))))))));
            }
        } 
    } 
}
