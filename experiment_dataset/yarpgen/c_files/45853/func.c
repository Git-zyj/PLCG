/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45853
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */int) arr_3 [i_0] [i_1]);
                /* LoopSeq 4 */
                for (unsigned char i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 4; i_3 < 22; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_1] [(unsigned char)3] [(unsigned short)2] [1LL] [i_2] [i_0] = ((/* implicit */_Bool) 246194623);
                                arr_16 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)91)) ? (1849296911914561032LL) : (((/* implicit */long long int) 1260892512U))))) ? ((-(((/* implicit */int) var_13)))) : ((((((+(((/* implicit */int) var_13)))) + (2147483647))) << (((arr_3 [i_0] [i_1]) - (8096230403694422258LL)))))));
                            }
                        } 
                    } 
                    var_15 += ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) % (var_7))))))));
                    var_16 += ((((/* implicit */_Bool) arr_6 [i_2] [i_1])) ? (((((/* implicit */_Bool) (unsigned char)187)) ? (2486993528U) : (3034074804U))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)182)) - (((/* implicit */int) arr_6 [i_2] [i_0]))))));
                    arr_17 [i_0] [i_1] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (unsigned char)163)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)100))) : (-5114721026516426365LL))), (min((arr_3 [i_0] [i_1]), (arr_3 [i_0] [i_1])))));
                }
                /* vectorizable */
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    arr_21 [i_1] &= ((/* implicit */signed char) (+(-1849296911914561032LL)));
                    var_17 = ((/* implicit */unsigned long long int) (_Bool)1);
                    var_18 -= ((/* implicit */signed char) ((((/* implicit */int) arr_19 [i_5 - 1] [i_5] [(_Bool)1] [i_5])) - (var_10)));
                }
                for (signed char i_6 = 2; i_6 < 20; i_6 += 3) 
                {
                    arr_24 [i_0] [i_0] [(signed char)1] = ((/* implicit */unsigned short) ((min((arr_22 [i_0] [i_1] [i_6 + 1]), (arr_22 [i_0] [i_1] [i_6 + 4]))) >> ((((~(((/* implicit */int) var_8)))) + (21893)))));
                    arr_25 [i_0] [(short)8] [i_6] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((arr_13 [i_0] [(unsigned short)2] [i_6] [10] [i_6 + 3] [i_6 + 1] [i_6]) ? (((/* implicit */int) arr_13 [(unsigned char)22] [i_1] [(short)3] [i_1] [i_0] [i_6 + 4] [(unsigned char)22])) : (((/* implicit */int) arr_13 [i_0] [i_1] [i_6] [(unsigned char)7] [7ULL] [i_6 - 1] [i_6]))))), (min((arr_10 [i_0] [i_6 + 4] [i_6 + 3]), (((/* implicit */unsigned long long int) arr_13 [(_Bool)1] [i_1] [i_6 - 1] [i_6] [22U] [i_6 - 1] [i_1]))))));
                }
                /* vectorizable */
                for (unsigned long long int i_7 = 3; i_7 < 23; i_7 += 2) 
                {
                    var_19 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [(unsigned short)0] [i_7 - 2] [19ULL] [i_0])) && (((/* implicit */_Bool) arr_9 [i_0] [i_7 - 2] [13ULL] [i_7]))));
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [(short)16] [i_1] [i_7] [i_1])) % (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_7 - 1] [i_7 - 2]))) : (arr_26 [i_7 + 1] [i_7 + 1] [i_7 - 1] [(short)19])));
                }
            }
        } 
    } 
    var_21 = ((/* implicit */int) min((var_21), (((var_4) ? ((~(((/* implicit */int) ((-5114721026516426355LL) != (((/* implicit */long long int) ((/* implicit */int) var_12)))))))) : (max((((/* implicit */int) var_4)), (((var_11) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6))))))))));
    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (~(((((((/* implicit */_Bool) var_12)) && (var_4))) ? (min((((/* implicit */unsigned long long int) var_12)), (var_7))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (var_2)))))))))));
}
