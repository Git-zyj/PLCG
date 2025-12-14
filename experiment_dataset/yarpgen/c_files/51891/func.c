/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51891
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
    var_19 = var_14;
    var_20 = ((/* implicit */_Bool) ((int) ((((/* implicit */unsigned int) ((/* implicit */int) min((var_11), (((/* implicit */signed char) var_16)))))) + (((unsigned int) 2757880706U)))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)18)) || (((/* implicit */_Bool) (signed char)82)))))) >= (((unsigned int) arr_2 [i_0]))));
        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) min(((_Bool)1), (arr_2 [8]))))))) ? (min((min((((/* implicit */int) arr_1 [i_0])), (1478427369))), (((/* implicit */int) max((arr_0 [(unsigned char)3]), (((/* implicit */unsigned char) arr_2 [i_0]))))))) : (((((/* implicit */int) ((((/* implicit */int) var_11)) < (((/* implicit */int) arr_0 [i_0]))))) << (((/* implicit */int) arr_0 [i_0]))))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_7 [i_1] [i_1] [i_1] = ((/* implicit */int) ((_Bool) ((_Bool) ((((/* implicit */int) arr_6 [i_0] [i_0])) + (((/* implicit */int) arr_4 [i_1]))))));
            /* LoopNest 3 */
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                for (short i_3 = 0; i_3 < 11; i_3 += 4) 
                {
                    for (int i_4 = 0; i_4 < 11; i_4 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned int) arr_2 [(short)10]);
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) ((unsigned char) arr_1 [(unsigned char)8])))) ? (min((min((var_3), (var_18))), (((((/* implicit */int) arr_5 [i_4] [i_1] [i_4])) - (((/* implicit */int) arr_11 [i_0] [i_0] [i_3] [i_3])))))) : ((+(((/* implicit */int) arr_10 [0U] [0U] [0] [i_3] [i_1]))))));
                        }
                    } 
                } 
            } 
            var_25 = var_16;
            /* LoopSeq 2 */
            for (signed char i_5 = 0; i_5 < 11; i_5 += 3) 
            {
                var_26 = ((/* implicit */signed char) arr_4 [i_1]);
                arr_16 [i_0] [i_0] [i_1] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) var_16))))) <= (min((arr_3 [i_1]), (((/* implicit */long long int) arr_15 [i_0] [i_1] [i_1] [i_5]))))))) / ((-(((/* implicit */int) arr_15 [i_5] [i_1] [i_1] [i_0]))))));
            }
            for (int i_6 = 0; i_6 < 11; i_6 += 1) 
            {
                var_27 = ((/* implicit */unsigned int) (+(((-1) - (((/* implicit */int) arr_9 [i_1] [i_1]))))));
                var_28 ^= ((/* implicit */unsigned int) (((~(((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_2))))) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0]))))) ? ((-(((/* implicit */int) (unsigned char)254)))) : (((/* implicit */int) min((((/* implicit */short) var_6)), (arr_6 [i_1] [i_1])))))))));
            }
            /* LoopSeq 1 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                var_29 = ((/* implicit */unsigned char) ((((int) ((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_0] [i_0])) || (((/* implicit */_Bool) arr_9 [i_1] [i_7]))))) != (min((((/* implicit */int) ((((/* implicit */int) (unsigned char)86)) >= (((/* implicit */int) arr_5 [i_0] [i_1] [i_1]))))), (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_19 [(signed char)5] [i_0] [i_1] [(signed char)5])) : (((/* implicit */int) arr_14 [(unsigned char)2] [i_0] [i_1]))))))));
                arr_21 [i_0] [i_1] [i_7] [i_7] = ((unsigned char) ((((/* implicit */_Bool) arr_18 [i_1] [i_1] [i_7] [i_7])) ? (((/* implicit */int) arr_18 [i_1] [i_1] [i_7] [i_7])) : (((/* implicit */int) arr_18 [i_1] [i_1] [i_1] [i_7]))));
            }
        }
        for (long long int i_8 = 2; i_8 < 9; i_8 += 3) 
        {
            arr_25 [i_0] [2LL] = ((/* implicit */unsigned int) (((-(((/* implicit */int) arr_6 [i_0] [i_0])))) <= (((((/* implicit */int) arr_0 [i_8 + 1])) - (((/* implicit */int) ((_Bool) arr_2 [i_0])))))));
            arr_26 [i_8] = ((/* implicit */unsigned char) arr_12 [i_8] [i_8] [i_8 + 2] [i_8]);
            arr_27 [i_8 + 2] = ((/* implicit */unsigned char) arr_1 [i_8]);
        }
        arr_28 [i_0] [(_Bool)1] = ((/* implicit */_Bool) arr_14 [i_0] [i_0] [0]);
        arr_29 [i_0] = ((arr_5 [i_0] [(unsigned char)0] [i_0]) ? ((-(((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [(unsigned char)3])))) : (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0]))))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0] [i_0])) ^ (((/* implicit */int) arr_4 [(unsigned char)8])))))))));
    }
}
