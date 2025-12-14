/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49420
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
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    arr_8 [i_0] [i_1] [(short)18] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) -681460156))))) >> (((arr_6 [i_0] [i_0] [i_1] [i_2]) + (1298665647)))));
                    var_14 = ((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL))));
                    arr_9 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) != (2147483636)));
                }
                /* LoopNest 3 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (unsigned int i_4 = 0; i_4 < 21; i_4 += 1) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 21; i_5 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */short) min((0ULL), (((/* implicit */unsigned long long int) max((arr_4 [i_0] [i_0] [i_0]), (((/* implicit */long long int) (short)21461)))))));
                                var_16 &= ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_0 [i_3])))) && ((!(((/* implicit */_Bool) arr_14 [i_0] [i_3] [i_3]))))));
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-103))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_1] [i_1]))))) : ((~(((/* implicit */int) (short)5))))));
                var_18 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) && (((((/* implicit */_Bool) 618097844U)) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -3063154634874608450LL)), (15355474401416271879ULL))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */int) var_6);
}
