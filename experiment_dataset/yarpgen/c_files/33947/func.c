/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33947
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
    var_18 = ((/* implicit */unsigned long long int) var_8);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 15; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 15; i_4 += 2) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) (unsigned short)23913)) ? (((/* implicit */int) (unsigned char)21)) : (((/* implicit */int) (unsigned short)41596)))) << (((((int) 888048865)) - (888048858))))) + (((/* implicit */int) (unsigned short)0))));
                                arr_13 [i_0] = ((/* implicit */unsigned char) var_11);
                                var_19 *= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_1)) - (-7786088564060175861LL)))) != (min((5760125373686815176ULL), (((/* implicit */unsigned long long int) arr_11 [i_4 + 1] [i_3] [i_3] [i_3] [i_1 - 3] [i_1 - 3] [i_1 - 3]))))));
                            }
                        } 
                    } 
                    var_20 += ((/* implicit */unsigned int) ((((/* implicit */int) (short)16497)) > (((/* implicit */int) (unsigned short)64324))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 4) 
                    {
                        arr_18 [i_0] [i_2] [i_1] [12ULL] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_9)) - (((/* implicit */int) var_14)))) ^ (((/* implicit */int) var_14))))) ? (((/* implicit */int) var_17)) : (((((/* implicit */_Bool) (short)-16498)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_15))))));
                        var_21 -= ((/* implicit */short) var_0);
                    }
                }
            } 
        } 
    } 
    var_22 -= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)46578))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) (short)-16514)))))))) : (((unsigned int) max((((/* implicit */unsigned short) var_13)), (var_10))))));
    var_23 = ((/* implicit */unsigned char) (short)16497);
}
