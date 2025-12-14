/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246596
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
    /* LoopSeq 3 */
    for (int i_0 = 3; i_0 < 22; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((-(arr_1 [i_0] [i_0]))) - (((arr_0 [i_0] [10LL]) - (((/* implicit */unsigned int) var_14))))))) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_1 [i_0] [16LL]))))));
        var_21 = ((/* implicit */_Bool) ((unsigned short) ((((-7379611938915818193LL) / (var_10))) / (((/* implicit */long long int) ((/* implicit */int) var_11))))));
        var_22 = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]);
    }
    for (int i_1 = 2; i_1 < 18; i_1 += 2) 
    {
        var_23 = ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_2 [19ULL])) ? (7379611938915818186LL) : (((/* implicit */long long int) arr_1 [i_1] [i_1 - 2]))))))) ? (var_19) : (((/* implicit */long long int) arr_3 [i_1])));
        var_24 = ((/* implicit */signed char) arr_1 [(unsigned char)17] [i_1 + 4]);
        var_25 = ((/* implicit */unsigned long long int) arr_1 [i_1] [1ULL]);
    }
    for (long long int i_2 = 0; i_2 < 14; i_2 += 2) 
    {
        var_26 = ((/* implicit */signed char) var_10);
        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_2])) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_17))))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) arr_1 [i_2] [(short)3])) ? (var_10) : (((/* implicit */long long int) arr_0 [i_2] [i_2])))))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)11)) * (((/* implicit */int) arr_6 [i_2])))))));
    }
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 1) 
    {
        for (long long int i_4 = 4; i_4 < 22; i_4 += 2) 
        {
            {
                var_28 = ((/* implicit */unsigned short) (-(((arr_10 [i_3] [i_4 - 4]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_4])))))));
                var_29 = ((/* implicit */long long int) var_1);
            }
        } 
    } 
    var_30 &= ((/* implicit */int) (+(var_10)));
    var_31 = ((/* implicit */unsigned long long int) max(((+(-6061202163562704168LL))), (7959018430306084391LL)));
}
