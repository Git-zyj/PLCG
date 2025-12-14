/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22065
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
    var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)234)))))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_17)))) : (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) ((int) max((((/* implicit */unsigned char) var_6)), (var_9))))) : (var_16));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */_Bool) ((arr_4 [i_1] [i_0]) ? ((-(((/* implicit */int) (unsigned char)75)))) : (((/* implicit */int) var_1))));
                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) min((((/* implicit */int) var_10)), (-1513467752)))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [7LL] [i_1]))) : (36028797018832896ULL))))) >> (((arr_2 [i_0]) - (3498962826U))))))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 1; i_2 < 13; i_2 += 2) 
                {
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((2130706432U) << (25U)))) ? (arr_7 [i_0] [i_1] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_16)) ? (1294246057212591718ULL) : (((/* implicit */unsigned long long int) arr_6 [i_2] [i_0] [i_0])))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-5)))))))));
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        var_22 = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((arr_4 [i_1] [i_0]) ? (arr_6 [i_0] [i_1] [i_2]) : (((/* implicit */long long int) arr_3 [i_3] [9LL]))))) ? (var_12) : (((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1] [i_1] [10ULL])) ? (36028797018832910ULL) : (7947999119032950127ULL))))), (min((((((/* implicit */_Bool) var_1)) ? (var_12) : (var_2))), (((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned int) var_13)))))))));
                        var_23 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((short) arr_9 [i_2 + 1] [i_2 + 2] [i_2 + 2] [i_2 + 2]))), (((unsigned long long int) (unsigned char)45))));
                        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_8 [i_1] [i_1] [i_2 + 1] [i_1] [i_2])))) ? (3489723986371144082ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))))));
                        var_25 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_6 [i_2 + 2] [i_2 + 2] [i_2 + 2]) - (arr_6 [i_2 + 1] [i_2 + 1] [i_2 - 1])))) ? (((/* implicit */unsigned long long int) (~(arr_6 [i_2 - 1] [i_2 - 1] [i_2 - 1])))) : (min((((/* implicit */unsigned long long int) (+(arr_3 [(unsigned char)9] [12LL])))), (5163687656468162226ULL)))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 15; i_4 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (long long int i_5 = 1; i_5 < 14; i_5 += 4) 
                        {
                            var_26 = ((/* implicit */unsigned long long int) arr_10 [i_0] [i_1] [i_1] [i_5 + 1]);
                            var_27 ^= ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) (~(0U)))) ? (arr_3 [i_0] [i_5]) : (((/* implicit */unsigned int) (~(var_14)))))));
                            var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) arr_15 [i_0] [i_0]))));
                        }
                        for (unsigned char i_6 = 1; i_6 < 14; i_6 += 4) 
                        {
                            var_29 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((7814077777751323045ULL) <= (arr_8 [i_2] [i_2] [i_2 - 1] [i_2 + 2] [i_2 - 1]))))));
                            var_30 = ((/* implicit */int) min((var_30), (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) max(((unsigned char)53), (((/* implicit */unsigned char) (_Bool)1))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)22)) <= (((/* implicit */int) (unsigned char)224))))))) << (((/* implicit */int) ((((/* implicit */unsigned long long int) ((arr_16 [i_4] [i_4]) ^ (1081566089)))) <= ((~(18410715276690718705ULL))))))))));
                            var_31 = ((/* implicit */long long int) (+(((/* implicit */int) var_6))));
                            var_32 &= ((/* implicit */unsigned int) min((arr_12 [i_0] [i_1] [i_2] [i_2] [i_4] [i_6]), (((/* implicit */short) min((((((/* implicit */unsigned long long int) var_11)) >= (var_12))), (((((/* implicit */_Bool) 3650927010U)) && (((/* implicit */_Bool) 1036919984926257028ULL)))))))));
                            var_33 = ((/* implicit */unsigned int) var_17);
                        }
                        for (long long int i_7 = 3; i_7 < 11; i_7 += 3) 
                        {
                            var_34 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) max((arr_8 [i_0] [i_0] [i_0] [i_1] [(_Bool)1]), (((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_2 - 1] [i_7]))))) ? (arr_17 [i_1] [i_2 - 1] [i_2] [i_2] [i_2]) : (arr_7 [14] [14] [14]))));
                            var_35 = ((/* implicit */unsigned short) arr_14 [i_0] [i_1] [11LL] [i_7 + 3] [i_7]);
                            var_36 = ((/* implicit */int) ((((/* implicit */_Bool) min((1036919984926257028ULL), (((/* implicit */unsigned long long int) arr_6 [i_2 + 1] [i_7] [i_7]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (18410715276690718725ULL))) != (((unsigned long long int) (short)2304)))))) : (arr_1 [i_4] [i_1])));
                            var_37 = ((/* implicit */unsigned int) max((var_37), (((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (var_15) : (var_11)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (arr_1 [i_0] [9U])))))));
                        }
                        var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((4294967283U) + (2743424564U))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) << (((/* implicit */int) arr_15 [(unsigned char)12] [i_2 + 1])))))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) (short)-2308))))), (var_9)))) : ((~(((/* implicit */int) (unsigned short)18303))))));
                    }
                    var_39 = ((/* implicit */long long int) max((var_39), (((/* implicit */long long int) var_3))));
                    var_40 ^= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) -4294287924869503651LL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_18 [3U] [i_2 - 1] [i_2] [i_2 - 1] [i_2] [i_2]))))) / (((2093409797U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0] [i_2 - 1] [i_2] [i_1] [i_1] [i_1])))))));
                }
            }
        } 
    } 
    var_41 = ((/* implicit */long long int) max((var_41), (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned int) var_9)))))))))))));
}
