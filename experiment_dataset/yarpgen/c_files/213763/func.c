/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213763
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
    var_15 = ((/* implicit */unsigned int) var_11);
    var_16 = ((/* implicit */signed char) min((((/* implicit */long long int) max((((/* implicit */signed char) ((((/* implicit */int) (unsigned char)191)) < (((/* implicit */int) (short)-4377))))), (var_14)))), (min((var_7), (var_7)))));
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)19253)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_14))))) ? (((((/* implicit */_Bool) var_0)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) : (((/* implicit */long long int) var_2))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [16])) ? (((/* implicit */int) arr_0 [(signed char)20])) : (var_13)))) != (((((/* implicit */_Bool) (short)4352)) ? (977254092U) : (499701349U)))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_0 [i_0 + 2]))));
        var_19 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (17992002186290131286ULL))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)13884)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))));
        var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 2] [19LL])) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */int) (signed char)-18)) ^ (((/* implicit */int) (unsigned short)51651)))) : (((/* implicit */int) var_12)));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 2; i_3 < 19; i_3 += 4) 
                    {
                        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((unsigned short) arr_6 [i_0 + 3] [i_3] [i_3 + 1])))));
                        var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(var_13))))));
                        var_23 |= ((/* implicit */unsigned int) arr_0 [i_2]);
                        var_24 = -956902181;
                    }
                    for (long long int i_4 = 0; i_4 < 21; i_4 += 1) 
                    {
                        var_25 = ((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0]);
                        var_26 *= var_8;
                        var_27 = ((/* implicit */long long int) arr_9 [i_0] [i_0]);
                        var_28 = ((/* implicit */unsigned short) arr_1 [2LL] [i_1]);
                    }
                    var_29 = (_Bool)1;
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 2; i_5 < 20; i_5 += 4) 
                    {
                        for (short i_6 = 1; i_6 < 19; i_6 += 3) 
                        {
                            {
                                var_30 += ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_13 [(signed char)0] [i_1] [i_0] [i_1] [i_1] [i_0])) : (956902181)));
                                var_31 = ((/* implicit */int) (((+(var_7))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) != (17692727818052471990ULL)))))));
                                arr_18 [i_0 + 3] [i_1] [i_0 + 3] [i_0] [i_0] [i_0 + 3] = ((/* implicit */unsigned long long int) arr_15 [i_0 + 3] [i_0 + 3] [i_6]);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned short i_7 = 0; i_7 < 16; i_7 += 4) 
    {
        arr_22 [i_7] = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1332)))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)9949)), (-1281373891)))) : (min((((/* implicit */unsigned long long int) (unsigned short)24718)), (var_6))))), (((/* implicit */unsigned long long int) var_14))));
        var_32 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_13))));
        var_33 = ((/* implicit */unsigned long long int) arr_0 [i_7]);
        var_34 -= ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_7] [i_7] [i_7]))) : (((((643406307U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_7] [i_7]))))) * (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-88)))))))));
        arr_23 [i_7] = ((/* implicit */short) arr_12 [i_7] [i_7] [i_7] [i_7] [i_7]);
    }
}
