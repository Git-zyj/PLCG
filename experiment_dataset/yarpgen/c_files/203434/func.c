/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203434
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_13 ^= ((/* implicit */short) min(((~(((arr_0 [i_1]) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)121))))))), (((/* implicit */long long int) ((int) arr_3 [i_0 + 1] [i_1] [i_0 + 1])))));
                var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((int) (signed char)106))) ? ((+(-9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 + 1] [i_1] [i_0 + 1]))))))))));
                arr_5 [i_0] = ((/* implicit */unsigned int) arr_0 [i_0]);
                arr_6 [i_1] |= ((/* implicit */unsigned int) (((((+(((/* implicit */int) (signed char)127)))) ^ (((/* implicit */int) arr_0 [i_0 + 1])))) >> (((int) ((((/* implicit */int) arr_4 [i_0])) < (arr_1 [i_0 + 1]))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) 63U)) ? (-1727205641740369373LL) : (((/* implicit */long long int) 1598343336)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_8)) == ((-(-1598343337))))))))))));
    var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) min((min((((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-81))) != (1727205641740369388LL)))), (((unsigned int) var_9)))), (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) - (min((((/* implicit */unsigned int) var_2)), (var_1))))))))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 20; i_2 += 4) 
    {
        for (unsigned long long int i_3 = 2; i_3 < 19; i_3 += 1) 
        {
            {
                arr_13 [i_2] [i_3 + 1] [i_3 - 2] = ((/* implicit */unsigned long long int) var_8);
                arr_14 [3] [i_3 + 1] [i_3 - 1] = ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) 365940230)) ? (((/* implicit */long long int) 365940230)) : (arr_8 [i_2] [i_3]))))) ? (((((/* implicit */_Bool) (~(arr_7 [i_2])))) ? ((-(4299757587876731884ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((arr_11 [14] [i_3]), (var_0)))) || ((!(((/* implicit */_Bool) var_12)))))))));
                arr_15 [i_2] [i_2] |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_3 - 1] [i_3 + 1])) ? (arr_9 [i_3 - 2] [i_3 - 2]) : (arr_9 [i_3 - 2] [i_3 - 2])))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)0))))) : (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned int) ((-1262730778) / (365940242)))) : (((var_12) & (1539200484U)))))));
            }
        } 
    } 
    var_17 = ((/* implicit */short) max(((~(((/* implicit */int) var_0)))), (1262730777)));
}
