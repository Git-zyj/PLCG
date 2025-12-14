/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46491
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
    var_19 = ((/* implicit */short) (-(((/* implicit */int) var_10))));
    var_20 = ((/* implicit */int) var_10);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    for (signed char i_3 = 3; i_3 < 18; i_3 += 4) 
                    {
                        {
                            var_21 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [12])) && (((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))))));
                            var_22 = ((/* implicit */signed char) (~(((/* implicit */int) arr_2 [i_0]))));
                            arr_10 [(short)15] [(short)15] [(unsigned char)20] [i_1] [0LL] = ((/* implicit */signed char) (+((+(arr_8 [i_3 + 3] [4ULL] [i_3 - 3] [i_3] [i_3 + 1] [(unsigned char)3])))));
                            arr_11 [i_0] [i_1] [(signed char)17] [i_0] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_3] [i_3] [i_3] [i_3 + 2])) || (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) || (((/* implicit */_Bool) arr_0 [(unsigned char)14])))))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [(short)5] [i_0]))))) < ((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [(signed char)18] [i_1] [i_1] [i_1])))))))));
                /* LoopNest 3 */
                for (signed char i_4 = 0; i_4 < 21; i_4 += 4) 
                {
                    for (signed char i_5 = 0; i_5 < 21; i_5 += 4) 
                    {
                        for (short i_6 = 0; i_6 < 21; i_6 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */signed char) (((+(arr_19 [i_0] [(short)5] [i_0]))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_1] [i_1] [(unsigned char)0])))))));
                                var_25 ^= ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0]))))) * (((((((/* implicit */int) arr_3 [i_0] [i_4])) + (2147483647))) << (((((arr_4 [i_0] [i_0]) + (851937335))) - (8)))))));
                                var_26 = ((/* implicit */short) arr_12 [i_0] [i_0] [i_0]);
                                var_27 |= ((/* implicit */_Bool) (((~(((/* implicit */int) ((((/* implicit */int) (signed char)109)) > (((/* implicit */int) (signed char)-117))))))) ^ (((/* implicit */int) (short)32765))));
                            }
                        } 
                    } 
                } 
                var_28 = ((((arr_6 [(signed char)14] [(_Bool)1] [19] [i_0]) + (9223372036854775807LL))) >> (((/* implicit */int) ((((/* implicit */_Bool) (signed char)111)) && (((/* implicit */_Bool) (signed char)0))))));
            }
        } 
    } 
}
