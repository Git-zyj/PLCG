/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236340
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
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_16 ^= ((/* implicit */short) var_14);
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (int i_4 = 2; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */short) ((((/* implicit */long long int) arr_2 [i_1])) < (((((((/* implicit */unsigned int) var_4)) < (arr_2 [i_1]))) ? (((arr_8 [i_1] [i_2]) | (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [(signed char)9] [i_3] [i_4 - 1]))))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) var_9)), (arr_13 [i_0 + 2] [i_3]))))))));
                                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) min((((/* implicit */short) (signed char)8)), ((short)8))))));
                                var_19 -= ((/* implicit */long long int) arr_13 [i_1] [(short)5]);
                                var_20 = ((/* implicit */int) (unsigned char)154);
                            }
                        } 
                    } 
                } 
                var_21 += ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned char) arr_3 [2U] [i_0 + 3] [i_0 + 3]))))) ? (((/* implicit */int) min(((_Bool)1), ((!(((/* implicit */_Bool) (unsigned char)89))))))) : (((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0] [i_1]) : (((/* implicit */int) arr_3 [(signed char)14] [i_0 + 3] [i_1])))) * (((/* implicit */int) min(((unsigned char)24), (((/* implicit */unsigned char) (_Bool)1)))))))));
                arr_14 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_13 [i_0] [i_1])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [(unsigned short)9] [i_1])) : (((/* implicit */int) var_9))))) : (arr_13 [5LL] [i_1])))) ? (((/* implicit */long long int) (((_Bool)1) ? (min((((/* implicit */int) arr_9 [i_0] [12U] [i_1] [4U])), (1439218384))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)1)))))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_2)) >> (((((/* implicit */int) (short)15095)) - (15090)))))) : (var_11)))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) var_9);
    var_23 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)12))) != (var_15)))))), (((/* implicit */int) (short)16256))));
}
