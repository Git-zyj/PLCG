/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26072
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
    var_18 = ((/* implicit */unsigned long long int) ((_Bool) (signed char)92));
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? ((~(((/* implicit */int) (signed char)78)))) : (var_3)));
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (arr_1 [i_0 + 2]) : (arr_1 [i_0 - 1])))) | (max((((((/* implicit */_Bool) var_4)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned int) -276303476))))));
        var_20 = ((/* implicit */unsigned long long int) ((long long int) min((((/* implicit */int) (short)23517)), (arr_1 [i_0 - 2]))));
        var_21 = ((/* implicit */unsigned int) ((var_8) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)3968))))) ? (min((arr_1 [i_0]), (((/* implicit */int) var_13)))) : ((+(-1978140691))))))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 3; i_1 < 11; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                for (unsigned int i_3 = 3; i_3 < 11; i_3 += 3) 
                {
                    {
                        arr_13 [i_0] [i_2] [10] [i_0] = ((/* implicit */int) ((_Bool) (((!(((/* implicit */_Bool) var_14)))) ? (((/* implicit */int) arr_11 [i_3 + 1] [i_2] [i_1] [i_0])) : (((/* implicit */int) arr_12 [i_3 - 3] [i_1 - 1] [i_0 + 1])))));
                        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) (+((-(arr_4 [i_0] [i_0] [i_3]))))))));
                        var_23 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_3 - 2])) && ((_Bool)1)))) < (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
                        arr_14 [i_0] [i_0] [i_1 - 2] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_6)) ? (arr_7 [(signed char)9] [i_1 + 1] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) << (((/* implicit */int) ((short) (_Bool)1))))) + (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_11 [i_1] [i_1 + 1] [i_3 - 1] [i_3 + 1]))))));
                        var_24 -= ((/* implicit */unsigned long long int) (-(min((arr_4 [i_0 + 1] [i_1 - 1] [i_2]), (((/* implicit */unsigned int) var_17))))));
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */unsigned int) max((var_25), (((unsigned int) (-(((/* implicit */int) (signed char)(-127 - 1))))))));
    }
}
