/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22979
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_15 *= ((/* implicit */unsigned char) ((((/* implicit */int) (((-(((/* implicit */int) arr_1 [i_0])))) >= (((/* implicit */int) arr_1 [i_0]))))) + (((/* implicit */int) arr_1 [i_0]))));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            var_16 = ((/* implicit */_Bool) ((var_4) | (min((((/* implicit */long long int) ((-19) ^ (((/* implicit */int) arr_4 [(_Bool)0] [i_1] [(unsigned char)7]))))), (min((arr_2 [4LL] [(_Bool)0] [i_1]), (4010510130979099180LL)))))));
            arr_6 [i_0] [(signed char)5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 18)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)127))))) : (((/* implicit */int) (unsigned char)37))));
        }
        for (unsigned short i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            var_17 = ((/* implicit */int) arr_1 [(unsigned short)1]);
            var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((arr_2 [i_2] [i_2] [i_0]) ^ (((/* implicit */long long int) max((14), (((/* implicit */int) arr_4 [i_2] [i_2] [i_0]))))))))));
        }
        var_19 = ((/* implicit */short) arr_4 [6U] [i_0] [i_0]);
        arr_9 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) min((arr_4 [i_0] [i_0] [i_0]), (arr_1 [i_0])))) > (((/* implicit */int) ((-19) <= (-1730342862))))));
    }
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        arr_12 [(unsigned char)6] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((signed char) var_7)))));
        var_20 = ((/* implicit */int) max((((arr_10 [i_3 - 1] [i_3 - 1]) * (arr_10 [i_3 - 1] [i_3 - 1]))), (arr_10 [i_3 - 1] [i_3 - 1])));
        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (~(3137767934183085136LL))))));
        var_22 = ((/* implicit */unsigned short) ((short) arr_10 [i_3 - 1] [i_3 - 1]));
        arr_13 [13LL] = ((((-22) + (2147483647))) * (((/* implicit */int) ((arr_10 [i_3 - 1] [i_3 - 1]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_3 - 1])))))));
    }
    var_23 = ((/* implicit */long long int) (~(((/* implicit */int) var_12))));
    var_24 = ((/* implicit */unsigned char) 9223372036854775804LL);
    /* LoopNest 3 */
    for (signed char i_4 = 2; i_4 < 15; i_4 += 2) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (int i_6 = 1; i_6 < 15; i_6 += 4) 
            {
                {
                    arr_22 [i_4] [i_5] [i_6] = ((unsigned char) (~(16)));
                    var_25 = ((/* implicit */unsigned char) max((((/* implicit */long long int) (!(((14) < (((/* implicit */int) (unsigned short)13807))))))), (((long long int) ((((/* implicit */int) arr_20 [i_4 - 2] [i_5] [i_6])) < (((/* implicit */int) (unsigned char)53)))))));
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */long long int) min((max(((-(876350569418504956ULL))), (((/* implicit */unsigned long long int) 3137767934183085136LL)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))))))));
}
