/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235400
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 7; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_0 [i_0])) == (((/* implicit */int) (unsigned short)50555)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -3720181250596380293LL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)51841))))) : (((arr_4 [i_1]) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_8)))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)118), ((unsigned char)252))))) == (arr_1 [i_1 + 3] [i_1 + 4])))) : (min((((/* implicit */int) ((unsigned char) var_10))), (((((/* implicit */_Bool) (unsigned char)238)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)124)))))))))));
                    var_21 = (-(((((/* implicit */_Bool) var_1)) ? (arr_3 [i_1]) : (arr_3 [i_1]))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_22 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) arr_6 [i_1 + 1] [i_1 + 3] [i_1 + 1])) ? (((/* implicit */int) arr_6 [i_1 + 4] [i_1 - 1] [i_1 + 4])) : (((/* implicit */int) arr_6 [i_1 + 4] [i_1 + 2] [i_1])))));
                        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_8 [i_1] [i_1 + 3] [i_1 + 3] [i_1]), (((signed char) arr_7 [i_3] [i_1 - 1] [i_0]))))) ? (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)14193))) >= (9223372036854775807LL))))))) : (max((((/* implicit */long long int) (unsigned short)65535)), (245577241021784156LL)))));
                        var_24 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) (unsigned char)214)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_14)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) var_18)))))) - ((+(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) arr_9 [i_0] [i_1] [(unsigned char)4] [i_0]))))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            var_25 ^= ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) (unsigned short)582)) ? (((/* implicit */int) ((unsigned char) (unsigned char)128))) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))));
                            arr_14 [i_0] [i_1] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */int) (unsigned short)63191)), (((((/* implicit */int) min(((unsigned short)63175), ((unsigned short)2378)))) << (((((/* implicit */int) var_9)) % (((/* implicit */int) var_13))))))));
                            var_26 = ((/* implicit */unsigned short) ((((arr_3 [i_1]) + (9223372036854775807LL))) << ((((~(-6122737651582614250LL))) - (6122737651582614249LL)))));
                        }
                    }
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */unsigned short) ((unsigned char) min(((-(((/* implicit */int) var_5)))), ((+(((/* implicit */int) var_12)))))));
    var_28 = ((long long int) max((((/* implicit */long long int) min((((/* implicit */unsigned char) var_13)), ((unsigned char)96)))), (var_1)));
    /* LoopSeq 3 */
    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
    {
        var_29 = ((/* implicit */unsigned short) (~(((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_5] [i_5]))) - (-4106783794312857729LL)))));
        arr_18 [i_5] [i_5] = ((/* implicit */unsigned short) var_1);
    }
    /* vectorizable */
    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) /* same iter space */
    {
        arr_22 [i_6] = ((/* implicit */unsigned char) ((var_1) & (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_6 + 1])))));
        var_30 = ((/* implicit */unsigned short) arr_20 [i_6 + 1]);
    }
    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) /* same iter space */
    {
        var_31 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)160)) ? (((/* implicit */int) (unsigned short)10)) : (((/* implicit */int) (unsigned short)1443)))) % (((/* implicit */int) (signed char)-73))));
        /* LoopSeq 2 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            var_32 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_7 + 1])) >> (((((/* implicit */int) (unsigned char)40)) - (40))))))));
            /* LoopNest 3 */
            for (signed char i_9 = 0; i_9 < 13; i_9 += 3) 
            {
                for (signed char i_10 = 0; i_10 < 13; i_10 += 2) 
                {
                    for (unsigned short i_11 = 0; i_11 < 13; i_11 += 3) 
                    {
                        {
                            arr_37 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) arr_27 [i_8] [i_7 + 1])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_27 [i_8] [i_7 + 1])))) : ((+(((/* implicit */int) (signed char)-125))))));
                            arr_38 [i_7] [i_8] [i_9] [i_8] [i_11] = var_19;
                        }
                    } 
                } 
            } 
            arr_39 [(unsigned short)2] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) (signed char)-76))) ? (((/* implicit */int) arr_30 [i_7] [i_7])) : (((/* implicit */int) ((unsigned short) var_12)))))) ? (((/* implicit */int) max((arr_31 [i_7 + 1] [i_7] [i_7 + 1] [i_7 + 1] [i_7]), (arr_21 [(unsigned short)12])))) : (min(((+(((/* implicit */int) arr_30 [i_7 + 1] [(_Bool)0])))), (((/* implicit */int) ((_Bool) var_1)))))));
        }
        /* vectorizable */
        for (unsigned short i_12 = 0; i_12 < 13; i_12 += 1) 
        {
            var_33 = ((/* implicit */long long int) arr_19 [i_7]);
            var_34 = ((/* implicit */_Bool) (unsigned short)34769);
            var_35 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)31861))));
        }
    }
}
