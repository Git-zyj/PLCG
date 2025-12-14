/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202310
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
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)65)) || (((/* implicit */_Bool) var_9)))) ? (((/* implicit */int) arr_2 [i_0] [i_1] [i_2])) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_2]))))) ? (((/* implicit */int) max((arr_0 [i_0] [i_1]), (arr_0 [i_0] [i_0])))) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [10U])) || (((/* implicit */_Bool) arr_3 [(signed char)1] [(signed char)1] [i_2])))) || ((!(((/* implicit */_Bool) 9U))))))))))));
                                var_17 = ((/* implicit */unsigned int) ((unsigned long long int) (((((_Bool)0) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_3 [4ULL] [12U] [i_2])))) * (((/* implicit */int) max((var_10), (((/* implicit */signed char) (_Bool)1))))))));
                            }
                        } 
                    } 
                    arr_12 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((_Bool) var_1));
                    arr_13 [i_1] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-15091)) ? (var_14) : (((/* implicit */unsigned int) -1922274601))))) ? (((((/* implicit */_Bool) arr_10 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [(signed char)15] [i_2]))) : (18446744073709551605ULL))) : (((((/* implicit */_Bool) arr_10 [i_0] [i_0])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0])))))));
                    var_18 *= ((/* implicit */unsigned long long int) min((((arr_6 [i_0] [i_1] [i_2]) ^ (arr_6 [i_0] [i_1] [i_2]))), ((~(min((arr_8 [11U] [14ULL] [i_1] [11U]), (var_8)))))));
                    arr_14 [i_0] [i_0] [8U] [i_0] = ((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned short) arr_5 [i_0] [(signed char)2] [i_1])), ((unsigned short)14413))), (((/* implicit */unsigned short) min((((/* implicit */short) arr_5 [i_2] [i_1] [i_0])), (arr_10 [i_0] [i_1]))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) var_15))));
    var_20 = ((/* implicit */unsigned long long int) ((short) (!(((/* implicit */_Bool) max((2984394607U), (((/* implicit */unsigned int) var_11))))))));
    var_21 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5)))), (((/* implicit */int) (signed char)-119)))) : (((((((/* implicit */_Bool) 3495559934U)) ? (((/* implicit */int) (unsigned short)14412)) : (((/* implicit */int) (signed char)(-127 - 1))))) * (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)143))))))));
}
