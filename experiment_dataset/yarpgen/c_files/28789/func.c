/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28789
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 20; i_1 += 3) 
        {
            {
                arr_7 [i_1] = ((/* implicit */unsigned long long int) max((((((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [12U])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_1]))) : (arr_6 [i_0])))) / (var_4))), (((/* implicit */long long int) arr_0 [i_1 - 1] [i_1 - 3]))));
                var_18 = ((/* implicit */_Bool) ((short) ((((_Bool) arr_5 [i_1] [i_1])) ? (((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_1]))) : (arr_6 [(short)6]))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_1] [i_1])) + (((/* implicit */int) var_8))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 3; i_2 < 19; i_2 += 2) 
                {
                    for (short i_3 = 1; i_3 < 19; i_3 += 1) 
                    {
                        {
                            arr_14 [i_2 - 2] [i_1] [i_1] [i_0] [(unsigned char)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_15))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_13 [18LL] [i_1] [i_2] [(short)1] [i_2]))))) ? ((+(((/* implicit */int) arr_0 [17] [i_1])))) : (((/* implicit */int) var_2))));
                            arr_15 [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */short) (-(((/* implicit */int) var_0))));
                            var_19 &= ((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_12 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(_Bool)1] [i_1]))) : (var_9)))))) ? ((~(((unsigned long long int) arr_10 [i_0] [(unsigned short)3] [(unsigned short)3] [i_3])))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1]))) == (arr_1 [i_0])))) ^ (((/* implicit */int) ((((/* implicit */int) var_3)) <= (((/* implicit */int) var_0))))))))));
                            var_20 = (i_1 % 2 == zero) ? (((/* implicit */short) ((((unsigned int) min((((/* implicit */unsigned int) arr_8 [i_1] [i_1] [i_2 - 2] [(signed char)20])), (arr_1 [i_3])))) >> (((min((((/* implicit */unsigned int) arr_4 [i_2 - 2] [(_Bool)1])), (var_6))) >> (((((/* implicit */int) arr_9 [i_0] [i_1] [i_3])) - (17728)))))))) : (((/* implicit */short) ((((unsigned int) min((((/* implicit */unsigned int) arr_8 [i_1] [i_1] [i_2 - 2] [(signed char)20])), (arr_1 [i_3])))) >> (((min((((/* implicit */unsigned int) arr_4 [i_2 - 2] [(_Bool)1])), (var_6))) >> (((((((/* implicit */int) arr_9 [i_0] [i_1] [i_3])) - (17728))) + (49710))))))));
                            var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_0] [(unsigned char)14] [i_2] [i_3 + 1])) ? (((/* implicit */int) var_8)) : (var_1)))) ^ (max((((/* implicit */unsigned int) var_3)), (var_14)))))) + (min((min((arr_3 [i_1] [i_2]), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1])))), (((/* implicit */unsigned long long int) arr_13 [i_0] [i_1 - 1] [i_0] [i_2 + 2] [i_3])))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 21; i_4 += 1) 
                {
                    for (short i_5 = 2; i_5 < 19; i_5 += 4) 
                    {
                        {
                            var_22 = min((((/* implicit */unsigned long long int) var_6)), (((((/* implicit */_Bool) arr_2 [i_0] [i_4])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_0]))))));
                            arr_22 [(_Bool)1] [i_1 + 1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) arr_9 [15LL] [i_1] [i_0]);
                            var_23 = ((/* implicit */unsigned int) max((arr_16 [i_1] [i_1]), (((/* implicit */int) ((short) var_9)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 ^= ((/* implicit */unsigned short) var_3);
}
