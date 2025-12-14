/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234328
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 14; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                arr_17 [i_1] [i_1] [i_1] [i_1] [i_4] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_8)), (var_18)))) ? (((((/* implicit */_Bool) (signed char)55)) ? (((/* implicit */int) (signed char)-118)) : (((/* implicit */int) var_16)))) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0]))))));
                                arr_18 [i_2] [i_2] [i_1] [i_2] [i_2] = ((/* implicit */_Bool) var_7);
                                var_19 -= ((/* implicit */unsigned long long int) (+((+(((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_11 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]))))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) var_3))));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 16; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 16; i_6 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_18))))), (var_6)))) ? ((+(((/* implicit */int) (signed char)55)))) : (((/* implicit */int) arr_24 [i_0] [i_1] [i_0] [i_0] [i_0] [i_6] [i_1]))));
                                var_22 -= ((/* implicit */_Bool) arr_11 [i_0] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]);
                                var_23 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_12 [i_0] [i_0] [i_1 - 1] [i_0])))) > (((((/* implicit */_Bool) arr_9 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 1])) ? ((-(arr_6 [i_0]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-56)) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_2] [i_0] [i_6])) : (((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_1])))))))));
                                var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) min(((~(((4294967280U) & (arr_8 [i_6]))))), (((/* implicit */unsigned int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                                arr_25 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 0LL)) && (((((/* implicit */_Bool) arr_20 [i_2] [i_2] [i_2] [i_1 + 1])) || (((/* implicit */_Bool) var_8))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned int) ((var_11) == (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-56))))) >> (((((var_7) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)56))))) - (1574613371U))))))));
}
