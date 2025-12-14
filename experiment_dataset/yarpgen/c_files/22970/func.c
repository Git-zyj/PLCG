/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22970
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
    var_20 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((max((var_16), (((/* implicit */int) (unsigned short)11600)))) & (((/* implicit */int) var_7))))), (((((((/* implicit */long long int) 4294836224U)) - (var_13))) - (((/* implicit */long long int) ((0) + (var_15))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 2; i_3 < 14; i_3 += 2) 
                    {
                        var_21 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) var_13)) == (var_0)))) | ((~(((/* implicit */int) var_8))))))) < (((long long int) max((0), (((/* implicit */int) (short)31416)))))));
                        arr_13 [i_0] [(unsigned short)8] [i_1] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((-(((/* implicit */int) (unsigned short)43947)))), (((/* implicit */int) ((_Bool) var_12)))))) ? (min((-37735473), (((/* implicit */int) (short)9324)))) : ((+(((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (unsigned char)197)) : (((/* implicit */int) (unsigned short)11444))))))));
                    }
                    arr_14 [i_1] [i_1] [i_2] = ((_Bool) min((min((arr_3 [i_0]), (((/* implicit */int) (unsigned char)58)))), (((/* implicit */int) min(((unsigned char)235), (((/* implicit */unsigned char) (_Bool)1)))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned char) var_4);
    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_19)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_11)), (var_0)))) ? (((/* implicit */int) var_9)) : (((((((/* implicit */int) var_9)) + (2147483647))) << (((((((/* implicit */int) var_12)) + (60))) - (29))))))))));
}
