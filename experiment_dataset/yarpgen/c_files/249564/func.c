/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249564
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 8; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 8; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_4] [i_0] = min((((((/* implicit */unsigned int) ((/* implicit */int) var_11))) + (var_17))), (((/* implicit */unsigned int) max((var_13), (((/* implicit */int) (signed char)63))))));
                                arr_13 [i_0] [i_0] [i_0] [i_3] [i_4] = ((/* implicit */signed char) max((((((arr_0 [i_1 - 2] [i_4]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_2 + 2] [9LL] [i_0]))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_8), (((/* implicit */short) var_12)))))))), (((/* implicit */unsigned long long int) max((-1190837806), (min((-1990995148), (((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_2])))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 10; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 10; i_6 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) max((((1188286779035786783ULL) ^ (((/* implicit */unsigned long long int) 1190837806)))), (((/* implicit */unsigned long long int) ((5753260010889896553LL) | (((/* implicit */long long int) ((/* implicit */int) (signed char)48)))))))))));
                                var_19 += min((((/* implicit */unsigned short) ((min((((/* implicit */long long int) var_1)), (arr_19 [(unsigned short)0] [i_1] [(unsigned short)0] [i_5] [i_6]))) <= (((/* implicit */long long int) ((/* implicit */int) ((var_10) < (((/* implicit */long long int) ((/* implicit */int) var_2)))))))))), (min((((/* implicit */unsigned short) max((var_0), ((signed char)-63)))), (min((var_2), (arr_6 [i_0] [3U] [(short)9] [i_5]))))));
                                var_20 = ((/* implicit */signed char) max((((max((((/* implicit */long long int) -1190837794)), (7690790145083583003LL))) ^ (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_2] [i_2]))) / (var_17)))))), (((/* implicit */long long int) ((((/* implicit */int) var_11)) & (((/* implicit */int) var_8)))))));
                                var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) min((arr_5 [i_0] [i_1 - 3] [i_2 + 1] [i_6]), (((/* implicit */short) (_Bool)1))))) ^ (min((-1675225906), (((/* implicit */int) max((((/* implicit */unsigned short) (short)(-32767 - 1))), (arr_6 [i_0] [i_0] [i_5] [(short)6]))))))));
                                var_22 = ((/* implicit */unsigned int) ((((((7690790145083583008LL) + (((/* implicit */long long int) arr_15 [i_2])))) << (((/* implicit */int) (unsigned short)0)))) < (((/* implicit */long long int) min((((/* implicit */unsigned int) min((var_0), (arr_17 [i_0] [i_1] [i_5] [i_5] [(unsigned char)4] [i_0])))), (var_17))))));
                            }
                        } 
                    } 
                    var_23 ^= ((/* implicit */unsigned char) max((min((470797874U), (((/* implicit */unsigned int) var_6)))), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) -1190837806))))) << (((max((arr_0 [(unsigned short)5] [i_1]), (((/* implicit */unsigned long long int) (short)-11755)))) - (18446744073709539858ULL))))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_7 = 0; i_7 < 10; i_7 += 1) 
                    {
                        arr_24 [i_0] [i_1] [i_7] = ((/* implicit */unsigned int) max((((/* implicit */short) min((arr_17 [i_0] [i_0] [i_1 + 2] [i_1 + 2] [i_0] [i_7]), (((/* implicit */signed char) (_Bool)1))))), (min((var_6), (((/* implicit */short) arr_17 [i_0] [i_1] [i_2] [i_7] [i_0] [i_0]))))));
                        arr_25 [i_7] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) max((((/* implicit */int) arr_11 [i_0] [(signed char)1] [i_0] [(signed char)1] [i_0] [i_0] [i_0])), (arr_15 [i_0])))), (max((((/* implicit */unsigned int) arr_5 [i_2 + 1] [i_2 + 1] [i_1] [(signed char)5])), (var_17)))))) || (((/* implicit */_Bool) ((((/* implicit */int) var_6)) << (((((/* implicit */int) max((var_15), (((/* implicit */short) (signed char)-75))))) + (81))))))));
                        var_24 = ((/* implicit */unsigned int) max((((max((var_14), (((/* implicit */long long int) var_5)))) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_5)) < (((/* implicit */int) var_8)))))))), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) min(((short)-11333), (((/* implicit */short) (signed char)53)))))) > (max((0LL), (((/* implicit */long long int) var_12)))))))));
                        var_25 *= ((/* implicit */short) ((min((((/* implicit */unsigned int) max((arr_14 [i_0] [i_1] [i_2]), (((/* implicit */unsigned short) var_7))))), (max((((/* implicit */unsigned int) (short)-4184)), (var_17))))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) min((arr_16 [i_0] [0ULL] [(unsigned short)2] [5ULL] [i_7]), (((/* implicit */signed char) var_12)))))) == (((arr_19 [i_0] [i_0] [i_0] [1U] [i_0]) >> (((arr_1 [i_0]) + (8873003691088663483LL)))))))))));
                    }
                    for (signed char i_8 = 4; i_8 < 7; i_8 += 2) 
                    {
                        var_26 = ((/* implicit */unsigned short) ((((((/* implicit */int) min((var_11), ((short)-23566)))) + (2147483647))) << (((((/* implicit */int) ((((/* implicit */unsigned int) arr_9 [i_8] [i_1 - 2] [i_8 + 2] [i_8] [i_1 - 2])) != (4294967270U)))) - (1)))));
                        arr_30 [1ULL] = ((/* implicit */short) max((((/* implicit */int) max((((/* implicit */unsigned short) (short)10185)), (arr_14 [i_1 - 3] [i_8 + 3] [i_2 + 2])))), (((((((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_1] [i_2 + 2] [(unsigned char)5] [i_8 - 3])) / (((/* implicit */int) (short)11754)))) * (((((/* implicit */int) var_5)) * (((/* implicit */int) var_3))))))));
                        var_27 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) max((min((arr_15 [i_0]), (((/* implicit */int) var_9)))), (var_13)))) > (min((min((arr_22 [4LL] [i_1] [i_8]), (((/* implicit */unsigned long long int) (short)11754)))), (((/* implicit */unsigned long long int) arr_11 [i_0] [i_8 + 3] [i_0] [i_8 - 2] [i_2 - 1] [3LL] [i_0]))))));
                        var_28 = max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) min((var_8), (arr_8 [i_2] [i_2 - 1] [i_2] [i_2] [(_Bool)1] [(_Bool)1])))), (max((((/* implicit */long long int) (unsigned short)49193)), (var_4)))))), (max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_5)), (var_14)))), (((arr_2 [i_2 + 2]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_8] [i_8] [6LL] [6LL] [i_0]))))))));
                        var_29 ^= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) max((-1675225894), (((/* implicit */int) (signed char)75))))), (max((min((arr_2 [i_8]), (((/* implicit */unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) min((((/* implicit */int) var_5)), (-1675225906))))))));
                    }
                }
            } 
        } 
    } 
    var_30 = ((/* implicit */signed char) min((((/* implicit */short) var_0)), (var_11)));
    /* LoopSeq 2 */
    for (long long int i_9 = 1; i_9 < 14; i_9 += 1) /* same iter space */
    {
        arr_34 [i_9 + 1] [i_9 + 1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) >> (((6010091569319212481ULL) - (6010091569319212468ULL)))))) >= (min((((/* implicit */unsigned int) max((var_16), (((/* implicit */short) var_0))))), (max((((/* implicit */unsigned int) arr_32 [11LL])), (20U)))))));
        arr_35 [i_9] = ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */int) arr_33 [i_9 + 1])) >= (((/* implicit */int) max((arr_33 [i_9]), (arr_33 [i_9]))))))), (min((arr_31 [i_9 + 1] [i_9 + 2]), (((/* implicit */int) arr_32 [i_9 - 1]))))));
        arr_36 [i_9 - 1] [i_9] = ((/* implicit */signed char) ((min((((/* implicit */unsigned int) (unsigned short)43588)), (min((4294967272U), (((/* implicit */unsigned int) arr_33 [i_9])))))) <= (((/* implicit */unsigned int) ((/* implicit */int) min((var_11), (var_15)))))));
    }
    /* vectorizable */
    for (long long int i_10 = 1; i_10 < 14; i_10 += 1) /* same iter space */
    {
        var_31 &= ((/* implicit */short) ((((/* implicit */int) var_3)) >= (((/* implicit */int) (short)-10186))));
        var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) ((((/* implicit */int) (short)-11755)) | (((/* implicit */int) arr_33 [i_10 - 1])))))));
    }
}
