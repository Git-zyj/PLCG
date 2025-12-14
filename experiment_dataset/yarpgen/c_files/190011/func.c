/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190011
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
    var_12 = ((/* implicit */unsigned short) ((max((((var_2) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1)))), (((/* implicit */int) var_2)))) - (((/* implicit */int) var_8))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned short) var_3);
                var_14 = ((/* implicit */unsigned short) var_1);
                var_15 ^= ((/* implicit */unsigned int) ((((arr_3 [i_1 + 1] [i_0 - 3]) >> (((arr_3 [i_1 - 1] [i_0 + 1]) - (1856681900))))) >> (((max((arr_3 [i_1 + 1] [i_0 - 3]), (arr_3 [i_1 - 1] [i_0 - 3]))) - (1856681873)))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    var_16 = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_3 [i_2] [i_1]) : (((/* implicit */int) var_9))))));
                    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0 + 2] [i_0 - 3])) ? (((/* implicit */int) arr_4 [i_0 - 3] [i_0 - 3])) : (((/* implicit */int) arr_4 [i_0 - 3] [i_0 - 3])))))));
                    var_18 = ((/* implicit */_Bool) max((var_18), (((((/* implicit */_Bool) arr_4 [i_1 + 2] [i_0 + 2])) && (((/* implicit */_Bool) arr_4 [i_1 + 1] [i_0 + 1]))))));
                }
                for (short i_3 = 0; i_3 < 20; i_3 += 3) 
                {
                    var_19 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11))));
                    var_20 = arr_1 [i_1];
                    arr_8 [i_0 - 3] [i_0 - 3] [4U] = ((/* implicit */int) ((unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_11))))))));
                }
                for (signed char i_4 = 1; i_4 < 16; i_4 += 3) 
                {
                    var_21 -= ((((/* implicit */_Bool) (~(((/* implicit */int) ((arr_10 [(_Bool)1] [i_1] [i_1 - 1] [(_Bool)1]) != (((/* implicit */int) var_2)))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_4), (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : ((~(var_6)))))));
                    var_22 = ((/* implicit */unsigned long long int) max((max((((/* implicit */int) arr_4 [i_1 + 1] [i_4 + 2])), ((-(((/* implicit */int) arr_2 [i_0 + 2] [i_0 + 2])))))), (((((/* implicit */_Bool) max((var_4), (arr_10 [i_0] [(_Bool)1] [(_Bool)1] [i_0 + 2])))) ? ((+(var_0))) : (arr_3 [i_1 - 1] [i_0 + 2])))));
                    /* LoopSeq 1 */
                    for (signed char i_5 = 3; i_5 < 18; i_5 += 2) 
                    {
                        arr_15 [(signed char)8] [i_4] [(signed char)8] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_11 [i_5] [i_4] [i_0] [i_0])) ? (arr_10 [i_0] [i_0] [i_4] [i_5]) : (var_4)))))) ? (min((max((((/* implicit */int) var_11)), (var_0))), (((((/* implicit */_Bool) var_7)) ? (var_5) : (var_5))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_4] [4U])) % (((/* implicit */int) var_8))))))))));
                        arr_16 [8] [10] [i_4 + 3] [i_5] [i_0] [i_5] |= ((/* implicit */signed char) min((((/* implicit */unsigned int) min((((/* implicit */int) arr_13 [i_5] [i_4 + 3] [i_4] [i_1 - 1] [i_0 - 1])), (((((/* implicit */int) arr_12 [i_5] [17U] [i_1 - 1] [i_0 + 1])) >> (((((/* implicit */int) arr_13 [i_5] [i_4] [i_5] [i_5] [i_0 - 1])) - (71)))))))), (((((unsigned int) arr_2 [i_4 + 1] [i_4 + 1])) - (((/* implicit */unsigned int) min((((/* implicit */int) arr_11 [i_5] [i_4] [i_1] [i_0])), (arr_10 [i_0] [i_1] [i_4] [i_0]))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_6 = 0; i_6 < 20; i_6 += 1) 
                        {
                            var_23 = ((/* implicit */int) arr_6 [i_1]);
                            arr_19 [i_0] [i_5] [(unsigned short)4] [i_0 + 2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_0 + 1])) > (((/* implicit */int) arr_6 [i_0 - 1]))));
                        }
                    }
                }
            }
        } 
    } 
}
