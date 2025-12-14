/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208750
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
    var_13 |= ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */long long int) min((((/* implicit */int) var_3)), (var_9)))) == (min((((/* implicit */long long int) (unsigned char)249)), (5237878321332967278LL)))))), (((var_8) | (-5237878321332967278LL)))));
    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1))))) || (((/* implicit */_Bool) var_11))))) <= (min((((((/* implicit */_Bool) 5237878321332967301LL)) ? (var_5) : (((/* implicit */int) var_3)))), (((((/* implicit */int) (unsigned short)0)) | (((/* implicit */int) (_Bool)1)))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 17; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) == (((((/* implicit */long long int) ((/* implicit */int) var_1))) - (((5237878321332967295LL) % (((/* implicit */long long int) var_5))))))));
                arr_5 [i_0 - 2] [i_0 - 2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) var_7))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 23; i_2 += 2) 
    {
        for (unsigned char i_3 = 4; i_3 < 21; i_3 += 2) 
        {
            {
                var_16 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -5237878321332967256LL)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 5237878321332967286LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)218))) : (765762536U)))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (5237878321332967316LL)))))), (((var_6) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2] [4])))))));
                var_17 = ((/* implicit */unsigned char) (-2147483647 - 1));
            }
        } 
    } 
}
