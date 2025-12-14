/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37584
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
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) ((2220949060450078438ULL) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)33719)))))))) <= (((/* implicit */int) (unsigned char)122))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */int) var_14);
                /* LoopSeq 1 */
                for (long long int i_2 = 3; i_2 < 22; i_2 += 3) 
                {
                    arr_8 [i_1 + 3] = ((/* implicit */unsigned short) -592595126);
                    var_21 = ((/* implicit */unsigned char) min((var_21), (var_6)));
                    var_22 = min((((/* implicit */long long int) ((signed char) min((12496402778343306407ULL), (((/* implicit */unsigned long long int) 4294967285U)))))), (min((((/* implicit */long long int) max((var_3), (var_11)))), (((long long int) (unsigned short)9)))));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_3 = 2; i_3 < 22; i_3 += 3) 
                {
                    arr_11 [i_3 + 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2097064092U)) ? (592595139) : (((/* implicit */int) (_Bool)1))));
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 0; i_4 < 24; i_4 += 4) 
                    {
                        var_23 *= ((/* implicit */unsigned char) 18412382158466004566ULL);
                        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_0] [i_0 + 2] [i_3 + 1] [(signed char)7] [i_4])) % (-189416316))))));
                        var_25 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_3] [i_1] [i_0])) || (((/* implicit */_Bool) arr_12 [i_4] [(short)9] [8LL] [i_0] [i_0]))))) : (((((-1676101998) + (2147483647))) >> (((/* implicit */int) arr_10 [i_0 + 3] [i_0] [i_0] [i_0 - 1]))))));
                    }
                    arr_14 [i_0 + 3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_14))));
                    var_26 ^= ((/* implicit */unsigned char) 18446744073709551589ULL);
                }
                var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) arr_9 [i_0] [i_1] [i_1]))));
            }
        } 
    } 
    var_28 = ((/* implicit */_Bool) min((min((((/* implicit */int) var_9)), (var_5))), ((+(var_5)))));
    var_29 = var_6;
}
