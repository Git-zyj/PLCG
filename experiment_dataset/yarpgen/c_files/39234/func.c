/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39234
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
    var_11 = (((+(((((/* implicit */_Bool) var_9)) ? (8229712962550383810LL) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))) % (((((/* implicit */_Bool) (short)27872)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)191))) : (((var_7) % (((/* implicit */long long int) ((/* implicit */int) (short)27864))))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((((((/* implicit */int) (signed char)-1)) + (2147483647))) >> (((((/* implicit */int) (short)8191)) - (8171))))))));
        var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(999902463)))) && (((/* implicit */_Bool) min((arr_1 [i_0]), (arr_1 [i_0]))))));
        arr_3 [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) (unsigned char)163)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0])))), (((((/* implicit */_Bool) -4597317669655916693LL)) ? (((/* implicit */int) (short)27872)) : (((/* implicit */int) (unsigned short)65535))))));
        var_14 += ((/* implicit */short) ((((/* implicit */_Bool) (short)27863)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_2 [22]))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)-9281))));
        var_16 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)20721))));
        /* LoopSeq 2 */
        for (unsigned short i_2 = 1; i_2 < 21; i_2 += 1) 
        {
            var_17 -= ((/* implicit */unsigned int) (short)5974);
            var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)93)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (4597317669655916688LL))))));
            arr_10 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1152921504606846975LL)) ? (((/* implicit */int) arr_8 [6] [i_2 + 1] [i_2])) : (((/* implicit */int) (unsigned char)64))));
        }
        for (unsigned char i_3 = 0; i_3 < 23; i_3 += 1) 
        {
            arr_14 [i_1] [i_3] = var_2;
            arr_15 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(arr_5 [i_1]))))));
        }
        arr_16 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [(signed char)8])) ? (((/* implicit */int) (short)27863)) : (((((/* implicit */int) arr_1 [i_1])) % (((/* implicit */int) (unsigned short)15))))));
    }
    for (unsigned short i_4 = 0; i_4 < 23; i_4 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 1; i_5 < 22; i_5 += 1) 
        {
            for (short i_6 = 0; i_6 < 23; i_6 += 3) 
            {
                {
                    arr_24 [i_5] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((4274330181U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_4])))))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5964))) & (arr_19 [i_4] [i_5 - 1])))))) ? (((/* implicit */unsigned int) (~((~(((/* implicit */int) (unsigned short)24858))))))) : (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)9256)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5))))), (2380344705U)))));
                    arr_25 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-31092)) ? (5919261819270835151ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                    var_19 = ((/* implicit */unsigned char) var_3);
                    arr_26 [i_5] [i_4] [i_5] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)4095))) | (((((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_4])) >> (((/* implicit */int) arr_2 [i_5]))))) ? (((((/* implicit */_Bool) var_1)) ? (arr_22 [i_4] [i_5] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) var_7))))));
                }
            } 
        } 
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) 8191)) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)-34)) : (((/* implicit */int) var_3)))))) : (((((/* implicit */_Bool) 2388153523U)) ? (((((/* implicit */_Bool) arr_6 [i_4])) ? (((/* implicit */int) (short)28799)) : (((/* implicit */int) var_0)))) : (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) arr_22 [(unsigned short)0] [i_4] [(unsigned short)0])))))))));
    }
}
