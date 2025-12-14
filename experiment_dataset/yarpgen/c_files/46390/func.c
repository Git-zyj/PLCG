/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46390
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
    var_16 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)0))))) ? (var_1) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_6))))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (_Bool)1))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 19; i_2 += 4) 
            {
                {
                    var_17 |= ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_1 [(_Bool)1])))))));
                    arr_8 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) max(((~(2458787257529989825LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)228)) && (((/* implicit */_Bool) arr_4 [i_0 - 1])))))));
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_11 [i_2] [i_2] [i_2 - 2] [i_3] [i_3] |= ((/* implicit */long long int) arr_1 [i_3]);
                        arr_12 [i_3] [i_1] [i_1] [i_0 - 1] = ((/* implicit */unsigned long long int) (~(arr_0 [i_2] [i_3])));
                        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) (~(((unsigned long long int) arr_3 [i_1] [i_2])))))));
                    }
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        arr_15 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) arr_1 [i_0 - 3]))) ? (((((/* implicit */_Bool) (unsigned short)61196)) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) arr_1 [i_0 + 1])))) : ((-(((/* implicit */int) arr_1 [i_0 + 1]))))));
                        arr_16 [i_0] [i_0] [i_2] [i_4 - 1] [i_1 - 1] [i_1] = ((/* implicit */int) (((_Bool)1) ? ((~(((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_4] [i_2] [i_0] [i_2])) ? (var_1) : (((/* implicit */unsigned long long int) var_11)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1 + 2] [i_1] [i_1] [i_1] [i_1] [i_1]))) : (var_2))))));
                    }
                    /* vectorizable */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        var_19 *= ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_2])) ? (((/* implicit */long long int) arr_4 [i_0])) : (arr_3 [i_0] [i_2])));
                        arr_19 [i_1] [i_2] [i_1] [0LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_7 [6] [i_1 - 1] [i_1] [i_1 - 1])))) ? (((/* implicit */unsigned long long int) ((var_11) / (((/* implicit */int) var_4))))) : (2035619206737396978ULL)));
                    }
                    arr_20 [i_2] [i_2] [i_2] [i_0] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (1152921504606846975LL)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_18 [i_0 - 3] [i_2 - 1] [i_2 + 1] [4LL])) : (((/* implicit */int) arr_9 [i_0 - 2])))) : ((+(((/* implicit */int) arr_9 [i_0 - 1]))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */int) var_13);
    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(var_2)))) ? (((/* implicit */long long int) ((1703309907) - (((/* implicit */int) var_10))))) : ((-(((((/* implicit */_Bool) 16411124866972154633ULL)) ? (var_15) : (((/* implicit */long long int) var_3)))))))))));
}
