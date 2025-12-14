/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225278
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
    for (int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */signed char) max((18360159255679006988ULL), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)36882))) ^ (min((86584818030544614ULL), (((/* implicit */unsigned long long int) 1436009979U))))))));
                arr_5 [(signed char)6] &= ((/* implicit */long long int) (unsigned char)199);
                var_11 = ((/* implicit */unsigned int) (-(((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)129))) : (86584818030544614ULL))) - (((/* implicit */unsigned long long int) ((var_2) ? (((/* implicit */int) (unsigned short)33837)) : (((/* implicit */int) var_6)))))))));
                arr_6 [13U] [i_0] [i_1] = ((/* implicit */int) min((((23U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_2))))), (((1497427236U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0] [14U])))))));
                var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)129)) ? (((/* implicit */int) (unsigned char)145)) : (((/* implicit */int) ((((/* implicit */int) (signed char)-61)) == (((/* implicit */int) (unsigned short)31698)))))));
            }
        } 
    } 
    var_13 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2969525595U)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)129)))))) ? (min((((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) (unsigned short)36894)) : (((/* implicit */int) var_2))))), (max((162889548U), (((/* implicit */unsigned int) (unsigned char)139)))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))));
    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)1418)) ^ (min((min((((/* implicit */int) (unsigned short)64117)), (1))), (((/* implicit */int) (_Bool)0)))))))));
    var_15 = max((((((unsigned long long int) var_7)) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 86584818030544633ULL)) ? (-601475621) : (-2)))))), (min((((/* implicit */unsigned long long int) var_0)), (max((var_4), (((/* implicit */unsigned long long int) 601475620)))))));
}
