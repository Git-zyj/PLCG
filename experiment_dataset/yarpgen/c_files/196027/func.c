/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196027
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
    var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) ((var_3) <= ((+((-(var_9))))))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned short) arr_2 [i_0]);
        var_14 = ((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0])) * (((((/* implicit */int) var_0)) << (((16141399785509856313ULL) - (16141399785509856301ULL)))))));
    }
    for (int i_1 = 4; i_1 < 19; i_1 += 1) 
    {
        arr_5 [i_1] [8] = ((/* implicit */int) arr_3 [(unsigned short)11]);
        arr_6 [i_1] = ((/* implicit */unsigned char) min(((-(var_7))), (((unsigned int) (short)-7672))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) 
    {
        arr_9 [i_2] = ((/* implicit */long long int) (~((~(((/* implicit */int) (unsigned char)23))))));
        /* LoopSeq 1 */
        for (short i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            arr_12 [i_2] = ((/* implicit */unsigned char) max((var_7), ((~((~(arr_7 [i_2])))))));
            /* LoopSeq 1 */
            for (unsigned short i_4 = 0; i_4 < 24; i_4 += 2) 
            {
                var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) (+(((((/* implicit */_Bool) 15U)) ? (-1455873894) : (((/* implicit */int) (unsigned char)68)))))))));
                /* LoopSeq 2 */
                for (signed char i_5 = 0; i_5 < 24; i_5 += 1) 
                {
                    var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((/* implicit */int) max((arr_17 [i_2] [(signed char)22] [i_4] [i_5] [i_2]), (((/* implicit */short) (unsigned char)68))))) - ((~((-(1455873893))))))))));
                    var_17 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)68))))) ? (((/* implicit */long long int) arr_15 [i_2] [i_2])) : (min((((/* implicit */long long int) arr_7 [i_4])), (((((/* implicit */_Bool) var_1)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_4])))))))));
                }
                for (unsigned int i_6 = 0; i_6 < 24; i_6 += 3) 
                {
                    arr_21 [16U] [i_4] [i_4] [i_4] [i_4] [i_4] |= ((/* implicit */_Bool) min((((/* implicit */long long int) ((int) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) arr_17 [22LL] [i_3] [(_Bool)1] [i_6] [i_6])))))), (((long long int) (-(((/* implicit */int) var_4)))))));
                    var_18 = ((/* implicit */unsigned short) min(((~(((/* implicit */int) arr_19 [i_2])))), (arr_18 [i_4] [i_6])));
                    var_19 = ((/* implicit */short) (+(arr_18 [i_4] [i_2])));
                }
                /* LoopSeq 2 */
                for (int i_7 = 1; i_7 < 23; i_7 += 1) 
                {
                    var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_2] [i_3] [i_4] [i_4] [i_7])) || (((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_4])) * (((((/* implicit */int) (unsigned char)124)) / (1999614899))))))));
                    var_21 |= ((/* implicit */unsigned long long int) (+(-1455873888)));
                    arr_25 [i_2] [i_3] [i_3] [i_2] [i_4] [i_7] = max((max((arr_22 [17U] [i_3] [i_3] [i_2]), (((((/* implicit */_Bool) arr_24 [i_4] [i_3] [i_2] [(unsigned char)22] [21] [i_4])) ? (4989523370484041677ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)47662))))))), (((/* implicit */unsigned long long int) (~(arr_13 [i_2] [i_3] [i_4] [i_7 - 1])))));
                    arr_26 [i_2] [i_3] [i_3] [i_4] [i_2] = (!(((/* implicit */_Bool) (((((~(((/* implicit */int) (short)30802)))) + (2147483647))) << (((((min((((/* implicit */int) arr_16 [i_2])), (var_5))) + (1486725343))) - (1)))))));
                }
                for (int i_8 = 3; i_8 < 23; i_8 += 4) 
                {
                    arr_29 [(unsigned short)7] [i_2] [i_4] [i_8 - 2] = ((/* implicit */unsigned long long int) ((int) arr_27 [6] [i_2] [i_4] [i_4]));
                    var_22 ^= ((/* implicit */int) ((max((((var_6) | (((/* implicit */long long int) ((/* implicit */int) (short)-30803))))), (((/* implicit */long long int) (~(((/* implicit */int) var_0))))))) | (((/* implicit */long long int) (~(558076784))))));
                }
            }
            arr_30 [i_2] [(unsigned char)13] [i_3] = ((/* implicit */short) (-(min((((/* implicit */unsigned long long int) arr_20 [i_2])), (arr_24 [13U] [i_3] [i_2] [i_3] [i_3] [i_2])))));
        }
        arr_31 [0ULL] [i_2] |= ((/* implicit */short) (+(max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) min((arr_28 [i_2] [i_2] [i_2] [(unsigned char)17] [(short)1]), (((/* implicit */short) arr_19 [2ULL])))))))));
    }
}
