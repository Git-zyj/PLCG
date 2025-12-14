/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4391
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((_Bool) 1640832792U))), (((long long int) 13161161945669048479ULL))))) ? ((-(((/* implicit */int) var_14)))) : (((/* implicit */int) var_18))));
    var_21 -= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)114)), ((+(((/* implicit */int) var_15))))))), ((~(min((((/* implicit */unsigned long long int) var_4)), (5285582128040503137ULL)))))));
    var_22 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((unsigned long long int) var_9))))) || (((/* implicit */_Bool) (-(13161161945669048479ULL))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */int) var_15)) - (((/* implicit */int) arr_0 [i_0]))))))) : ((-(min((5285582128040503141ULL), (arr_1 [i_0] [i_0])))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) 5285582128040503137ULL);
        var_24 = ((/* implicit */unsigned int) ((signed char) 13161161945669048478ULL));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 22; i_1 += 3) /* same iter space */
    {
        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) (~(arr_3 [i_1]))))));
        var_26 += ((/* implicit */unsigned short) (~(((/* implicit */int) var_15))));
        var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) - (5285582128040503143ULL)))))));
    }
    for (signed char i_2 = 0; i_2 < 22; i_2 += 3) /* same iter space */
    {
        arr_9 [i_2] [i_2] = arr_4 [(unsigned short)11];
        var_28 = ((/* implicit */unsigned char) ((long long int) (signed char)-64));
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned char) ((unsigned long long int) (((_Bool)1) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-51)) ? (((/* implicit */int) arr_8 [2ULL])) : (((/* implicit */int) (signed char)63))))))));
        var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-27)) ? (((/* implicit */unsigned long long int) 2053658258064999511LL)) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */int) (signed char)107)) : (((/* implicit */int) arr_4 [i_2]))))) + (max((((/* implicit */unsigned long long int) var_8)), (arr_7 [i_2])))))));
    }
}
