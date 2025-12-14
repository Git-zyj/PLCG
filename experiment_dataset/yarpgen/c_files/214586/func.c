/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214586
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_0] [(unsigned char)5] [(short)9] &= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [(signed char)15] [i_1 + 2] [(_Bool)1] [i_1]))))) ? ((~(((/* implicit */int) arr_6 [i_1] [i_1 - 1] [15LL] [12U])))) : (((/* implicit */int) max((arr_6 [i_0] [i_1 + 1] [i_2] [7U]), (arr_6 [14U] [i_1 - 1] [(_Bool)1] [i_2]))))));
                    arr_8 [15ULL] [i_1] [i_2] [2U] = ((/* implicit */long long int) max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_2 [i_1]))))), (((arr_0 [i_1 + 3]) >> (((/* implicit */int) (_Bool)1))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 15; i_3 += 4) 
                    {
                        for (long long int i_4 = 2; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_17 ^= ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65261)) != (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_4 [2LL] [(unsigned short)13])))))))));
                                var_18 &= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) (-(((/* implicit */int) arr_9 [i_2] [8LL]))))), (max((arr_12 [(signed char)9] [16LL] [(signed char)7] [(signed char)4] [i_4] [(unsigned short)10]), (arr_5 [4ULL] [i_1])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_4 [i_1 + 1] [i_2 + 3])))) : (((((/* implicit */_Bool) -1LL)) ? (1011437528U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)52)))))));
                                arr_13 [(_Bool)1] [(signed char)3] [i_2] [i_1] [i_0] [(unsigned char)10] = ((/* implicit */_Bool) arr_11 [10LL] [i_1] [i_2 - 1] [i_4]);
                                arr_14 [13LL] [(unsigned char)13] [9LL] [9ULL] = ((/* implicit */unsigned int) ((unsigned short) (unsigned char)107));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 += ((/* implicit */unsigned short) (~((+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)17643)) : (((/* implicit */int) var_7))))))));
}
