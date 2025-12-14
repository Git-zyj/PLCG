/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198845
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
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */long long int) 4248288894U);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) var_7)) ? (5183591149380023161ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-89)))))));
                        var_19 = ((/* implicit */signed char) (-(((var_6) << (((18446744073709551615ULL) - (18446744073709551614ULL)))))));
                        var_20 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_7))));
                        var_21 = ((/* implicit */signed char) ((int) 3371651306U));
                    }
                    for (signed char i_4 = 1; i_4 < 9; i_4 += 3) 
                    {
                        var_22 = ((/* implicit */short) (!(((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) 1879198029))))));
                        var_23 = ((/* implicit */unsigned long long int) (~(min((((((/* implicit */int) var_8)) - (((/* implicit */int) var_0)))), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-12)))))))));
                        var_24 = ((/* implicit */_Bool) (signed char)114);
                        arr_12 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)8535)) ? (max((((/* implicit */unsigned int) (unsigned char)255)), (2218212951U))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-110)))));
                        var_25 = ((/* implicit */signed char) max((((/* implicit */unsigned int) max((((/* implicit */int) var_9)), (((((/* implicit */int) (short)-3878)) & (1576692536)))))), ((~(var_13)))));
                    }
                    var_26 = ((/* implicit */int) var_4);
                    var_27 = ((/* implicit */unsigned int) ((((/* implicit */long long int) max(((-(var_14))), (((/* implicit */int) (!(((/* implicit */_Bool) -5819601958830998757LL)))))))) < (((((/* implicit */_Bool) var_4)) ? (((((/* implicit */long long int) var_5)) % ((-9223372036854775807LL - 1LL)))) : (var_1)))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 3) 
                    {
                        for (signed char i_6 = 4; i_6 < 10; i_6 += 3) 
                        {
                            {
                                var_28 = ((/* implicit */short) max((((((/* implicit */_Bool) ((-1) * (((/* implicit */int) (unsigned char)249))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)4094)))), (((/* implicit */int) (!(((/* implicit */_Bool) 1ULL)))))));
                                var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (signed char)52)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4118)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)1)), (max((((/* implicit */unsigned short) (short)(-32767 - 1))), (var_10))))))) : (min((18446744073709551613ULL), (((/* implicit */unsigned long long int) (signed char)89))))));
                                arr_17 [i_0 - 1] [i_1] [i_2] [i_1] [i_5] = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) -1215542344)) && ((!(((/* implicit */_Bool) (signed char)-68)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_30 = ((/* implicit */_Bool) var_14);
}
