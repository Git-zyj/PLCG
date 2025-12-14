/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20923
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_13 += ((/* implicit */short) ((unsigned long long int) ((signed char) var_0)));
                    arr_6 [(unsigned char)8] [8ULL] [i_1] [(unsigned char)8] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_3 [12U] [i_1] [i_2]))) ? (min((arr_1 [i_0]), (((/* implicit */unsigned int) (unsigned short)15)))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) - (((/* implicit */int) (unsigned char)163)))))))) ? (((/* implicit */unsigned int) (~(-52379764)))) : (min((((/* implicit */unsigned int) (+(((/* implicit */int) var_5))))), (min((((/* implicit */unsigned int) (signed char)109)), (arr_3 [(unsigned short)18] [i_1] [i_1])))))));
                    arr_7 [i_1] [(_Bool)0] [(unsigned char)7] [i_2] = var_3;
                    var_14 = min((((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1] [i_1] [17LL])) || (((/* implicit */_Bool) arr_3 [i_1] [22LL] [i_2]))))), (arr_0 [(_Bool)1]));
                    arr_8 [i_0] [i_1] = ((((((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_2])) ? (12549927912570024546ULL) : (((/* implicit */unsigned long long int) arr_3 [i_1] [i_1] [i_1])))) | (((/* implicit */unsigned long long int) ((-52379747) - (((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) max(((_Bool)1), (max(((_Bool)1), (min((var_3), ((_Bool)1))))))))));
    var_16 = ((/* implicit */signed char) var_8);
    var_17 = ((/* implicit */int) (_Bool)1);
}
