/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23402
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
    var_10 = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (((unsigned int) var_7))))) ? (((/* implicit */int) min(((unsigned char)1), (((/* implicit */unsigned char) (signed char)67))))) : (((/* implicit */int) var_5)));
    var_11 = ((/* implicit */unsigned char) ((signed char) (_Bool)1));
    var_12 = ((/* implicit */unsigned int) (_Bool)1);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_4))) ^ (max((((/* implicit */long long int) arr_1 [i_0] [i_0])), (9222948146614399601LL)))))) ? ((+(((((/* implicit */_Bool) (unsigned char)18)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))) : ((-(((/* implicit */int) ((((/* implicit */int) var_6)) >= (((/* implicit */int) var_9))))))))))));
                arr_4 [i_0] [i_0] = ((/* implicit */int) var_2);
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 9; i_2 += 3) 
                {
                    for (long long int i_3 = 1; i_3 < 7; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (long long int i_4 = 4; i_4 < 8; i_4 += 2) 
                            {
                                var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) arr_8 [i_4 - 3] [i_3 + 2] [i_2 - 1] [i_3]))));
                                arr_12 [5] [5] [i_2] [5] [i_2] [i_2] [5] = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) (_Bool)1))) != (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_0 [i_2 + 1])) : (((/* implicit */int) arr_0 [i_2 + 1]))))));
                            }
                            /* vectorizable */
                            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                            {
                                var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) (((((_Bool)1) || ((_Bool)1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_14 [i_0] [i_1] [i_5] [i_3])))) : ((+(18446744073709551609ULL))))))));
                                var_16 = ((/* implicit */long long int) var_9);
                                var_17 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)249))));
                            }
                            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) max((((/* implicit */long long int) var_7)), (var_3))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 7119410665045569174LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (3295480809U)))));
}
