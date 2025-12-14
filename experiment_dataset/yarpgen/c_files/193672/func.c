/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193672
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
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_14 &= ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */int) var_12)) * (((/* implicit */int) (unsigned short)8245))))))) && (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)255), (((/* implicit */unsigned char) (_Bool)1)))))) & (7063832115048677152LL))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_2 = 3; i_2 < 18; i_2 += 4) 
                {
                    arr_7 [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_2 - 1] [i_1] [i_1])) ? (((/* implicit */int) arr_4 [i_2 + 2] [i_2 + 2] [i_2])) : (((/* implicit */int) arr_4 [i_2 + 1] [(_Bool)1] [(_Bool)1]))));
                    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)236)) ? ((~(((/* implicit */int) (unsigned short)6575)))) : ((+(((/* implicit */int) (unsigned short)18))))));
                }
                for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                {
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) ((unsigned char) var_9))), (var_13)))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) -1697275334)) : (var_6))) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)241)), (var_0)))) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned short)22223)))))));
                    var_17 = ((/* implicit */unsigned short) min((((((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3] [i_3] [i_1] [i_0]))) / (9223372036854775793LL))) % (((/* implicit */long long int) ((((/* implicit */int) var_8)) << (((((/* implicit */int) var_2)) + (2380)))))))), (((/* implicit */long long int) ((var_4) << (((((/* implicit */int) var_10)) - (1))))))));
                    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */int) arr_4 [(unsigned short)19] [i_1] [i_0])) & (((/* implicit */int) var_1))))) % (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)8902), (((/* implicit */unsigned short) var_3)))))) : (((var_10) ? (-9223372036854775793LL) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))))))));
                    /* LoopSeq 3 */
                    for (unsigned short i_4 = 0; i_4 < 20; i_4 += 4) 
                    {
                        var_19 ^= ((/* implicit */unsigned char) min((max((((/* implicit */unsigned long long int) max(((unsigned char)233), (var_3)))), (var_11))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)63591)) << (((((((((/* implicit */_Bool) 9223372036854775807LL)) ? (arr_10 [i_3] [i_3] [14]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)63488))))) + (5674924788491706337LL))) - (21LL))))))));
                        arr_15 [(short)8] [i_1] [i_4] [i_4] = ((/* implicit */short) (~(((((/* implicit */_Bool) (unsigned char)254)) ? (((((/* implicit */_Bool) 1125899906834432LL)) ? (((/* implicit */int) (unsigned short)13121)) : (-1))) : ((~(((/* implicit */int) var_8))))))));
                    }
                    for (long long int i_5 = 2; i_5 < 19; i_5 += 4) 
                    {
                        var_20 = ((/* implicit */short) ((((var_6) + (9223372036854775807LL))) << (((((/* implicit */int) arr_6 [i_5] [i_5 + 1] [i_5 + 1] [i_5 + 1])) - (37)))));
                        arr_18 [i_5] [14] [(short)18] [i_1] [i_1] [i_0] = max((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_0 [i_3] [i_0])))))), (((int) arr_12 [i_0] [i_3] [i_0] [i_5] [i_1] [(short)2])));
                        var_21 = ((/* implicit */unsigned short) (~((+(((/* implicit */int) max(((short)16376), (((/* implicit */short) var_5)))))))));
                        var_22 = ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) max(((unsigned short)52396), (var_1))))))), (max((((/* implicit */int) ((unsigned short) var_7))), ((+(((/* implicit */int) (unsigned char)36))))))));
                    }
                    for (int i_6 = 1; i_6 < 18; i_6 += 1) 
                    {
                        arr_23 [(short)11] [i_1] [i_3] [i_6] [i_1] [i_6 + 1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((short) (+(((/* implicit */int) (unsigned char)246))))))));
                        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_12)) : (((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_3] [(unsigned char)2] [i_3]))))) ? (((((/* implicit */int) var_5)) ^ (((/* implicit */int) var_8)))) : (((/* implicit */int) min(((unsigned char)234), (var_8)))))))))));
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) var_12)) % (((((/* implicit */_Bool) arr_13 [i_6 + 2])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_13 [i_1]))))));
                    }
                    var_25 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_16 [(unsigned short)17] [i_3] [i_1] [i_1] [i_0] [i_0])))) ? (((/* implicit */int) (unsigned short)52389)) : ((-(((/* implicit */int) arr_16 [i_3] [i_3] [i_1] [i_1] [i_1] [i_0]))))));
                }
                for (int i_7 = 2; i_7 < 17; i_7 += 2) 
                {
                    arr_28 [i_0] [i_1] [i_0] [(short)13] = ((/* implicit */int) min((((/* implicit */long long int) ((unsigned short) min((-538945688), (((/* implicit */int) arr_6 [18] [i_1] [(unsigned short)15] [i_0])))))), (((((/* implicit */_Bool) var_1)) ? (-1125899906834435LL) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))));
                    var_26 = ((/* implicit */unsigned short) ((min((((/* implicit */int) (short)24281)), (((((/* implicit */_Bool) -568034214)) ? (((/* implicit */int) (short)24289)) : (((/* implicit */int) (short)-1)))))) - (var_7)));
                    arr_29 [i_0] [i_0] [i_0] = ((/* implicit */short) max((72057594021150720ULL), (((/* implicit */unsigned long long int) (short)1479))));
                    var_27 = ((/* implicit */long long int) (+(((/* implicit */int) min((((/* implicit */short) var_8)), ((short)29216))))));
                }
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned char) var_11);
    var_29 = ((/* implicit */int) var_6);
    var_30 &= min((((/* implicit */short) ((((((var_6) + (9223372036854775807LL))) << (((((/* implicit */int) var_1)) - (29346))))) != (((((/* implicit */_Bool) var_9)) ? (var_6) : (((/* implicit */long long int) var_7))))))), ((short)9938));
}
