/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23316
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
    var_20 = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) 26722953)) ? (var_15) : (((/* implicit */int) var_2)))) : (((/* implicit */int) (_Bool)1))))), (((unsigned int) max((var_13), (var_1))))));
    var_21 = ((/* implicit */int) var_14);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) max((((/* implicit */int) (short)(-32767 - 1))), (var_8)))) : (((3221225472U) ^ (((/* implicit */unsigned int) var_16))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)216))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) % (-452435386)))) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)16435)) == (((/* implicit */int) var_2))))))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            arr_6 [i_1] = ((/* implicit */unsigned short) ((690321821) + (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_1 [i_1])) >= (-2088625682)))) >= (((/* implicit */int) (short)0)))))));
            arr_7 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_5 [i_1]) / (((/* implicit */long long int) var_5))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((-4402847921995238991LL), (((/* implicit */long long int) (unsigned short)42457))))) ? (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) == (((/* implicit */int) (unsigned short)65508))))) : ((~(((/* implicit */int) arr_0 [i_0]))))))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)96))) | (((arr_5 [i_1]) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2048)))))))));
            /* LoopNest 2 */
            for (long long int i_2 = 3; i_2 < 22; i_2 += 1) 
            {
                for (int i_3 = 1; i_3 < 21; i_3 += 1) 
                {
                    {
                        var_23 = (+(1187767620));
                        arr_14 [i_1] = ((/* implicit */short) (unsigned char)132);
                    }
                } 
            } 
        }
    }
}
