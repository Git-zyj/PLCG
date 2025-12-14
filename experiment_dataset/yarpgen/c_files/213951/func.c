/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213951
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
    var_12 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (+(var_10)))) && (((/* implicit */_Bool) ((((/* implicit */int) var_2)) ^ (var_3)))))) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((7927297763409120857ULL) % (((/* implicit */unsigned long long int) var_3))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_11))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((var_5) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (short)21123))))), (min((var_10), (((/* implicit */unsigned int) arr_4 [i_0] [i_1]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_0)), (2547365606U)))) && (((/* implicit */_Bool) arr_0 [i_1])))))) : (((((/* implicit */_Bool) arr_2 [(_Bool)1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_0 [i_1]))))))));
                var_15 = ((/* implicit */unsigned int) var_4);
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) max((((unsigned int) var_2)), (((/* implicit */unsigned int) (unsigned short)15923))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) var_7);
    var_17 += ((/* implicit */unsigned int) (-((-(((/* implicit */int) var_1))))));
}
