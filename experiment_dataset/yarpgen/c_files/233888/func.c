/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233888
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
    var_17 = var_14;
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */long long int) 524287ULL);
                var_19 += ((/* implicit */unsigned long long int) ((unsigned char) ((max((((/* implicit */long long int) (unsigned char)47)), (var_11))) << (((min((arr_5 [(unsigned char)17]), (((/* implicit */unsigned long long int) (unsigned char)217)))) - (169ULL))))));
                arr_7 [i_0] [(unsigned char)12] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_1] [i_1])) && (((/* implicit */_Bool) arr_0 [i_0 + 2] [i_1 + 1])))))));
                var_20 = ((/* implicit */unsigned long long int) max((var_20), ((+((+(((unsigned long long int) 18446744073709027336ULL))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 8294165057589135934ULL)) ? (4897763482508236962ULL) : (10152579016120415680ULL))) > (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) / (max((var_8), (((/* implicit */long long int) (short)-18164)))))))));
}
