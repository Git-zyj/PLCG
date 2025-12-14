/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210172
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
    var_14 ^= ((/* implicit */unsigned int) var_13);
    var_15 = ((/* implicit */unsigned long long int) var_12);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_16 -= ((/* implicit */unsigned short) (~((-(((((/* implicit */int) var_12)) - (arr_0 [i_0] [i_1])))))));
                var_17 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)85))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (arr_0 [i_1] [i_1]))) : (((int) arr_3 [i_0] [i_1]))));
                var_18 = ((/* implicit */long long int) min((min((arr_0 [i_0] [i_0]), (arr_0 [9LL] [i_0]))), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))));
                /* LoopSeq 3 */
                for (short i_2 = 2; i_2 < 13; i_2 += 2) 
                {
                    /* LoopSeq 3 */
                    for (short i_3 = 0; i_3 < 14; i_3 += 1) /* same iter space */
                    {
                        arr_9 [i_0] = ((/* implicit */int) arr_7 [i_2 - 2] [i_2 + 1] [i_2] [i_2]);
                        var_19 *= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)3)), ((unsigned short)33561))))) * (((long long int) (!(((/* implicit */_Bool) (unsigned short)31088)))))));
                    }
                    for (short i_4 = 0; i_4 < 14; i_4 += 1) /* same iter space */
                    {
                        var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 2008748735658278627LL))));
                        var_21 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((~(2892320151U))) ^ (((/* implicit */unsigned int) -1073741824)))))));
                        var_22 = ((/* implicit */long long int) ((((/* implicit */int) arr_2 [(unsigned short)13] [(unsigned short)13])) != (((/* implicit */int) arr_13 [i_0] [(short)4] [i_0] [i_4]))));
                        var_23 *= ((/* implicit */short) min((arr_11 [i_2 - 2] [i_2 - 1] [i_2 - 1]), (((/* implicit */long long int) arr_6 [i_2 - 2] [i_2 - 2] [(unsigned short)3]))));
                    }
                    /* vectorizable */
                    for (short i_5 = 0; i_5 < 14; i_5 += 1) /* same iter space */
                    {
                        var_24 = ((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_5] [i_1])) & (((/* implicit */int) arr_12 [13LL] [i_0] [i_0] [i_0]))));
                        var_25 += ((/* implicit */unsigned short) ((int) arr_14 [i_1]));
                    }
                    var_26 ^= ((/* implicit */long long int) arr_15 [i_0] [i_1] [i_1] [i_2] [i_0] [i_0]);
                }
                for (unsigned short i_6 = 0; i_6 < 14; i_6 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 0; i_7 < 14; i_7 += 4) 
                    {
                        for (unsigned int i_8 = 2; i_8 < 13; i_8 += 4) 
                        {
                            {
                                var_27 += ((/* implicit */unsigned char) (~(((((/* implicit */int) arr_22 [i_8 + 1] [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 + 1])) + (((/* implicit */int) arr_22 [i_8 + 1] [i_8 - 1] [i_8 + 1] [i_8 - 1] [i_8 + 1]))))));
                                var_28 = ((/* implicit */int) (-(323977881U)));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */short) max((((/* implicit */unsigned long long int) 2008748735658278627LL)), (5235271271612952142ULL)));
                }
                for (short i_9 = 3; i_9 < 13; i_9 += 2) 
                {
                    var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) min(((+(((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) (unsigned short)34469)))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_9 - 2] [i_9] [i_9 - 3] [i_9 - 2] [i_9]))))))))));
                    var_31 &= ((/* implicit */long long int) ((unsigned short) (!(((/* implicit */_Bool) (unsigned char)118)))));
                }
            }
        } 
    } 
    var_32 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) + (((/* implicit */int) var_12)))))))) || (((/* implicit */_Bool) var_6))));
}
