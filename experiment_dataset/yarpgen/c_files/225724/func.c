/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225724
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 9; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) max((var_18), ((~(((((/* implicit */_Bool) max((504403158265495552LL), (((/* implicit */long long int) (signed char)-63))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)13))) % (var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))))));
                    arr_10 [i_2] [i_0] [i_1] [i_2] = ((/* implicit */long long int) arr_3 [i_0]);
                    var_19 |= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) + (((((/* implicit */_Bool) (-(var_12)))) ? (((/* implicit */unsigned long long int) max((4081392029U), (((/* implicit */unsigned int) (_Bool)1))))) : (max((((/* implicit */unsigned long long int) var_11)), (var_6)))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned short i_3 = 1; i_3 < 8; i_3 += 1) 
        {
            var_20 += ((/* implicit */_Bool) (signed char)-13);
            arr_13 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_3)), (var_5)))) ? ((-(arr_9 [i_3] [0LL] [0LL] [i_3 + 2]))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
        }
        /* vectorizable */
        for (int i_4 = 1; i_4 < 8; i_4 += 4) 
        {
            arr_16 [i_0] [i_0] [i_0] = ((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) arr_7 [i_0] [i_0] [i_0])));
            var_21 = ((/* implicit */signed char) (~(((/* implicit */int) ((arr_6 [i_0] [i_0] [i_4] [i_4]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0]))))))));
        }
    }
    for (unsigned short i_5 = 2; i_5 < 22; i_5 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_6 = 2; i_6 < 22; i_6 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (long long int i_8 = 0; i_8 < 24; i_8 += 3) 
                {
                    {
                        arr_26 [i_5] [i_5] [i_6] [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)15))))) ? (((/* implicit */int) arr_24 [i_5])) : (((/* implicit */int) ((((/* implicit */int) var_0)) >= (((/* implicit */int) arr_18 [i_5] [i_7]))))))))));
                        var_22 = ((unsigned int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)32)) : ((-2147483647 - 1))))), (((((/* implicit */_Bool) arr_24 [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_11)))));
                        arr_27 [16ULL] [i_6] [i_7] [i_6] [i_7] [i_8] &= ((/* implicit */int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_19 [(signed char)0]) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))))), ((~((-(arr_22 [(_Bool)1] [(_Bool)1])))))));
                        /* LoopSeq 1 */
                        for (signed char i_9 = 1; i_9 < 22; i_9 += 3) 
                        {
                            var_23 *= ((/* implicit */unsigned long long int) var_14);
                            var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) (~(min(((~(8886441974857147945ULL))), (((/* implicit */unsigned long long int) arr_20 [(_Bool)1] [(_Bool)1] [20])))))))));
                        }
                        var_25 = arr_21 [i_8];
                    }
                } 
            } 
            arr_31 [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 9223372036854775807LL)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) var_0)) : (2064384))))))) ? (((/* implicit */int) ((signed char) arr_25 [i_5] [i_5]))) : (((var_14) ? (((/* implicit */int) arr_28 [i_5] [i_5] [i_6] [i_6] [i_6 + 1])) : (((/* implicit */int) arr_28 [i_6] [i_5] [(_Bool)1] [i_5 + 2] [i_5]))))));
        }
        arr_32 [i_5] [i_5] = ((/* implicit */unsigned short) ((((var_5) != (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_5 - 1] [i_5] [14LL] [i_5] [i_5 + 2]))))) ? (((/* implicit */int) min((arr_28 [i_5 - 1] [i_5] [i_5] [i_5 + 2] [i_5]), (arr_28 [i_5 + 1] [i_5] [i_5 - 1] [i_5] [i_5])))) : (((arr_28 [i_5] [i_5] [i_5] [i_5] [i_5 + 2]) ? (((/* implicit */int) arr_28 [i_5] [i_5] [i_5] [i_5 + 2] [i_5 - 2])) : (((/* implicit */int) arr_28 [i_5] [i_5] [i_5 - 2] [i_5] [i_5]))))));
    }
    var_26 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_8))));
    var_27 = ((/* implicit */signed char) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) * (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) 6345926592140901231LL)) : (var_1)))))));
}
