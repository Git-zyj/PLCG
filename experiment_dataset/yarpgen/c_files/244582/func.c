/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244582
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
    var_19 = (_Bool)1;
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 11; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) ((signed char) ((4768851220911266982ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
                    var_21 = ((/* implicit */signed char) max(((-(min((arr_4 [i_0] [i_0] [i_2]), (arr_0 [i_0] [i_2]))))), (max((((/* implicit */int) (_Bool)1)), (min((((/* implicit */int) (signed char)21)), (arr_5 [i_0] [i_1] [(_Bool)1])))))));
                    var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((/* implicit */_Bool) (~(arr_5 [i_2 + 1] [i_0 + 1] [i_0])))) ? (min((((((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0])) | (549487378432ULL))), (((/* implicit */unsigned long long int) max((var_10), (-18630957)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), (arr_2 [i_2])))))))))))));
                    var_23 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_2])) * ((+(var_14))))) / (arr_1 [i_2])));
                }
            } 
        } 
    } 
}
