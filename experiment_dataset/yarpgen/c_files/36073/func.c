/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36073
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
    var_18 = ((/* implicit */_Bool) -2148885725205347895LL);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_19 &= ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) arr_1 [i_0]))))), (min((((/* implicit */long long int) arr_1 [i_0])), (9038814352318981582LL)))));
                var_20 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_2 [i_1] [i_0] [i_0])) ? (arr_0 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_17)))))));
                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_0 [i_0]), (arr_0 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((arr_0 [(short)20]) > (((/* implicit */long long int) ((/* implicit */int) (short)3048)))))))) : (8078952504146427076ULL))))));
                var_22 *= (+(((946227340574706645ULL) & (((/* implicit */unsigned long long int) -3605172532263059121LL)))));
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) var_9);
    var_24 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)164)) | (((/* implicit */int) (signed char)15))))) ? (((/* implicit */unsigned long long int) var_1)) : (min((var_2), (((/* implicit */unsigned long long int) var_7))))))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_4))))) : (min((var_1), (((/* implicit */long long int) var_14))))));
    var_25 = ((((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_17)) | (((/* implicit */int) var_13))))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)110)) | (((/* implicit */int) ((10367791569563124530ULL) >= (var_6))))))));
}
