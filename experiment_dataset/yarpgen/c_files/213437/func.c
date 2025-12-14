/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213437
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
    var_13 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)788)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (34359738366LL)));
    var_14 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)117)) : (((/* implicit */int) (unsigned short)41473)))) & (((/* implicit */int) (unsigned short)24075))))) ? (max((var_5), (max((var_5), (((/* implicit */unsigned int) var_1)))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 ^= ((/* implicit */unsigned short) arr_0 [7ULL]);
        var_16 += ((/* implicit */int) (((_Bool)0) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)73)))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 3; i_3 < 12; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) min((((/* implicit */int) arr_11 [i_0] [i_1] [i_3 + 1] [i_3 - 2] [2U])), (((int) arr_2 [i_2] [i_3 + 2]))));
                                arr_12 [i_2] [(short)12] [i_2] [i_2] = min(((!(((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)41473)), (-1173490573606337004LL)))))), (((((/* implicit */int) arr_7 [(short)14] [i_1] [i_2] [i_3])) > (((/* implicit */int) max((((/* implicit */unsigned char) arr_5 [i_0])), ((unsigned char)73)))))));
                                var_18 &= ((/* implicit */_Bool) max(((((-(7938410990200207070LL))) / (min((((/* implicit */long long int) -1372884227)), (2976938450923252514LL))))), (((/* implicit */long long int) (unsigned short)65524))));
                            }
                        } 
                    } 
                    var_19 += (unsigned short)24062;
                }
            } 
        } 
    }
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)41473)) ? (((/* implicit */int) (unsigned short)1406)) : ((-2147483647 - 1))));
}
