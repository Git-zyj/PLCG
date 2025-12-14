/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22760
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
    for (short i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_11 += ((/* implicit */unsigned long long int) ((long long int) arr_0 [i_0 + 1]));
                var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (((/* implicit */long long int) ((/* implicit */int) (short)14229))) : (((((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0] [i_1] [(short)9])) % (((/* implicit */int) arr_2 [i_1] [i_1] [(signed char)0]))))) + (min((arr_0 [i_0]), (((/* implicit */long long int) arr_2 [i_0] [i_0 - 1] [i_0 - 1]))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 1; i_3 < 21; i_3 += 2) 
        {
            var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((arr_7 [i_2] [(_Bool)1] [i_3]) / (((/* implicit */long long int) -1322125108))))))))));
            var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) var_4))) ? (((/* implicit */int) arr_4 [i_3 + 2] [i_3 - 1])) : (((/* implicit */int) arr_5 [i_2]))));
            var_15 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_2]))));
            var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (-(9002801208229888ULL))))));
            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (~(((/* implicit */int) ((short) var_5))))))));
        }
        arr_11 [i_2] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_8 [i_2] [i_2]))));
        var_18 |= ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) arr_6 [i_2])) ? (arr_10 [i_2]) : (arr_10 [i_2]))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 2) /* same iter space */
    {
        arr_14 [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_7 [i_4] [i_4] [i_4]), (arr_10 [i_4])))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((var_5), (((/* implicit */long long int) -1818042319))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) 1849914948U)) : (var_7))))))));
        arr_15 [i_4] [i_4] = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)-1))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_5 = 1; i_5 < 22; i_5 += 2) 
        {
            var_19 = ((/* implicit */long long int) var_6);
            var_20 += ((signed char) ((((/* implicit */_Bool) arr_13 [i_4] [i_5 + 1])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32489)))));
        }
        arr_18 [i_4] = ((/* implicit */long long int) ((((((/* implicit */_Bool) (~(var_3)))) ? (10679894085447282692ULL) : (min((34359738368ULL), (((/* implicit */unsigned long long int) arr_9 [20U] [i_4])))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)32470), (((/* implicit */unsigned short) (signed char)96))))))));
    }
    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((short) (short)2032)))));
    var_22 = ((/* implicit */unsigned long long int) var_4);
    var_23 = ((/* implicit */unsigned int) max((var_2), (((/* implicit */int) (signed char)-1))));
}
