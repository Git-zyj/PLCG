/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237525
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
    var_12 = ((/* implicit */long long int) var_10);
    var_13 = ((/* implicit */unsigned char) var_1);
    var_14 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) var_8)), (min((((((/* implicit */unsigned int) ((/* implicit */int) var_8))) / (var_0))), (((/* implicit */unsigned int) var_8))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_1 = 1; i_1 < 20; i_1 += 3) /* same iter space */
        {
            var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [(unsigned short)14] [i_1 + 1])) || (((/* implicit */_Bool) arr_0 [i_0]))));
            var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) arr_1 [i_1]))));
        }
        for (short i_2 = 1; i_2 < 20; i_2 += 3) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((arr_1 [i_2 - 1]) != (((/* implicit */int) arr_6 [i_0] [i_2 + 1] [i_0]))))) != (((/* implicit */int) arr_5 [i_0] [(unsigned char)11]))));
            var_18 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_6 [i_2 - 1] [i_2 - 1] [i_2 - 1]), (arr_6 [i_2 + 1] [i_2] [20ULL])))) && (((/* implicit */_Bool) (unsigned short)25466))));
            arr_8 [(_Bool)1] [i_0] |= ((/* implicit */short) arr_1 [i_0]);
        }
        /* vectorizable */
        for (unsigned short i_3 = 1; i_3 < 17; i_3 += 1) 
        {
            var_19 &= ((/* implicit */long long int) var_8);
            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) arr_2 [(unsigned short)20]))));
        }
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_0])) << (((((/* implicit */int) min((arr_7 [i_0] [i_0] [i_0]), (arr_3 [i_0] [i_0])))) - (18933)))));
        var_22 |= ((/* implicit */short) max((8101405066044747993LL), (((/* implicit */long long int) min((min((arr_6 [i_0] [i_0] [i_0]), (((/* implicit */short) var_2)))), (((/* implicit */short) arr_2 [i_0])))))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 1) 
    {
        var_23 = (unsigned short)9294;
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [(unsigned char)1] [i_4] [i_4])) && (((/* implicit */_Bool) arr_7 [i_4] [i_4] [i_4])))))) <= (min((((/* implicit */long long int) (unsigned short)56242)), ((~(var_3)))))));
        var_25 = ((/* implicit */unsigned char) max((var_1), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_5 [i_4] [i_4]), (arr_6 [i_4] [i_4] [i_4])))) || (((/* implicit */_Bool) ((unsigned int) arr_2 [i_4]))))))));
    }
}
