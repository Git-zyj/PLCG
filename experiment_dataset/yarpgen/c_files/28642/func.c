/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28642
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
    var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) (-((-((-(((/* implicit */int) var_1)))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        var_13 += ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))));
        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_1 [i_0]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 2])))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_0 + 1]))))) : (((((/* implicit */_Bool) arr_0 [i_0 + 3])) ? (arr_1 [i_0 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))))));
    }
    for (signed char i_1 = 3; i_1 < 15; i_1 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 15; i_2 += 2) 
        {
            for (int i_3 = 0; i_3 < 16; i_3 += 1) 
            {
                {
                    var_15 = ((/* implicit */long long int) (!(((_Bool) arr_1 [i_3]))));
                    var_16 += (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (-(((/* implicit */int) arr_4 [4ULL]))))), (var_3)))));
                }
            } 
        } 
        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) var_1))));
    }
    for (signed char i_4 = 3; i_4 < 15; i_4 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (-((((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_11)))) : (var_11))))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 3) /* same iter space */
        {
            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) arr_0 [i_4]))));
            var_20 += ((/* implicit */unsigned char) arr_3 [i_5]);
            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) arr_11 [i_4]))))))) <= (min(((-(arr_10 [i_4 - 1] [i_4]))), (((/* implicit */unsigned int) arr_7 [i_4] [i_5]))))));
            var_22 = ((/* implicit */unsigned char) max((((unsigned long long int) (!(((/* implicit */_Bool) var_7))))), (((/* implicit */unsigned long long int) (-((-(var_2))))))));
            var_23 = var_7;
        }
        for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 3) /* same iter space */
        {
            var_24 -= var_0;
            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [6ULL])) == (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_2 [i_4 - 3])) : (((/* implicit */int) arr_15 [i_6] [i_6]))))) >= (((((/* implicit */_Bool) arr_16 [10ULL] [i_4] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_6] [i_6]))) : (var_8)))))))))));
            var_26 = ((/* implicit */int) ((unsigned long long int) max((((/* implicit */unsigned char) ((signed char) arr_1 [i_6]))), (arr_15 [5] [i_6]))));
        }
        var_27 = min((var_2), (((/* implicit */long long int) ((signed char) ((var_5) % (var_0))))));
    }
    var_28 = ((/* implicit */_Bool) (((!(var_10))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (-(var_11)))))) : (var_0)));
}
