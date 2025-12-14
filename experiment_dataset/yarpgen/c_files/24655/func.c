/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24655
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            var_13 = (+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_0 [i_1] [(_Bool)1])) : (((/* implicit */int) var_9)))));
            var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_1])) ? (arr_3 [i_1] [i_0] [i_1]) : (arr_3 [i_1] [(_Bool)1] [i_1])));
            var_15 &= ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
        }
        for (unsigned int i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_3 = 0; i_3 < 18; i_3 += 1) 
            {
                for (signed char i_4 = 3; i_4 < 17; i_4 += 3) 
                {
                    {
                        var_16 += ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) (signed char)57)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)74))) : (-5379483503576635162LL))));
                        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_4 - 3])) ? (((/* implicit */int) arr_11 [i_4] [i_4] [i_4 - 2] [i_3] [i_3] [i_4 - 2])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_3] [i_2] [i_3])) || (((/* implicit */_Bool) (signed char)-18)))))))) ? (((((arr_10 [i_0] [i_0]) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) <= (arr_6 [i_2] [(_Bool)1] [i_4 - 1]))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)254))))) ? ((+(arr_6 [i_0] [16] [i_3]))) : (arr_13 [i_4 - 2] [i_4 - 2] [1U] [(signed char)4] [i_4 - 1] [i_4 - 3])))));
                    }
                } 
            } 
            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (+((+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)16)))))))))));
            var_19 = ((/* implicit */signed char) min((var_19), (arr_5 [i_0] [i_2] [i_2])));
            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2] [i_0])) ? (min((3098845007U), (((/* implicit */unsigned int) (signed char)-127)))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)0)))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_10 [i_0] [i_2]))))) : (((/* implicit */int) var_7))));
        }
        for (unsigned int i_5 = 0; i_5 < 18; i_5 += 1) 
        {
            var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min(((-(arr_7 [i_0] [i_5] [i_0]))), (((/* implicit */unsigned int) var_7)))))));
            var_22 ^= ((/* implicit */short) (~((+(((/* implicit */int) arr_0 [i_5] [i_0]))))));
            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_15 [i_0] [(unsigned char)13] [(unsigned char)13])))))));
            var_24 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))));
            arr_17 [(signed char)7] [i_5] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_4 [i_0] [4U] [i_0])))) ? (((/* implicit */long long int) 2694526748U)) : (((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) arr_12 [i_0] [(unsigned char)4] [i_5] [i_5])) : ((-9223372036854775807LL - 1LL))))));
        }
        var_25 = ((/* implicit */unsigned char) (~(var_2)));
        var_26 = ((/* implicit */unsigned char) (~((-(((((/* implicit */int) arr_0 [(unsigned char)5] [i_0])) >> (((((/* implicit */int) var_10)) - (26251)))))))));
        arr_18 [9ULL] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4U)) ? (((/* implicit */int) (unsigned char)237)) : (((/* implicit */int) var_0))))) ? ((-(var_2))) : (var_4))))));
    }
    var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 5186131525704256978LL)) ? (18U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-18458)))));
    var_28 = ((/* implicit */unsigned short) var_0);
    var_29 = ((((/* implicit */unsigned long long int) max((((/* implicit */int) var_1)), ((+(((/* implicit */int) var_10))))))) ^ ((-(((var_2) >> (((((/* implicit */int) var_12)) - (6243))))))));
}
