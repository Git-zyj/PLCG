/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27163
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            var_17 += ((/* implicit */long long int) max(((-(((/* implicit */int) var_14)))), (((/* implicit */int) ((max((var_8), (((/* implicit */unsigned long long int) var_10)))) == (((/* implicit */unsigned long long int) 2147483633)))))));
            arr_5 [i_1] [i_1 - 2] [i_1 - 2] = ((/* implicit */unsigned char) arr_2 [i_0] [i_0]);
        }
        arr_6 [i_0] &= ((((unsigned long long int) (signed char)-56)) * (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0] [i_0])) * (((/* implicit */int) (short)20604))))));
        var_18 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((2147483625) - (((/* implicit */int) var_14))))) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_0 [i_0] [i_0]))) : (((unsigned long long int) (signed char)-69))));
    }
    for (unsigned long long int i_2 = 1; i_2 < 17; i_2 += 2) 
    {
        var_19 -= ((/* implicit */short) (~(((((/* implicit */_Bool) arr_1 [i_2 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2 - 1] [i_2 + 1]))) : (arr_1 [i_2 + 1])))));
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) max((arr_2 [i_2 + 1] [i_2 + 1]), (arr_2 [i_2] [i_2 + 1])))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 8423053669418202590ULL)))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_9)))))))));
        /* LoopSeq 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_21 = ((/* implicit */short) ((min((7831463184272128225ULL), (((/* implicit */unsigned long long int) (signed char)-56)))) - (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) - (((/* implicit */int) arr_2 [i_2 - 1] [i_3])))))));
            arr_13 [i_3] = ((/* implicit */_Bool) ((((unsigned long long int) arr_3 [i_2])) << ((((((~(2147483636))) - (-2147483603))) + (63)))));
            var_22 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) arr_4 [i_2 - 1]))))));
            var_23 = ((/* implicit */int) var_13);
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            arr_17 [i_4] = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) arr_2 [i_2] [8LL])) && (((/* implicit */_Bool) arr_10 [i_4] [i_4])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-9361)) ? (var_16) : (((/* implicit */unsigned int) var_11))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2 - 1]))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) 10023690404291349023ULL))) || (((((/* implicit */_Bool) var_16)) && (arr_14 [i_4] [13ULL] [i_2]))))))));
            arr_18 [i_2] [i_4] [i_2] = ((/* implicit */signed char) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2 - 1] [i_4]))) * (max((17578641797873421942ULL), (((/* implicit */unsigned long long int) var_11)))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)70)) > (((/* implicit */int) arr_10 [i_4] [i_2 + 1])))))));
        }
        arr_19 [i_2] [i_2] = ((/* implicit */short) arr_2 [i_2] [i_2]);
        arr_20 [i_2 - 1] [i_2] = ((/* implicit */signed char) max((11922446723260423049ULL), ((+(arr_4 [i_2 + 1])))));
    }
    var_24 ^= ((/* implicit */signed char) var_13);
    var_25 = ((((/* implicit */_Bool) (signed char)-28)) ? (-349428803969926685LL) : (((/* implicit */long long int) 2184711123U)));
}
