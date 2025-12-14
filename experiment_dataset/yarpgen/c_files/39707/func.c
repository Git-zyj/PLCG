/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39707
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) arr_3 [i_0 - 1] [(unsigned short)2]))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_19 ^= ((/* implicit */short) ((_Bool) max((var_4), (arr_0 [i_4 + 1] [(_Bool)1]))));
                                arr_16 [i_1] [i_1] [i_0] [i_0 - 1] [i_4] &= ((/* implicit */int) (-(((((/* implicit */_Bool) arr_7 [i_4 + 1] [i_4 + 1] [i_1 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_7 [i_4 - 1] [i_3] [i_1 + 1])))));
                            }
                        } 
                    } 
                    var_20 = ((((((/* implicit */_Bool) ((((/* implicit */int) var_1)) >> (((/* implicit */int) (unsigned char)0))))) ? (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)33))))) : (max((2706249709616776535ULL), (((/* implicit */unsigned long long int) 2183377043982069705LL)))))) <= (((/* implicit */unsigned long long int) var_8)));
                    var_21 *= ((/* implicit */unsigned short) var_11);
                }
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (((!(((/* implicit */_Bool) 4294967280U)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) 6U))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) (unsigned char)203)))))))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (6516510997489264676LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65524)))))) ? (min((((/* implicit */long long int) (short)-10682)), (6516510997489264676LL))) : (((/* implicit */long long int) (-(((/* implicit */int) var_15)))))))));
    /* LoopSeq 2 */
    for (unsigned short i_5 = 2; i_5 < 14; i_5 += 4) 
    {
        var_23 ^= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) -8779095533515179024LL)) ? (((/* implicit */int) arr_18 [i_5] [i_5 - 2])) : (((/* implicit */int) (unsigned char)2))))));
        var_24 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)212)) ? (((((/* implicit */_Bool) 0U)) ? (((/* implicit */long long int) 15U)) : (-6516510997489264676LL))) : (((/* implicit */long long int) ((((var_5) > (((/* implicit */unsigned long long int) var_13)))) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)235)))) : (((/* implicit */int) min(((short)-14777), (((/* implicit */short) (unsigned char)80))))))))));
        arr_19 [i_5 + 2] = min((((((/* implicit */_Bool) (short)-14783)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((long long int) (unsigned char)244)))), (((/* implicit */long long int) (unsigned short)39117)));
        var_25 ^= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((arr_1 [i_5 + 4]), (((/* implicit */int) (unsigned char)223))))), (((((/* implicit */_Bool) (unsigned short)51479)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (min((((/* implicit */unsigned long long int) 6516510997489264676LL)), (var_14)))))));
        arr_20 [i_5 + 2] = ((/* implicit */int) ((((/* implicit */int) var_12)) != (((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_5 + 1] [i_5 - 2])) && (((/* implicit */_Bool) ((unsigned char) (unsigned short)65535))))))));
    }
    /* vectorizable */
    for (int i_6 = 2; i_6 < 8; i_6 += 4) 
    {
        var_26 = ((/* implicit */unsigned short) (unsigned char)196);
        var_27 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) + (16U)));
        var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)222)) ? (((((/* implicit */_Bool) var_9)) ? (-6516510997489264656LL) : (((/* implicit */long long int) ((/* implicit */int) var_15))))) : (((((/* implicit */_Bool) (unsigned char)243)) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))));
    }
    /* LoopNest 3 */
    for (short i_7 = 3; i_7 < 13; i_7 += 2) 
    {
        for (unsigned char i_8 = 2; i_8 < 13; i_8 += 2) 
        {
            for (int i_9 = 2; i_9 < 13; i_9 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_10 = 2; i_10 < 13; i_10 += 3) 
                    {
                        var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -4823759031166314429LL)), (min((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))), (arr_7 [i_7] [i_9] [i_10 - 1])))))) ? (((/* implicit */long long int) ((unsigned int) -195646542))) : ((+(max((arr_32 [i_7] [i_8]), (((/* implicit */long long int) (unsigned char)43)))))))))));
                        var_30 = ((/* implicit */int) max((((((/* implicit */_Bool) (unsigned char)239)) ? (((/* implicit */unsigned int) var_13)) : (1627283975U))), (((/* implicit */unsigned int) (~(61440))))));
                        var_31 += ((/* implicit */short) ((min((max((var_14), (((/* implicit */unsigned long long int) (unsigned char)160)))), (((/* implicit */unsigned long long int) arr_4 [i_10] [(short)19] [i_10 - 1] [i_7 - 2])))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))))))));
                        var_32 = (+(((((/* implicit */_Bool) (+(((/* implicit */int) var_15))))) ? (((((/* implicit */_Bool) (short)-31301)) ? (3104142047U) : (2022688145U))) : (((/* implicit */unsigned int) var_13)))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 0; i_11 < 15; i_11 += 3) 
                    {
                        for (unsigned char i_12 = 0; i_12 < 15; i_12 += 4) 
                        {
                            {
                                arr_38 [i_7] [i_8 + 1] [i_9] [i_11] [i_9] [i_9] [(signed char)2] = ((/* implicit */unsigned short) (+(1327035650)));
                                var_33 ^= ((/* implicit */unsigned char) ((int) ((((/* implicit */long long int) ((/* implicit */int) max((var_6), ((unsigned char)254))))) ^ (((((/* implicit */_Bool) arr_5 [i_7] [3U] [i_11] [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)147))) : (-2852374565921612213LL))))));
                                var_34 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)255)) | (((/* implicit */int) var_3))))), (((((/* implicit */_Bool) arr_18 [i_7 + 2] [i_9 + 2])) ? ((~(4294967284U))) : (((/* implicit */unsigned int) 0))))));
                                var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) ((((/* implicit */_Bool) (~(max((((/* implicit */long long int) (_Bool)0)), (4499499559901247836LL)))))) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) arr_35 [i_7] [i_7] [i_7] [i_7 - 3] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)62))) : (4294967271U)))) | (arr_35 [i_12] [i_11] [i_9] [i_8] [i_7 - 3]))) : (((long long int) var_14)))))));
                                arr_39 [i_7 + 2] [(_Bool)1] [i_9] [i_11] [i_7 + 2] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (~(-407056026980423803LL)))) ? (((/* implicit */int) (unsigned short)58377)) : (max((-13), (((/* implicit */int) (unsigned char)255))))))));
                            }
                        } 
                    } 
                    var_36 ^= ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)92)), (1190825248U)))))))));
                    var_37 ^= -1448941119;
                }
            } 
        } 
    } 
}
