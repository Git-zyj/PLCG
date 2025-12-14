/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227116
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
    var_20 = ((/* implicit */unsigned short) (+(min((((/* implicit */unsigned int) (-(var_14)))), (max((((/* implicit */unsigned int) (signed char)-79)), (3843707884U)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */signed char) max(((~(arr_3 [i_0]))), (((/* implicit */unsigned long long int) max((min((-2006985524), (((/* implicit */int) var_1)))), (((/* implicit */int) ((var_4) >= (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))))));
                var_22 ^= ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_0 [i_0])) + (min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_19)), (8796093022207LL)))), (var_17)))));
                var_23 = var_2;
                var_24 = ((/* implicit */long long int) (~((-(var_14)))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_2 = 0; i_2 < 23; i_2 += 1) 
    {
        arr_9 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_17), (((/* implicit */unsigned long long int) arr_7 [i_2]))))) ? (((((/* implicit */int) arr_7 [i_2])) ^ (((/* implicit */int) arr_7 [i_2])))) : (((/* implicit */int) ((signed char) var_0)))));
        arr_10 [i_2] [i_2] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_19)))) ? (((/* implicit */int) ((short) var_12))) : (((/* implicit */int) var_3))))), (((((/* implicit */_Bool) min((var_2), (((/* implicit */int) (signed char)-76))))) ? (max((var_12), (((/* implicit */unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) var_10))))));
        var_25 *= ((/* implicit */unsigned long long int) (~(1584411574990961982LL)));
    }
    for (signed char i_3 = 4; i_3 < 20; i_3 += 1) 
    {
        var_26 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_3 - 4])))))));
        arr_14 [i_3 - 2] [(signed char)4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) max((((/* implicit */short) (signed char)-87)), (arr_13 [i_3])))), ((~(var_13)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((8796093022207LL), (((/* implicit */long long int) arr_7 [i_3]))))))))) : ((~(-8796093022217LL)))));
    }
    var_27 = ((/* implicit */signed char) (+(var_11)));
}
