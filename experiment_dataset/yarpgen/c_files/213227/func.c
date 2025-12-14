/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213227
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
    for (long long int i_0 = 4; i_0 < 22; i_0 += 3) /* same iter space */
    {
        var_17 -= ((signed char) var_7);
        var_18 = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) max(((signed char)7), (((/* implicit */signed char) (_Bool)1))))))))));
        var_19 = var_9;
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (!(((((/* implicit */int) arr_0 [i_0 - 3])) == (((/* implicit */int) arr_0 [i_0 - 3])))))))));
    }
    for (long long int i_1 = 4; i_1 < 22; i_1 += 3) /* same iter space */
    {
        arr_8 [i_1] &= ((/* implicit */signed char) arr_5 [(signed char)18]);
        var_21 = ((/* implicit */int) ((unsigned short) min((((arr_6 [i_1]) ? (arr_2 [i_1]) : (((/* implicit */long long int) 536870912)))), ((~(var_13))))));
    }
    /* LoopSeq 1 */
    for (signed char i_2 = 0; i_2 < 14; i_2 += 3) 
    {
        var_22 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 0LL)) ? ((+(((unsigned int) (signed char)0)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [8LL])))));
        arr_11 [(_Bool)1] &= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((2474411051512633469LL) / (var_16))) / (arr_2 [i_2]))))));
        arr_12 [i_2] = ((/* implicit */signed char) (-((+(min((88595475), (((/* implicit */int) (_Bool)1))))))));
        /* LoopNest 3 */
        for (long long int i_3 = 0; i_3 < 14; i_3 += 3) 
        {
            for (signed char i_4 = 2; i_4 < 11; i_4 += 4) 
            {
                for (signed char i_5 = 0; i_5 < 14; i_5 += 4) 
                {
                    {
                        arr_19 [i_2] [i_2] [i_2] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) + (((/* implicit */int) arr_17 [i_4] [i_4 - 1] [i_2] [i_5] [i_5]))))) ? (((((/* implicit */_Bool) -8926667404213678582LL)) ? (0LL) : (((/* implicit */long long int) 523292477U)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1658435194))))))));
                        var_23 -= ((/* implicit */int) ((unsigned int) arr_15 [i_5]));
                        arr_20 [i_2] [i_2] [i_2] [i_5] = ((/* implicit */_Bool) (-((-(((/* implicit */int) arr_17 [i_2] [i_2] [i_2] [i_2] [i_2]))))));
                        /* LoopSeq 2 */
                        for (int i_6 = 2; i_6 < 13; i_6 += 3) 
                        {
                            var_24 ^= ((/* implicit */long long int) var_5);
                            arr_23 [i_2] [i_2] [i_5] = ((/* implicit */signed char) arr_13 [i_5] [i_6]);
                        }
                        for (signed char i_7 = 1; i_7 < 13; i_7 += 4) 
                        {
                            arr_26 [5LL] [i_2] [5LL] = ((/* implicit */signed char) max((((/* implicit */long long int) (~((~(((/* implicit */int) (signed char)-7))))))), (var_14)));
                            var_25 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)15593))));
                            var_26 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) 4194300U)) ? (0LL) : (2474411051512633469LL))) * (((/* implicit */long long int) (~(arr_21 [3LL] [3LL] [i_5] [i_7])))))))));
                            var_27 = ((/* implicit */unsigned int) (-((-(((/* implicit */int) arr_22 [i_2] [i_3] [i_4] [i_5] [i_2]))))));
                        }
                    }
                } 
            } 
        } 
    }
}
