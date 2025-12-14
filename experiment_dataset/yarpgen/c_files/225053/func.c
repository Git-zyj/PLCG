/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225053
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
    var_14 = ((/* implicit */short) var_10);
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 13; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 12; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned char) var_11);
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 3; i_3 < 13; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 13; i_4 += 3) 
                        {
                            {
                                arr_17 [i_0] [(unsigned char)1] [i_0] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_5)) ? (arr_14 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))))))));
                                var_16 = ((/* implicit */long long int) max((var_0), (((/* implicit */short) (!(((/* implicit */_Bool) (signed char)18)))))));
                                var_17 = ((((/* implicit */int) (_Bool)0)) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */int) (signed char)8)) : (((/* implicit */int) max(((short)32766), ((short)-19681)))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned short) 1798130406);
                }
                for (unsigned char i_5 = 1; i_5 < 12; i_5 += 3) 
                {
                    var_19 = ((/* implicit */short) var_6);
                    arr_22 [i_5] [i_0] = ((/* implicit */int) var_8);
                    var_20 = ((/* implicit */int) min((((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) var_2)), (-935655558779527916LL))), (((/* implicit */long long int) max((((/* implicit */unsigned int) var_2)), (var_10))))))), (((((var_6) && (((/* implicit */_Bool) (unsigned char)56)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) : (((unsigned long long int) (short)-3071))))));
                }
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) var_13);
    var_22 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)251)) << (((((/* implicit */int) var_7)) - (129)))))) ? (((/* implicit */unsigned long long int) ((long long int) (unsigned char)242))) : (max((7325986495761109308ULL), (((/* implicit */unsigned long long int) 9223372036854775807LL))))))) ? (max((((/* implicit */unsigned int) var_2)), (((var_8) * (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)232)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (var_8) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (short)-32767)) : (((/* implicit */int) var_6)))))))));
}
