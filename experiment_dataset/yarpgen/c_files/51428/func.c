/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51428
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
    var_17 = ((/* implicit */int) var_16);
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 7; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) var_11);
        var_18 ^= ((/* implicit */_Bool) var_16);
        arr_5 [i_0] = ((/* implicit */unsigned char) ((int) -610878407));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 11; i_1 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            for (long long int i_2 = 0; i_2 < 11; i_2 += 1) /* same iter space */
            {
                var_19 ^= ((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))))));
                arr_10 [i_0] [i_0 + 2] [i_0] [i_0] = ((/* implicit */long long int) var_2);
                arr_11 [i_0] = (~(((unsigned long long int) arr_6 [i_2])));
            }
            for (long long int i_3 = 0; i_3 < 11; i_3 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 11; i_4 += 3) 
                {
                    for (unsigned char i_5 = 3; i_5 < 8; i_5 += 3) 
                    {
                        {
                            arr_20 [i_0] [(unsigned short)3] [i_0] [i_5 - 3] [i_1] [i_0 - 1] = ((unsigned long long int) ((int) var_3));
                            arr_21 [(unsigned char)5] [i_1] [i_0] [i_1] [i_1] = ((/* implicit */_Bool) var_13);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    for (unsigned long long int i_7 = 1; i_7 < 9; i_7 += 3) 
                    {
                        {
                            arr_28 [i_0] [i_0] [i_1] [i_0] &= ((/* implicit */int) 12716401219022655066ULL);
                            var_20 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 12716401219022655068ULL))));
                            arr_29 [i_0] [i_1] [(unsigned short)4] [10LL] [i_0] [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) - (18446744073709551595ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((5730342854686896569ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))) : (((((/* implicit */_Bool) 12716401219022655058ULL)) ? (11291785928842639173ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
                            var_21 -= (~(((/* implicit */int) var_4)));
                        }
                    } 
                } 
            }
            var_22 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) arr_24 [i_1] [(unsigned short)6] [i_0 + 3] [i_0 + 1] [i_0 + 1])) : (533678508611860256ULL)));
        }
        for (long long int i_8 = 0; i_8 < 11; i_8 += 2) /* same iter space */
        {
            var_23 += var_13;
            arr_33 [i_0] [i_0] [i_8] = 14ULL;
            /* LoopSeq 2 */
            for (long long int i_9 = 0; i_9 < 11; i_9 += 2) /* same iter space */
            {
                arr_36 [i_0] [i_8] [i_0] = var_5;
                var_24 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_16) - (((/* implicit */long long int) var_7))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) var_4)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)210)))))));
            }
            for (long long int i_10 = 0; i_10 < 11; i_10 += 2) /* same iter space */
            {
                arr_40 [i_0] = ((/* implicit */int) (~(5730342854686896559ULL)));
                var_25 = ((/* implicit */unsigned short) (+(var_0)));
                var_26 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 281474976710655ULL))));
                var_27 += ((/* implicit */unsigned short) 12716401219022655068ULL);
            }
            arr_41 [i_0] [i_8] = ((/* implicit */unsigned long long int) arr_22 [i_0] [i_0] [i_0] [i_8] [i_8]);
        }
        var_28 ^= ((((/* implicit */_Bool) ((unsigned long long int) 12716401219022655047ULL))) || (((/* implicit */_Bool) ((long long int) var_2))));
    }
    for (int i_11 = 1; i_11 < 18; i_11 += 2) 
    {
        var_29 -= ((/* implicit */unsigned short) var_4);
        var_30 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) ((_Bool) var_15)))));
        var_31 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) -1760247504)) ? (((/* implicit */int) (unsigned char)210)) : (((/* implicit */int) (unsigned char)165)))))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_12)))))) : (((/* implicit */int) var_11))));
        var_32 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)511))));
    }
}
