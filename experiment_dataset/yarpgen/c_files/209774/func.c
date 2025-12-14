/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209774
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (arr_3 [i_0] [i_1]) : (((/* implicit */long long int) 749308436))))))))) ^ (arr_3 [i_0] [i_1 - 2])));
                var_20 = (-(((((/* implicit */_Bool) (unsigned short)255)) ? (((/* implicit */long long int) 2147483647)) : (arr_0 [i_0]))));
                var_21 = ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    for (int i_3 = 2; i_3 < 11; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_2 [i_3 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_10 [i_0] [i_1 - 2] [i_2]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [6LL] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_9 [i_0]))))))))));
                                arr_14 [9LL] [i_1] [i_1 + 2] [i_3] [i_3] [3LL] [i_4] = ((((/* implicit */_Bool) 8038883777590495113LL)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) (+(((/* implicit */int) ((2147483647) == (2147483647))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_5 = 1; i_5 < 9; i_5 += 1) 
                {
                    for (unsigned int i_6 = 0; i_6 < 12; i_6 += 2) 
                    {
                        {
                            var_23 = ((((/* implicit */_Bool) 16867397667851370326ULL)) ? (2147483647) : (((/* implicit */int) (_Bool)1)));
                            var_24 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1352718424580249423LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)201))) : (2762385898050101805LL)))) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)61))))) : (-6182844695471938670LL))))));
                            var_25 -= ((12736789706824415438ULL) == (((/* implicit */unsigned long long int) max((((/* implicit */long long int) 2147483647)), (((((/* implicit */_Bool) -2762385898050101794LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58324))) : (9179836175630223091LL)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_26 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) (~(26LL)))) : (((((/* implicit */_Bool) 11908282859696133006ULL)) ? (((/* implicit */unsigned long long int) -2147483647)) : (2645598600209962553ULL))))) - (((/* implicit */unsigned long long int) (+(((var_9) ? (7831224964766694375LL) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))))));
}
