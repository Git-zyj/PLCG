/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242995
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
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (((+(arr_5 [i_0] [i_0] [i_0]))) + (((/* implicit */int) ((_Bool) var_15)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max((-1LL), (((/* implicit */long long int) var_14))))) ? ((~(((/* implicit */int) var_6)))) : (((/* implicit */int) (((_Bool)0) && (((/* implicit */_Bool) (unsigned char)103)))))))) : (((((/* implicit */_Bool) max((var_5), ((unsigned short)41992)))) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (6166151063064624201LL) : (((/* implicit */long long int) arr_5 [i_0] [i_1 + 1] [i_1 + 1]))))))));
                var_18 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_3 [i_0])), (var_15)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_8))))))) || (((/* implicit */_Bool) max((max((var_16), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_1])))), (((/* implicit */unsigned long long int) 2566826974U)))))));
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    var_19 = ((/* implicit */signed char) (~(((/* implicit */int) ((signed char) 318436764U)))));
                    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned long long int) arr_6 [i_0] [(signed char)12] [i_0] [i_0])), (9007199254740992ULL))) < (((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */unsigned char) arr_6 [i_0] [(_Bool)1] [i_2] [i_2])), (arr_0 [(short)8])))) + (((/* implicit */int) (unsigned short)0))))))))));
                }
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)117))))) * (((((/* implicit */_Bool) arr_7 [i_0] [i_0 - 1] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) : (min((arr_7 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0]), (((/* implicit */unsigned long long int) (unsigned char)216))))))));
                var_22 = ((/* implicit */unsigned char) (!(min((arr_6 [i_1 + 1] [i_0] [i_1 + 1] [i_1]), (var_8)))));
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (!((!(((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) == (var_10))))))))));
}
