/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54526
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
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) (-(((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) (signed char)71)) ? (6003728582960697766LL) : (((/* implicit */long long int) 1367007111U))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 18; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 534228012U)) ? (arr_3 [i_2 + 1] [i_2 - 3] [i_2]) : (arr_3 [i_2 + 2] [i_2 - 2] [i_2])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2097151))))) : ((-(arr_3 [i_2 - 3] [i_2 - 1] [i_2])))));
                    arr_8 [11LL] [i_0 + 2] [i_1] [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_0 + 2] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_0]))))));
                }
            } 
        } 
    } 
}
