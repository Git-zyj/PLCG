/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191204
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */_Bool) min((var_14), ((!(var_12)))));
                            var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-117)) ? (((/* implicit */int) (short)17455)) : (((/* implicit */int) (_Bool)0)))))));
                            /* LoopSeq 1 */
                            for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 3) 
                            {
                                arr_12 [i_0] [i_0] [8] [i_2] [i_1] [i_3] [i_3] = ((/* implicit */signed char) (-(((unsigned long long int) ((var_2) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)24442)))))));
                                arr_13 [i_0] [i_1 + 2] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1])) ? (((/* implicit */int) ((signed char) 573972140))) : (-1526455819)))) || (((((/* implicit */int) arr_7 [i_1])) > (((/* implicit */int) (short)29499))))));
                            }
                        }
                    } 
                } 
                var_16 = ((/* implicit */short) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((short) (_Bool)1))) : (((/* implicit */int) arr_1 [i_1 + 3] [i_1 - 1])))) < ((-(((/* implicit */int) arr_9 [i_1 - 1] [i_1 - 1] [i_1 + 4] [i_1 - 1]))))));
                /* LoopSeq 3 */
                for (unsigned int i_5 = 0; i_5 < 12; i_5 += 1) 
                {
                    var_17 = ((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned long long int) var_12))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_1 + 1] [i_1 + 3] [i_1 - 1] [i_1 + 2]))))) : (249258678));
                    var_18 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) * ((+(((/* implicit */int) arr_0 [i_1 + 3]))))));
                }
                for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 3) 
                {
                    var_19 ^= ((/* implicit */int) ((((/* implicit */int) (!(var_4)))) <= (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), (arr_0 [i_1 + 2]))))));
                    arr_19 [i_1] = ((/* implicit */_Bool) max((((/* implicit */signed char) (!(((/* implicit */_Bool) (short)-24443))))), (min((((/* implicit */signed char) arr_1 [i_0] [i_1 + 3])), (arr_9 [i_0] [i_1 + 3] [i_6] [i_0])))));
                    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) >= (-3723785265226075393LL))))));
                    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) (unsigned short)42660)))))) ? (((/* implicit */int) ((short) (((_Bool)1) || ((_Bool)1))))) : ((-(((((/* implicit */int) (unsigned short)22875)) % (((/* implicit */int) (_Bool)1))))))));
                    arr_20 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) (_Bool)1))) ? (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))))), (var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned short)19321))))));
                }
                for (unsigned short i_7 = 0; i_7 < 12; i_7 += 2) 
                {
                    var_22 &= ((/* implicit */short) (~(((unsigned long long int) arr_6 [i_7]))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 3) 
                    {
                        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_17 [i_1] [i_1 + 4] [i_1 + 2] [i_1 + 1])) ? (((/* implicit */int) arr_2 [i_1 + 1] [i_1 + 4])) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */int) (short)-32761)) <= (((/* implicit */int) arr_23 [i_1] [i_1] [i_1 - 1] [i_1] [(short)0] [i_1])))))));
                                var_24 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */int) (short)0)) << (((((/* implicit */int) var_10)) - (197)))))) ? ((~(((/* implicit */int) arr_23 [i_0] [i_1 + 2] [i_1 + 2] [i_0] [i_9] [i_1])))) : (((/* implicit */int) ((unsigned short) 1342024425))))), (((/* implicit */int) var_8))));
                            }
                        } 
                    } 
                }
                var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)57285)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_5)))) : (min((296156716312283583LL), (((/* implicit */long long int) arr_11 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))));
            }
        } 
    } 
    var_26 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -322652042)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (short)7850))))) : ((-(var_7)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_12)) < ((~(((/* implicit */int) (short)-4869)))))))) : (var_11)));
    var_27 = ((/* implicit */unsigned long long int) var_6);
    var_28 = ((/* implicit */_Bool) var_8);
    /* LoopNest 2 */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_12 = 1; i_12 < 9; i_12 += 2) 
                {
                    for (unsigned short i_13 = 2; i_13 < 9; i_13 += 4) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) (~(((/* implicit */int) (!(arr_29 [i_13])))))))));
                            arr_39 [i_10] [i_11] [i_12 - 1] [i_12] [i_13 - 1] = ((/* implicit */signed char) min((((unsigned long long int) arr_27 [i_12 + 1] [i_13] [i_13] [i_13 - 2] [i_13])), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_27 [i_12 + 1] [i_13] [i_13] [i_13 - 2] [i_13])))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_14 = 0; i_14 < 10; i_14 += 2) 
                {
                    for (short i_15 = 0; i_15 < 10; i_15 += 4) 
                    {
                        for (unsigned int i_16 = 3; i_16 < 9; i_16 += 3) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned long long int) ((_Bool) arr_17 [i_10] [i_10] [i_15] [i_15])))))) ? (-5508367264683836872LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [(_Bool)1] [i_16 + 1] [i_16 - 1] [i_16 - 1] [i_16 - 2])) ? (((/* implicit */int) arr_24 [i_16] [i_16 + 1] [i_16 - 1] [i_16 - 1] [i_16 - 2])) : (322652047))))));
                                var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (min((((((/* implicit */_Bool) 853006236)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_13)))), (((/* implicit */int) arr_45 [i_10] [i_11] [i_14] [i_11] [i_15] [i_16 - 1])))) : (max((((((/* implicit */int) (unsigned short)25897)) / (((/* implicit */int) (unsigned short)39639)))), ((~(((/* implicit */int) (unsigned short)24844))))))));
                            }
                        } 
                    } 
                } 
                var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) (~(max((min((((/* implicit */long long int) (signed char)121)), (8510065712981108762LL))), (((/* implicit */long long int) ((unsigned int) (_Bool)1))))))))));
                var_33 = (!(((/* implicit */_Bool) max((min((var_5), (((/* implicit */unsigned long long int) var_13)))), (((unsigned long long int) (unsigned short)32270))))));
                var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? (((/* implicit */int) (!(var_4)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
            }
        } 
    } 
}
