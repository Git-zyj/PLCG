/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40833
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
    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_6)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_12)))))))) ? (((((/* implicit */_Bool) (+(var_1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U)))))) : (max((((/* implicit */unsigned int) var_17)), (var_3))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_17))))))));
    var_19 = ((/* implicit */signed char) var_9);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */int) max((min(((unsigned char)26), ((unsigned char)203))), (((/* implicit */unsigned char) arr_6 [i_0]))))) >> (((((min((var_3), (((/* implicit */unsigned int) var_16)))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_13))))))) - (66U))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 13; i_2 += 2) 
                {
                    for (long long int i_3 = 2; i_3 < 14; i_3 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */int) max((var_21), (((((/* implicit */_Bool) (~(-1LL)))) ? (((/* implicit */int) (!((_Bool)1)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_5)) : (var_1)))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((var_13) || (((/* implicit */_Bool) var_9)))))))))));
                            var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) var_10)) : (arr_12 [i_0] [i_3 - 1] [i_2 + 1] [(unsigned char)10])))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_5))))) : (min((2781909259U), (((/* implicit */unsigned int) arr_3 [i_3] [i_2 - 1] [i_3 + 1])))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) : (min((((/* implicit */long long int) ((var_0) >> (((/* implicit */int) var_5))))), (((((/* implicit */_Bool) (unsigned char)174)) ? (var_7) : (((/* implicit */long long int) 32767U))))))));
                var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) max((var_12), (((/* implicit */unsigned char) var_14))))) >> (((max((var_7), (((/* implicit */long long int) (unsigned char)226)))) - (216LL)))))) ? (var_15) : (((/* implicit */int) max((arr_11 [(unsigned char)4] [i_0] [(unsigned char)4] [(_Bool)1] [i_1]), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_2))))))))));
            }
        } 
    } 
    var_25 = ((((/* implicit */int) ((min((((/* implicit */unsigned int) var_11)), (var_9))) > (((/* implicit */unsigned int) var_15))))) - (((/* implicit */int) (!(max((var_14), (var_13)))))));
}
