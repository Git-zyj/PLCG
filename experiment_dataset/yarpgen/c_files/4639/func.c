/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4639
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
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) var_9))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_14))));
    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((4294967295U), (((/* implicit */unsigned int) (_Bool)1))))) ? ((-(((/* implicit */int) var_6)))) : (((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) (-(var_11)))) ? (((long long int) var_3)) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))))));
    var_17 = var_13;
    var_18 = ((/* implicit */unsigned long long int) var_6);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */signed char) (+(min((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_2)))), (((/* implicit */int) arr_0 [i_0]))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (long long int i_4 = 0; i_4 < 12; i_4 += 1) 
                            {
                                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) arr_2 [i_0] [i_2] [i_3]))));
                                var_21 = ((/* implicit */_Bool) (+(arr_9 [i_0] [i_0] [i_0] [i_0])));
                            }
                            for (unsigned int i_5 = 4; i_5 < 10; i_5 += 1) 
                            {
                                var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4209109790623853014LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                                var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (~(((/* implicit */int) (_Bool)1)))))));
                                arr_16 [i_0] [i_0] [i_2] [i_2] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */signed char) arr_15 [i_5 - 1] [i_0] [i_5 - 3] [i_0] [i_5 + 1])), (arr_13 [i_5 + 1] [i_5 - 1] [i_5 - 1] [i_5 - 3] [i_5 - 4] [i_5 + 1])))) ? (((((/* implicit */_Bool) arr_13 [i_5 + 1] [i_5 - 1] [i_5 - 1] [i_5 - 3] [i_5 - 4] [i_5 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_10))) : (((long long int) 15U))));
                            }
                            /* LoopSeq 1 */
                            for (unsigned int i_6 = 1; i_6 < 11; i_6 += 1) 
                            {
                                var_24 -= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_0)), ((+(max((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) var_4))))))));
                                arr_20 [(unsigned short)5] [i_0] [i_0] [i_0] = ((/* implicit */short) (+((-(((/* implicit */int) (unsigned short)35101))))));
                                var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_11)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_0]))))) : (var_8)));
                            }
                            arr_21 [i_0] [i_1] [i_1] [i_0] [i_2] [i_3] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_17 [i_3] [i_0] [i_0] [i_0])))) ? (min((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */_Bool) arr_18 [i_0] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) : (var_8))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_2)))))))))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */short) max((7231146105268190159LL), (((/* implicit */long long int) (short)18060))));
                arr_22 [i_0] [11ULL] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_10 [i_0])))) ? (((/* implicit */int) var_2)) : (((arr_0 [i_0]) ? (arr_10 [(_Bool)1]) : (arr_10 [i_0])))));
            }
        } 
    } 
}
