/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38576
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
    var_20 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 601771958170821795ULL)) ? (((/* implicit */int) (signed char)82)) : (((/* implicit */int) (signed char)-63))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_14)));
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (min((((/* implicit */long long int) min(((signed char)0), ((signed char)101)))), (min((((/* implicit */long long int) var_7)), (7523545587312939146LL))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)48)))));
    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) var_3))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)71)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        var_23 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 15943432469715962080ULL)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) ? (((unsigned long long int) (signed char)-43)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_0 [i_0])))))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -9210898806480495286LL)) ? (((/* implicit */int) (unsigned char)186)) : (((/* implicit */int) min((var_17), ((signed char)57)))))))));
        var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) (((~(((unsigned long long int) arr_0 [(signed char)8])))) <= (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)255))))))))));
    }
    /* LoopNest 3 */
    for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        for (long long int i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            for (long long int i_3 = 1; i_3 < 20; i_3 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_4 = 2; i_4 < 22; i_4 += 1) 
                    {
                        for (long long int i_5 = 4; i_5 < 20; i_5 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) min((((/* implicit */int) arr_7 [22ULL] [i_2] [i_3])), ((-(((((/* implicit */int) arr_6 [9ULL] [(unsigned char)17] [i_1])) & (((/* implicit */int) var_1)))))))))));
                                var_26 = var_11;
                                var_27 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (signed char)2)), (var_18)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 1) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 23; i_7 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned long long int) min((var_28), (max((min((((/* implicit */unsigned long long int) (signed char)48)), (arr_22 [i_3 + 2]))), (((/* implicit */unsigned long long int) min((arr_18 [i_3 + 1] [i_3] [i_3] [i_3 + 2] [i_3] [i_6]), (var_6))))))));
                                var_29 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_17)))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)45)) >= (((/* implicit */int) arr_4 [i_6]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)9)))))))), (min((((((/* implicit */_Bool) arr_21 [i_1] [i_2] [(unsigned char)13] [i_6] [i_6] [i_3] [i_3])) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (var_4))), (((0ULL) | (var_13)))))));
                                var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)52)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_3 - 1]))) : (((((/* implicit */_Bool) (-(-7388624300469581400LL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : ((+((-9223372036854775807LL - 1LL)))))))))));
                            }
                        } 
                    } 
                    var_31 = ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)69)) ? (((/* implicit */int) arr_20 [i_3 + 1] [i_3 - 1] [i_3 + 2] [i_3 + 2] [i_3 + 2] [i_3 + 2])) : (((/* implicit */int) min((var_16), (var_7))))))) - ((~((~(arr_8 [i_1] [i_2] [i_1]))))));
                    arr_23 [i_1] = (+(18446744073709551615ULL));
                    var_32 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(arr_5 [i_3 - 1]))))));
                }
            } 
        } 
    } 
}
