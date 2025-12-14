/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53257
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
    var_10 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_2 = 4; i_2 < 21; i_2 += 3) 
                {
                    var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) (!(((/* implicit */_Bool) 72057456598974464LL)))))));
                    var_12 = ((/* implicit */long long int) ((var_8) <= (((long long int) arr_5 [i_0] [i_0] [i_0]))));
                    var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) -2085814620134191453LL))));
                    arr_8 [i_1 + 2] [i_1] [i_0] [i_1] &= ((/* implicit */signed char) ((((((/* implicit */_Bool) var_3)) ? (arr_2 [i_0] [i_0]) : (((/* implicit */long long int) arr_4 [i_0] [i_0])))) <= (((((/* implicit */long long int) var_1)) / (4682194024814970688LL)))));
                }
                /* vectorizable */
                for (signed char i_3 = 3; i_3 < 20; i_3 += 3) 
                {
                    /* LoopNest 2 */
                    for (long long int i_4 = 2; i_4 < 18; i_4 += 3) 
                    {
                        for (long long int i_5 = 0; i_5 < 22; i_5 += 2) 
                        {
                            {
                                arr_18 [i_1] [i_1 - 1] [i_1] [i_3 - 2] [i_4] [i_5] = ((/* implicit */long long int) ((((/* implicit */long long int) ((int) 1904259076))) < (-4682194024814970688LL)));
                                arr_19 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] = var_0;
                                var_14 = ((/* implicit */signed char) var_1);
                                var_15 *= ((/* implicit */signed char) arr_2 [i_4] [i_1]);
                                arr_20 [i_0] [i_1] [i_1] [i_1] [i_5] = ((/* implicit */int) ((signed char) arr_15 [i_5] [i_4 + 2] [i_3 + 1] [i_1 + 1] [i_0]));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) -1904259083)) ? (532676608) : ((-(((/* implicit */int) arr_15 [i_0] [i_0] [i_1] [i_1] [i_3]))))));
                }
                arr_21 [i_1] = ((/* implicit */int) ((((/* implicit */int) (signed char)78)) <= (156981645)));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) var_8);
}
