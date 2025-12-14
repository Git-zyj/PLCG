/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48023
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
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((var_10) ^ (((/* implicit */int) var_4))))))) ? (((/* implicit */long long int) (-((+(3166893247U)))))) : ((~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) var_10)) : (-5624075038766376154LL)))))));
    var_16 *= max((max((((/* implicit */unsigned int) var_2)), (((var_12) + (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -5624075038766376154LL)) ? (var_9) : (((/* implicit */unsigned long long int) var_0))))) ? (((/* implicit */int) var_4)) : (var_2)))));
    var_17 = min((((/* implicit */unsigned long long int) var_4)), (max((((/* implicit */unsigned long long int) var_8)), (var_9))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */signed char) arr_2 [i_0]);
                arr_5 [i_0] = ((/* implicit */int) ((arr_1 [i_0]) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_1] [i_0]))))) : (((((unsigned int) arr_2 [i_0])) << (((((long long int) -319428771810610794LL)) + (319428771810610807LL)))))));
                arr_6 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((max((((/* implicit */unsigned long long int) arr_0 [i_0] [i_1])), (var_9))) > (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_0 [i_0] [i_1]), (((/* implicit */unsigned char) arr_1 [(_Bool)1])))))))))) <= (max((((((/* implicit */_Bool) 5624075038766376154LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-31974))) : (2883290063U))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_6)))))))));
                /* LoopSeq 2 */
                for (short i_2 = 2; i_2 < 22; i_2 += 1) 
                {
                    arr_9 [i_2] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_11))));
                    var_18 = ((/* implicit */unsigned long long int) ((((max((arr_8 [i_1] [i_2 - 2] [i_2] [i_1]), (arr_8 [i_0] [i_2 - 2] [i_2] [i_1]))) + (2147483647))) << (((((min((arr_8 [i_0] [i_2 - 2] [(unsigned char)22] [i_1]), (arr_8 [i_0] [i_2 + 1] [8] [i_0]))) + (1690106147))) - (17)))));
                }
                for (unsigned int i_3 = 0; i_3 < 23; i_3 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 23; i_4 += 2) 
                    {
                        for (unsigned int i_5 = 3; i_5 < 22; i_5 += 3) 
                        {
                            {
                                arr_19 [(short)11] [(short)11] [(short)11] [i_3] [i_3] [(unsigned char)13] [12LL] = ((/* implicit */unsigned char) arr_15 [i_0] [i_1] [i_3] [i_5 - 2] [i_5 - 2]);
                                arr_20 [i_3] [i_3] [i_5] = 1411677234U;
                                var_19 = ((/* implicit */signed char) var_10);
                            }
                        } 
                    } 
                    arr_21 [i_0] [i_1] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */unsigned int) max((((/* implicit */int) (short)-31974)), (var_7)))) + (555627601U)))) - (((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)156))))) + (5624075038766376154LL)))));
                }
            }
        } 
    } 
}
