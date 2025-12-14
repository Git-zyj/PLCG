/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210606
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
    var_15 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    var_16 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_1 [i_1] [i_2])) ? (2242322844U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) == ((+(min((2242322854U), (((/* implicit */unsigned int) (signed char)-59))))))));
                    var_17 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */int) min((arr_3 [i_0] [i_0]), (((/* implicit */unsigned short) arr_5 [(unsigned short)3] [(unsigned short)3]))))) > (((((((/* implicit */int) (short)-29724)) + (2147483647))) >> (((var_8) - (2339733830337419558ULL))))))));
                    var_18 = ((/* implicit */_Bool) min((var_18), (var_3)));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 24; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0] [(signed char)0] [(unsigned short)4] [i_0] [i_0] |= ((/* implicit */unsigned short) ((((((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_12)))) | ((~(((/* implicit */int) (short)29724)))))) + (2147483647))) >> (((((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_7), ((short)-29724))))) * (max((((/* implicit */unsigned long long int) var_6)), (9621046583886058152ULL))))) - (1783433ULL)))));
                                arr_13 [i_0] [i_1] = ((/* implicit */short) min((((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_1] [i_4] [i_4]))) != (4294967294U)))), (((_Bool) 2052644441U))));
                                var_19 = ((/* implicit */unsigned long long int) 1492022321U);
                                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (unsigned short)13190))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [(signed char)9] [(_Bool)1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)2141)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6))));
                }
                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((signed char) ((signed char) ((((/* implicit */_Bool) (short)29723)) || (((/* implicit */_Bool) (short)1)))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) var_12);
    var_23 = ((/* implicit */unsigned int) var_0);
}
