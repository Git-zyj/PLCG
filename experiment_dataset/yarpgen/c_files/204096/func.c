/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204096
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
    var_19 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (signed char)-112))));
    var_20 = ((/* implicit */short) var_1);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (signed char i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((/* implicit */int) arr_5 [i_0 - 2])) : (((((/* implicit */_Bool) arr_9 [i_1] [20ULL] [i_1])) ? (((/* implicit */int) (unsigned short)24)) : (((/* implicit */int) arr_6 [i_0]))))))) ? (((/* implicit */int) ((max((((/* implicit */unsigned long long int) arr_11 [i_0] [i_1] [i_2] [i_1])), (arr_2 [i_0 - 1]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_7)))))))) : (((((/* implicit */_Bool) (unsigned short)28632)) ? (((/* implicit */int) (signed char)-32)) : (((/* implicit */int) (_Bool)1))))));
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_1])) != ((~(((/* implicit */int) arr_5 [i_0 + 1]))))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 1; i_3 < 22; i_3 += 2) 
                    {
                        arr_15 [(unsigned short)20] [i_1] [i_2] = ((/* implicit */short) var_10);
                        arr_16 [i_0 - 2] [i_0 - 2] [i_0 - 1] [i_1] = ((((/* implicit */int) ((((/* implicit */int) (signed char)-65)) <= (((/* implicit */int) arr_12 [i_1] [i_3] [i_3 - 1] [i_3] [i_3 + 1] [i_3]))))) <= (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-125)), ((unsigned short)44567)))));
                        var_23 = ((((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_8 [i_3] [i_2] [i_0])) : (((/* implicit */int) (_Bool)1)))) << (((((((((/* implicit */_Bool) arr_13 [i_1])) ? (((/* implicit */int) arr_7 [i_0] [i_0 - 3])) : (((/* implicit */int) (unsigned short)33880)))) + (40))) - (12))))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) 16100361944056985322ULL)) ? (16100361944056985351ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [i_0])) != (((/* implicit */int) (signed char)-84))))) : (((/* implicit */int) min((((/* implicit */unsigned short) (short)13320)), (arr_10 [i_0] [i_0] [i_1])))))));
                    }
                    var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 2]))) : (var_2))), (((/* implicit */long long int) (unsigned short)50342)))) == (((/* implicit */long long int) (+(((((/* implicit */int) var_3)) << (((2346382129652566271ULL) - (2346382129652566252ULL)))))))))))));
                }
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                {
                    var_25 = ((/* implicit */long long int) (+((-((((_Bool)1) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_0])) : (((/* implicit */int) (unsigned short)44567))))))));
                    var_26 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) (signed char)108)) ? (-3234412518820175309LL) : (997314894558275943LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)31725)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))))));
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                {
                    var_27 = ((((/* implicit */int) (signed char)-42)) > (((((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_12 [i_1] [(_Bool)1] [i_1] [i_1] [i_1] [i_5])))) / (((((/* implicit */_Bool) arr_19 [i_0] [i_1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_13 [i_1])))))));
                    /* LoopSeq 1 */
                    for (long long int i_6 = 0; i_6 < 23; i_6 += 1) 
                    {
                        arr_26 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_4)) + (((/* implicit */int) (signed char)60)))) + (((/* implicit */int) arr_17 [i_1] [i_5] [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)31056))) : (((arr_23 [i_5] [i_1] [i_0 - 4]) + (-6882429111103259280LL)))));
                        var_28 = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)1))));
                        var_29 = (signed char)-118;
                    }
                    arr_27 [i_1] [i_0 + 1] [i_5] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_1])) * (((/* implicit */int) arr_22 [i_5]))))) || (((/* implicit */_Bool) (-(max((var_13), (((/* implicit */long long int) (_Bool)1)))))))));
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                {
                    arr_31 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) min(((+(((/* implicit */int) arr_5 [i_0 - 3])))), (((/* implicit */int) var_3))));
                    /* LoopSeq 2 */
                    for (signed char i_8 = 3; i_8 < 21; i_8 += 1) 
                    {
                        var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [(unsigned short)16])) ? (((/* implicit */int) ((short) var_6))) : (((/* implicit */int) max(((!(((/* implicit */_Bool) (short)31732)))), (((var_5) == (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [(unsigned short)18] [i_1]))))))))));
                        arr_34 [i_0] [i_1] [11LL] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_29 [i_8 - 1] [i_8 - 1] [i_8]))));
                        var_31 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [i_1] [i_7])) ^ (((/* implicit */int) (_Bool)1))));
                        var_32 &= ((/* implicit */unsigned long long int) (unsigned short)4268);
                        var_33 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_24 [i_0 - 2] [i_1] [i_1] [(unsigned short)1])) ? (((/* implicit */int) arr_13 [i_1])) : (((/* implicit */int) arr_13 [i_1]))))));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_34 = ((/* implicit */signed char) max((((/* implicit */long long int) ((signed char) (~(((/* implicit */int) (short)1460)))))), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_0] [i_0] [(signed char)19]))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-1)), (var_1))))) : ((((_Bool)1) ? (-3234412518820175277LL) : (-3794504495959537488LL)))))));
                        var_35 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_0 - 4])) ? (((/* implicit */int) arr_35 [i_0 - 1] [i_0] [i_0] [i_1] [i_0] [i_0 - 3])) : (((/* implicit */int) arr_35 [i_0 - 4] [i_0 + 1] [i_0] [i_1] [(unsigned short)15] [i_0]))))) % (((((/* implicit */_Bool) 9621859755602595847ULL)) ? (((/* implicit */unsigned long long int) 997314894558275954LL)) : (1152851135862669312ULL)))));
                    }
                }
                arr_39 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)10001)) ? (((((/* implicit */_Bool) arr_24 [(unsigned short)0] [i_1] [i_1] [i_0])) ? (arr_24 [13LL] [i_1] [i_1] [i_0 - 1]) : (arr_24 [i_0] [i_1] [i_1] [i_0]))) : (max((arr_24 [i_1] [i_1] [i_1] [i_0]), (arr_24 [i_1] [i_1] [i_1] [i_0 - 2])))));
            }
        } 
    } 
    var_36 = ((/* implicit */long long int) var_16);
}
