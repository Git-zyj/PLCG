/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248540
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    var_12 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)53))) - (26ULL)));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 15; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_13 *= ((/* implicit */_Bool) (~(((-7473854720229842797LL) & (((/* implicit */long long int) var_9))))));
                                arr_14 [i_0] [i_1] [i_2] [i_1] [i_1] [i_1] [(_Bool)1] = ((/* implicit */signed char) ((arr_10 [i_3 - 1] [i_1 - 1]) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [(unsigned char)1] [(unsigned char)1] [i_3] [i_3] [i_4]))) : (18446744073709551590ULL))) : (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned long long int) arr_12 [i_0] [(_Bool)1] [i_0] [3U] [i_0])) : (18446744073709551604ULL)))));
                                arr_15 [i_0] [14ULL] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */int) (unsigned char)81)) == (arr_4 [i_0])));
                            }
                        } 
                    } 
                    var_14 += ((/* implicit */_Bool) (-((~(789267206591460567ULL)))));
                }
                var_15 = ((/* implicit */unsigned char) max(((+(arr_1 [i_1 + 1] [i_1 + 1]))), (arr_13 [i_0] [i_1] [i_1 + 1] [i_1] [(unsigned char)12])));
                arr_16 [i_0] [i_1] [(signed char)8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)28672)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)8404))));
            }
        } 
    } 
    var_16 = var_2;
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (_Bool)1))));
    var_18 = ((/* implicit */unsigned char) (+(var_2)));
    var_19 -= ((/* implicit */unsigned short) 44ULL);
}
