/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3760
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
    /* LoopSeq 4 */
    for (int i_0 = 1; i_0 < 15; i_0 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (short)4439))));
        var_21 ^= ((/* implicit */unsigned int) arr_2 [i_0 + 1] [i_0 + 2]);
        arr_4 [i_0] = ((/* implicit */unsigned int) (short)-4440);
        var_22 = ((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)255))) | (var_15)));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 15; i_1 += 4) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */unsigned long long int) ((long long int) arr_2 [i_1 - 1] [i_1]));
        var_23 = ((/* implicit */long long int) ((arr_0 [i_1 - 1]) % (arr_0 [i_1 + 3])));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 16; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 18; i_3 += 3) 
            {
                {
                    arr_14 [i_2] = ((long long int) (short)245);
                    var_24 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (15084968799930140115ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2] [i_2]))))));
                    var_25 = ((unsigned int) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (short)245))));
                    var_26 = ((((/* implicit */_Bool) 7)) ? (4294967269U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)3))));
                    /* LoopSeq 1 */
                    for (int i_4 = 2; i_4 < 17; i_4 += 4) 
                    {
                        arr_17 [i_1] [i_2] [i_4] = ((/* implicit */int) ((arr_12 [i_4 + 1] [i_2 - 2] [i_3] [i_1 - 1]) + (((/* implicit */long long int) 1078328587))));
                        var_27 = ((/* implicit */unsigned long long int) var_2);
                        var_28 = ((((/* implicit */_Bool) -1)) ? (4410536364038303703ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))));
                    }
                }
            } 
        } 
    }
    for (long long int i_5 = 0; i_5 < 18; i_5 += 3) 
    {
        arr_20 [i_5] = ((/* implicit */int) ((unsigned int) ((((/* implicit */long long int) 1078328595)) / (576460743713488896LL))));
        arr_21 [i_5] = arr_18 [i_5] [i_5];
        arr_22 [i_5] = ((/* implicit */unsigned long long int) arr_3 [i_5] [i_5]);
    }
    for (short i_6 = 0; i_6 < 19; i_6 += 4) 
    {
        var_29 = ((((/* implicit */int) (!(((/* implicit */_Bool) ((var_10) + (((/* implicit */long long int) arr_24 [12U])))))))) % (((/* implicit */int) ((short) arr_23 [i_6]))));
        var_30 = ((/* implicit */long long int) (+(-1)));
        arr_25 [i_6] [i_6] = ((/* implicit */int) arr_23 [i_6]);
        var_31 = ((/* implicit */short) ((arr_24 [i_6]) - (((/* implicit */unsigned int) ((/* implicit */int) (short)8184)))));
        arr_26 [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [i_6])) ? (min((8104296375775938502ULL), (13992575777872449733ULL))) : (((/* implicit */unsigned long long int) (~(var_2))))));
    }
    var_32 = ((/* implicit */short) max((((/* implicit */long long int) (!((!(((/* implicit */_Bool) (short)3))))))), ((((-(var_6))) / (((/* implicit */long long int) (-(268369920))))))));
    var_33 = ((/* implicit */int) var_11);
    var_34 = ((/* implicit */int) (+(var_13)));
    var_35 = ((/* implicit */short) ((long long int) var_1));
}
