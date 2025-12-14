/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221126
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
    var_18 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-94)), ((unsigned short)41404)))) != (var_2)))) ^ ((~((+(((/* implicit */int) (signed char)23))))))));
    var_19 = ((/* implicit */short) var_8);
    var_20 ^= ((/* implicit */long long int) var_14);
    var_21 = ((/* implicit */unsigned short) ((unsigned long long int) (+(((/* implicit */int) var_16)))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) (~(max((var_2), (((/* implicit */int) var_13))))));
                                var_23 += ((/* implicit */long long int) min(((~(1605496303U))), (((/* implicit */unsigned int) var_14))));
                                arr_13 [i_0] [i_1] [i_4] [i_2] [i_3] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned int) var_1))))) ? (((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (signed char)117)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)122)), ((unsigned short)41404))))))) == (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_4] [i_3] [i_2] [(unsigned short)21])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_9 [i_0] [i_2] [i_2] [i_3]))))), (((((/* implicit */_Bool) -1604515520)) ? (((/* implicit */long long int) ((/* implicit */int) (short)64))) : (-4964552263836325965LL)))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned int) var_17);
                }
                for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                {
                    var_25 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) ((((/* implicit */int) var_3)) - (((/* implicit */int) arr_15 [(short)9] [(unsigned short)0])))))) ? (max((((/* implicit */unsigned long long int) arr_11 [i_5] [i_1] [0LL] [(unsigned char)22] [(short)17])), ((~(var_9))))) : (((/* implicit */unsigned long long int) max((1605496301U), (((/* implicit */unsigned int) (signed char)-30)))))));
                    var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_15 [(unsigned short)3] [i_1])), (min((((/* implicit */unsigned long long int) var_3)), (arr_3 [12])))))) ? (((/* implicit */unsigned long long int) max((4294967280U), (((/* implicit */unsigned int) (unsigned char)167))))) : (min((((/* implicit */unsigned long long int) ((short) var_4))), ((-(17107127927955798505ULL)))))));
                }
                arr_16 [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) min((var_11), (arr_9 [i_0] [i_0] [i_1] [14U])))))))));
            }
        } 
    } 
}
