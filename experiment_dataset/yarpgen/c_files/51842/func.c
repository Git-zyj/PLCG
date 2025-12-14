/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51842
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
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (~(8275896032002915527ULL)))) ? (((((((/* implicit */_Bool) (unsigned short)27594)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)3))) : (901663119690615794LL))) ^ (((/* implicit */long long int) (~(((/* implicit */int) var_13))))))) : (((/* implicit */long long int) var_3))));
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) var_15);
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) ((var_8) / (((/* implicit */long long int) ((/* implicit */int) arr_3 [(short)9] [(_Bool)1])))))) ? (7388663667535242467LL) : (((/* implicit */long long int) var_14))))))));
    }
    /* LoopNest 2 */
    for (unsigned int i_1 = 2; i_1 < 20; i_1 += 3) 
    {
        for (unsigned short i_2 = 3; i_2 < 19; i_2 += 2) 
        {
            {
                var_20 = ((/* implicit */signed char) (-(((((/* implicit */long long int) ((/* implicit */int) var_7))) / (var_16)))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_3 = 0; i_3 < 21; i_3 += 3) 
                {
                    var_21 ^= ((/* implicit */short) (-(((/* implicit */int) (signed char)127))));
                    arr_14 [i_1] [i_1] [6ULL] &= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)7)) & (((var_11) ? ((-2147483647 - 1)) : (((/* implicit */int) (_Bool)0))))));
                }
                for (long long int i_4 = 4; i_4 < 20; i_4 += 3) 
                {
                    var_22 -= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (signed char)-3)))) | (((unsigned int) min((((/* implicit */unsigned int) var_6)), (554035361U))))));
                    var_23 = ((/* implicit */unsigned short) (~(min((var_8), (((/* implicit */long long int) arr_9 [i_4 - 3] [i_2 + 2]))))));
                }
                arr_17 [i_1] [i_2 - 3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_7 [i_1 - 2])) : (((/* implicit */int) arr_7 [i_1 - 2]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_7)) > (((/* implicit */int) arr_16 [i_1 - 2] [i_1 - 1] [i_2 - 2])))))) : (min((var_15), (((/* implicit */long long int) var_14))))));
                var_24 ^= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_9)), (((10170848041706636089ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0)))))));
                var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (+(((((/* implicit */int) var_5)) | (((/* implicit */int) var_7)))))))));
            }
        } 
    } 
    var_26 += ((/* implicit */short) ((((/* implicit */int) var_10)) >= (((/* implicit */int) var_5))));
    var_27 = ((/* implicit */int) var_6);
}
