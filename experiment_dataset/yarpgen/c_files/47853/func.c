/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47853
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_2] [i_3] [i_0] &= ((long long int) ((((/* implicit */_Bool) max((-7741636223534695326LL), (((/* implicit */long long int) var_7))))) ? (min((arr_10 [i_0] [i_2] [i_2] [i_3]), (((/* implicit */unsigned int) var_14)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 2395089667U)) || (((/* implicit */_Bool) arr_11 [i_0] [i_2] [i_2]))))))));
                                arr_15 [i_0] [i_1] [1LL] [i_3] [i_4] = ((/* implicit */long long int) max((((((/* implicit */_Bool) (-(var_0)))) ? (((((/* implicit */_Bool) 8191U)) ? (arr_10 [i_3] [i_3] [i_3] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned int) ((var_6) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_11))))))), (max((((/* implicit */unsigned int) var_6)), (8191U)))));
                                var_16 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_13)), (((((/* implicit */_Bool) arr_6 [i_1 - 1] [i_1] [i_1 - 1])) ? (max((-7741636223534695326LL), (((/* implicit */long long int) var_7)))) : (((/* implicit */long long int) max((3005514620U), (8191U))))))));
                                arr_16 [2ULL] [13LL] [13LL] [i_3] [5U] [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) var_7)))))) && (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_3))) + (-7741636223534695325LL))))));
                                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [i_3] [i_1] [i_3] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_7)) ? (-7741636223534695326LL) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))))) : (min((((/* implicit */unsigned long long int) (+(-7741636223534695325LL)))), (((((/* implicit */unsigned long long int) 6160765516600929096LL)) + (var_4)))))));
                            }
                        } 
                    } 
                    arr_17 [(unsigned char)3] [i_0] = ((/* implicit */unsigned char) ((arr_8 [i_0]) % (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                    var_18 = ((/* implicit */long long int) arr_4 [i_0] [i_0] [i_2]);
                    var_19 = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) var_8)), (((((/* implicit */_Bool) (signed char)-111)) ? (16609146481545041476ULL) : (((/* implicit */unsigned long long int) var_13)))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_2 [i_1])) == (((((/* implicit */_Bool) (signed char)111)) ? (-7741636223534695326LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)100))))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned char) var_3);
}
