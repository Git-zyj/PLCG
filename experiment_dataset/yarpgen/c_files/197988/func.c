/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197988
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (-(min((arr_4 [(signed char)2] [i_1] [i_1]), (((/* implicit */unsigned int) arr_0 [i_1]))))));
                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) arr_3 [i_0] [i_1]))) ? (((/* implicit */int) max(((unsigned char)38), (((/* implicit */unsigned char) arr_0 [i_1]))))) : (min((((/* implicit */int) arr_0 [i_1])), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_15)) : (arr_3 [i_0] [i_1])))))));
                arr_6 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_2)) ? (arr_3 [10U] [i_1]) : (((/* implicit */int) (unsigned char)65)))), (((((/* implicit */int) (unsigned char)3)) & (((/* implicit */int) arr_2 [2] [2]))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) ((signed char) arr_1 [(_Bool)1] [i_0]))) ? (min((((/* implicit */unsigned int) (_Bool)1)), (arr_4 [2LL] [2LL] [i_0]))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) | (((/* implicit */int) var_11)))))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        {
                            arr_13 [i_0] [6] [i_2] [i_2] [(_Bool)1] = ((/* implicit */long long int) min(((~(((((/* implicit */int) var_15)) + (((/* implicit */int) var_15)))))), ((-(((((/* implicit */int) arr_0 [(signed char)3])) + (((/* implicit */int) (unsigned char)44))))))));
                            var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)-3)) : (var_2))) + (2147483647))) >> (((((/* implicit */int) ((unsigned char) var_7))) - (231)))))) : (max((((((/* implicit */_Bool) var_6)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)236))))), (((/* implicit */unsigned long long int) ((int) var_15))))))))));
                        }
                    } 
                } 
                var_18 &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (((/* implicit */int) ((arr_9 [i_1] [i_1] [(unsigned short)0]) <= (((/* implicit */long long int) ((/* implicit */int) (short)15599)))))) : (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (var_3))))))) ? (((/* implicit */int) (signed char)-11)) : (((/* implicit */int) arr_7 [i_0] [i_0])));
            }
        } 
    } 
    var_19 = ((/* implicit */short) var_13);
}
