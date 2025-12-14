/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232822
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
    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) && (((/* implicit */_Bool) var_10))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 8; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_1])) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))))), (((unsigned int) (+(((/* implicit */int) (signed char)77)))))));
                var_13 ^= ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_1 + 3] [i_1 + 3] [i_1 - 1])) | (((/* implicit */int) min((((/* implicit */short) var_9)), (arr_2 [i_1 + 3] [i_1] [i_1]))))));
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 9; i_2 += 2) 
                {
                    for (long long int i_3 = 4; i_3 < 9; i_3 += 3) 
                    {
                        {
                            arr_10 [i_3] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) (+(min(((-(4294967295U))), (((/* implicit */unsigned int) (signed char)127))))));
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (long long int i_4 = 2; i_4 < 10; i_4 += 3) 
                            {
                                arr_13 [(signed char)6] [(signed char)6] [5ULL] [i_2] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_1)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_2] [8ULL] [(unsigned short)2])) ? (arr_5 [i_0] [5ULL] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [(short)6] [i_2] [i_3] [i_4]))))))));
                                var_14 = ((/* implicit */_Bool) min((var_14), ((!(((/* implicit */_Bool) arr_11 [i_3 + 2] [i_4 - 1]))))));
                            }
                            for (unsigned short i_5 = 0; i_5 < 11; i_5 += 3) 
                            {
                                var_15 = ((/* implicit */short) ((((/* implicit */int) arr_7 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_2 + 1] [i_2 - 1] [i_3 - 1])) <= ((-(((/* implicit */int) arr_7 [i_1 + 3] [i_1 + 3] [i_1 + 3] [i_2 + 2] [i_2 + 1] [i_3 - 1]))))));
                                var_16 = arr_5 [i_2 + 1] [i_1] [i_1];
                            }
                            for (signed char i_6 = 4; i_6 < 8; i_6 += 2) 
                            {
                                var_17 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) -1473103453553207467LL)))))))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_10)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) % (arr_0 [i_0] [i_0])))))));
                                var_18 = ((/* implicit */signed char) max((((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_2] [(unsigned short)8]))))) < (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_2 [i_0] [i_0] [i_6]))))))), (((unsigned short) arr_11 [i_3 - 4] [i_2]))));
                                arr_21 [i_2] [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                                arr_22 [i_0] [i_1] [i_2] [i_3] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)51103)) ? (((/* implicit */int) ((arr_19 [i_3 + 1] [i_2 + 1] [i_1 + 1] [i_1 + 1] [10U]) != (((/* implicit */int) var_5))))) : (((/* implicit */int) (unsigned short)0))));
                                arr_23 [i_0] [i_2] [i_2] = ((/* implicit */long long int) ((unsigned char) arr_12 [i_2 - 1] [i_1] [i_2] [i_2 - 1] [i_1 + 3]));
                            }
                            var_19 = ((/* implicit */long long int) ((min((arr_17 [i_2] [i_2]), (min((arr_19 [i_0] [10U] [i_0] [i_0] [i_0]), (((/* implicit */int) arr_6 [i_0] [i_2] [i_2])))))) != (((/* implicit */int) var_6))));
                            var_20 |= ((/* implicit */signed char) min((((/* implicit */int) (unsigned short)7072)), (min((min((123186248), (-123186248))), ((+(arr_11 [i_2 + 2] [i_0])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 *= ((/* implicit */short) (~((-(((/* implicit */int) (signed char)28))))));
    var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) var_7))));
}
