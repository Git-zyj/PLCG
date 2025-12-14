/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19569
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) (+(2950641796U))))));
                var_13 = ((/* implicit */int) var_1);
                /* LoopNest 3 */
                for (long long int i_2 = 1; i_2 < 19; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((/* implicit */_Bool) (-(4883202181797217454LL)))) || (((/* implicit */_Bool) 2950641796U)))))));
                                var_15 = ((/* implicit */unsigned int) var_2);
                                var_16 = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0 - 1] [i_1] [(short)12] [i_3] [i_4])) ? (arr_6 [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) -2147483646))))) ? (min((arr_5 [i_1]), (((/* implicit */long long int) arr_16 [i_0] [i_2 - 1] [i_2] [i_3] [i_4] [i_2 - 1])))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) + (var_1)))))), (((/* implicit */long long int) (~(((/* implicit */int) arr_4 [i_1 + 2] [i_1 - 2]))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned char i_6 = 0; i_6 < 21; i_6 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) (unsigned char)235))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_0] [(unsigned char)8] [i_0] [i_0]))) * (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) * (var_8))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)239)))));
                            arr_24 [i_6] [20LL] [i_1 + 1] [i_0] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 2950641804U)) ? (arr_8 [i_0 - 1] [i_0 - 1] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_5]))))), ((+(arr_8 [i_0 - 1] [i_1 + 1] [i_5])))));
                            var_18 -= ((/* implicit */unsigned int) -5077689883064200811LL);
                        }
                    } 
                } 
                arr_25 [(_Bool)0] [(_Bool)0] [i_1] = ((/* implicit */unsigned char) ((2950641796U) < (((/* implicit */unsigned int) max((((/* implicit */int) arr_2 [i_0])), ((-(((/* implicit */int) arr_20 [i_1 - 2])))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */short) var_10);
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
    {
        var_20 = ((/* implicit */long long int) arr_6 [i_7 - 1] [i_7] [i_7 - 1]);
        var_21 = ((/* implicit */long long int) arr_15 [1U] [i_7 - 1] [13LL] [(_Bool)1] [i_7]);
    }
}
