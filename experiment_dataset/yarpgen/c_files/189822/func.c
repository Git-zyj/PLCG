/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189822
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
        for (long long int i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((var_11), (arr_5 [(signed char)2] [i_0])))) && (((/* implicit */_Bool) min((arr_5 [i_0] [i_0]), (((/* implicit */signed char) (_Bool)0))))))))) | (((((/* implicit */_Bool) (((_Bool)1) ? (4294967291U) : (4294967291U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_3 [i_0 + 2]), (var_6))))) : (arr_1 [i_0] [i_0])))));
                var_15 = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_5 [i_0 + 1] [i_0])))) ? (((/* implicit */unsigned long long int) (+(4294967291U)))) : ((+(arr_1 [i_0] [i_1 - 2])))));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 3; i_2 < 11; i_2 += 2) 
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 1; i_3 < 12; i_3 += 4) 
                    {
                        arr_11 [i_3] [i_2 + 1] [2] [2] [(signed char)12] [(signed char)12] |= ((/* implicit */signed char) max((max((((/* implicit */unsigned int) (signed char)-10)), (max((4294967291U), (1073741760U))))), (((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_8 [i_1] [(unsigned char)1])))))))));
                        arr_12 [10U] [i_0] = ((/* implicit */_Bool) min((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))), (arr_8 [i_2] [i_2])));
                    }
                    var_16 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((unsigned long long int) -620361624337591654LL))) && (((/* implicit */_Bool) 4294967280U)))) ? (((/* implicit */int) (!((_Bool)1)))) : (var_2)));
                    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_1 - 2]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) >= (min((((/* implicit */unsigned int) (signed char)-2)), (4294967253U))))))) : (max(((+(5824042405433856715LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)84)))))))));
                }
                for (int i_4 = 1; i_4 < 12; i_4 += 1) 
                {
                    var_18 = max((arr_3 [i_4 - 1]), (min((arr_3 [i_4 - 1]), (arr_3 [i_4 + 1]))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 1; i_5 < 10; i_5 += 4) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_19 *= ((/* implicit */unsigned int) arr_2 [i_5] [i_0]);
                                arr_22 [i_0] = ((/* implicit */signed char) ((((arr_13 [i_0] [i_5 + 3] [i_6] [i_4 + 1]) < (4003427322U))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))) % (max((((/* implicit */unsigned long long int) var_12)), (arr_1 [i_1 + 1] [i_1 + 1])))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((signed char) var_6)))));
    var_21 &= (~((-(var_8))));
}
