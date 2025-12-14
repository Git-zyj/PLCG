/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240273
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
    var_10 = ((/* implicit */int) ((((/* implicit */_Bool) 3874444233820156345LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (max((((/* implicit */unsigned int) (signed char)125)), (0U)))));
    var_11 = ((/* implicit */long long int) min((((((/* implicit */_Bool) min((var_8), (((/* implicit */signed char) var_6))))) ? ((-2147483647 - 1)) : (((/* implicit */int) var_6)))), (((/* implicit */int) min((max((var_7), (var_1))), (((_Bool) (signed char)35)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1 - 1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) min((((/* implicit */short) var_3)), ((short)-24627)))) > (((/* implicit */int) arr_3 [i_1 - 2] [i_1 - 2] [(unsigned short)5]))))) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)8))))) ? (((/* implicit */int) ((_Bool) (short)(-32767 - 1)))) : (((/* implicit */int) (signed char)-119))))));
                var_12 -= max((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((4238677485U), (2103438745U)))) && (((/* implicit */_Bool) (unsigned char)240))))), (max((4250034121U), (0U))));
                /* LoopSeq 3 */
                for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    var_13 = ((/* implicit */int) min((((/* implicit */unsigned int) var_3)), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_5 [i_2] [i_2] [i_1 - 1] [(short)6])))));
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) var_8)) << (((/* implicit */int) ((max((3828991083U), (((/* implicit */unsigned int) var_5)))) < (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_7)) == (-1853624381))))))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        var_14 += ((/* implicit */unsigned int) (~(min((((int) var_2)), ((~(((/* implicit */int) var_3))))))));
                        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((((((/* implicit */int) var_9)) + (2147483647))) >> (((((/* implicit */int) var_9)) + (22952))))) : (((/* implicit */int) min((((/* implicit */short) var_1)), (var_0))))))) ? (min((((/* implicit */long long int) arr_2 [i_1 + 1] [i_1 - 2] [i_1 - 2])), (arr_9 [i_1 + 1] [i_1] [i_1] [i_1] [i_1 - 1] [i_1 - 1]))) : (((/* implicit */long long int) ((((unsigned int) var_2)) << (((((((/* implicit */long long int) -1927657507)) - (-9223372036854775798LL))) - (9223372034927118278LL)))))))))));
                    }
                }
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    arr_16 [(signed char)11] [i_1] |= arr_3 [1] [(_Bool)1] [i_4];
                    var_16 = ((/* implicit */signed char) (~(((var_1) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6))))));
                    var_17 ^= ((/* implicit */unsigned int) ((-73053677) < (((/* implicit */int) ((((/* implicit */int) ((short) 5876482760961233698LL))) > (((/* implicit */int) (_Bool)0)))))));
                    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) max((var_4), (((/* implicit */int) ((((/* implicit */_Bool) min((-987363271), (((/* implicit */int) var_8))))) && (((/* implicit */_Bool) ((unsigned char) (signed char)-55)))))))))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (long long int i_6 = 2; i_6 < 10; i_6 += 1) 
                        {
                            {
                                var_19 = ((min((arr_5 [i_1 - 2] [i_1 - 2] [(unsigned short)3] [i_6 + 2]), (((/* implicit */unsigned int) max((var_2), (((/* implicit */short) arr_6 [i_1 + 1] [i_1 + 1]))))))) >> (((/* implicit */int) ((((/* implicit */unsigned int) ((var_6) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8))))) <= (((unsigned int) var_8))))));
                                var_20 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)130))) : (((((/* implicit */_Bool) var_4)) ? (arr_7 [i_1] [i_4] [i_5] [i_6]) : (3202611976U))))));
                                var_21 = ((/* implicit */unsigned char) ((unsigned long long int) var_7));
                                var_22 ^= ((/* implicit */short) 3963192244U);
                                arr_22 [i_6] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (arr_1 [i_1 - 1]) : (arr_1 [i_1 - 2]))) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)64)))));
                            }
                        } 
                    } 
                }
                for (short i_7 = 0; i_7 < 12; i_7 += 1) 
                {
                    var_23 |= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (1800224317U)));
                    var_24 = ((/* implicit */unsigned char) (((-(((/* implicit */int) arr_14 [i_7] [(unsigned char)3] [i_0] [i_0])))) | (((/* implicit */int) ((signed char) -9223372036854775796LL)))));
                }
                var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_6 [i_1 - 2] [(signed char)9]))))) ? (((((/* implicit */_Bool) 2949254184U)) ? (arr_15 [i_1 - 2] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) var_3)) ? (2730897600U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-22)))))))) ? (((/* implicit */int) ((unsigned char) arr_20 [i_1] [i_1] [i_1]))) : (((/* implicit */int) ((((/* implicit */int) arr_13 [i_1] [i_1 - 1] [i_1 + 1] [i_1])) < (((/* implicit */int) arr_2 [i_0] [i_1] [i_1 - 2])))))));
                var_26 = ((/* implicit */unsigned char) ((_Bool) ((_Bool) arr_14 [i_1 + 1] [i_1 - 2] [i_1 - 1] [i_1 + 1])));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_8 = 0; i_8 < 11; i_8 += 2) 
    {
        for (unsigned int i_9 = 2; i_9 < 10; i_9 += 4) 
        {
            {
                var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) min((((/* implicit */unsigned char) (signed char)-48)), ((unsigned char)0))))));
                arr_34 [i_9] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4201170604U)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (!(((/* implicit */_Bool) 3U)))))));
                /* LoopNest 2 */
                for (unsigned int i_10 = 0; i_10 < 11; i_10 += 4) 
                {
                    for (unsigned char i_11 = 0; i_11 < 11; i_11 += 1) 
                    {
                        {
                            arr_39 [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? ((-(((/* implicit */int) arr_31 [i_9] [i_10])))) : (((/* implicit */int) max((var_2), (((/* implicit */short) arr_31 [i_9 - 2] [i_9 - 2])))))))) ? ((~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_6 [i_9] [i_10])) : (((/* implicit */int) var_1)))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_7 [i_8] [11LL] [10U] [i_8])), (arr_27 [i_8])))) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_0 [(_Bool)0] [i_9])) : (((/* implicit */int) (signed char)73)))) : (((var_6) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)-8895))))))));
                            var_28 += ((/* implicit */long long int) ((short) ((signed char) arr_19 [i_10] [i_10])));
                            arr_40 [i_11] = (!(((/* implicit */_Bool) min((((/* implicit */int) max((var_0), (((/* implicit */short) arr_23 [i_8] [i_9] [i_10] [i_11]))))), (((((/* implicit */int) (unsigned char)1)) & (((/* implicit */int) (_Bool)1))))))));
                            var_29 = ((/* implicit */long long int) (~(min((max((((/* implicit */int) var_1)), (var_4))), ((~(var_4)))))));
                            arr_41 [i_11] [i_9] [i_10] [i_11] = ((/* implicit */short) 0U);
                        }
                    } 
                } 
            }
        } 
    } 
}
