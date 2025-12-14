/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205860
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
    for (signed char i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            {
                var_19 = min((((/* implicit */int) ((8001453014918346815ULL) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)10657)) : (((/* implicit */int) arr_3 [i_1 + 2])))))))), (max((((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) var_6)))));
                arr_6 [i_0 + 1] [(_Bool)1] [(_Bool)1] = ((/* implicit */_Bool) arr_1 [i_0] [(unsigned short)11]);
                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_1 + 1] [14LL]))))) && ((!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_13)), (10445291058791204800ULL))))))));
            }
        } 
    } 
    var_21 -= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-86))) / (-5356383632684061777LL)));
    /* LoopSeq 1 */
    for (unsigned short i_2 = 3; i_2 < 20; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (int i_4 = 0; i_4 < 22; i_4 += 2) 
            {
                {
                    var_22 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_8 [i_2 + 1])) ? (((/* implicit */int) arr_7 [i_2 - 2] [i_2 + 1])) : (((/* implicit */int) arr_7 [i_2 - 2] [i_2 + 1]))))));
                    var_23 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((short) arr_11 [i_2 - 1] [i_4])))));
                    var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((948315339U), (((/* implicit */unsigned int) (!(var_1)))))))));
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned int) max((var_25), (((((/* implicit */_Bool) 18446744073709551610ULL)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [0ULL] [15ULL])) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (_Bool)1))))) ? (arr_14 [i_2] [i_2 - 2] [i_2]) : (max((((/* implicit */unsigned int) var_14)), (1502700333U))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_7 [i_2 - 3] [i_2 + 2]), (((/* implicit */unsigned short) (unsigned char)153))))))))));
        var_26 |= ((/* implicit */_Bool) arr_10 [i_2] [i_2]);
        var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) (+(arr_8 [16LL]))))));
    }
    var_28 = ((/* implicit */unsigned int) var_16);
    var_29 = ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) (-(948315349U)))) : (((unsigned long long int) max((-357737404017805100LL), (((/* implicit */long long int) var_1))))));
}
