/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2369
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            for (signed char i_2 = 2; i_2 < 7; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 3; i_3 < 8; i_3 += 4) 
                    {
                        var_13 = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_5 [i_2] [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1)))))), (arr_8 [i_1 + 1] [i_2 - 1] [i_2] [i_3 + 1]))) ^ (((/* implicit */unsigned long long int) (~(max((0), (-1190320686))))))));
                        var_14 = (~(((unsigned long long int) arr_6 [i_1] [i_2 + 3])));
                        var_15 = arr_0 [i_2];
                        var_16 -= ((/* implicit */int) ((short) -1190320686));
                    }
                    for (int i_4 = 1; i_4 < 9; i_4 += 4) 
                    {
                        arr_12 [i_4] [i_4] [i_4] [i_1] = ((/* implicit */signed char) min((((((/* implicit */int) arr_6 [i_1] [i_1])) ^ (0))), (((((/* implicit */int) arr_6 [i_1] [i_2 - 2])) ^ (646129434)))));
                        var_17 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((_Bool) (signed char)125))), (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_0 [i_1])) : (((arr_4 [i_0] [i_0]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [i_4])))))))));
                    }
                    arr_13 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 2080374784)))) & ((~(arr_8 [i_2] [i_1] [i_1] [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-64))) : (((long long int) var_9))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-15))))), (((10973365957145724555ULL) | (((/* implicit */unsigned long long int) var_5))))))) ? (min((((var_3) ^ (1973406628))), ((~(((/* implicit */int) var_11)))))) : ((-((-(((/* implicit */int) (unsigned short)0)))))))))));
    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (+(469414423))))));
}
