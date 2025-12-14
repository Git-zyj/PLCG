/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2290
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
    var_10 = ((/* implicit */int) (unsigned short)44482);
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 19; i_2 += 3) 
                {
                    for (unsigned short i_3 = 1; i_3 < 20; i_3 += 2) 
                    {
                        {
                            arr_9 [i_3] [i_1 + 4] = ((/* implicit */short) ((12852637801381558854ULL) < (max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (var_1))), (((/* implicit */unsigned long long int) ((var_1) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))))));
                            var_11 |= ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) -8325814861379565391LL))) ? (((arr_4 [(signed char)11] [i_3] [i_3] [i_3]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0)))) : (((/* implicit */int) var_5))))) + (min((((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_2] [i_1] [(short)6] [(unsigned short)12] [i_0])) % (((/* implicit */int) arr_7 [(unsigned short)20] [i_2] [10LL] [i_2] [i_0]))))), (arr_8 [(unsigned short)10] [i_1 + 1] [i_2] [i_3 + 1]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 18; i_4 += 2) 
                {
                    for (short i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        {
                            var_12 += ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_0 - 2] [i_1]))))) ? (((/* implicit */int) arr_4 [i_5] [i_4] [i_1 + 4] [i_0])) : (min((((/* implicit */int) var_5)), (arr_15 [i_0] [i_1] [i_4] [i_0] [(signed char)9] [i_5])))))), (((((/* implicit */_Bool) ((arr_1 [i_0]) << (((var_9) - (1199532263)))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) var_6)) ? (arr_8 [2ULL] [(unsigned short)6] [(short)20] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_5] [i_5] [(short)16] [i_5] [(short)16])))))))));
                            var_13 *= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((var_0) && (arr_10 [(signed char)17] [(signed char)17]))))) + (max(((+(-5868621399819900615LL))), (((/* implicit */long long int) arr_0 [4ULL]))))));
                            arr_16 [i_5] [i_5] [i_4] [(unsigned short)2] [(unsigned short)2] [(unsigned short)4] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)1))) : (-8011885675719755773LL))), (((/* implicit */long long int) (+(((/* implicit */int) ((9223372036854775802LL) == (576616098565298540LL)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)4681))))) || (((/* implicit */_Bool) var_8)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)6386)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)853))) : (var_8)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) max((var_4), (((/* implicit */short) var_0)))))))) : (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) max(((unsigned short)9285), (((/* implicit */unsigned short) var_2)))))))));
}
