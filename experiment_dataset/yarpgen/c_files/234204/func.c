/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234204
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
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 16; i_3 += 4) 
                    {
                        var_20 &= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_6 [0U] [i_3 - 2] [i_2]))));
                        arr_9 [i_0] [i_1] [(unsigned short)0] [i_1] = ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_11)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)63))))) : (2090192290976046091ULL));
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_4 = 1; i_4 < 19; i_4 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_3 [i_2])) ? (16447984986838883977ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))))))));
                        arr_14 [i_0] [i_1] [3ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_6 [i_0] [5] [i_2]) ? (3857688697457153108LL) : (-9223372036854775807LL)))) ? (-9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_8 [i_0] [i_1] [i_2]))))));
                    }
                    /* vectorizable */
                    for (short i_5 = 4; i_5 < 19; i_5 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (_Bool)1))));
                        var_23 = ((/* implicit */short) (~(9223372036854775807LL)));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 20; i_6 += 2) 
                    {
                        for (signed char i_7 = 0; i_7 < 20; i_7 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) (-(min(((~(0ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_8 [i_7] [i_6] [i_1])) : (((/* implicit */int) (short)-16889))))))))))));
                                arr_23 [1LL] [(signed char)16] [i_2] [i_1] [i_7] [i_1] = ((/* implicit */short) (+(((/* implicit */int) var_9))));
                            }
                        } 
                    } 
                    var_25 = -9223372036854775807LL;
                    var_26 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_1] [i_2])) ? (1337645949058147186ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) || (((/* implicit */_Bool) -9223372036854775801LL)))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
    {
        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((((((/* implicit */_Bool) arr_3 [16U])) || (((/* implicit */_Bool) (short)6752)))) ? (var_6) : (((/* implicit */unsigned long long int) (+(var_5)))))))));
        arr_26 [i_8] = ((/* implicit */short) var_14);
        arr_27 [i_8] = ((/* implicit */unsigned long long int) (~(arr_5 [i_8] [i_8] [i_8])));
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
    {
        var_28 = ((/* implicit */int) max((((unsigned int) ((((/* implicit */_Bool) var_6)) ? (arr_20 [i_9] [i_9]) : (((/* implicit */int) var_11))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((arr_24 [i_9] [i_9]) || (((/* implicit */_Bool) arr_15 [i_9] [(unsigned short)6] [(short)10] [(short)10] [i_9] [i_9]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))))));
        var_29 = ((/* implicit */short) ((((unsigned long long int) (~(((/* implicit */int) (signed char)-36))))) / (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_24 [i_9] [i_9])))))));
    }
    /* vectorizable */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
    {
        arr_35 [(signed char)4] [i_10] = ((/* implicit */long long int) ((arr_10 [i_10] [i_10] [i_10] [i_10] [i_10]) / (arr_10 [i_10] [1] [i_10] [i_10] [i_10])));
        var_30 += ((/* implicit */_Bool) (~(var_14)));
    }
    var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) (((!(((/* implicit */_Bool) 3415980590U)))) ? (((/* implicit */int) min(((short)0), (((/* implicit */short) var_16))))) : ((~(((/* implicit */int) var_11))))))))))));
}
