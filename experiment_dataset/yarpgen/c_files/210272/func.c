/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210272
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_10 -= ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (unsigned short)2434))));
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1261508702U)) ? (((/* implicit */int) arr_0 [6])) : (((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (var_1) : (-955615536))) : (((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) arr_1 [9U])) ? (((((/* implicit */int) (unsigned short)127)) & (((/* implicit */int) (unsigned short)15)))) : (((((/* implicit */_Bool) -955615526)) ? (((/* implicit */int) (short)-9251)) : (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) (unsigned short)127))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        arr_5 [19LL] [i_1] = ((/* implicit */unsigned int) max((var_9), (((/* implicit */unsigned char) var_3))));
        var_11 *= ((/* implicit */short) max((((/* implicit */long long int) var_9)), (min((((/* implicit */long long int) min(((unsigned short)65401), (((/* implicit */unsigned short) (_Bool)1))))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)155))) | (-2270813199835390768LL)))))));
        arr_6 [i_1] = ((/* implicit */unsigned int) arr_1 [i_1]);
        var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) min((((unsigned int) min((((/* implicit */unsigned int) arr_1 [i_1])), (3245843361U)))), (((/* implicit */unsigned int) -955615536)))))));
    }
    for (unsigned short i_2 = 2; i_2 < 10; i_2 += 4) 
    {
        /* LoopNest 3 */
        for (int i_3 = 2; i_3 < 10; i_3 += 3) 
        {
            for (int i_4 = 1; i_4 < 9; i_4 += 4) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_13 = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)-10)) ^ (((/* implicit */int) (unsigned char)167))));
                        var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) -7052409459295195235LL))));
                        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 1533853820U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8201))) : (1049123934U))))));
                        var_16 &= ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)46661))));
                    }
                } 
            } 
        } 
        arr_18 [i_2] [i_2 - 1] = ((/* implicit */long long int) max((((int) min((3210411947U), (var_4)))), (((/* implicit */int) (unsigned char)255))));
    }
    /* LoopNest 2 */
    for (unsigned int i_6 = 2; i_6 < 8; i_6 += 4) 
    {
        for (long long int i_7 = 2; i_7 < 9; i_7 += 2) 
        {
            {
                arr_24 [6] [(_Bool)0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : ((~(((/* implicit */int) var_3)))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)25408)) : (((1042980712) | (1042980726)))))));
                /* LoopNest 2 */
                for (long long int i_8 = 2; i_8 < 10; i_8 += 2) 
                {
                    for (unsigned char i_9 = 1; i_9 < 10; i_9 += 2) 
                    {
                        {
                            arr_33 [(signed char)4] [4] [6U] [i_7 + 2] [(signed char)4] [(signed char)4] = ((/* implicit */unsigned short) 436866424153630740LL);
                            arr_34 [i_6] [i_7] [i_8] [i_9] = ((/* implicit */long long int) (~((~(((/* implicit */int) (_Bool)1))))));
                            arr_35 [i_6] [i_6] [i_7] [i_6] [(short)7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) min((((/* implicit */unsigned int) var_5)), (1084555350U))))) ? (((/* implicit */int) min((arr_26 [i_8 - 2]), (((/* implicit */short) max((((/* implicit */unsigned char) var_3)), (arr_7 [i_6] [i_8 + 1]))))))) : (((/* implicit */int) arr_27 [(_Bool)1]))));
                            arr_36 [i_6 - 2] [i_7 - 1] [i_6 - 2] [i_6] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)104)) || ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1431923931098450430ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_9] [9U] [9U] [i_6]))) : (3210411947U))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
