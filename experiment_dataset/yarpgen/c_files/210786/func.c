/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210786
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 4; i_3 < 20; i_3 += 3) 
                    {
                        arr_13 [i_3] [i_2] [i_3] [i_3] = ((/* implicit */unsigned int) (unsigned short)61978);
                        var_10 = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (0LL)))) && (((/* implicit */_Bool) ((short) 0LL)))))));
                        /* LoopSeq 2 */
                        for (long long int i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            var_11 = ((/* implicit */unsigned short) 0LL);
                            arr_17 [i_3] [i_1] [i_4] = ((/* implicit */unsigned short) min((max((var_8), (((/* implicit */unsigned int) (signed char)3)))), (((/* implicit */unsigned int) ((((unsigned int) (unsigned short)0)) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) < (17453161895717995732ULL))))))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_5 = 0; i_5 < 24; i_5 += 2) 
                        {
                            arr_21 [i_0] [i_3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (signed char)3)) ? (-6057274309314537563LL) : (((/* implicit */long long int) -1905534721)))) < (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))));
                            var_12 |= ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)1023))));
                        }
                        var_13 = ((/* implicit */_Bool) (~(-2068157427)));
                    }
                    arr_22 [i_1] [i_1] = ((/* implicit */_Bool) ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)121))) & ((~(202199684U))))));
                }
            } 
        } 
        var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) -2068157427)) ? (((/* implicit */int) (unsigned short)3557)) : (((/* implicit */int) (unsigned char)233)))), (((/* implicit */int) ((unsigned short) 1226137427U))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 4) 
        {
            for (unsigned int i_8 = 0; i_8 < 25; i_8 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 25; i_9 += 4) 
                    {
                        for (signed char i_10 = 0; i_10 < 25; i_10 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */signed char) 18014389919547392LL);
                                var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) 993582177991555883ULL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((var_2) != (((/* implicit */unsigned long long int) var_8))))))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */_Bool) (~(((/* implicit */int) var_6))));
                }
            } 
        } 
        var_18 = (!(((/* implicit */_Bool) (signed char)75)));
        /* LoopNest 3 */
        for (long long int i_11 = 1; i_11 < 24; i_11 += 1) 
        {
            for (unsigned char i_12 = 0; i_12 < 25; i_12 += 4) 
            {
                for (signed char i_13 = 3; i_13 < 21; i_13 += 4) 
                {
                    {
                        var_19 -= (!((!(((/* implicit */_Bool) var_6)))));
                        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (!(((/* implicit */_Bool) 6057274309314537562LL)))))));
                        var_21 = ((/* implicit */unsigned int) (-(((((/* implicit */int) var_0)) >> (((((/* implicit */int) (short)(-32767 - 1))) + (32795)))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned short i_14 = 0; i_14 < 25; i_14 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned char i_15 = 0; i_15 < 25; i_15 += 1) 
            {
                for (unsigned short i_16 = 0; i_16 < 25; i_16 += 3) 
                {
                    for (unsigned short i_17 = 0; i_17 < 25; i_17 += 1) 
                    {
                        {
                            var_22 ^= ((/* implicit */unsigned int) -720200412686729821LL);
                            arr_53 [i_6] [i_16] = ((/* implicit */short) (~(((/* implicit */int) var_1))));
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)51733))));
            var_24 = ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)51733))))) | (993582177991555883ULL));
            var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) (+(((/* implicit */int) var_4)))))));
        }
        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((18446744073709551615ULL) & (((/* implicit */unsigned long long int) var_3))))) ? (((/* implicit */int) ((unsigned short) -1414210891428493065LL))) : (((/* implicit */int) (unsigned short)52899))));
    }
    var_27 = ((/* implicit */_Bool) var_8);
    var_28 = (~(((((/* implicit */_Bool) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (short)-1))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)89)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)45190))))) : (var_3))));
    var_29 = ((/* implicit */_Bool) (-(-1414210891428493065LL)));
    var_30 = ((/* implicit */int) (((!(((/* implicit */_Bool) min(((short)1), (((/* implicit */short) (_Bool)0))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (~(4611686018427371520ULL)))))) : ((~(((((/* implicit */_Bool) 7234079610240885191ULL)) ? (((/* implicit */unsigned long long int) 536805376)) : (0ULL)))))));
}
