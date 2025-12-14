/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54031
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 - 1])) ? (((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 + 1])) ? (((/* implicit */unsigned long long int) arr_3 [i_0 + 1] [i_0 - 1])) : (var_6))) : (((/* implicit */unsigned long long int) arr_3 [i_0 - 1] [i_0 + 1]))));
        var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((/* implicit */_Bool) (-(arr_0 [(unsigned char)4])))) ? (((((/* implicit */_Bool) arr_0 [(unsigned char)2])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)127))) : (arr_0 [(unsigned short)4]))) : (arr_0 [2U]))))));
        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) (-(min((var_2), (((arr_1 [(signed char)10]) ^ (((/* implicit */unsigned long long int) var_12)))))))))));
        var_16 -= ((/* implicit */unsigned short) ((arr_2 [i_0]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [i_0]))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 24; i_3 += 2) 
                {
                    {
                        var_17 = ((/* implicit */short) (unsigned char)113);
                        arr_11 [i_0] = ((/* implicit */short) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned short)48165)), (arr_10 [i_0] [i_0])))), (((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)48190)))))));
                    }
                } 
            } 
        } 
    }
    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) var_10))));
    var_19 = ((/* implicit */signed char) var_7);
    var_20 = ((/* implicit */int) max((var_20), (var_12)));
    var_21 += ((/* implicit */unsigned short) var_11);
}
