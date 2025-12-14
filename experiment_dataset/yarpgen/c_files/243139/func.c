/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243139
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
    var_14 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((var_6) >> (((((/* implicit */int) (signed char)124)) - (120)))))) && (((/* implicit */_Bool) var_12))));
    var_15 = ((/* implicit */unsigned long long int) (~(var_1)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        var_16 = ((/* implicit */int) arr_1 [i_0]);
        var_17 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_6))));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            var_18 = ((/* implicit */unsigned short) (+(((((/* implicit */int) arr_3 [i_0 + 1] [i_0])) - (((/* implicit */int) (signed char)-115))))));
            var_19 *= (signed char)34;
        }
        for (int i_2 = 0; i_2 < 22; i_2 += 4) 
        {
            arr_8 [i_0] [i_2] [i_2] = ((/* implicit */_Bool) (signed char)106);
            arr_9 [i_0] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-18))));
        }
        for (int i_3 = 3; i_3 < 20; i_3 += 1) 
        {
            var_20 *= ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)199)) / (((/* implicit */int) var_13))));
            var_21 = ((/* implicit */unsigned int) var_12);
        }
    }
    for (unsigned long long int i_4 = 4; i_4 < 13; i_4 += 2) 
    {
        arr_15 [i_4] [i_4] = var_5;
        var_22 = ((/* implicit */unsigned long long int) min((-645319817), (((/* implicit */int) (_Bool)1))));
        arr_16 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-42)) - (-645319809)));
    }
    for (long long int i_5 = 3; i_5 < 12; i_5 += 3) 
    {
        var_23 = ((/* implicit */unsigned short) ((unsigned char) -645319820));
        arr_19 [i_5] [(signed char)10] = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(288230376151707648LL)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)65))))), ((+((~(2827142296U)))))));
    }
}
