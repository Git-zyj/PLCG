/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43145
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
    for (unsigned int i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        for (unsigned int i_1 = 4; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        {
                            var_11 *= ((/* implicit */unsigned short) min((-9223372036854775795LL), (((/* implicit */long long int) 1194082326U))));
                            arr_10 [i_2] [i_2] [i_1] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3998))) | (3100884960U)))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? (((/* implicit */unsigned long long int) ((arr_2 [i_1 - 2]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_2 [i_1 - 4]))))) : ((~(arr_9 [5U]))));
                            var_12 += ((/* implicit */unsigned char) var_8);
                            var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) ((min((arr_9 [i_0 + 1]), (((/* implicit */unsigned long long int) ((var_2) & (((/* implicit */long long int) ((/* implicit */int) var_3)))))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((1193318560409346171ULL), (((/* implicit */unsigned long long int) (unsigned short)48389))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (((unsigned int) -1))))))))));
                        }
                    } 
                } 
                var_14 = ((unsigned long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (signed char)-1))));
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 22; i_4 += 1) 
                {
                    for (unsigned short i_5 = 2; i_5 < 18; i_5 += 1) 
                    {
                        {
                            arr_16 [i_4] [i_5] = ((/* implicit */_Bool) ((var_0) * (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) | (((/* implicit */int) arr_2 [i_0 + 1])))))));
                            var_15 -= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 24576U)) ? (288230376151711743ULL) : (((/* implicit */unsigned long long int) 2147483647)))) < (((/* implicit */unsigned long long int) ((arr_2 [i_1 - 1]) ? (((/* implicit */int) arr_2 [i_1 - 1])) : (((/* implicit */int) arr_2 [i_1 + 2])))))));
                            var_16 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_15 [i_1 + 1] [19ULL] [i_1 + 1] [i_0 - 1] [i_0 - 3]), (arr_15 [i_5] [i_5] [i_1 + 1] [i_0] [i_0 - 2])))) ? (((((/* implicit */_Bool) arr_15 [i_5] [i_5] [i_1 - 4] [i_0] [i_0 - 1])) ? (((/* implicit */int) arr_15 [i_5 + 4] [i_5] [i_1 + 4] [i_0 - 3] [i_0 - 3])) : (((/* implicit */int) arr_15 [i_4] [i_0 - 3] [i_1 - 3] [i_0] [i_0 - 3])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) min((66060288U), (((/* implicit */unsigned int) (short)20209)))))) ? (max((((/* implicit */unsigned int) min((var_4), (((/* implicit */int) (unsigned short)0))))), (((unsigned int) var_6)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((1194082336U) * (((/* implicit */unsigned int) -221729108)))))))));
    var_18 = ((/* implicit */long long int) (signed char)13);
}
