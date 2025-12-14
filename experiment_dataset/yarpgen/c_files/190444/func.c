/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190444
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) max((((/* implicit */signed char) ((_Bool) ((((/* implicit */int) (short)1219)) ^ (((/* implicit */int) (signed char)127)))))), (arr_2 [i_0])));
        var_17 = ((/* implicit */long long int) max(((-(min((((/* implicit */unsigned long long int) var_13)), (12141676937693153635ULL))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)0)))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 4; i_2 < 16; i_2 += 3) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_18 -= ((/* implicit */signed char) ((((/* implicit */int) (!(var_8)))) < (((((/* implicit */_Bool) max((536870896), (((/* implicit */int) var_8))))) ? (((/* implicit */int) var_13)) : (((var_10) ? (555061671) : (((/* implicit */int) var_3))))))));
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_19 *= ((/* implicit */_Bool) ((((/* implicit */int) var_1)) % (min((((/* implicit */int) arr_13 [4U] [4U] [4U] [4U] [i_3 - 1] [i_2 - 1])), (var_6)))));
                            arr_17 [i_0] [i_0] = ((/* implicit */short) (!((!(((((/* implicit */_Bool) (signed char)-77)) && (((/* implicit */_Bool) 0ULL))))))));
                            arr_18 [i_0] [i_1] [i_2 + 1] [18ULL] [i_3] [i_0] [i_4] = ((unsigned char) ((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_2] [i_0] [i_3 - 1] [i_4])) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_13 [i_0] [i_3 - 1] [i_3 - 1] [i_2 - 4] [i_1] [i_0]))));
                        }
                        for (unsigned int i_5 = 0; i_5 < 19; i_5 += 2) 
                        {
                            arr_21 [i_0] = ((/* implicit */unsigned short) (+(max((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) var_12)) : (var_9))), (((/* implicit */unsigned long long int) min((arr_19 [i_0] [i_0] [i_0] [i_0]), (var_13))))))));
                            var_20 = ((/* implicit */long long int) min((var_20), (var_0)));
                            arr_22 [i_0] [i_0] [i_0] [i_5] |= ((/* implicit */unsigned int) min(((_Bool)1), ((_Bool)1)));
                        }
                        /* LoopSeq 1 */
                        for (unsigned int i_6 = 0; i_6 < 19; i_6 += 2) 
                        {
                            arr_25 [i_0] [i_6] |= ((((/* implicit */_Bool) min((arr_24 [i_2 - 2] [i_2 - 2] [13U]), (max((var_1), (arr_4 [i_6])))))) ? (((/* implicit */unsigned long long int) var_15)) : (((unsigned long long int) arr_5 [i_0] [i_2 + 3] [i_3])));
                            arr_26 [i_6] [i_3 - 1] [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((unsigned long long int) min((((/* implicit */int) min((((/* implicit */signed char) var_10)), (var_3)))), ((-(((/* implicit */int) (_Bool)1)))))));
                            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)0))))) ? (min((var_15), (((/* implicit */unsigned int) var_10)))) : (min((125021040U), (((/* implicit */unsigned int) (signed char)121))))));
                        }
                        var_22 *= ((/* implicit */unsigned int) var_13);
                    }
                } 
            } 
        } 
    }
    var_23 = ((/* implicit */unsigned int) 2147483647);
}
