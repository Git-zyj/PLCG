/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3229
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
    var_20 = ((/* implicit */unsigned char) var_18);
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((var_17) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned char)37)))) : (var_4)))) - (var_18)));
    /* LoopSeq 4 */
    for (int i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        var_22 = ((/* implicit */unsigned char) (~(var_12)));
        var_23 = ((/* implicit */long long int) max((((((/* implicit */_Bool) -1926676332)) ? (((/* implicit */int) (signed char)-97)) : (((/* implicit */int) arr_1 [i_0 - 1])))), (var_1)));
    }
    for (unsigned char i_1 = 4; i_1 < 18; i_1 += 1) 
    {
        var_24 = ((/* implicit */_Bool) ((signed char) min(((unsigned char)218), (((/* implicit */unsigned char) var_17)))));
        var_25 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((var_9) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)-5298), (arr_5 [i_1] [i_1 - 3]))))))))));
    }
    for (long long int i_2 = 3; i_2 < 14; i_2 += 1) 
    {
        var_26 = ((/* implicit */unsigned short) arr_2 [(signed char)11] [i_2 - 1]);
        arr_8 [i_2] [i_2] = ((/* implicit */_Bool) var_7);
    }
    for (long long int i_3 = 0; i_3 < 18; i_3 += 3) 
    {
        var_27 = ((max(((-(11739570836373529530ULL))), (((/* implicit */unsigned long long int) max((var_10), (((/* implicit */long long int) var_2))))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(_Bool)1] [(_Bool)1]))));
        /* LoopSeq 2 */
        for (long long int i_4 = 0; i_4 < 18; i_4 += 2) 
        {
            arr_15 [i_3] [i_4] [i_3] = ((/* implicit */unsigned char) arr_5 [i_3] [i_4]);
            arr_16 [i_3] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned char) arr_13 [i_3]))))) ? (min((((/* implicit */unsigned long long int) min((((/* implicit */int) var_8)), (var_1)))), (((unsigned long long int) (unsigned char)60)))) : ((~(var_9)))));
            var_28 = ((/* implicit */_Bool) 9223372036854775807LL);
        }
        /* vectorizable */
        for (unsigned char i_5 = 2; i_5 < 17; i_5 += 1) 
        {
            var_29 = ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_5 - 1]))) : (((arr_14 [i_5] [i_3]) & (((/* implicit */unsigned int) 1866977503)))));
            /* LoopNest 2 */
            for (unsigned int i_6 = 1; i_6 < 16; i_6 += 1) 
            {
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_7 - 1] [i_6 + 1])) ? (((/* implicit */int) arr_5 [i_7 - 1] [i_6 + 1])) : (((/* implicit */int) arr_5 [i_7 - 1] [i_6 + 1]))));
                        /* LoopSeq 1 */
                        for (long long int i_8 = 1; i_8 < 17; i_8 += 1) 
                        {
                            arr_27 [i_3] [i_7] [i_3] = ((unsigned char) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (arr_17 [i_3] [i_5] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_3] [i_3])))));
                            var_31 *= ((/* implicit */signed char) var_10);
                            var_32 = ((/* implicit */int) ((((/* implicit */int) (short)-5280)) == (((/* implicit */int) arr_22 [i_7] [i_7 - 1] [i_8 + 1] [i_6 + 1]))));
                        }
                        var_33 = ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_7 - 1] [i_3])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6707173237336022073ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)218))) : (5092552787876154671LL)))) : (var_18)));
                    }
                } 
            } 
            var_34 *= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_7))) > (arr_24 [i_5 - 2] [i_5 - 2] [i_3] [i_3] [i_3] [i_3])));
        }
        arr_28 [i_3] = ((/* implicit */_Bool) (+(((min((((/* implicit */long long int) var_17)), (57236346740324693LL))) << (((((((/* implicit */_Bool) arr_9 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_3] [8LL]))) : (arr_14 [i_3] [i_3]))) - (31617U)))))));
    }
}
