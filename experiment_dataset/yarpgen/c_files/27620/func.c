/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27620
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
    var_18 = ((/* implicit */unsigned char) max((((/* implicit */int) ((unsigned char) (unsigned char)30))), (var_3)));
    var_19 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) max((var_3), (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (var_3))) : (((/* implicit */int) var_11)))), (((/* implicit */int) ((short) min((((/* implicit */unsigned int) var_8)), (90851092U)))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        arr_2 [i_0 - 2] [i_0 - 2] = ((/* implicit */int) ((unsigned int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)226)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)4032))))), (4294967295U))));
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4204116203U)) ? (((/* implicit */int) (unsigned char)181)) : (((/* implicit */int) (short)-1))))) ? (((/* implicit */int) min((var_5), (var_7)))) : (((/* implicit */int) ((unsigned short) var_9)))));
    }
    for (int i_1 = 1; i_1 < 13; i_1 += 1) 
    {
        var_20 = ((/* implicit */short) (((_Bool)1) ? (max((((/* implicit */long long int) 4204116197U)), (-4725989509696188254LL))) : (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)30686), (min(((unsigned short)64610), (((/* implicit */unsigned short) (unsigned char)181))))))))));
        var_21 = ((/* implicit */unsigned short) var_4);
        var_22 = ((/* implicit */_Bool) ((unsigned short) min(((unsigned char)11), (((/* implicit */unsigned char) (_Bool)1)))));
    }
    for (int i_2 = 0; i_2 < 10; i_2 += 1) 
    {
        var_23 = ((/* implicit */int) max((((unsigned short) var_13)), (((/* implicit */unsigned short) min((var_12), (var_1))))));
        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) min((min((var_7), (max(((unsigned char)36), (((/* implicit */unsigned char) var_6)))))), (((/* implicit */unsigned char) var_8)))))));
        var_25 = max((((/* implicit */int) ((signed char) var_6))), (((((/* implicit */_Bool) 6012731197182310224ULL)) ? (((/* implicit */int) (short)-32755)) : (((/* implicit */int) (unsigned char)255)))));
    }
}
