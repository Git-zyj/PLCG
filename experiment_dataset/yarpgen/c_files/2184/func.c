/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2184
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
    var_13 += var_11;
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_2 = 2; i_2 < 14; i_2 += 3) 
                {
                    var_14 = ((/* implicit */short) var_5);
                    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)51965)))))));
                    arr_7 [i_2] [i_2] = 70295169713396361LL;
                    var_16 = ((/* implicit */long long int) min((var_16), ((~(((((((/* implicit */_Bool) (unsigned short)13576)) ? (2031363534220255129LL) : (var_9))) - (arr_1 [i_1])))))));
                }
                for (unsigned short i_3 = 0; i_3 < 16; i_3 += 4) 
                {
                    arr_11 [i_3] [i_1] [i_0] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((short) arr_0 [i_0]))), (arr_6 [i_3] [7LL] [i_3] [i_0])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) -1670965710315916171LL))) ? (((((/* implicit */_Bool) (unsigned char)30)) ? (arr_1 [i_0]) : (var_5))) : (((/* implicit */long long int) (~(((/* implicit */int) var_1))))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 16; i_4 += 2) 
                    {
                        for (long long int i_5 = 0; i_5 < 16; i_5 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (~(max((((/* implicit */unsigned long long int) arr_1 [i_3])), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : (var_6))))))))));
                                var_18 += ((/* implicit */long long int) ((_Bool) ((1670965710315916157LL) + (142989288169013248LL))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (signed char i_6 = 0; i_6 < 16; i_6 += 2) 
                    {
                        arr_18 [14LL] [i_1] [4LL] [i_0] = var_8;
                        var_19 = ((/* implicit */long long int) (+(((/* implicit */int) ((_Bool) max((((/* implicit */unsigned short) var_4)), (var_11)))))));
                    }
                    for (signed char i_7 = 0; i_7 < 16; i_7 += 3) 
                    {
                        var_20 *= ((/* implicit */unsigned char) max((max((max((-532917158491009068LL), (((/* implicit */long long int) (short)-22950)))), ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_3] [i_7] [i_7])) ? (arr_0 [i_7]) : (((/* implicit */long long int) arr_3 [i_0] [4U])))) <= (((/* implicit */long long int) arr_8 [i_0] [i_1] [i_3] [i_7])))))));
                        arr_23 [i_7] [i_3] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? ((~(-1670965710315916171LL))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_3 [i_0] [i_3]))))))) ? (((/* implicit */unsigned long long int) (-(var_9)))) : (((((18446744073709551615ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) var_8)) ? (16594418056302427799ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((long long int) -142989288169013255LL)))))));
                    }
                }
                /* LoopNest 3 */
                for (unsigned short i_8 = 0; i_8 < 16; i_8 += 1) 
                {
                    for (long long int i_9 = 0; i_9 < 16; i_9 += 3) 
                    {
                        for (unsigned short i_10 = 0; i_10 < 16; i_10 += 2) 
                        {
                            {
                                arr_33 [i_8] [i_10] [i_9] [i_9] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65533))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -532917158491009057LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (-1LL)))))))) : (((max((((/* implicit */long long int) var_12)), (arr_25 [i_10] [i_8] [i_8] [i_8]))) - (max((9223372036854775798LL), (9223372036854775807LL)))))));
                                arr_34 [i_0] [i_1] [i_8] [i_8] [2LL] [i_1] = arr_25 [i_0] [i_8] [i_8] [i_0];
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_11 = 0; i_11 < 16; i_11 += 3) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        for (unsigned int i_13 = 0; i_13 < 16; i_13 += 1) 
                        {
                            {
                                var_21 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_9 [i_13] [i_1] [i_12] [i_13]) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) -2508389364323260209LL))))))) ? (((/* implicit */int) (((+(9223372036854775807LL))) == (max((((/* implicit */long long int) (unsigned char)30)), (arr_21 [i_13] [i_12] [i_11] [i_1] [i_0])))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((5217796727161095068LL) - (9223372036854775804LL)))) < (max((((/* implicit */unsigned long long int) arr_31 [i_1] [12LL] [i_13] [i_1] [i_12])), (var_6))))))));
                                arr_41 [i_12] [i_11] [i_11] [i_12] = min((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 6422865048493437264LL)) ? (7858545485722604979LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)194))))))))), (max((((/* implicit */long long int) var_3)), ((~(arr_5 [i_13] [i_0] [i_0]))))));
                                var_22 = ((/* implicit */unsigned int) arr_15 [i_0] [(unsigned char)9] [i_11] [i_12] [i_13] [i_12]);
                                var_23 = ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) (-(-9223372036854775784LL)))), (max((arr_38 [(_Bool)1]), (((/* implicit */unsigned long long int) arr_30 [i_0] [i_11] [i_0] [i_12] [i_13])))))) * (((/* implicit */unsigned long long int) max(((-9223372036854775807LL - 1LL)), (((long long int) 5217796727161095071LL)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
