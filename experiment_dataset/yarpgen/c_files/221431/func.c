/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221431
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3046348464U)) ? (18257507002593457373ULL) : (((/* implicit */unsigned long long int) 1248618832U))));
    var_15 = ((/* implicit */unsigned int) max((var_15), (((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_7)))))) != (max((var_9), (((/* implicit */long long int) (unsigned short)6591)))))))));
    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((((/* implicit */_Bool) min(((-(var_9))), (((/* implicit */long long int) ((unsigned short) var_3)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (min((((((/* implicit */_Bool) var_12)) ? (11968189222835810393ULL) : (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) var_13)))))))))));
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) max((var_10), (var_10)))) ? (min((((/* implicit */long long int) var_2)), (var_9))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) 3046348464U)) : (var_9))))) : (((/* implicit */long long int) var_8))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        {
                            var_18 = arr_2 [i_0] [i_0];
                            var_19 -= ((/* implicit */unsigned int) var_5);
                        }
                    } 
                } 
                arr_11 [i_0] [14] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((min((var_9), (((/* implicit */long long int) arr_10 [i_0] [i_0] [i_0] [i_0])))) ^ (((/* implicit */long long int) 4294967287U)))) : (max((((/* implicit */long long int) var_13)), (var_9)))));
                /* LoopNest 2 */
                for (unsigned int i_4 = 2; i_4 < 17; i_4 += 3) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        {
                            var_20 = min((min((arr_12 [2U] [(signed char)14] [i_4]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9U)) ? (((/* implicit */long long int) var_8)) : (var_9)))))), (((/* implicit */unsigned long long int) (-(max((var_8), (((/* implicit */unsigned int) arr_1 [i_0]))))))));
                            arr_17 [6U] [i_1] [i_4] [i_4] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (var_4)))) ? (18090143488020657301ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 6707166666680558001ULL))))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967263U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_3)))) ? (2803445186U) : (arr_15 [i_0] [i_1] [(unsigned short)17] [i_1])))));
                            arr_18 [(unsigned char)13] [i_0] [(unsigned char)13] [i_4] [i_5] = (~(4294967287U));
                        }
                    } 
                } 
                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((unsigned long long int) (~(min((((/* implicit */int) var_13)), (var_6)))))))));
                var_22 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(unsigned char)12] [i_0] [i_0]))) : (var_3)))) ? (((((/* implicit */_Bool) 18090143488020657298ULL)) ? (1248618827U) : (4294967290U))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_3 [i_0] [i_0] [i_1])), (arr_14 [i_0] [i_1])))))));
            }
        } 
    } 
}
