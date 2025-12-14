/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29684
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
    for (short i_0 = 1; i_0 < 16; i_0 += 1) /* same iter space */
    {
        var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) (+(var_10))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) arr_0 [(unsigned short)10] [i_0 + 2])) ? (((/* implicit */int) arr_0 [i_0] [i_0 + 2])) : (((/* implicit */int) arr_0 [(_Bool)1] [i_0 + 2])))) + (2147483647))) << (((min((var_5), (((/* implicit */unsigned long long int) arr_0 [(unsigned char)10] [i_0 + 2])))) - (11612563722299538617ULL)))));
        var_12 = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 4; i_1 < 17; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    {
                        arr_12 [i_0] [i_1] [i_2] [(signed char)9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_1) : (((/* implicit */int) (unsigned char)133))))) ? (((((/* implicit */_Bool) var_7)) ? (var_5) : (var_8))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0 + 2] [i_0])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(unsigned short)0] [(unsigned short)0]))))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) % (((/* implicit */int) arr_8 [(unsigned short)2] [i_1 - 4] [(signed char)17] [i_1 - 1]))))) : (min((var_5), (var_5)))));
                        arr_13 [16] = ((/* implicit */unsigned char) ((((arr_11 [i_0] [i_0] [(signed char)2] [(signed char)1] [i_0 + 2]) + (9223372036854775807LL))) << (((/* implicit */int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_3])))) < ((+(var_1))))))));
                        var_13 = (((!(((/* implicit */_Bool) arr_9 [i_0 + 2] [i_1 + 1] [i_2] [i_3])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */int) (!(((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_4 [i_0] [i_0 + 1]))))))));
                    }
                } 
            } 
        } 
    }
    for (short i_4 = 1; i_4 < 16; i_4 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) (+((~(((/* implicit */int) var_0)))))))));
        /* LoopNest 2 */
        for (signed char i_5 = 0; i_5 < 18; i_5 += 3) 
        {
            for (signed char i_6 = 0; i_6 < 18; i_6 += 2) 
            {
                {
                    arr_20 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_4] [i_4])) ? (((/* implicit */int) arr_10 [i_4 + 2] [i_4] [i_4] [i_4] [i_4 + 2] [i_4 + 2])) : (((/* implicit */int) arr_10 [i_4] [(signed char)5] [(signed char)7] [(signed char)5] [(signed char)8] [i_6]))))) || (((/* implicit */_Bool) ((var_6) ? (16279534577025206595ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_4 + 1] [i_4])))))))) ? (((/* implicit */int) min((var_2), (arr_9 [i_4 - 1] [(short)13] [i_6] [i_4])))) : (((/* implicit */int) var_6))));
                    var_15 = ((/* implicit */short) arr_15 [i_5]);
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_7 = 1; i_7 < 16; i_7 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)0)))))));
        var_17 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_7] [i_7 + 2] [i_7]))) : (912901756799434450ULL)));
    }
    var_18 = ((/* implicit */_Bool) (unsigned char)254);
}
