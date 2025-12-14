/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200828
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 11; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */signed char) (-(((/* implicit */int) (((~(((/* implicit */int) (unsigned char)146)))) > (((((/* implicit */int) arr_1 [(unsigned short)11] [i_1])) / (((/* implicit */int) arr_6 [i_0] [i_1] [i_0] [i_2 - 1])))))))));
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_7 [i_2 - 1] [i_2] [i_2] [i_2])) < (((((/* implicit */_Bool) arr_0 [i_2])) ? (var_16) : (((/* implicit */int) arr_7 [(_Bool)1] [(_Bool)1] [i_2] [i_1]))))))) ^ (((((/* implicit */_Bool) min((arr_3 [i_1]), (((/* implicit */short) arr_2 [i_2 + 1] [i_1]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_5 [i_0] [i_0] [i_2 - 1])) != (var_16)))) : (((((/* implicit */int) arr_5 [i_0] [i_1] [i_2])) | (((/* implicit */int) arr_2 [i_0] [i_1]))))))));
                    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max((var_16), (2035933329)))) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0] [i_0])), (arr_0 [i_2])))))) ? (max(((~(((/* implicit */int) var_11)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2]))))))) : (((/* implicit */int) (signed char)(-127 - 1))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */short) var_10);
    var_22 = ((/* implicit */signed char) min(((-(((/* implicit */int) (signed char)56)))), (((((var_2) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)130))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) min((var_1), ((signed char)-98))))))));
    var_23 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */int) max((min((((/* implicit */unsigned char) var_3)), (var_7))), (((/* implicit */unsigned char) (signed char)1)))))));
    var_24 += ((/* implicit */int) (!(((/* implicit */_Bool) max((min((1099511626752LL), (((/* implicit */long long int) 3739100106U)))), (((/* implicit */long long int) (unsigned char)118)))))));
}
