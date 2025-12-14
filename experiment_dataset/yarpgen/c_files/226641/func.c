/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226641
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
    var_17 = ((/* implicit */_Bool) var_12);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (~(arr_7 [i_0] [i_1] [i_2])))) ? ((~(arr_6 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1 - 1] [i_1 + 1] [i_1] [i_3] [i_3]))))), (((((/* implicit */_Bool) (unsigned short)40714)) ? (((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */long long int) arr_11 [i_1] [i_2])) : ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1 + 1])))))));
                            var_19 = ((/* implicit */unsigned long long int) 4294967285U);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 14; i_4 += 2) 
                {
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_10 [i_1 + 1] [i_1 + 3] [i_0])), (arr_13 [i_4] [i_4])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)32104))))) : (((/* implicit */int) var_3)))))));
                            /* LoopSeq 1 */
                            for (short i_6 = 0; i_6 < 14; i_6 += 3) 
                            {
                                arr_21 [i_1] [i_1] [i_4] [i_5] [i_1 + 4] = ((/* implicit */int) 21U);
                                var_21 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_17 [i_0] [(unsigned short)0] [i_4] [i_1] [i_5] [i_6])) < (((/* implicit */int) (short)-1))))) == (((/* implicit */int) arr_3 [i_1] [i_1]))))) ^ (((/* implicit */int) (unsigned short)19586))));
                            }
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned char) ((((((11453095711768015773ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19698))))) << (((/* implicit */int) ((_Bool) (short)-18414))))) < (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)0))) / (max((((/* implicit */long long int) 10U)), (-4LL))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) min((((/* implicit */unsigned int) var_15)), (((((/* implicit */_Bool) max((4U), (((/* implicit */unsigned int) var_8))))) ? (((4294967285U) ^ (((/* implicit */unsigned int) 1681682030)))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */signed char) var_3)), ((signed char)-50))))))))))));
    var_24 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (unsigned short)45963)), (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)20536))))), (((var_10) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20537)))))))));
}
