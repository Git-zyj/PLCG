/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246958
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) /* same iter space */
    {
        var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1758109271U)) ? (((/* implicit */unsigned long long int) 6291371178560158087LL)) : (14931322820067290148ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))) : (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_10)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 12ULL)))))))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (unsigned char i_2 = 3; i_2 < 11; i_2 += 4) 
            {
                for (unsigned char i_3 = 3; i_3 < 12; i_3 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_1)))) ? (((((/* implicit */_Bool) var_4)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_15))))) : ((-(var_16)))));
                            var_19 = ((/* implicit */unsigned char) (-(1233311596189894184LL)));
                            arr_15 [i_4] [i_4] [i_2] [i_3 - 1] [i_4] &= ((/* implicit */long long int) var_10);
                        }
                        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_14))))) : (var_3))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_5 = 0; i_5 < 13; i_5 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) var_10))));
        arr_18 [i_5] [i_5] = ((/* implicit */_Bool) (-((-(((/* implicit */int) var_12))))));
        var_22 = ((/* implicit */unsigned char) (((_Bool)1) ? (-6291371178560158073LL) : (1233311596189894180LL)));
        var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (var_0)))) ? (var_1) : (((/* implicit */unsigned int) (~(var_13)))));
        var_24 *= ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? ((+((~(var_9))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_0))) : (((/* implicit */long long int) (~(((/* implicit */int) var_10))))))))));
    }
    /* LoopNest 2 */
    for (unsigned int i_6 = 0; i_6 < 14; i_6 += 3) 
    {
        for (unsigned int i_7 = 1; i_7 < 12; i_7 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 2) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        for (short i_10 = 1; i_10 < 13; i_10 += 2) 
                        {
                            {
                                arr_32 [i_6] [i_6] [(signed char)2] [i_9] [8LL] = ((/* implicit */_Bool) var_1);
                                var_25 = ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) (-(var_13)))) : ((~((~(var_9))))));
                                var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_3)))) : ((~(var_9))))))));
                            }
                        } 
                    } 
                } 
                var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(var_3)))) ? (var_13) : ((+(((/* implicit */int) var_5))))));
                var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_7)))) ? (((/* implicit */unsigned int) ((var_15) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_11))))) : ((~(var_7)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_11 = 0; i_11 < 18; i_11 += 1) 
    {
        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_13 = 1; i_13 < 16; i_13 += 4) /* same iter space */
                {
                    arr_41 [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(var_1)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_10))))));
                    var_29 += var_16;
                    /* LoopNest 2 */
                    for (unsigned short i_14 = 0; i_14 < 18; i_14 += 4) 
                    {
                        for (signed char i_15 = 2; i_15 < 17; i_15 += 1) 
                        {
                            {
                                arr_47 [i_14] [i_14] |= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_1)) ? (var_4) : (var_4)))));
                                arr_48 [11] [i_12] [i_13] [i_13] [i_14] [i_15] [i_13] = ((/* implicit */unsigned int) var_11);
                                var_30 -= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_6))))));
                                var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? ((-(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (signed char i_16 = 1; i_16 < 16; i_16 += 4) /* same iter space */
                {
                    arr_51 [i_11] [2U] [i_16 - 1] [16LL] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_14))));
                    /* LoopNest 2 */
                    for (unsigned char i_17 = 0; i_17 < 18; i_17 += 1) 
                    {
                        for (unsigned int i_18 = 0; i_18 < 18; i_18 += 3) 
                        {
                            {
                                var_32 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7))));
                                var_33 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10))));
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (unsigned char i_19 = 0; i_19 < 18; i_19 += 1) 
                {
                    for (int i_20 = 2; i_20 < 14; i_20 += 4) 
                    {
                        {
                            var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)61838))))))))));
                            var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_12)))) : ((-(((/* implicit */int) var_14))))));
                            arr_63 [i_12] = var_5;
                            var_36 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_37 = ((/* implicit */unsigned int) (~(var_4)));
}
