/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203691
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
    var_13 = ((/* implicit */int) var_11);
    var_14 = ((/* implicit */unsigned char) (short)32767);
    var_15 = ((/* implicit */unsigned int) var_8);
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (short i_1 = 3; i_1 < 19; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) max((((/* implicit */short) var_12)), (arr_0 [i_1 - 2]))))));
                    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((arr_6 [i_2] [i_2] [(signed char)16] [i_2]) | (((/* implicit */unsigned int) var_4))))))))))));
                    arr_10 [(signed char)7] [i_1] [i_1] [i_0] = var_4;
                }
            } 
        } 
        arr_11 [i_0] [i_0] = ((unsigned char) ((((var_7) * (((/* implicit */unsigned int) var_4)))) >= (((/* implicit */unsigned int) (~(((/* implicit */int) var_11)))))));
        arr_12 [i_0] = ((/* implicit */short) (((-(var_4))) & (((/* implicit */int) ((signed char) arr_3 [i_0] [i_0])))));
    }
    for (short i_3 = 0; i_3 < 20; i_3 += 1) 
    {
        arr_16 [i_3] = ((/* implicit */short) min((((((/* implicit */_Bool) (signed char)-19)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (unsigned short)22686)))), ((~((~(((/* implicit */int) var_10))))))));
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)127)) + (((/* implicit */int) (short)32767))))) ? (((/* implicit */int) var_1)) : ((~(((((/* implicit */_Bool) arr_2 [i_3])) ? (((/* implicit */int) arr_4 [i_3] [i_3] [i_3])) : (((/* implicit */int) arr_14 [i_3] [i_3]))))))));
    }
    for (unsigned int i_4 = 1; i_4 < 20; i_4 += 4) 
    {
        arr_19 [i_4] &= ((/* implicit */unsigned char) (+(((/* implicit */int) (short)(-32767 - 1)))));
        var_19 = ((/* implicit */long long int) max((var_19), (var_2)));
    }
    for (unsigned char i_5 = 2; i_5 < 22; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_6 = 1; i_6 < 22; i_6 += 3) 
        {
            for (unsigned char i_7 = 0; i_7 < 23; i_7 += 2) 
            {
                {
                    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */int) max(((short)26613), ((short)32767)))) - (((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)(-32767 - 1)))))), (arr_21 [i_6 - 1] [i_5 - 1])))))))));
                    var_21 = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_22 [i_5 + 1]))) ^ (((((/* implicit */_Bool) arr_22 [i_6 - 1])) ? (var_2) : (((/* implicit */long long int) var_9))))))) ? (max((var_7), (((/* implicit */unsigned int) var_4)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))));
                    arr_27 [i_5] = ((/* implicit */long long int) ((max((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) arr_20 [i_5] [(signed char)22]))))), (((arr_20 [i_5] [i_5]) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_5 + 1] [i_7]))) : (arr_23 [i_7]))))) > (((/* implicit */long long int) ((/* implicit */int) max((arr_20 [i_5 + 1] [i_5 + 1]), (arr_20 [i_5 - 2] [i_5 - 1])))))));
                    arr_28 [i_5 + 1] [i_5] [i_5 + 1] &= ((/* implicit */unsigned long long int) (~(((((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) | (arr_23 [i_5 - 2])))));
                }
            } 
        } 
        arr_29 [i_5] = ((/* implicit */unsigned short) min(((-(((((/* implicit */_Bool) 4265948931U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (4294967295U))))), (((/* implicit */unsigned int) arr_21 [i_5 - 2] [i_5 - 1]))));
    }
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */int) min((((short) 4543191067707000073LL)), (var_0))))));
}
