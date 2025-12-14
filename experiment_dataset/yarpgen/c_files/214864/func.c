/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214864
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        arr_3 [i_0] = (-(978247906U));
        var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) (-(-1LL))))));
        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) -1175691101134534654LL))));
        var_16 = ((/* implicit */int) ((((int) arr_0 [i_0 + 2])) != (arr_0 [i_0 - 2])));
    }
    for (long long int i_1 = 1; i_1 < 23; i_1 += 1) 
    {
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_5 [i_1 + 1])))) ? (((arr_4 [i_1]) | (arr_4 [i_1]))) : (((/* implicit */long long int) ((arr_5 [i_1 + 1]) % (arr_5 [i_1 + 1]))))));
        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((((((/* implicit */_Bool) arr_5 [i_1 - 1])) ? (arr_4 [2]) : (arr_4 [10LL]))) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (var_3) : (var_3)))) >= (arr_4 [0]))))))))));
        /* LoopSeq 1 */
        for (long long int i_2 = 1; i_2 < 23; i_2 += 1) 
        {
            var_19 = ((/* implicit */int) ((arr_4 [i_1]) / (((((/* implicit */long long int) arr_5 [i_1 + 1])) % (arr_4 [i_1])))));
            var_20 += ((/* implicit */unsigned int) ((((arr_8 [22U] [i_1] [i_1 - 1]) / (arr_8 [22] [i_1] [i_1 - 1]))) >= (((((/* implicit */_Bool) arr_7 [i_1 - 1] [i_2 - 1] [i_2 - 1])) ? (((/* implicit */long long int) arr_7 [i_2] [i_2 - 1] [5])) : (-1175691101134534654LL)))));
            var_21 = arr_6 [i_1] [i_1] [i_2];
            var_22 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) var_11)) == (((((/* implicit */_Bool) 1175691101134534654LL)) ? (1175691101134534653LL) : (1175691101134534653LL))))))) > (((((((/* implicit */_Bool) -1175691101134534653LL)) ? (-1175691101134534654LL) : (((/* implicit */long long int) arr_7 [i_1] [i_2 + 1] [i_2])))) / (max((var_0), (((/* implicit */long long int) arr_7 [0] [i_2] [i_2]))))))));
        }
    }
    for (int i_3 = 0; i_3 < 19; i_3 += 3) 
    {
        arr_13 [i_3] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((arr_9 [18]) != (arr_9 [0])))), (max((((/* implicit */long long int) arr_9 [6LL])), (-1175691101134534656LL)))));
        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) max((-1175691101134534655LL), (1175691101134534656LL))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_4 = 0; i_4 < 19; i_4 += 3) 
        {
            /* LoopNest 2 */
            for (int i_5 = 2; i_5 < 17; i_5 += 4) 
            {
                for (int i_6 = 0; i_6 < 19; i_6 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (long long int i_7 = 4; i_7 < 18; i_7 += 3) 
                        {
                            var_24 = var_2;
                            var_25 ^= ((/* implicit */int) (~((-(-1175691101134534656LL)))));
                        }
                        var_26 = ((/* implicit */int) ((unsigned int) arr_23 [i_3] [i_3] [i_4] [i_4] [i_6]));
                        var_27 = (+(var_3));
                    }
                } 
            } 
            var_28 = ((/* implicit */int) ((((/* implicit */long long int) arr_18 [i_3])) != (((long long int) -1175691101134534655LL))));
        }
        var_29 = ((/* implicit */long long int) min((((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) var_11)) : (arr_16 [i_3]))) != (((((/* implicit */_Bool) 1175691101134534656LL)) ? (-1175691101134534648LL) : (((/* implicit */long long int) var_6)))))), (((((/* implicit */_Bool) arr_7 [i_3] [i_3] [i_3])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_16 [14]) : (arr_17 [i_3] [i_3] [i_3]))))))));
        var_30 = ((/* implicit */int) ((-1175691101134534675LL) ^ (arr_11 [i_3])));
    }
    var_31 &= ((/* implicit */unsigned int) min((var_12), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((int) var_1))) : (var_0)))));
    var_32 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (max((var_10), (((/* implicit */long long int) var_11)))) : (((((((/* implicit */long long int) var_7)) & (var_13))) ^ (((/* implicit */long long int) (~(var_8))))))));
    var_33 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((var_7) > (var_9))))) != (((((/* implicit */_Bool) var_11)) ? (max((((/* implicit */long long int) var_11)), (-1175691101134534671LL))) : (var_0)))));
    var_34 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */long long int) var_7)) == (-1175691101134534663LL))) || (((/* implicit */_Bool) max((var_13), (1175691101134534645LL)))))))) / (min(((+(1175691101134534648LL))), (((/* implicit */long long int) var_8))))));
}
