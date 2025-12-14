/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202767
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
    var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((var_3) + (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))))));
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_2) >= (((((/* implicit */_Bool) var_14)) ? (var_4) : (((/* implicit */unsigned long long int) var_14))))))) * (max(((~(((/* implicit */int) var_15)))), (((/* implicit */int) var_1))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 4; i_0 < 16; i_0 += 2) 
    {
        var_20 = (_Bool)0;
        var_21 = ((/* implicit */signed char) (~((+(((/* implicit */int) ((signed char) 0U)))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_4 [i_1]))));
        var_22 = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) arr_0 [i_1])))) + (2147483647))) >> ((((((_Bool)1) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : (((/* implicit */int) (unsigned short)57745)))) - (58)))));
    }
    for (unsigned char i_2 = 1; i_2 < 10; i_2 += 1) 
    {
        /* LoopSeq 2 */
        for (int i_3 = 0; i_3 < 11; i_3 += 3) 
        {
            var_23 = ((/* implicit */int) (-(min((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)114))))), (((arr_7 [i_2 + 1]) + (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2] [i_2])))))))));
            var_24 = ((/* implicit */unsigned int) min((max((arr_9 [i_2] [i_2]), (arr_4 [i_2 + 1]))), (((/* implicit */signed char) ((((/* implicit */int) arr_4 [i_2 - 1])) >= (((/* implicit */int) arr_4 [i_2 - 1])))))));
        }
        for (signed char i_4 = 0; i_4 < 11; i_4 += 3) 
        {
            arr_15 [i_2] [i_2] = ((/* implicit */signed char) arr_6 [7LL]);
            var_25 = ((/* implicit */unsigned short) arr_14 [i_2 - 1] [i_4]);
        }
        arr_16 [i_2] = ((/* implicit */unsigned int) max(((!(((/* implicit */_Bool) arr_3 [i_2 - 1] [i_2 + 1])))), ((!(((/* implicit */_Bool) arr_7 [i_2 + 1]))))));
    }
    var_26 = ((/* implicit */unsigned char) ((min((var_2), (((/* implicit */unsigned long long int) max(((signed char)127), ((signed char)33)))))) > (((/* implicit */unsigned long long int) var_7))));
    var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) var_15))));
}
