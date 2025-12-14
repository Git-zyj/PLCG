/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243705
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
    for (long long int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */short) (~(1682605933U)));
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 9; i_2 += 4) 
                {
                    for (unsigned short i_3 = 4; i_3 < 9; i_3 += 2) 
                    {
                        {
                            arr_10 [i_0] [i_0] [(unsigned short)2] [i_1] [i_3 - 3] [7LL] = ((/* implicit */int) (((!(((/* implicit */_Bool) var_4)))) && (((((/* implicit */_Bool) max((((/* implicit */unsigned int) -1)), (var_17)))) && (((/* implicit */_Bool) min((var_2), (var_8))))))));
                            arr_11 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (unsigned short)5)), (935089760U)));
                            var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) (+(min((3359877536U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_3 [i_0 - 1] [i_3 - 2] [i_1]))))))))))));
                            /* LoopSeq 3 */
                            for (unsigned long long int i_4 = 4; i_4 < 9; i_4 += 2) 
                            {
                                var_21 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_3 - 3] [i_2 - 2] [i_0 + 1])) / (((/* implicit */int) var_7))))) ^ (4864253237935639380ULL)));
                                arr_14 [i_0] [i_0] [i_0] [i_0 - 1] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_18))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_5 [4U] [i_1] [i_2] [6U]))))) : (((/* implicit */int) arr_7 [i_0] [i_4] [i_4 - 2] [i_4]))))) && (((((/* implicit */_Bool) var_3)) && (((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) var_3))))))));
                            }
                            for (int i_5 = 0; i_5 < 11; i_5 += 1) 
                            {
                                var_22 = ((/* implicit */long long int) ((unsigned short) ((var_15) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_16))) <= (3359877537U))))))));
                                var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) min((((arr_16 [i_3] [4] [i_3] [i_3 + 1]) | (((/* implicit */long long int) var_11)))), ((~(var_14))))))));
                                arr_17 [2] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */int) var_5);
                            }
                            /* vectorizable */
                            for (unsigned int i_6 = 1; i_6 < 9; i_6 += 3) 
                            {
                                var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_9))));
                                var_25 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_8 [i_0] [i_0] [i_0 + 1] [i_0] [i_0]))));
                                var_26 = ((/* implicit */int) (~(3167674473U)));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_7 = 0; i_7 < 15; i_7 += 1) 
    {
        for (unsigned int i_8 = 0; i_8 < 15; i_8 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_9 = 0; i_9 < 15; i_9 += 2) 
                {
                    for (unsigned int i_10 = 1; i_10 < 14; i_10 += 1) 
                    {
                        {
                            var_27 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) ((arr_28 [i_10] [4ULL] [(unsigned short)2] [i_7]) + (var_11))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_7] [i_8]))) : (var_11)));
                            arr_33 [i_10] = ((/* implicit */long long int) min((-1403165045), (((/* implicit */int) (unsigned short)34191))));
                            arr_34 [i_9] [i_8] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((((/* implicit */unsigned int) var_2)) < (arr_31 [i_8])))));
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (long long int i_11 = 1; i_11 < 12; i_11 += 2) 
                            {
                                var_28 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((var_11) / (((/* implicit */unsigned int) arr_21 [i_7])))))));
                                var_29 = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (unsigned char)109))))));
                            }
                            for (int i_12 = 0; i_12 < 15; i_12 += 2) 
                            {
                                var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(-834433431)))) ? (var_17) : (((/* implicit */unsigned int) arr_36 [i_7] [i_7] [i_7] [i_10 - 1] [i_10 - 1] [i_12]))))) ? (((/* implicit */long long int) var_2)) : ((((((~(arr_38 [i_8] [i_12] [i_9] [i_8] [i_12]))) + (9223372036854775807LL))) >> (((((long long int) arr_38 [i_10] [i_8] [i_9] [(unsigned char)0] [i_12])) - (3397870939595336096LL)))))));
                                var_31 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_36 [i_7] [i_8] [i_9] [i_9] [i_10] [4U])))) || (((((/* implicit */long long int) ((/* implicit */int) (((_Bool)0) && (((/* implicit */_Bool) 2861876806759696188LL)))))) != ((~(888080084820070303LL)))))));
                                var_32 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_9)), (251067633U)))) ? (((/* implicit */int) var_16)) : (var_12))) > (((/* implicit */int) var_18))));
                            }
                            for (int i_13 = 0; i_13 < 15; i_13 += 1) 
                            {
                                var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) 3)) : (((min((arr_38 [i_13] [i_13] [i_13] [7U] [0U]), (((/* implicit */long long int) var_6)))) + (((/* implicit */long long int) ((var_17) + (((/* implicit */unsigned int) var_3)))))))));
                                var_34 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)0)), (var_4)))) ? (((/* implicit */int) (signed char)-76)) : (((((/* implicit */_Bool) -109902757)) ? (-834433431) : (((/* implicit */int) (unsigned short)46995))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_35 [i_7] [i_8] [2LL] [(unsigned short)9] [i_10] [i_10] [i_13])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 4483558616721271441ULL)) ? (-834433431) : (1806333203)))))))) : (min((((((/* implicit */long long int) ((/* implicit */int) var_1))) + (-6263782677947069911LL))), (((/* implicit */long long int) arr_31 [i_7]))))));
                                var_35 = ((((/* implicit */int) (unsigned short)480)) ^ ((~(((/* implicit */int) (_Bool)1)))));
                                var_36 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((arr_39 [i_7] [i_8] [i_9] [i_10] [i_9] [(short)0]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */long long int) (-(3359877535U)))) : (min((((/* implicit */long long int) arr_28 [i_7] [i_7] [i_7] [i_10 - 1])), (var_14))))) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15363)))));
                            }
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_14 = 0; i_14 < 15; i_14 += 4) 
                {
                    for (unsigned int i_15 = 0; i_15 < 15; i_15 += 1) 
                    {
                        for (unsigned short i_16 = 0; i_16 < 15; i_16 += 2) 
                        {
                            {
                                arr_51 [i_7] [5U] [i_14] [13U] [i_15] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_0))));
                                var_37 = min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_7])) ? (arr_35 [i_16] [i_7] [i_15] [i_14] [i_7] [i_7] [i_7]) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)0)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_7])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_13))))) ? (min((var_14), (((/* implicit */long long int) arr_47 [i_7] [i_8] [i_14] [i_15] [i_15])))) : (((/* implicit */long long int) arr_32 [i_16] [i_14] [2] [11U])))));
                                var_38 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (((~(12468516109545377668ULL))) != (((/* implicit */unsigned long long int) var_8))))), (min((min((285900224153197850ULL), (((/* implicit */unsigned long long int) arr_41 [13] [i_16] [(unsigned short)12] [i_7] [i_14] [i_7] [i_7])))), (((/* implicit */unsigned long long int) min((134217727U), (((/* implicit */unsigned int) var_9)))))))));
                                var_39 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)36)) ? (285900224153197857ULL) : (((/* implicit */unsigned long long int) 74641841))))) && (((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) arr_37 [i_16] [i_8] [i_14] [i_8] [i_7]))))))));
                            }
                        } 
                    } 
                } 
                var_40 = ((/* implicit */unsigned long long int) (+(3359877535U)));
            }
        } 
    } 
    var_41 = ((/* implicit */unsigned int) (-(1619958209)));
}
