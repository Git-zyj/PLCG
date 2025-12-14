/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238444
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */_Bool) (signed char)-125);
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    for (signed char i_3 = 1; i_3 < 12; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */int) ((((/* implicit */_Bool) min((2013379998588850677ULL), (10245088879034290593ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_4] [i_4])) ? (((/* implicit */int) (unsigned short)29858)) : (((/* implicit */int) arr_10 [i_0 + 1] [i_1] [i_2] [i_1] [i_1])))) <= (((/* implicit */int) var_5)))))) : (max((((/* implicit */long long int) var_5)), (72057593970819072LL)))));
                                arr_13 [i_1] [i_1] [i_1 + 2] [(_Bool)1] [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */int) (!(var_3)))) != (((/* implicit */int) var_10)))));
                            }
                        } 
                    } 
                } 
                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_1] [i_0])) ? (((/* implicit */int) arr_10 [i_1 - 1] [i_1] [(short)9] [i_0 + 1] [i_0])) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0 + 1]))))) ? ((+(((/* implicit */int) arr_10 [i_1 + 2] [i_1 + 2] [i_0 + 1] [i_1] [i_0 + 1])))) : ((-(1218159615)))));
                arr_14 [i_0] [i_0 + 1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_1] [i_1] [i_0] [i_0 + 1] [i_0] [i_0])) ^ (((/* implicit */int) arr_8 [i_1] [i_1] [i_1] [i_0 + 1] [i_0] [i_0]))))) ? (((/* implicit */int) ((signed char) 72057593970819072LL))) : (((/* implicit */int) min((arr_8 [i_1] [i_0] [i_1] [i_0 + 1] [i_0] [i_0]), (arr_8 [i_0 + 1] [i_1 + 2] [i_1 + 2] [i_0 + 1] [i_0] [i_0 + 1]))))));
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 12; i_5 += 1) 
                {
                    for (signed char i_6 = 2; i_6 < 12; i_6 += 4) 
                    {
                        {
                            arr_21 [i_0] [6LL] [i_6] [(short)0] [i_1] [i_0] = ((/* implicit */_Bool) arr_20 [i_0]);
                            var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) var_2)) <= (((/* implicit */int) (!(((var_9) || (((/* implicit */_Bool) 72057593970819063LL)))))))));
                            var_16 = ((/* implicit */unsigned char) min((min((((/* implicit */long long int) (short)-12529)), (-1184097959445360858LL))), (((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_2))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((_Bool) ((((/* implicit */int) ((12052641236079500049ULL) != (((/* implicit */unsigned long long int) -1530781263))))) <= (((/* implicit */int) (unsigned char)116))))))));
}
