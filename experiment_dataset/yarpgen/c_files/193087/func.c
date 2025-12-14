/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193087
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
    var_14 ^= ((/* implicit */signed char) (-(min((((/* implicit */unsigned long long int) var_2)), (var_7)))));
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 20; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 4; i_4 < 18; i_4 += 3) 
                        {
                            {
                                arr_15 [i_4] [i_0] [(_Bool)0] [i_2 - 1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */long long int) (~(((/* implicit */int) arr_6 [i_0]))))), (((((/* implicit */long long int) arr_8 [i_0] [i_1 - 3] [i_0])) & ((~(arr_13 [i_3] [(_Bool)1] [i_0])))))));
                                var_15 = ((/* implicit */signed char) var_5);
                                var_16 = ((/* implicit */unsigned char) max(((~(arr_10 [i_0] [i_0 - 1] [i_0]))), (((/* implicit */long long int) ((((/* implicit */int) (signed char)-100)) + (((/* implicit */int) max((((/* implicit */unsigned short) (short)22444)), (arr_4 [i_0] [i_3] [i_0])))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 3; i_5 < 20; i_5 += 1) 
                    {
                        for (short i_6 = 0; i_6 < 21; i_6 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */int) arr_0 [i_0]);
                                var_18 = ((/* implicit */_Bool) (signed char)100);
                                var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_1] [i_1] [6LL]))))) ? (((/* implicit */unsigned long long int) (-(1035823443U)))) : (arr_5 [i_5 + 1]))) < (((/* implicit */unsigned long long int) 4294967281U))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 4) 
                    {
                        var_20 = ((/* implicit */short) (signed char)99);
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65535)) || (((/* implicit */_Bool) (unsigned short)0))));
                        var_22 *= ((/* implicit */_Bool) ((unsigned int) (_Bool)1));
                    }
                    for (unsigned int i_8 = 0; i_8 < 21; i_8 += 3) 
                    {
                        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65507)) ? (-6067167722381009017LL) : (((/* implicit */long long int) -159425735))));
                        arr_26 [i_0] [i_2 + 2] [(unsigned char)13] [i_0] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_8] [i_0] [i_1] [i_0] [i_0 - 1])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))) || (((/* implicit */_Bool) arr_3 [i_8] [i_0] [i_0])))));
                    }
                    /* vectorizable */
                    for (unsigned char i_9 = 0; i_9 < 21; i_9 += 2) 
                    {
                        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) var_2))));
                        var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) arr_27 [i_9] [i_9]))));
                        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 6067167722381009020LL)) ? (562949953404928LL) : (0LL)));
                    }
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */unsigned int) max((var_10), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)99)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)37))))) ? (((long long int) 6446500815078567113ULL)) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_12)), ((unsigned short)30860))))))))));
}
