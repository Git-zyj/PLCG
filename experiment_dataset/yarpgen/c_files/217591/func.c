/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217591
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
    var_16 = ((/* implicit */unsigned char) (+((-(((/* implicit */int) var_5))))));
    var_17 = ((/* implicit */long long int) 2955448991U);
    var_18 = ((/* implicit */signed char) var_1);
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 24; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0 + 1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 4294967281U))));
        arr_3 [i_0] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) var_10))))));
        arr_4 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) 6418868877773738512LL)) : (arr_0 [i_0] [i_0])))) ? (arr_0 [i_0 + 1] [i_0 - 2]) : (((/* implicit */unsigned long long int) arr_1 [i_0])));
    }
    for (long long int i_1 = 2; i_1 < 24; i_1 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1 - 1])) ? (((/* implicit */int) arr_6 [i_1 - 1])) : (((/* implicit */int) arr_6 [i_1 + 1]))))), (min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (short)32767)), (8282465718711917190LL)))), ((-(14872459898652392892ULL)))))));
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            for (unsigned int i_3 = 0; i_3 < 25; i_3 += 3) 
            {
                {
                    arr_14 [i_1] &= ((/* implicit */unsigned long long int) (signed char)-123);
                    arr_15 [i_2] [i_2] [17LL] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_8 [i_1 - 1] [i_1 + 1])) ? (14872459898652392879ULL) : (((/* implicit */unsigned long long int) arr_8 [i_1 + 1] [i_1 + 1])))), (((/* implicit */unsigned long long int) ((arr_8 [i_1 - 2] [i_1 + 1]) / (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))));
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 25; i_4 += 4) 
                    {
                        for (signed char i_5 = 2; i_5 < 23; i_5 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-6)) ? (-8883012520850414975LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-10074)))))) ? ((~(((/* implicit */int) arr_17 [i_5 + 2] [i_5 + 2] [i_3] [i_4])))) : (((/* implicit */int) arr_11 [i_1] [i_1] [i_2] [i_4]))));
                                var_21 = ((/* implicit */unsigned short) (_Bool)0);
                                arr_23 [i_2] = ((/* implicit */signed char) (+(arr_12 [i_3])));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_24 [i_1] = ((/* implicit */short) ((((/* implicit */int) arr_10 [i_1] [i_1])) & (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)50116))) || (((/* implicit */_Bool) arr_20 [(signed char)3] [i_1 - 2] [i_1 - 1] [i_1] [i_1])))))));
        var_22 = ((unsigned long long int) var_0);
    }
    for (long long int i_6 = 2; i_6 < 24; i_6 += 2) /* same iter space */
    {
        var_23 = ((/* implicit */signed char) max((((/* implicit */long long int) var_0)), (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((long long int) (_Bool)1)) : (((/* implicit */long long int) ((((/* implicit */int) arr_16 [i_6 + 1] [i_6])) * (((/* implicit */int) var_5)))))))));
        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_12 [i_6 - 1]), (((/* implicit */long long int) 1339873987U))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_17 [i_6] [i_6 - 1] [i_6] [i_6 - 1])))) : (((((/* implicit */_Bool) arr_12 [i_6])) ? (var_13) : (((/* implicit */unsigned long long int) arr_12 [i_6])))))))));
    }
}
