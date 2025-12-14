/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40719
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
    var_15 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) min((var_14), (((/* implicit */unsigned long long int) var_6))))) ? (var_3) : (((/* implicit */int) var_0)))), (((/* implicit */int) (!(((/* implicit */_Bool) 506203748)))))));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_0 [i_0 + 2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_12), (((/* implicit */unsigned short) var_10)))))) : (((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (arr_0 [i_0 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
        var_17 = ((/* implicit */int) max((var_17), ((-((((+(-506203749))) / (((/* implicit */int) ((signed char) arr_2 [(signed char)7])))))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 3; i_1 < 23; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 22; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */int) var_8);
                    var_19 = ((/* implicit */int) arr_6 [i_1]);
                    arr_10 [12] [(signed char)8] |= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((max((((/* implicit */int) arr_2 [i_0])), (arr_5 [12LL] [i_1] [(_Bool)1]))), (((/* implicit */int) arr_1 [i_0 - 1]))))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_4 [i_0 - 1] [i_0 + 1] [i_1 + 2])))));
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 1; i_3 < 23; i_3 += 4) 
                    {
                        arr_13 [i_1] [i_1] [i_3] [i_3] [(signed char)2] [i_0] = ((/* implicit */signed char) ((int) (~(arr_5 [i_0] [i_1] [i_1]))));
                        var_20 ^= ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) var_6))) <= (((/* implicit */int) var_1))));
                    }
                    for (signed char i_4 = 0; i_4 < 25; i_4 += 3) 
                    {
                        arr_17 [i_4] [i_4] [i_4] [i_4] [i_1] = (+(506203748));
                        arr_18 [i_2 + 3] [i_1] [i_2] = ((/* implicit */short) (-(((/* implicit */int) ((1472654751) >= (1472654751))))));
                        var_21 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */int) arr_9 [i_1] [i_0 + 2] [i_0])), ((+(arr_5 [(unsigned short)12] [i_1] [(_Bool)1]))))))));
                        arr_19 [i_1] [i_1] [i_1] [i_1 - 2] [i_1] [i_1] = ((/* implicit */int) min((max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) % (arr_7 [i_4]))), (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [(signed char)24]))));
                    }
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        var_22 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_21 [i_2 + 3] [1LL] [i_5])), (max((((/* implicit */long long int) var_3)), (var_5)))))) ^ ((+((~(var_14)))))));
                        var_23 = ((/* implicit */unsigned long long int) arr_22 [i_1] [(_Bool)1] [i_1] [i_1]);
                        var_24 = ((/* implicit */short) arr_8 [i_2] [i_1]);
                        var_25 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) - (-506203749)));
                    }
                }
            } 
        } 
    }
    var_26 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (~(min((((/* implicit */int) (_Bool)0)), (var_3)))))) == (max((((var_5) ^ (((/* implicit */long long int) ((/* implicit */int) var_0))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (3384416553U))))))));
}
