/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34203
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
    var_12 = (_Bool)1;
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) | (2495029487U))))) ? (1799937813U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((var_3) * (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_0 [i_0] [i_0]))))))))));
        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) arr_0 [i_0] [i_0]))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_0 [(unsigned short)24] [i_0])));
        var_14 ^= ((/* implicit */int) ((((/* implicit */_Bool) (((-(var_1))) << (((max((((/* implicit */unsigned int) (unsigned char)127)), (1799937808U))) - (1799937755U)))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) arr_2 [10ULL] [i_0])) : (4294967285U)))), (min((((/* implicit */unsigned long long int) (unsigned char)213)), (var_1))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        var_15 = ((/* implicit */unsigned short) ((2495029487U) > (((/* implicit */unsigned int) max((((arr_4 [i_1]) | (((/* implicit */int) var_6)))), ((-(((/* implicit */int) arr_5 [(_Bool)1])))))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            for (unsigned char i_3 = 1; i_3 < 17; i_3 += 1) 
            {
                {
                    var_16 = ((/* implicit */short) ((((/* implicit */int) arr_5 [i_3])) == (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_4 [(unsigned char)12]), (((/* implicit */int) (signed char)(-127 - 1)))))))))));
                    /* LoopSeq 3 */
                    for (long long int i_4 = 1; i_4 < 17; i_4 += 3) /* same iter space */
                    {
                        arr_14 [i_1] [(_Bool)1] [i_3 + 1] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) var_1)))))) * (arr_2 [i_2] [i_2])));
                        var_17 = ((_Bool) (~(((/* implicit */int) (unsigned char)213))));
                        var_18 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (~((-2147483647 - 1))))), (max((((/* implicit */unsigned int) (unsigned char)127)), (((unsigned int) 2495029483U))))));
                        var_19 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_13 [i_4] [i_4] [i_4] [i_3] [i_2] [i_1])) ^ (var_1)))) || (((/* implicit */_Bool) var_7))))), (18446744073709551615ULL)));
                    }
                    /* vectorizable */
                    for (long long int i_5 = 1; i_5 < 17; i_5 += 3) /* same iter space */
                    {
                        var_20 -= ((/* implicit */unsigned int) ((short) -4945257446124764177LL));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 4) 
                        {
                            arr_22 [i_6] [i_5] [i_3] [i_2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) var_4)) != (((/* implicit */int) var_9))));
                            var_21 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (2495029482U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)213)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (3584U)));
                            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) 2495029488U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_0 [i_3 - 1] [i_5 - 1]))))));
                        }
                        arr_23 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) var_9);
                    }
                    for (long long int i_7 = 1; i_7 < 17; i_7 += 3) /* same iter space */
                    {
                        var_23 += ((/* implicit */signed char) ((((/* implicit */_Bool) (~(2650025243207094516LL)))) ? ((~(((/* implicit */int) arr_16 [i_7 + 2] [i_7] [i_7 + 1] [i_7])))) : (((((/* implicit */int) (unsigned short)26476)) << (((((var_2) + (1216885705))) - (23)))))));
                        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) var_0))));
                        var_25 -= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((unsigned short) max((var_7), (((/* implicit */unsigned long long int) 1799937808U)))))), (1799937814U)));
                        var_26 = ((/* implicit */unsigned short) var_7);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_8 = 3; i_8 < 18; i_8 += 1) 
                        {
                            var_27 = (signed char)-112;
                            var_28 *= ((/* implicit */unsigned int) var_1);
                            var_29 *= ((/* implicit */_Bool) var_10);
                            var_30 += ((/* implicit */long long int) (unsigned char)251);
                        }
                        /* vectorizable */
                        for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 4) 
                        {
                            var_31 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_7 + 1])) ? (arr_4 [i_7 - 1]) : (((/* implicit */int) arr_27 [i_3 + 2] [i_3] [i_3] [(_Bool)1] [i_7] [i_7 + 1] [i_7]))));
                            var_32 = ((/* implicit */unsigned short) var_5);
                        }
                    }
                    /* LoopNest 2 */
                    for (long long int i_10 = 2; i_10 < 16; i_10 += 2) 
                    {
                        for (unsigned char i_11 = 0; i_11 < 19; i_11 += 4) 
                        {
                            {
                                var_33 *= ((((/* implicit */int) (!(((/* implicit */_Bool) (~(4074322456544253539LL))))))) & (min((((/* implicit */int) var_9)), (((((/* implicit */int) var_5)) & (((/* implicit */int) arr_28 [i_2] [i_2])))))));
                                var_34 &= ((/* implicit */_Bool) (signed char)-126);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_35 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) + (var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))));
}
