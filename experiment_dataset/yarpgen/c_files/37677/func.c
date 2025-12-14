/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37677
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */unsigned int) min((((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) (signed char)-118)), (arr_4 [i_0]))))) <= (((unsigned int) (short)7040))))), ((signed char)-74)));
                /* LoopNest 3 */
                for (signed char i_2 = 1; i_2 < 15; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (signed char i_4 = 3; i_4 < 13; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_2] [i_3] [i_4] = max((3906364774U), (((/* implicit */unsigned int) arr_0 [i_0])));
                                arr_15 [i_0] [i_1] [i_0] [4U] = max((388602521U), (((/* implicit */unsigned int) (signed char)35)));
                                arr_16 [i_0] [i_1] [i_0] [i_3] [i_3] [i_4] = max((min((((/* implicit */unsigned int) arr_9 [i_4] [i_4] [i_4 - 2] [i_3] [i_2 + 1])), (((arr_7 [i_4 + 3]) ^ (4294967295U))))), (min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_3 [i_0] [i_1]))))), (((3906364776U) - (4294967295U))))));
                                arr_17 [i_0] [i_1] [4ULL] [i_0] [(signed char)1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 1146035757U)) ^ (min((((/* implicit */unsigned long long int) 190338319U)), (((11353187149597809214ULL) & (((/* implicit */unsigned long long int) 190338319U))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 1; i_5 < 15; i_5 += 4) 
                {
                    for (unsigned int i_6 = 0; i_6 < 16; i_6 += 2) 
                    {
                        {
                            var_11 = ((/* implicit */signed char) ((unsigned int) min((min((868734768U), (((/* implicit */unsigned int) (signed char)125)))), (((/* implicit */unsigned int) ((388602521U) != (0U)))))));
                            var_12 += ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) arr_8 [i_0] [i_5] [i_6])), (min((((/* implicit */unsigned long long int) (~(3906364774U)))), (min((((/* implicit */unsigned long long int) (signed char)111)), (15679418624248176676ULL)))))));
                            var_13 = ((/* implicit */short) 11609977043556195470ULL);
                            arr_25 [i_0] [8U] [i_1] [i_0] = max((((/* implicit */unsigned int) (short)7759)), (1146035766U));
                        }
                    } 
                } 
                var_14 = ((/* implicit */signed char) (((+(((15585772474306003596ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)125))))))) > (((/* implicit */unsigned long long int) ((arr_20 [i_0] [i_1]) - (((/* implicit */unsigned int) ((/* implicit */int) (short)20110))))))));
                var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (!(((arr_5 [i_0] [(signed char)6]) < (max((4294967295U), (((/* implicit */unsigned int) arr_0 [(signed char)2])))))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 2) 
    {
        for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 4) 
        {
            {
                arr_33 [i_8] = min((((/* implicit */unsigned int) (unsigned short)65534)), (4104628971U));
                var_16 += ((unsigned int) min((((arr_32 [i_8] [i_8]) * (((/* implicit */unsigned long long int) 4294967273U)))), (((/* implicit */unsigned long long int) arr_30 [i_8]))));
                arr_34 [i_8] [i_8] = ((/* implicit */short) min(((+(arr_29 [i_7]))), (max((max((arr_19 [i_8] [(unsigned short)13] [i_7]), (388602537U))), (max((arr_5 [i_7] [i_7]), (2928387991U)))))));
                arr_35 [i_7] [(unsigned short)7] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) 4104628998U)), (2986527086544030569ULL)));
            }
        } 
    } 
}
