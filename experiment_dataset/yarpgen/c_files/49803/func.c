/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49803
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
    /* LoopSeq 3 */
    for (signed char i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 15; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) max((var_15), ((+((-(arr_6 [i_0 - 1] [i_0 - 1] [(short)7])))))));
                    var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))))) ^ (max((var_13), (((/* implicit */unsigned long long int) (unsigned short)38595)))))))));
                    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (+((+((-(((/* implicit */int) (unsigned char)0)))))))))));
                    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) max(((unsigned char)253), (((/* implicit */unsigned char) ((arr_0 [i_0]) == (arr_4 [i_0 + 3] [i_0 + 1] [i_0 + 2] [i_0 + 3])))))))));
                }
            } 
        } 
        var_19 = ((/* implicit */int) arr_7 [i_0]);
        var_20 = ((/* implicit */unsigned char) arr_3 [i_0] [(short)5] [12U]);
    }
    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 2) 
    {
        arr_10 [16] = ((((((/* implicit */int) arr_9 [i_3])) % (((/* implicit */int) arr_9 [i_3])))) * (((((/* implicit */int) arr_9 [i_3])) ^ (((/* implicit */int) arr_9 [i_3])))));
        arr_11 [1U] |= arr_9 [i_3];
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_3])) ^ ((~(((int) (unsigned char)255))))));
        arr_12 [(short)0] [(short)0] = ((/* implicit */_Bool) ((((/* implicit */int) var_5)) >> (((var_0) - (2411794769U)))));
    }
    for (unsigned char i_4 = 2; i_4 < 16; i_4 += 3) 
    {
        /* LoopSeq 1 */
        for (long long int i_5 = 0; i_5 < 17; i_5 += 2) 
        {
            var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) arr_0 [(_Bool)1]))));
            var_23 = ((/* implicit */unsigned long long int) arr_17 [i_4] [i_4]);
            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_4 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)26916)))))) : (0U)))) ? (((/* implicit */long long int) ((/* implicit */int) ((7657501234140133427LL) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))) : (arr_4 [i_4] [(unsigned short)11] [(_Bool)1] [(short)5])));
        }
        var_25 = ((/* implicit */unsigned int) arr_0 [i_4]);
    }
    var_26 = ((/* implicit */short) var_5);
    var_27 ^= ((/* implicit */short) (+(var_8)));
}
