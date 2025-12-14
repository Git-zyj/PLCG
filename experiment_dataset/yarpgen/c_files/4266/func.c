/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4266
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
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((min((max((562949953421311LL), (-455102572027761060LL))), (((/* implicit */long long int) arr_2 [i_1 + 2])))) >= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_8)), (var_7))))))))));
                var_20 *= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) 889684191)), (arr_5 [i_1 - 1] [i_1 - 1] [i_1 + 1])))) ? (((((/* implicit */_Bool) arr_3 [i_1 + 1])) ? (arr_5 [i_1 - 1] [i_1 + 2] [i_1 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)15))))) : (((/* implicit */unsigned int) (~(889684214))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_8 [i_2])) >= (var_18))))) > ((-(max((((/* implicit */unsigned long long int) var_6)), (6573414362337358448ULL))))))))));
        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) max((min((((/* implicit */long long int) var_12)), (arr_10 [i_2] [i_2]))), (((((/* implicit */_Bool) var_11)) ? (arr_10 [i_2] [i_2]) : (((/* implicit */long long int) var_16)))))))));
        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((-455102572027761060LL) < (((/* implicit */long long int) -889684215)))))));
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (~(var_6)))) ? (((((/* implicit */_Bool) arr_9 [i_2] [i_2])) ? (5117625555260658037LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)48))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 25U))))))))));
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        var_24 = var_17;
        arr_14 [i_3] = ((/* implicit */signed char) (~((+(var_6)))));
    }
    var_25 *= ((/* implicit */_Bool) max((((/* implicit */unsigned int) var_9)), (var_14)));
    var_26 = ((/* implicit */short) var_8);
}
