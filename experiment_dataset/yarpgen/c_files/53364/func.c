/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53364
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            var_14 = ((/* implicit */unsigned int) arr_2 [i_0]);
            var_15 = ((/* implicit */short) (((!(((/* implicit */_Bool) var_2)))) || ((!(arr_4 [i_0] [i_1])))));
        }
        arr_5 [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) + (((arr_4 [i_0] [i_0]) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)24401)))))))));
        var_16 = ((/* implicit */unsigned int) max((var_8), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (5952242870062567893LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-27279)))))) ? ((-(((/* implicit */int) var_6)))) : (((/* implicit */int) (short)19611)))))));
        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((var_13) + (9223372036854775807LL))) << (((/* implicit */int) arr_1 [i_0] [i_0])))))));
    }
    for (unsigned short i_2 = 0; i_2 < 19; i_2 += 1) /* same iter space */
    {
        arr_8 [i_2] = ((/* implicit */unsigned short) ((arr_4 [(unsigned char)10] [i_2]) ? (((/* implicit */long long int) 1552288257)) : (min((((((/* implicit */long long int) ((/* implicit */int) var_5))) % (var_2))), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)112)) ? (((/* implicit */int) arr_0 [i_2])) : (arr_2 [(signed char)11]))))))));
        arr_9 [i_2] = ((/* implicit */unsigned int) (-(((/* implicit */int) min((arr_6 [i_2]), (((/* implicit */short) (!(((/* implicit */_Bool) var_2))))))))));
    }
    /* vectorizable */
    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_3])) ? (arr_10 [i_3]) : (arr_10 [i_3])));
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) arr_4 [i_3] [i_3]))));
    }
    var_20 = ((/* implicit */int) ((((((/* implicit */_Bool) min((9223372036854775807LL), (((/* implicit */long long int) var_0))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_3))) : (((((/* implicit */_Bool) 536870911LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21561))) : (14438542062564026383ULL))))) * (((/* implicit */unsigned long long int) max((var_4), (((/* implicit */unsigned int) ((var_8) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))))));
}
