/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208908
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        var_17 |= ((/* implicit */unsigned short) (+(((/* implicit */int) (short)-1))));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            var_18 &= ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)64))) : (var_3))));
            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (!(var_13))))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopSeq 3 */
            for (short i_3 = 0; i_3 < 10; i_3 += 1) 
            {
                var_20 *= ((/* implicit */unsigned long long int) var_1);
                var_21 |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1660773782790273988LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1))) : (36028797018963967LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : ((~(3025060553U)))));
                var_22 *= ((/* implicit */unsigned short) var_5);
            }
            for (short i_4 = 0; i_4 < 10; i_4 += 2) 
            {
                var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_4)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_11)))) : (var_8)));
                var_24 = ((((/* implicit */long long int) var_1)) / (281474976710655LL));
            }
            for (short i_5 = 0; i_5 < 10; i_5 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_6 = 1; i_6 < 8; i_6 += 1) 
                {
                    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2251799813685247LL)) ? ((~(13146733071467250903ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3018991350088183530LL)) ? (((/* implicit */int) (short)1)) : (((/* implicit */int) (_Bool)1)))))));
                    arr_22 [i_2] [i_2] [1LL] [1LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 5300011002242300712ULL)) ? (var_4) : (-8126852009393762407LL)));
                    var_26 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                    var_27 = ((/* implicit */unsigned short) ((((long long int) var_7)) / (var_3)));
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) var_5))));
                    var_29 = ((/* implicit */short) ((((/* implicit */_Bool) (short)27429)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)195))) : (13146733071467250907ULL)));
                    var_30 = var_11;
                    var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (var_1)));
                    arr_26 [i_5] |= ((/* implicit */short) ((unsigned char) (_Bool)1));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 1) 
                {
                    for (long long int i_9 = 0; i_9 < 10; i_9 += 2) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned short) ((var_13) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (54847151U)))) : (var_4)));
                            var_33 = var_10;
                            var_34 = ((_Bool) ((((/* implicit */_Bool) -36028797018963941LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)17))) : (4688882669836277466LL)));
                            var_35 = ((/* implicit */short) ((unsigned char) ((var_16) / (((/* implicit */long long int) ((/* implicit */int) (short)-32757))))));
                            var_36 = ((/* implicit */long long int) var_10);
                        }
                    } 
                } 
                arr_33 [i_2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)159))) / ((((_Bool)1) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))));
                var_37 &= ((/* implicit */unsigned char) ((unsigned short) (!(((/* implicit */_Bool) (unsigned char)165)))));
            }
            arr_34 [i_2] [i_2] [i_2] = ((((/* implicit */_Bool) ((unsigned long long int) var_15))) ? (((((/* implicit */_Bool) 2738539124U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2))) : (-8126852009393762407LL))) : ((((_Bool)1) ? (var_3) : (((/* implicit */long long int) var_1)))));
        }
    }
    /* LoopNest 3 */
    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
    {
        for (unsigned int i_11 = 0; i_11 < 19; i_11 += 3) 
        {
            for (short i_12 = 0; i_12 < 19; i_12 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_13 = 1; i_13 < 18; i_13 += 2) 
                    {
                        for (unsigned long long int i_14 = 4; i_14 < 16; i_14 += 4) 
                        {
                            {
                                var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? (((((/* implicit */_Bool) var_7)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-12))))) : (((/* implicit */long long int) 2147483628))));
                                var_39 &= ((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 13146733071467250904ULL)) ? (((/* implicit */int) (unsigned char)143)) : (((/* implicit */int) (_Bool)1))))) ? (-1LL) : ((+(-8126852009393762417LL))))), ((((_Bool)1) ? (8126852009393762408LL) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))));
                            }
                        } 
                    } 
                    var_40 = ((/* implicit */unsigned long long int) var_7);
                    var_41 = ((/* implicit */unsigned long long int) ((long long int) -737072291));
                }
            } 
        } 
    } 
}
