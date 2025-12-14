/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32986
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */unsigned char) min((min((max((((/* implicit */long long int) 255422615U)), (var_9))), (((/* implicit */long long int) (-2147483647 - 1))))), (((/* implicit */long long int) ((signed char) 2987704015U)))));
                    var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) max((((unsigned long long int) max((((/* implicit */unsigned int) (signed char)(-127 - 1))), (arr_2 [i_0] [i_0])))), (((/* implicit */unsigned long long int) arr_2 [i_0 - 2] [i_0 + 3])))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned int i_3 = 4; i_3 < 13; i_3 += 1) 
                    {
                        arr_9 [i_0 + 2] [i_1] [i_2] [i_0] [9ULL] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 + 3] [i_3 - 2])) ? (arr_5 [i_3 - 2]) : (((/* implicit */int) var_7)))))));
                        arr_10 [i_0] [i_0] [i_1] [i_2] [i_1] = ((/* implicit */signed char) ((17592186044415LL) >= (((/* implicit */long long int) 2224747053U))));
                        arr_11 [i_0] [(_Bool)1] |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)73)) : (arr_7 [10ULL] [10ULL] [i_3 + 1] [i_3])));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 1) 
                    {
                        var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) (_Bool)1))));
                        arr_15 [i_1] [i_2] [i_0] = ((/* implicit */unsigned long long int) arr_5 [i_2]);
                        /* LoopSeq 2 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_19 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_16 [i_0 + 4] [i_0 + 4] [i_0 + 4] [i_4] [i_0 + 4] [i_4] [6LL])), (((((/* implicit */int) (signed char)-118)) - (((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */unsigned long long int) 4060523340U)) * (max((((/* implicit */unsigned long long int) 307010770016985484LL)), (arr_6 [i_0 + 4] [i_0] [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) ((unsigned int) (~(((/* implicit */int) (signed char)61))))))));
                            arr_20 [8LL] [i_0] [(unsigned char)13] = (i_0 % 2 == 0) ? (((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) 2724488045U)), (arr_0 [i_0]))) << (((((arr_0 [i_0]) + (arr_0 [i_0]))) - (202020378440364738ULL)))))) : (((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) 2724488045U)), (arr_0 [i_0]))) << (((((((arr_0 [i_0]) + (arr_0 [i_0]))) - (202020378440364738ULL))) - (4712052689810887940ULL))))));
                        }
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            arr_24 [i_0] [i_0 - 2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_13 [i_0 - 2] [i_0] [i_0 + 1] [i_0 - 2]);
                            arr_25 [12LL] |= ((/* implicit */unsigned int) (((+(arr_6 [i_0 + 3] [i_4] [i_6 - 1] [i_6 - 1]))) << (((((/* implicit */int) (unsigned char)162)) - (139)))));
                            arr_26 [(signed char)5] [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */signed char) ((min((min((((/* implicit */unsigned long long int) (unsigned short)4952)), (arr_0 [i_0]))), (((/* implicit */unsigned long long int) max((var_1), ((unsigned char)63)))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22313)))));
                            arr_27 [(signed char)13] [i_1] [i_2] [i_4] [i_0] = ((/* implicit */unsigned char) (unsigned short)0);
                        }
                        arr_28 [i_0 - 2] [i_0 - 2] [i_0] [(signed char)7] = 67108863;
                    }
                    for (signed char i_7 = 3; i_7 < 13; i_7 += 4) 
                    {
                        var_14 = ((/* implicit */long long int) var_4);
                        arr_33 [i_0] [i_0 - 2] [i_0 - 2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)9404)) * (((/* implicit */int) (unsigned short)63699))));
                    }
                    for (int i_8 = 0; i_8 < 14; i_8 += 1) 
                    {
                        arr_36 [i_0] [i_0] [i_0] [i_0 - 1] = ((/* implicit */unsigned short) ((_Bool) arr_0 [i_0]));
                        var_15 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (max((((/* implicit */long long int) ((((/* implicit */int) var_4)) >> (((((/* implicit */int) var_4)) - (52217)))))), (((((/* implicit */long long int) ((/* implicit */int) var_6))) ^ (9223372036854775807LL))))) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
                        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (min((0U), (((/* implicit */unsigned int) (signed char)-2)))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))));
                        var_17 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)41069)) || (((/* implicit */_Bool) 2742795615013773641LL))))) != (((/* implicit */int) var_1))))), (min((4194303U), (((/* implicit */unsigned int) (unsigned short)24798))))));
                        var_18 |= ((/* implicit */signed char) ((((((/* implicit */_Bool) min((3520033400U), (((/* implicit */unsigned int) var_0))))) || (((((/* implicit */_Bool) 13882193922869434602ULL)) && (((/* implicit */_Bool) var_0)))))) ? (arr_22 [i_8] [i_2] [i_1] [(unsigned char)13] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_7)))))));
                    }
                }
            } 
        } 
    } 
    var_19 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) (short)-10284))) ? (min((((/* implicit */long long int) var_7)), (min((((/* implicit */long long int) 1620359022)), (var_9))))) : (var_8)));
    var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((6ULL), (0ULL)))) ? (-2028972977) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)16383)) == (((/* implicit */int) (_Bool)0)))))))) || (((/* implicit */_Bool) ((((long long int) (_Bool)1)) % (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) var_1)))))))));
}
