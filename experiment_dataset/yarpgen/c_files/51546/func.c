/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51546
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
    var_11 = ((/* implicit */int) var_10);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_12 = ((/* implicit */signed char) (~(((unsigned long long int) arr_0 [i_0]))));
        arr_2 [i_0] = ((/* implicit */unsigned short) arr_1 [i_0]);
        arr_3 [i_0] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_9))) + (min((((/* implicit */long long int) max((arr_0 [i_0]), (((/* implicit */unsigned char) var_1))))), (arr_1 [i_0])))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (int i_2 = 3; i_2 < 17; i_2 += 4) 
            {
                for (int i_3 = 2; i_3 < 17; i_3 += 3) 
                {
                    {
                        var_13 |= ((/* implicit */_Bool) min((min((arr_9 [i_0] [i_2] [i_2] [i_2 + 2] [14U]), (arr_9 [i_0] [i_0] [i_0] [i_2 - 3] [(unsigned short)8]))), (((long long int) arr_9 [i_2 + 2] [i_2 - 2] [i_2 + 2] [i_2 - 2] [(unsigned short)16]))));
                        arr_10 [i_0] [10ULL] [i_2 + 1] = ((/* implicit */unsigned char) var_4);
                        var_14 = ((/* implicit */_Bool) min((var_14), (var_9)));
                    }
                } 
            } 
        } 
    }
    var_15 |= ((/* implicit */unsigned char) ((5559468507843205606LL) >= (((/* implicit */long long int) 1006632960))));
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 3) 
    {
        for (unsigned short i_5 = 3; i_5 < 8; i_5 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned short) ((min((min((arr_14 [i_4]), (-5559468507843205606LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (-1416476773) : (arr_13 [i_5])))))) < (((/* implicit */long long int) ((/* implicit */int) ((signed char) min((var_2), (((/* implicit */long long int) var_0)))))))));
                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_4] [i_4] [i_4] [i_4] [16])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 5559468507843205612LL)) ? ((~(-1006632959))) : (-1006632954)))) : (min((((/* implicit */long long int) ((unsigned short) var_1))), (min((-5559468507843205593LL), (((/* implicit */long long int) arr_16 [i_4] [i_4] [i_5]))))))));
                var_18 ^= ((/* implicit */signed char) (+(((/* implicit */int) var_0))));
            }
        } 
    } 
    var_19 = ((/* implicit */short) var_2);
}
