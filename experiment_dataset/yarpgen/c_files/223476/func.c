/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223476
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
    for (unsigned char i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        var_18 += ((/* implicit */unsigned short) max(((short)2848), (((/* implicit */short) arr_0 [i_0] [i_0]))));
        var_19 = ((/* implicit */int) ((unsigned int) var_16));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_1 = 2; i_1 < 15; i_1 += 4) 
    {
        for (int i_2 = 2; i_2 < 15; i_2 += 4) 
        {
            {
                var_20 += ((/* implicit */_Bool) max((5872319957581339037ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_7 [i_1] [i_1 - 2] [i_2])))))));
                /* LoopNest 3 */
                for (signed char i_3 = 0; i_3 < 16; i_3 += 2) 
                {
                    for (int i_4 = 0; i_4 < 16; i_4 += 2) 
                    {
                        for (unsigned int i_5 = 1; i_5 < 15; i_5 += 2) 
                        {
                            {
                                var_21 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((max((5872319957581339037ULL), (((/* implicit */unsigned long long int) (signed char)57)))), (((/* implicit */unsigned long long int) var_15))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((1270974515) << (((5872319957581339037ULL) - (5872319957581339037ULL))))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) 12574424116128212578ULL))))))));
                                var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1)))))));
                                var_23 &= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)24970))) <= (12574424116128212579ULL)));
                                var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (-(((int) ((arr_8 [7ULL]) ? (((/* implicit */int) (unsigned char)59)) : (((/* implicit */int) (short)6474))))))))));
                            }
                        } 
                    } 
                } 
                var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) var_12))));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_12))));
    var_27 += ((/* implicit */unsigned long long int) var_10);
}
