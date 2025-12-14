/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193838
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
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */long long int) (+(min((((((/* implicit */unsigned long long int) var_0)) + (15930398975734685939ULL))), (((/* implicit */unsigned long long int) arr_1 [i_0]))))));
                var_13 += ((/* implicit */unsigned char) arr_3 [i_0] [i_0] [i_0]);
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 7; i_2 += 3) 
                {
                    for (long long int i_3 = 1; i_3 < 9; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                arr_12 [i_0] = ((/* implicit */short) ((((((/* implicit */int) (signed char)-8)) <= (((int) arr_9 [i_4] [i_0] [i_3 - 1] [i_2] [i_1] [i_0])))) ? (((/* implicit */int) (short)-3882)) : (max(((-(arr_1 [i_0]))), (((/* implicit */int) ((_Bool) (signed char)-53)))))));
                                var_14 |= ((/* implicit */signed char) var_10);
                                arr_13 [i_0] [(short)6] [i_0] [i_3 - 1] = ((/* implicit */short) (signed char)7);
                                arr_14 [i_0] [i_1] [i_0] [2U] [(short)0] = ((/* implicit */short) arr_7 [i_0] [i_0] [i_0] [i_0]);
                            }
                            arr_15 [i_0] = ((/* implicit */int) ((short) ((long long int) arr_8 [i_3 + 1] [i_3 + 1] [i_0] [i_0] [i_2 - 1] [i_0])));
                            var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((6549639118250108007LL) - (max((((/* implicit */long long int) (-(((/* implicit */int) (short)-7443))))), (7596401101795365384LL))))))));
                            var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) max((arr_3 [i_0] [i_1] [i_2]), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)6317))))) ? (((/* implicit */int) var_2)) : (min((1923416599), (((/* implicit */int) (signed char)(-127 - 1)))))))))))));
                            arr_16 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (short)20757)) <= (((/* implicit */int) arr_11 [i_3 - 1] [i_2 + 2] [i_2]))))) - (((/* implicit */int) var_9))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */int) ((var_1) == (((/* implicit */unsigned long long int) var_0))));
}
