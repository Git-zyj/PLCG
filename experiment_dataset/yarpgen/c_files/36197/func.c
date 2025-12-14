/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36197
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
    var_14 = ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) var_7)) > (var_11))))) : (var_7))) : (min((((/* implicit */unsigned int) (-(((/* implicit */int) var_1))))), (var_8))));
    var_15 += ((/* implicit */_Bool) min((min((((1843288239051306LL) % (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) min((((/* implicit */int) var_13)), (var_10)))))), (((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_11)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_2 [i_0] = arr_0 [i_0];
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (arr_1 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
            /* LoopSeq 2 */
            for (unsigned char i_2 = 2; i_2 < 16; i_2 += 3) 
            {
                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (var_10) : ((~(((/* implicit */int) arr_0 [i_0]))))));
                /* LoopNest 2 */
                for (signed char i_3 = 4; i_3 < 16; i_3 += 3) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_7 [i_2 - 2] [i_2 + 1] [i_3 - 3] [i_3 + 2]))));
                            var_19 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_2 - 1] [i_2 + 2] [i_2 - 2] [i_2])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))) % (arr_1 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        }
                    } 
                } 
            }
            for (short i_5 = 1; i_5 < 17; i_5 += 4) 
            {
                var_20 = (-(((/* implicit */int) arr_4 [i_1])));
                var_21 += ((/* implicit */short) arr_3 [i_0] [i_1] [i_5]);
            }
            /* LoopSeq 2 */
            for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 2) /* same iter space */
            {
                arr_18 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_0)))) ? (8000662698891576820LL) : (((/* implicit */long long int) ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) var_11))))))));
                var_22 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_6] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)2077))) : (var_8)));
            }
            for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 2) /* same iter space */
            {
                var_23 = ((/* implicit */unsigned long long int) var_8);
                arr_23 [i_0] [i_0] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_19 [i_7])) != (((/* implicit */int) var_13))));
                var_24 |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_0))) | (((/* implicit */long long int) ((/* implicit */int) arr_7 [(signed char)8] [i_1] [i_0] [(unsigned short)9])))));
                arr_24 [i_0] [(_Bool)1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_7] [i_0] [i_0])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [4LL] [i_0]))) : ((-(var_4)))));
            }
            arr_25 [i_1] [i_0] &= ((/* implicit */unsigned int) ((arr_12 [i_1] [i_1] [i_1] [i_1] [i_0] [i_0] [i_1]) ? (((/* implicit */int) (unsigned short)60712)) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] [i_1]))));
        }
    }
    var_25 = ((/* implicit */unsigned int) var_9);
    var_26 *= ((/* implicit */signed char) (+(min((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) var_8)) : (var_9)))), (((((/* implicit */_Bool) var_12)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))))));
}
