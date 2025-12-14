/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39988
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
    var_10 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) -7024971861261573898LL)) ? ((~(((/* implicit */int) (short)-11265)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)15024))))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)15027)) : (var_1)))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 13; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 14; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? ((+(((/* implicit */int) (short)-15024)))) : (((/* implicit */int) (short)15011)))))));
                    var_12 |= ((/* implicit */long long int) ((unsigned int) (_Bool)0));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */short) ((long long int) (+((+(1587619917U))))));
                                var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_6 [i_1 + 1] [i_1 - 3]), (arr_6 [i_1 + 2] [i_1 + 2])))) ? (((((/* implicit */_Bool) arr_6 [i_1 + 2] [i_1 - 1])) ? (((/* implicit */int) arr_6 [i_1 + 2] [i_1 + 1])) : (((/* implicit */int) arr_6 [i_1 + 1] [i_1 + 1])))) : (((/* implicit */int) max((arr_6 [i_1 - 2] [i_1 + 2]), (arr_6 [i_1 + 2] [i_1 - 1]))))));
                                var_15 = ((/* implicit */unsigned int) max((var_15), ((~(((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_3] [i_1] [i_4] [i_4])) ? (2707347381U) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_0] [i_2] [i_2])))))))))));
                                var_16 ^= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) 3335297926U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [(_Bool)1] [(_Bool)1])))))) : ((~(0ULL))))), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (short)-9236)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_1]))) : (3335297940U))))))));
                                var_17 = ((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_4]);
                            }
                        } 
                    } 
                    var_18 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) 18446744073709551615ULL))) ? ((~(((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (-7109592780750417807LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))))) : (((/* implicit */long long int) (~(((/* implicit */int) max((arr_6 [i_1] [(short)4]), (((/* implicit */short) (_Bool)1))))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_5 = 0; i_5 < 10; i_5 += 4) 
    {
        for (signed char i_6 = 0; i_6 < 10; i_6 += 4) 
        {
            {
                var_19 -= ((/* implicit */unsigned int) max((((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-112))) + (13331096792771908911ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_8 [i_5] [(unsigned char)6] [i_6] [i_6] [i_6]), (arr_5 [i_5] [i_5] [1ULL] [i_6]))))))), (((/* implicit */unsigned long long int) (+((+(arr_12 [i_5]))))))));
                var_20 ^= ((/* implicit */int) ((long long int) (-(arr_11 [i_5]))));
            }
        } 
    } 
}
