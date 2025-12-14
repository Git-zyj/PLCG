/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248930
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
    var_17 = ((/* implicit */unsigned long long int) ((_Bool) min((min((((/* implicit */unsigned long long int) 436237632)), (var_13))), (((/* implicit */unsigned long long int) var_11)))));
    var_18 -= ((/* implicit */unsigned int) min(((~((+(15786421483838796683ULL))))), (((/* implicit */unsigned long long int) var_14))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (unsigned int i_1 = 1; i_1 < 8; i_1 += 2) /* same iter space */
        {
            arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_1 + 2] [i_1 + 3])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
            arr_5 [i_0] = arr_0 [i_0];
        }
        for (unsigned int i_2 = 1; i_2 < 8; i_2 += 2) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
            var_20 = ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (arr_3 [i_2 - 1] [i_2 + 1]) : ((-(18446744073709551609ULL))));
            var_21 = ((/* implicit */unsigned long long int) ((_Bool) (_Bool)1));
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 3; i_4 < 9; i_4 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_22 ^= ((/* implicit */short) arr_9 [1ULL] [i_2 + 1] [i_3]);
                            var_23 = ((/* implicit */signed char) ((unsigned long long int) ((short) arr_13 [i_0] [i_3] [i_4 - 3] [i_5])));
                        }
                        var_24 = ((/* implicit */unsigned long long int) -14);
                        arr_17 [i_0] [i_0] = ((/* implicit */_Bool) arr_16 [10] [(signed char)1] [i_3] [i_3] [i_3]);
                        var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_16 [(unsigned char)0] [(_Bool)1] [(unsigned char)0] [i_4 + 2] [i_4]))) ? (arr_2 [i_2 - 1] [i_4 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63430))))))));
                    }
                } 
            } 
        }
        for (int i_6 = 0; i_6 < 11; i_6 += 3) /* same iter space */
        {
            var_26 |= ((/* implicit */unsigned short) ((_Bool) (_Bool)1));
            arr_21 [i_0] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1))) : (7192573463822881058ULL)))));
        }
        for (int i_7 = 0; i_7 < 11; i_7 += 3) /* same iter space */
        {
            arr_24 [i_0] = ((/* implicit */unsigned short) ((int) (_Bool)0));
            arr_25 [i_0] [i_0] = ((((/* implicit */_Bool) (unsigned short)5010)) ? (arr_7 [i_0] [i_0] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [(_Bool)1]))));
            arr_26 [i_0] [i_0] [i_0] = ((/* implicit */short) (_Bool)1);
            var_27 = ((/* implicit */_Bool) min((var_27), (arr_13 [i_0] [i_0] [i_0] [i_0])));
            var_28 = ((/* implicit */long long int) (-(((/* implicit */int) var_5))));
        }
        arr_27 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) arr_14 [i_0] [i_0] [i_0] [i_0]))) ? ((-(arr_3 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_16)))))));
        var_29 = ((/* implicit */unsigned int) ((arr_13 [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 13754747924671924818ULL)))) : (((arr_14 [i_0] [i_0] [i_0] [i_0]) ? (288230376151711744ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
    }
    for (short i_8 = 0; i_8 < 16; i_8 += 2) 
    {
        arr_31 [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_8])) ? (((/* implicit */int) arr_29 [i_8])) : (((/* implicit */int) arr_30 [i_8]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_8])))))) : (15932822846928480305ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_30 [i_8]))))))))) : (((((/* implicit */_Bool) min((((/* implicit */long long int) arr_29 [i_8])), (var_15)))) ? ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-29984))) : (var_0))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_30 [i_8])))))))));
        var_30 = ((/* implicit */int) min(((~(((long long int) 4148053027U)))), (min((((((/* implicit */_Bool) 1820845425U)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_8]))))), (((/* implicit */long long int) (!((_Bool)1))))))));
        var_31 -= var_12;
        arr_32 [i_8] [i_8] = ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (short)-17107))))))) ? (((((/* implicit */_Bool) ((short) var_5))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_8]))) : ((+(var_13))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))));
    }
    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) /* same iter space */
    {
        var_32 = ((/* implicit */int) ((((/* implicit */_Bool) arr_33 [i_9])) ? (((((/* implicit */_Bool) (~(arr_33 [i_9])))) ? (var_9) : (var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (_Bool)1))))));
        var_33 |= ((/* implicit */unsigned int) ((int) (short)255));
        var_34 += ((/* implicit */unsigned long long int) (((_Bool)0) ? ((-(((/* implicit */int) (_Bool)1)))) : (min((((((arr_34 [i_9] [(unsigned char)13]) + (2147483647))) >> (((arr_33 [i_9 + 1]) - (2028036693002636347ULL))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)63636)) : (arr_34 [i_9] [i_9 + 1])))))));
    }
    for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) /* same iter space */
    {
        var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_33 [i_10 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)33304))))), (((unsigned long long int) ((((/* implicit */_Bool) arr_36 [i_10] [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) : (arr_35 [i_10])))))))));
        /* LoopNest 2 */
        for (short i_11 = 2; i_11 < 23; i_11 += 2) 
        {
            for (unsigned long long int i_12 = 2; i_12 < 24; i_12 += 1) 
            {
                {
                    var_36 = ((/* implicit */short) arr_34 [(_Bool)1] [i_12]);
                    var_37 += ((int) max((((((/* implicit */unsigned long long int) arr_37 [(unsigned short)16] [i_12 - 2])) - (arr_39 [i_10 + 1]))), (((/* implicit */unsigned long long int) ((_Bool) 12750810865730075507ULL)))));
                    var_38 = ((/* implicit */int) min((var_38), (arr_34 [i_10] [i_10])));
                    var_39 = ((/* implicit */_Bool) arr_34 [i_11] [i_12]);
                }
            } 
        } 
        /* LoopSeq 1 */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            arr_46 [i_10] [(short)17] [i_10] = ((/* implicit */_Bool) var_16);
            var_40 = ((/* implicit */_Bool) min((var_40), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)3))) ? (arr_44 [i_10] [i_10] [i_13]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))))))));
            var_41 = ((/* implicit */signed char) min((var_41), (((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_42 [i_10 + 1] [i_10 + 1] [i_10 + 1]), (arr_42 [i_10 + 1] [(short)19] [i_10 + 1])))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_42 [i_10 + 1] [i_10] [i_10 + 1])))))));
        }
    }
    /* LoopNest 3 */
    for (unsigned short i_14 = 0; i_14 < 22; i_14 += 3) 
    {
        for (int i_15 = 0; i_15 < 22; i_15 += 3) 
        {
            for (int i_16 = 1; i_16 < 21; i_16 += 3) 
            {
                {
                    var_42 = ((/* implicit */_Bool) ((unsigned short) var_5));
                    arr_53 [i_16] [i_14] [i_14] = ((/* implicit */unsigned short) ((unsigned int) max(((+(((/* implicit */int) (_Bool)0)))), ((+(((/* implicit */int) arr_52 [i_14] [i_15] [i_15] [(_Bool)1])))))));
                }
            } 
        } 
    } 
}
