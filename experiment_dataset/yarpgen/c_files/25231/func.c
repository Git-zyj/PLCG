/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25231
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                arr_4 [i_1] = ((/* implicit */unsigned short) max((((/* implicit */int) var_8)), ((-(((/* implicit */int) (unsigned short)0))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */short) (-(((/* implicit */int) (_Bool)1))));
                            var_20 = ((/* implicit */unsigned int) (-((+(((/* implicit */int) arr_2 [i_1] [i_1 + 1]))))));
                            /* LoopSeq 1 */
                            for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 1) 
                            {
                                var_21 = (signed char)30;
                                var_22 *= ((/* implicit */signed char) -1401475417818892241LL);
                                arr_14 [(signed char)5] [i_1 + 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)5)) - (((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)31020))) >= (arr_12 [i_4] [(_Bool)1] [i_4] [i_4] [i_4] [i_4] [i_4])))) : (((/* implicit */int) (_Bool)0))))) ? (((unsigned long long int) (unsigned short)31020)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22)))));
                                var_23 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((6ULL) > (arr_3 [i_0]))) ? (10ULL) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [i_0])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)34675))))) != (arr_12 [(unsigned short)20] [i_1 + 2] [(unsigned short)20] [i_3] [i_4] [i_3] [i_2]))))) : (((((/* implicit */_Bool) min((var_7), (315271481U)))) ? (((/* implicit */unsigned long long int) ((arr_13 [i_4] [i_4] [i_3] [i_2] [i_1] [i_0] [i_0]) << (((((((/* implicit */int) arr_5 [i_0])) + (84))) - (20)))))) : (((var_4) / (((/* implicit */unsigned long long int) var_7))))))));
                                arr_15 [i_0] [i_2] [i_4] = ((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)43072));
                            }
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (signed char i_5 = 2; i_5 < 18; i_5 += 3) 
                            {
                                var_24 += ((/* implicit */unsigned char) (~(((/* implicit */int) (short)-17250))));
                                var_25 = ((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)34681))))) - (((unsigned int) arr_13 [i_0] [i_1] [i_1] [i_2] [i_3] [i_3] [i_5 + 2]))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_26 = ((/* implicit */signed char) min(((-(((/* implicit */int) (unsigned short)34531)))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_5)))) != (-1401475417818892241LL))))));
    var_27 = ((/* implicit */int) ((((/* implicit */_Bool) 10883499122666221530ULL)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((long long int) (signed char)79)))))));
    var_28 = ((_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)43072)) : (((/* implicit */int) (unsigned short)30997))))) && ((!(((/* implicit */_Bool) var_17))))));
}
