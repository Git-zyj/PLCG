/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216614
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
    var_14 = ((/* implicit */unsigned int) (+(var_7)));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) arr_1 [i_0 + 1]))) && (((/* implicit */_Bool) -6245567024376237339LL))));
        var_15 &= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_11)), (min((arr_1 [i_0 + 1]), (8639079421083329719ULL)))));
        arr_3 [i_0] &= max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((arr_1 [(unsigned short)7]), (arr_1 [i_0 - 1]))))))), (var_7));
        arr_4 [i_0] &= ((/* implicit */unsigned char) 117996460U);
    }
    for (unsigned char i_1 = 1; i_1 < 16; i_1 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned char) var_8);
        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [9U] [i_1])) || (((/* implicit */_Bool) var_1))))), (4294967295U)))))));
    }
    for (unsigned char i_2 = 1; i_2 < 16; i_2 += 4) /* same iter space */
    {
        var_18 ^= ((/* implicit */signed char) var_4);
        arr_11 [i_2] = ((/* implicit */unsigned short) (~(var_0)));
    }
    for (unsigned char i_3 = 1; i_3 < 16; i_3 += 4) /* same iter space */
    {
        arr_15 [i_3] = ((/* implicit */int) max((((/* implicit */long long int) max((((/* implicit */unsigned int) var_3)), (27U)))), (min((((/* implicit */long long int) arr_12 [i_3 - 1] [i_3 - 1])), (arr_13 [i_3 + 1])))));
        var_19 *= ((/* implicit */signed char) ((((/* implicit */_Bool) 16777215ULL)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)128)))));
        arr_16 [12ULL] |= ((((/* implicit */int) var_8)) % (((int) arr_13 [i_3 + 1])));
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 2; i_4 < 16; i_4 += 3) 
        {
            for (unsigned long long int i_5 = 1; i_5 < 15; i_5 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((unsigned long long int) (unsigned short)44023)), (((/* implicit */unsigned long long int) ((var_7) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_5]))))))))) || (((/* implicit */_Bool) max((2234729565U), (((/* implicit */unsigned int) (unsigned char)0))))))))));
                    var_21 = ((/* implicit */unsigned char) ((max((2060237731U), (((/* implicit */unsigned int) arr_19 [13ULL] [i_4 - 1] [i_5 - 1] [i_5 + 1])))) < (max((46U), (((/* implicit */unsigned int) arr_19 [i_4] [i_4 - 1] [i_5 + 1] [16LL]))))));
                }
            } 
        } 
    }
    var_22 = ((/* implicit */unsigned short) (signed char)0);
}
