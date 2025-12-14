/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214230
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
    var_10 = ((/* implicit */_Bool) min((var_4), (((/* implicit */long long int) var_2))));
    var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) var_8))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                arr_5 [(unsigned char)5] = ((/* implicit */unsigned char) ((unsigned short) (_Bool)1));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (unsigned char i_4 = 0; i_4 < 10; i_4 += 4) 
                            {
                                var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) (-(((/* implicit */int) min(((unsigned short)53743), (((/* implicit */unsigned short) ((var_1) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))))))))))));
                                var_13 = (+((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0)))));
                            }
                            for (signed char i_5 = 4; i_5 < 9; i_5 += 4) 
                            {
                                arr_17 [i_5] [5LL] [5LL] [i_1] [(_Bool)1] [i_1] [i_2] = ((/* implicit */long long int) arr_16 [9LL] [i_1] [i_2] [i_3] [(_Bool)1]);
                                arr_18 [i_5] [(_Bool)1] [5LL] [i_1] [5LL] = ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) -6301253174335476116LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_2 [i_0] [i_5]))))) ? (8070450532247928832LL) : (((((/* implicit */_Bool) (unsigned char)205)) ? (8070450532247928832LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
                                arr_19 [i_0] [i_0] [i_0] [(_Bool)1] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_10 [i_5 - 1] [i_5 + 1] [i_5 + 1] [i_5 - 3])) ? (((/* implicit */int) (unsigned char)105)) : (((/* implicit */int) arr_10 [i_5 - 4] [i_5 - 1] [i_5 - 4] [i_5 - 3]))))));
                            }
                            for (long long int i_6 = 3; i_6 < 8; i_6 += 2) 
                            {
                                arr_23 [i_1] [i_1] [(unsigned short)2] &= ((long long int) ((long long int) (((_Bool)0) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
                                arr_24 [i_0] [(unsigned short)2] [i_6] [(unsigned char)3] [(unsigned char)3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_6) : (arr_2 [i_0] [i_3])))) ? (((/* implicit */long long int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1))))) : (((((/* implicit */_Bool) arr_8 [i_0] [i_1] [9LL] [i_2] [(signed char)5] [0LL])) ? (((/* implicit */long long int) arr_8 [i_0] [i_0] [(signed char)6] [(signed char)8] [i_0] [i_0])) : (arr_2 [i_0] [i_1])))));
                                var_14 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)1))))) ^ (((((/* implicit */_Bool) var_2)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */int) ((unsigned char) var_0))) : (((((((((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [(_Bool)0] [i_0] [i_0] [(signed char)1])) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1))))) ^ (((/* implicit */int) var_7))))));
                            }
                            var_15 += ((/* implicit */unsigned short) min(((unsigned char)97), (((/* implicit */unsigned char) var_0))));
                            var_16 = min((arr_2 [i_0] [i_0]), (arr_2 [i_2] [i_0]));
                            arr_25 [(unsigned char)3] |= var_5;
                            var_17 |= var_2;
                        }
                    } 
                } 
            }
        } 
    } 
}
