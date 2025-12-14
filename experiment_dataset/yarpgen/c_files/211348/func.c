/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211348
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
    var_16 = ((/* implicit */unsigned char) min((((((/* implicit */int) var_14)) | (((/* implicit */int) (unsigned short)48232)))), (((/* implicit */int) ((unsigned char) (unsigned char)115)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) (short)17514)) ? (max((var_11), (((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0])) % (((/* implicit */int) (unsigned char)111))))))) : (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) var_2)) > (((/* implicit */int) (unsigned short)50801)))))))))))));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 20; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_2] [i_3] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 348153061U)) ? (((/* implicit */unsigned long long int) min((348153061U), (((/* implicit */unsigned int) (unsigned short)60224))))) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) % (9089355517153510156ULL))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)115)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3)))))))));
                                arr_14 [i_2] [i_2] [i_2] [i_2] [i_4] [i_3] = ((/* implicit */unsigned long long int) var_14);
                            }
                        } 
                    } 
                    var_18 -= ((/* implicit */unsigned char) ((((((/* implicit */int) arr_7 [i_2] [(unsigned char)22] [(unsigned char)22] [i_0])) != (((/* implicit */int) (unsigned char)107)))) ? (((/* implicit */int) max((arr_7 [i_0] [i_1 - 1] [6LL] [i_1 - 1]), ((short)0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0)))))));
                    arr_15 [i_2] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_9)) ? (arr_4 [i_2] [i_1] [i_0]) : (((/* implicit */unsigned long long int) arr_9 [i_2] [i_2]))))))));
                    var_19 = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) max((arr_7 [i_0] [i_1 + 2] [i_2] [i_1 + 2]), (((/* implicit */short) var_3))))) : (((/* implicit */int) ((9089355517153510166ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2])))))));
                    arr_16 [i_2] [i_1] [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) var_10)) : (-1041314812)))) ? (((/* implicit */int) ((unsigned char) (unsigned char)28))) : (((((((/* implicit */int) var_14)) < (((/* implicit */int) (short)-7408)))) ? (((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) var_7))))) : (((/* implicit */int) var_12))))));
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    arr_19 [i_0] [i_1 + 2] [i_5] = min((((((/* implicit */_Bool) (unsigned short)44412)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (short)0)))), (((/* implicit */int) arr_18 [i_5] [i_5] [i_1 - 1] [i_0])));
                    var_20 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_4 [i_0] [i_1 + 1] [i_5])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)9292)))), (((/* implicit */int) max((((unsigned char) (unsigned char)25)), (((/* implicit */unsigned char) var_9)))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_6 = 1; i_6 < 23; i_6 += 3) 
                    {
                        var_21 ^= var_15;
                        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_1 + 2] [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_4 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0])))))))))));
                        arr_22 [i_6] [i_1 + 2] [i_5] [i_6] = ((/* implicit */unsigned int) (+(((/* implicit */int) min((((/* implicit */short) var_6)), (arr_11 [i_0] [i_6] [i_6]))))));
                    }
                    arr_23 [i_0] [i_1] [i_5] = ((/* implicit */unsigned char) var_4);
                }
                var_23 = ((/* implicit */unsigned char) (+(min((((/* implicit */unsigned long long int) ((1017630991) != (((/* implicit */int) var_14))))), (var_0)))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_7 = 3; i_7 < 16; i_7 += 4) 
    {
        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_7])) || (((/* implicit */_Bool) 15852821292059488658ULL))));
        /* LoopNest 2 */
        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
        {
            for (unsigned short i_9 = 0; i_9 < 18; i_9 += 4) 
            {
                {
                    var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1017631004)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_7 - 1]))) == (((((/* implicit */_Bool) var_14)) ? (9089355517153510159ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14734)))))))) : (((/* implicit */int) ((-8185809285414182025LL) >= (((/* implicit */long long int) ((/* implicit */int) var_6))))))));
                    arr_33 [i_9] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_9))));
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 2; i_10 < 16; i_10 += 4) 
                    {
                        for (signed char i_11 = 1; i_11 < 15; i_11 += 4) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned short) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)25))) < (4990696596019825813ULL))) ? (((((/* implicit */int) var_4)) * (((/* implicit */int) (short)-5333)))) : (((/* implicit */int) var_9)))) & (min((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)14743)) || (((/* implicit */_Bool) var_0))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)5339))))))));
                                arr_39 [i_10] [i_10] = ((/* implicit */signed char) var_15);
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_12 = 3; i_12 < 17; i_12 += 4) 
        {
            for (unsigned char i_13 = 0; i_13 < 18; i_13 += 2) 
            {
                {
                    arr_45 [i_7] [i_7] [i_13] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_7 - 2]))) : (var_11)))) && (((/* implicit */_Bool) 4083062629U))));
                    var_27 = min((((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_14)))) < ((+(((/* implicit */int) var_8))))))), (var_2));
                    var_28 = ((/* implicit */unsigned char) (~(min(((-(((/* implicit */int) (unsigned char)227)))), (((((/* implicit */int) var_3)) << (((1041314806) - (1041314798)))))))));
                }
            } 
        } 
        var_29 = ((/* implicit */unsigned char) arr_2 [i_7]);
    }
    var_30 ^= ((/* implicit */unsigned int) var_3);
    var_31 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */long long int) var_10))));
}
