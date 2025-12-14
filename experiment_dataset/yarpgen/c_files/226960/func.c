/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226960
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] [i_1] = ((/* implicit */int) arr_7 [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_16 [i_4] [i_1] [i_1] [(_Bool)1] = ((/* implicit */int) arr_7 [i_2]);
                                var_19 = ((/* implicit */int) min((var_19), (var_1)));
                                arr_17 [i_1] = arr_7 [i_0];
                                arr_18 [i_0] [i_1] [9LL] [i_3 + 2] [9LL] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_1]))))) || (((/* implicit */_Bool) (+(((/* implicit */int) arr_14 [i_3])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_20 -= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) min((var_17), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [0]))))) ? (540431955284459520LL) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)33239)) % (((/* implicit */int) (signed char)96)))))))));
        arr_19 [i_0] [i_0] = ((/* implicit */unsigned long long int) (((+(arr_8 [8]))) <= (((unsigned int) arr_8 [14U]))));
    }
    for (unsigned int i_5 = 0; i_5 < 17; i_5 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_6 = 0; i_6 < 17; i_6 += 2) 
        {
            var_21 = ((/* implicit */signed char) (~(min((((/* implicit */long long int) arr_12 [i_5] [i_6] [i_6] [(signed char)9])), (var_10)))));
            arr_25 [i_5] [i_5] [i_6] = ((/* implicit */unsigned long long int) (+((+(max((28LL), (-540431955284459505LL)))))));
            arr_26 [i_6] = ((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) arr_12 [i_5] [i_5] [i_6] [i_6])))));
        }
        arr_27 [i_5] = ((/* implicit */long long int) ((var_6) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_5])) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_5])))))) : (arr_12 [i_5] [i_5] [i_5] [i_5]))))));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        arr_31 [i_7] = (!(((/* implicit */_Bool) arr_30 [i_7])));
        var_22 = ((/* implicit */unsigned short) arr_29 [i_7]);
    }
    var_23 = ((/* implicit */unsigned long long int) var_7);
}
