/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205123
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
    var_17 = ((/* implicit */signed char) var_5);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            var_18 = ((/* implicit */signed char) (!(((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) != (-9LL)))));
            var_19 = ((/* implicit */_Bool) (+((-(((/* implicit */int) min(((_Bool)1), (var_11))))))));
            var_20 += ((/* implicit */long long int) ((((/* implicit */int) arr_3 [17U] [i_1] [i_0])) >= (((/* implicit */int) var_10))));
            var_21 = ((/* implicit */_Bool) max((((int) arr_4 [(_Bool)1] [i_0] [i_1])), ((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1])))))))));
        }
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            arr_9 [0ULL] [(_Bool)1] |= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) -1974674430)))) ? (arr_2 [i_0 + 1] [i_0 + 1]) : (-9LL)));
            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned int) (((+(arr_12 [i_0 + 1]))) / (((/* implicit */unsigned long long int) (+(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27427))) * (3412837334U))))))));
            arr_13 [i_0] [(_Bool)1] [i_3] = ((/* implicit */_Bool) min((((unsigned int) ((arr_10 [15U] [i_0] [i_0]) ? (((/* implicit */unsigned long long int) 3412837334U)) : (arr_4 [i_0] [i_3] [i_3])))), (((/* implicit */unsigned int) ((_Bool) (unsigned short)65535)))));
        }
        /* vectorizable */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
        {
            arr_16 [i_0 + 1] = ((/* implicit */signed char) var_7);
            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((arr_2 [i_0 + 1] [i_0 + 1]) <= (arr_2 [(_Bool)1] [i_0 + 1]))))));
            arr_17 [i_0 + 1] [14ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) || (arr_10 [i_4] [i_0 + 1] [i_0 + 1])));
        }
        arr_18 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_10 [i_0 + 1] [i_0 + 1] [i_0 + 1]);
        var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) arr_11 [i_0 + 1] [i_0 + 1]))));
        arr_19 [(signed char)9] [i_0] &= ((/* implicit */long long int) arr_6 [12] [i_0 + 1] [i_0 + 1]);
    }
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_26 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_5])) ? (arr_12 [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
        var_27 = ((/* implicit */unsigned int) var_6);
    }
}
