/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196399
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
    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_12)), (3062965972U))))));
    var_20 -= ((/* implicit */_Bool) (~(1232001323U)));
    /* LoopSeq 2 */
    for (long long int i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        var_21 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 6656660371215173957ULL)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(unsigned char)6])) ? (4517290699341722462ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [14U]))))))));
        var_22 = ((/* implicit */long long int) (~((-(((/* implicit */int) var_17))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 14277908315428642136ULL)) ? (1091750962048182260ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)97)))))) ? (max((arr_3 [i_1]), (((/* implicit */unsigned int) var_11)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1])) || (((/* implicit */_Bool) arr_3 [i_1]))))))));
        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_4 [i_1]) : (var_4)))) : (((/* implicit */unsigned long long int) max((((var_3) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)105))))), (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))))))))));
        var_25 = ((/* implicit */long long int) (unsigned char)196);
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 3; i_3 < 15; i_3 += 4) 
            {
                {
                    var_26 = ((/* implicit */short) (signed char)87);
                    var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned char)91)), ((-(((/* implicit */int) (unsigned char)76))))))) : (((((/* implicit */_Bool) arr_8 [i_3 + 1] [i_3 - 3] [i_3 - 3])) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)238))))) : (arr_3 [i_3 + 2])))));
                }
            } 
        } 
        var_28 -= ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)91))) : (arr_4 [i_1]))));
    }
}
