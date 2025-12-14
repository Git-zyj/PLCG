/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4450
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
    var_15 += ((/* implicit */_Bool) var_11);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned char) min((var_16), (var_1)));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (short)10354))));
            /* LoopSeq 1 */
            for (long long int i_2 = 4; i_2 < 20; i_2 += 4) 
            {
                var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_2] [i_2 + 1] [i_0])))))));
                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (~(var_11))))));
            }
            var_20 += ((/* implicit */unsigned long long int) arr_5 [i_1] [i_0]);
        }
        for (short i_3 = 3; i_3 < 21; i_3 += 3) 
        {
            var_21 += ((/* implicit */long long int) arr_1 [12LL]);
            /* LoopNest 3 */
            for (long long int i_4 = 0; i_4 < 23; i_4 += 1) 
            {
                for (short i_5 = 4; i_5 < 22; i_5 += 3) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_22 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) / (((/* implicit */int) arr_13 [(short)12] [i_3] [i_4]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_5 + 1] [i_3 + 1]))) : (((((/* implicit */_Bool) var_14)) ? (17695464653673365715ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_6] [i_4] [i_0] [i_4] [i_3 - 1] [i_0])))))));
                            var_23 += ((/* implicit */long long int) arr_15 [i_0] [i_0] [i_0] [i_0] [(_Bool)1]);
                            var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (-(((/* implicit */int) arr_2 [i_3 - 3] [i_3 - 3] [i_3 - 2])))))));
                            var_25 += ((/* implicit */_Bool) var_8);
                        }
                    } 
                } 
            } 
            var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) (-(((/* implicit */int) arr_1 [4LL])))))));
            /* LoopNest 3 */
            for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 3) 
            {
                for (unsigned long long int i_8 = 1; i_8 < 21; i_8 += 1) 
                {
                    for (short i_9 = 3; i_9 < 20; i_9 += 2) 
                    {
                        {
                            var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) (+(((((/* implicit */_Bool) arr_4 [i_7])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2)))))))));
                            var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_10))) | (((/* implicit */unsigned long long int) (-(var_7)))))))));
                            var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_3 + 1] [i_8 - 1])) ? (var_11) : ((((_Bool)1) ? (-2779256984892269268LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
                        }
                    } 
                } 
            } 
            var_30 += ((/* implicit */unsigned long long int) ((var_2) ? (((/* implicit */int) arr_25 [(short)8] [i_0] [i_3 + 1] [i_3] [i_3 - 1] [i_3 + 2])) : (((/* implicit */int) arr_25 [18LL] [i_3] [i_3] [i_3] [i_3] [i_0]))));
        }
        var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_19 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_6)))))));
    }
}
