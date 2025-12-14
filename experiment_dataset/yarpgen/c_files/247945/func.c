/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247945
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                arr_8 [i_0] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)61901)) ? (((/* implicit */int) arr_5 [i_1 + 2] [i_1])) : (((/* implicit */int) arr_3 [i_1 - 1])))) >= (((((/* implicit */_Bool) (unsigned short)19812)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_6 [i_1] [i_1] [i_1 + 4]))))));
                arr_9 [i_1] [i_1 + 3] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)31931)) : (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) arr_5 [i_1 + 4] [i_1])) ? (((/* implicit */int) arr_6 [i_1 + 4] [i_1] [(unsigned short)13])) : (((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) (unsigned short)61757)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_5 [i_1 + 4] [i_1]))))));
                arr_10 [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)53398)) == (((/* implicit */int) (unsigned short)65527)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)62540)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)13749))))) ? (((((/* implicit */int) (unsigned short)35693)) - (((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) (unsigned short)56614)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_3 [(unsigned short)10])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)3659)) ? (((/* implicit */int) (unsigned short)46584)) : (((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) (unsigned short)3768)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_0])))) : (((((/* implicit */int) arr_4 [i_0])) * (((/* implicit */int) arr_7 [i_1]))))))));
                var_11 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (unsigned short)12137)) : (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) (unsigned short)42196)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)46170)))) : (((/* implicit */int) max(((unsigned short)64783), (arr_1 [i_1])))))), (max((((((/* implicit */int) var_2)) & (((/* implicit */int) var_3)))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)63488)) : (((/* implicit */int) var_4))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned short) min((max((((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) (unsigned short)42741))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)42104)))))), (((((((/* implicit */int) var_4)) == (((/* implicit */int) var_0)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) var_6))))));
}
