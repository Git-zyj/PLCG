/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249108
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        arr_3 [i_0] &= ((/* implicit */short) (~(max((759442582U), (((/* implicit */unsigned int) (unsigned short)65535))))));
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)5740)) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)3))) <= (759442601U)))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)3)) && (((/* implicit */_Bool) (unsigned short)5740)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (((min((219092297976257102ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) >> (((18446744073709551615ULL) - (18446744073709551593ULL)))))));
    }
    /* vectorizable */
    for (long long int i_1 = 2; i_1 < 11; i_1 += 1) 
    {
        var_17 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) 12166050799877990253ULL)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
        var_18 = ((((/* implicit */_Bool) (-(154603266U)))) ? (((((/* implicit */_Bool) 3535524687U)) ? (2147483647) : (((/* implicit */int) (signed char)24)))) : (((/* implicit */int) var_9)));
        /* LoopSeq 2 */
        for (long long int i_2 = 4; i_2 < 10; i_2 += 4) 
        {
            var_19 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) -397251364)) ? (397251363) : (((/* implicit */int) (_Bool)0))))));
            arr_9 [i_1] [i_2 - 3] [i_2 - 3] = ((/* implicit */long long int) (signed char)24);
            /* LoopSeq 4 */
            for (long long int i_3 = 0; i_3 < 12; i_3 += 2) 
            {
                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (((!(((/* implicit */_Bool) 5343236249008126956ULL)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)530))))))))));
                var_21 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 15060972038014273683ULL)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (short)1))))) ? ((-(10193288616888043669ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
            }
            for (unsigned short i_4 = 0; i_4 < 12; i_4 += 3) 
            {
                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3535524694U)) ? (759442602U) : (4294967295U)))) ? (((long long int) 1U)) : (((/* implicit */long long int) ((unsigned int) 1436941476)))));
                var_23 += ((/* implicit */signed char) 18446744073709551615ULL);
            }
            for (long long int i_5 = 0; i_5 < 12; i_5 += 3) 
            {
                /* LoopSeq 1 */
                for (long long int i_6 = 3; i_6 < 11; i_6 += 1) 
                {
                    arr_20 [i_1] [i_1] [i_6 - 3] = ((/* implicit */unsigned char) (~((((_Bool)1) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
                    /* LoopSeq 2 */
                    for (int i_7 = 3; i_7 < 10; i_7 += 2) 
                    {
                        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) var_2))));
                        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((short) ((long long int) (signed char)3))))));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_26 [i_8] [i_8] [i_8] [i_8] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-4)) < (((/* implicit */int) (_Bool)1))));
                        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) 18227651775733294514ULL)) ? (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)-19827)))) : (((/* implicit */int) (unsigned short)10337)))))));
                        var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) 2348826130U)) ? (2147483620) : (((/* implicit */int) (signed char)-113))))))));
                    }
                }
                arr_27 [i_1] [i_2] [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)-18))))) ? (9223372036854775795LL) : (((/* implicit */long long int) var_16))));
                var_28 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (unsigned short)10337)) ? (((/* implicit */long long int) var_15)) : (var_2)))));
                var_29 = (((_Bool)1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_13)));
            }
            for (unsigned int i_9 = 2; i_9 < 9; i_9 += 4) 
            {
                var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)145)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)10331))) : (4294967282U)));
                /* LoopNest 2 */
                for (unsigned char i_10 = 0; i_10 < 12; i_10 += 4) 
                {
                    for (long long int i_11 = 0; i_11 < 12; i_11 += 3) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)71)) << ((((+(((/* implicit */int) var_5)))) - (51938))))))));
                            arr_35 [i_1 - 1] [(short)11] [i_1] [i_10] [i_10] [i_1] [i_9 + 2] = ((/* implicit */short) ((10ULL) << (((((/* implicit */int) (signed char)-96)) + (109)))));
                            arr_36 [i_2] [i_9] [i_1] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) 2147483647)) != (15245861008372884511ULL))))));
                            var_32 = ((/* implicit */_Bool) max((var_32), ((!(((/* implicit */_Bool) 5257861957690374448ULL))))));
                        }
                    } 
                } 
            }
        }
        for (signed char i_12 = 1; i_12 < 9; i_12 += 3) 
        {
            arr_39 [9LL] [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_8))));
            arr_40 [i_1] [i_1] [i_1] = ((/* implicit */signed char) (+(7584325137321037475LL)));
            arr_41 [i_1] = ((/* implicit */unsigned char) (((-(((/* implicit */int) (short)28595)))) ^ (((((/* implicit */_Bool) (short)-16075)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9))))));
            arr_42 [i_1] [i_12 - 1] = ((/* implicit */unsigned long long int) var_10);
        }
        arr_43 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)-57))))));
        arr_44 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (short)-5603))));
    }
    /* vectorizable */
    for (signed char i_13 = 0; i_13 < 13; i_13 += 2) 
    {
        arr_47 [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (13188882116019177186ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? (((((/* implicit */_Bool) var_0)) ? (13188882116019177186ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)207))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((13188882116019177186ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))));
        arr_48 [i_13] [i_13] = ((/* implicit */unsigned char) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)0))));
        var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)20)) ? (((/* implicit */int) (signed char)43)) : (((/* implicit */int) var_5))))) ? ((+(((/* implicit */int) (short)(-32767 - 1))))) : (((/* implicit */int) (_Bool)1)))))));
        /* LoopSeq 3 */
        for (unsigned int i_14 = 0; i_14 < 13; i_14 += 1) 
        {
            arr_51 [i_13] [i_13] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (-3622005118456064860LL) : (((/* implicit */long long int) ((/* implicit */int) (short)32764)))));
            var_34 = ((((/* implicit */int) (unsigned short)12229)) << (((/* implicit */int) var_7)));
        }
        for (int i_15 = 0; i_15 < 13; i_15 += 2) /* same iter space */
        {
            arr_54 [i_13] [i_15] [i_15] = ((/* implicit */signed char) (-(((int) 151994559))));
            var_35 = ((/* implicit */signed char) (((+(((/* implicit */int) (short)-14511)))) & (((/* implicit */int) (!(((/* implicit */_Bool) 5430458566275160151LL)))))));
            arr_55 [i_15] [i_13] = ((/* implicit */long long int) (-(((/* implicit */int) (short)27218))));
        }
        for (int i_16 = 0; i_16 < 13; i_16 += 2) /* same iter space */
        {
            arr_58 [i_13] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(5257861957690374449ULL))))));
            arr_59 [i_13] [i_13] [i_16] = ((/* implicit */long long int) 13188882116019177167ULL);
            arr_60 [i_16] [i_16] [i_16] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) 7378117684455684513LL))) ? (((long long int) var_8)) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)8))) : (2087321349U))))));
        }
    }
    var_36 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (~(((/* implicit */int) (short)-30060))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483647)) ? (34861798U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : ((~(6896240889456472614ULL)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_17 = 0; i_17 < 25; i_17 += 2) 
    {
        for (unsigned short i_18 = 3; i_18 < 21; i_18 += 2) 
        {
            for (unsigned int i_19 = 2; i_19 < 23; i_19 += 3) 
            {
                {
                    var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -3960188725844075687LL)) ? (((/* implicit */int) (unsigned short)37162)) : (((/* implicit */int) (signed char)-121))))) ? (max((((/* implicit */long long int) var_15)), (8440515508191137971LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (5106801U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))))));
                    var_38 -= ((/* implicit */unsigned char) (!(((((/* implicit */long long int) ((/* implicit */int) (short)313))) > ((~(7098779733279822992LL)))))));
                    var_39 = ((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28800))) & (((((/* implicit */_Bool) (unsigned short)25078)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_10))))));
                    var_40 -= ((/* implicit */unsigned long long int) ((long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_9))))))));
                }
            } 
        } 
    } 
    var_41 = ((/* implicit */short) (!(((/* implicit */_Bool) var_9))));
}
