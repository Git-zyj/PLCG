/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53617
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_15 = ((/* implicit */int) ((signed char) arr_1 [10U]));
                    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)224)) || (((/* implicit */_Bool) 0ULL))))) : ((((+(((/* implicit */int) var_9)))) >> (((((/* implicit */int) (unsigned short)65312)) - (65291)))))));
                    arr_8 [(unsigned short)3] [i_1] [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)-120)), ((-(((/* implicit */int) arr_5 [i_1 + 1] [i_1 + 1]))))));
                }
                for (signed char i_3 = 3; i_3 < 15; i_3 += 4) 
                {
                    arr_12 [2ULL] [i_3] = ((/* implicit */long long int) max((2319391362U), (((/* implicit */unsigned int) (short)-9899))));
                    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) min((((/* implicit */unsigned int) (short)6892)), (min((((unsigned int) (short)-3406)), (((/* implicit */unsigned int) (signed char)-120)))))))));
                }
                /* vectorizable */
                for (unsigned int i_4 = 0; i_4 < 16; i_4 += 4) 
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 16; i_5 += 4) 
                    {
                        for (short i_6 = 0; i_6 < 16; i_6 += 4) 
                        {
                            {
                                var_18 = arr_4 [(unsigned short)6] [i_1] [0];
                                arr_21 [i_0] [i_1 + 1] [1LL] [i_4] [i_5] [i_6] = ((((/* implicit */_Bool) arr_5 [i_1 + 1] [i_1 + 1])) ? (((long long int) var_11)) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1]))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */_Bool) ((unsigned short) arr_14 [i_1 + 1] [13LL] [i_4]));
                    var_20 = ((/* implicit */short) (+(((/* implicit */int) arr_6 [i_0] [1LL] [i_1 + 1] [i_0]))));
                    arr_22 [i_4] [i_1] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)119))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 4) 
                {
                    for (long long int i_8 = 0; i_8 < 16; i_8 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (short i_9 = 0; i_9 < 16; i_9 += 3) 
                            {
                                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) var_8))));
                                arr_31 [(unsigned char)10] = ((/* implicit */int) max((min((((/* implicit */unsigned int) arr_18 [i_1] [i_1 + 1] [i_7])), (arr_25 [i_0]))), (((/* implicit */unsigned int) var_12))));
                                var_22 = ((/* implicit */signed char) ((((unsigned long long int) min((-5657631056550948655LL), (((/* implicit */long long int) (unsigned short)4266))))) >> (((var_8) + (1357037073)))));
                                var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) max((((/* implicit */unsigned long long int) var_11)), (18446744073707454464ULL))))));
                                var_24 = ((/* implicit */int) arr_25 [(unsigned short)13]);
                            }
                            var_25 = ((/* implicit */signed char) -1712188672);
                            var_26 = ((/* implicit */long long int) ((((_Bool) min((var_0), (((/* implicit */long long int) arr_17 [(short)0] [i_8]))))) ? (((/* implicit */unsigned long long int) (~(((unsigned int) var_14))))) : (max((0ULL), (((/* implicit */unsigned long long int) ((int) -5657631056550948655LL)))))));
                            var_27 = ((/* implicit */short) ((signed char) var_7));
                            var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_14), (var_11)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (short)15)), ((unsigned short)65311)))) : ((+(((/* implicit */int) min((((/* implicit */unsigned short) var_9)), (var_2))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_29 = ((/* implicit */unsigned short) ((13) / (((/* implicit */int) (short)6884))));
    var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) var_11)) : (var_10)));
    var_31 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((short) var_3)))));
}
