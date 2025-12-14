/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41651
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
    var_18 = ((signed char) (_Bool)1);
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))));
        /* LoopSeq 2 */
        for (signed char i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            var_20 = ((/* implicit */signed char) (_Bool)1);
            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) || ((_Bool)1)));
        }
        for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            arr_8 [i_0] [i_0] [5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) % (3ULL)))) ? (18446744073709551609ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_2] [i_2])) && ((_Bool)1)))))));
            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((arr_3 [i_2] [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2])))))));
        }
        arr_9 [i_0] = ((/* implicit */signed char) ((unsigned long long int) -2147483645));
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 1; i_3 < 21; i_3 += 4) 
        {
            var_23 |= ((/* implicit */signed char) arr_1 [i_0] [(signed char)4]);
            var_24 = ((signed char) (signed char)(-127 - 1));
            var_25 = (_Bool)1;
        }
    }
    for (unsigned long long int i_4 = 3; i_4 < 10; i_4 += 4) 
    {
        arr_15 [9ULL] = ((/* implicit */int) ((signed char) (signed char)110));
        arr_16 [i_4] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18092935984284065430ULL)));
        var_26 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_3 [(_Bool)1] [i_4 - 1])))) ? ((~(((/* implicit */int) (signed char)-113)))) : (var_10)));
    }
    for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 4) 
    {
        var_27 = ((signed char) ((((/* implicit */_Bool) (signed char)7)) ? (18092935984284065430ULL) : (18092935984284065422ULL)));
        var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) (!(((/* implicit */_Bool) -8126579525567204209LL)))))));
    }
    var_29 = ((/* implicit */unsigned long long int) var_2);
    var_30 = ((/* implicit */signed char) ((353808089425486208ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-110)))));
}
