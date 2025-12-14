/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249098
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            arr_4 [i_1] [3LL] [9U] = ((/* implicit */int) (~(((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_1 [i_1]) : (arr_1 [i_1])))) % (arr_0 [i_1 - 1])))));
            var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) max((max((arr_1 [i_1 - 1]), ((+(var_15))))), (max(((-(((/* implicit */int) arr_3 [i_0])))), (var_6))))))));
        }
        for (int i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            /* LoopNest 2 */
            for (short i_3 = 1; i_3 < 23; i_3 += 3) 
            {
                for (unsigned short i_4 = 1; i_4 < 22; i_4 += 2) 
                {
                    {
                        arr_13 [i_0] [i_4] [i_0] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) min((max((-1445173305), (((/* implicit */int) var_11)))), (((/* implicit */int) (unsigned char)0))))) || (((/* implicit */_Bool) ((((/* implicit */int) max(((unsigned char)0), (((/* implicit */unsigned char) arr_7 [i_0] [i_0] [(unsigned char)16]))))) << (((/* implicit */int) ((unsigned short) (_Bool)0))))))));
                        var_21 += ((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775789LL)) ? (((max((var_17), (((/* implicit */unsigned int) -1445173305)))) << (((((/* implicit */int) arr_3 [i_0])) - (46496))))) : (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (signed char)79)) : (8372224))) << (((((((arr_5 [i_0]) + (2147483647))) << (((((/* implicit */int) (unsigned short)6321)) - (6321))))) - (416302994))))))));
                        arr_14 [i_0] [i_3] [i_3] [i_4] [i_4 + 3] [i_4] = ((/* implicit */short) var_12);
                    }
                } 
            } 
            var_22 = ((((/* implicit */_Bool) min((arr_1 [i_0]), (((/* implicit */int) (unsigned short)50264))))) ? (((/* implicit */int) ((unsigned char) arr_2 [i_2]))) : ((+(((/* implicit */int) (unsigned short)50264)))));
        }
        for (unsigned char i_5 = 4; i_5 < 24; i_5 += 4) 
        {
            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((-(var_14))) << (((((/* implicit */int) arr_7 [i_0] [i_0] [i_5 + 1])) - (1)))))) ? (((/* implicit */int) arr_9 [i_5] [i_5] [i_5] [i_5])) : (((/* implicit */int) ((unsigned short) arr_12 [i_0] [i_5 - 4] [i_5 - 1] [i_0])))));
            var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) var_10))));
            var_25 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((7358698057742727949ULL), (((/* implicit */unsigned long long int) arr_8 [(unsigned short)14]))))) ? (((/* implicit */int) arr_7 [i_0] [(signed char)5] [14LL])) : (((/* implicit */int) (!(arr_7 [i_5] [(unsigned char)23] [i_5])))))) ^ (((/* implicit */int) (!(arr_12 [i_0] [i_0] [i_0] [12]))))));
            /* LoopSeq 3 */
            for (unsigned int i_6 = 0; i_6 < 25; i_6 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_7 = 0; i_7 < 25; i_7 += 1) 
                {
                    var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) min((max((max((((/* implicit */unsigned long long int) var_15)), (15732311622861078621ULL))), (((/* implicit */unsigned long long int) max((arr_1 [i_0]), (((/* implicit */int) (unsigned char)243))))))), (((/* implicit */unsigned long long int) 67076096)))))));
                    arr_22 [i_0] [i_0] |= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_7)), (((unsigned long long int) ((((/* implicit */int) arr_15 [(unsigned short)4])) & (((/* implicit */int) arr_12 [i_0] [i_6] [i_6] [(unsigned short)6])))))));
                    var_27 = min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)-8))))), (max((arr_9 [i_5 - 3] [i_5 - 3] [i_5 - 3] [i_5]), (((/* implicit */unsigned short) arr_11 [i_5 - 3] [17LL] [i_6] [6LL] [17LL])))));
                    var_28 ^= ((/* implicit */_Bool) (~(((((/* implicit */int) (unsigned char)213)) % (max((arr_16 [i_0] [i_5] [i_0]), (32767)))))));
                    var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) ((((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)118)) : (((/* implicit */int) (unsigned char)194)))) != (((/* implicit */int) (unsigned char)213)))) ? (67108736LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) (unsigned short)4319))) ? (((/* implicit */int) (unsigned short)65532)) : (var_8)))))))));
                }
                var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) max((((int) -9223372036854775790LL)), (((/* implicit */int) arr_8 [i_5])))))));
                arr_23 [i_0] [i_0] [(short)18] [i_0] &= ((/* implicit */unsigned int) (+(max((((((var_14) + (2147483647))) << (((((arr_19 [13U] [i_5] [i_5]) + (7568334647454611318LL))) - (9LL))))), ((~(var_6)))))));
                var_31 ^= ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) << (((993454145) - (993454127)))));
            }
            for (unsigned short i_8 = 0; i_8 < 25; i_8 += 3) 
            {
                /* LoopNest 2 */
                for (short i_9 = 2; i_9 < 24; i_9 += 3) 
                {
                    for (unsigned short i_10 = 0; i_10 < 25; i_10 += 4) 
                    {
                        {
                            arr_30 [i_10] [i_8] [(_Bool)1] [i_10] [i_10] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_9 [i_0] [i_10] [i_10] [i_9])) : (arr_26 [9U] [i_9] [i_8] [9U])))) ? (((((/* implicit */_Bool) (short)6821)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0]))) : (-9223372036854775801LL))) : (((/* implicit */long long int) ((((/* implicit */int) arr_18 [(unsigned char)4])) >> (((arr_0 [i_0]) - (1027214494U)))))))) != (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_5 + 1])))));
                            var_32 = ((/* implicit */unsigned int) arr_2 [i_10]);
                            var_33 ^= ((/* implicit */int) (_Bool)1);
                            arr_31 [i_0] [i_9] [i_8] [23U] [i_9] [i_0] = ((/* implicit */short) max((max((var_12), (((/* implicit */unsigned int) arr_15 [i_0])))), (((/* implicit */unsigned int) arr_2 [i_5]))));
                            var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) (~(((/* implicit */int) arr_18 [i_0])))))));
                        }
                    } 
                } 
                var_35 = ((/* implicit */int) max((var_35), ((-(min(((-(-32768))), (arr_26 [(_Bool)1] [i_8] [i_8] [i_8])))))));
            }
            /* vectorizable */
            for (unsigned long long int i_11 = 1; i_11 < 24; i_11 += 4) 
            {
                arr_36 [i_11] [i_5] [18] [9LL] = ((/* implicit */unsigned long long int) -286420059);
                var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_6 [4] [i_5])) ? (((/* implicit */int) arr_15 [i_0])) : (-298579050))))))));
            }
        }
        arr_37 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) arr_10 [i_0] [(signed char)7] [(unsigned short)20])), ((+(((/* implicit */int) arr_10 [i_0] [i_0] [i_0]))))))) ? (((int) min((((/* implicit */unsigned long long int) (signed char)-4)), (2714432450848472975ULL)))) : ((-(((((/* implicit */_Bool) (unsigned char)19)) ? (((/* implicit */int) (signed char)4)) : (((/* implicit */int) (short)20263))))))));
    }
    var_37 = ((/* implicit */unsigned int) (unsigned short)39542);
    var_38 = ((/* implicit */unsigned long long int) 1129068765);
}
