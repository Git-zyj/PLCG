/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29143
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
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_6))));
        var_11 ^= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((min((4294967295U), (((/* implicit */unsigned int) -602382980)))) < (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_0)))))))) <= (max((((long long int) var_10)), (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (936289351) : (((/* implicit */int) arr_1 [(short)8])))))))));
        var_12 &= ((/* implicit */_Bool) ((((/* implicit */long long int) min(((~(602383002))), (((/* implicit */int) ((1966082652U) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)66))))))))) * ((-(((long long int) (unsigned char)250))))));
    }
    for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) max((var_3), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_1]))))))))));
        arr_7 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_1] [i_1])) * (((/* implicit */int) ((short) (short)28046)))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_4)), (arr_6 [i_1] [i_1]))))));
        var_14 -= ((/* implicit */int) (~(((0U) >> (((((/* implicit */int) (unsigned char)81)) - (53)))))));
        var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (arr_6 [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1])))))))));
    }
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) 
    {
        for (unsigned short i_3 = 2; i_3 < 15; i_3 += 3) 
        {
            {
                var_16 = ((((/* implicit */_Bool) 1821010259)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) 9223372036854775807LL)) ? (2538042625U) : (3633955273U))) == (((/* implicit */unsigned int) max((((/* implicit */int) (short)15208)), (602383002)))))))) : (var_2));
                arr_13 [i_3] [i_3] = ((/* implicit */int) -4376032252445095016LL);
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 18; i_4 += 1) 
                {
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_18 [i_2] [i_4] [i_3] = ((/* implicit */unsigned long long int) arr_8 [i_2]);
                            var_17 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)10)) && (((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_9 [i_2])))) ? (min((((/* implicit */unsigned int) var_9)), (4U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [(short)0]))) != (arr_12 [i_2]))))))))));
                        }
                    } 
                } 
                arr_19 [i_3] [i_3] [i_3] = (+((~(((/* implicit */int) arr_17 [i_3])))));
            }
        } 
    } 
}
