/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221975
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                for (signed char i_3 = 1; i_3 < 16; i_3 += 3) 
                {
                    {
                        var_11 = ((/* implicit */long long int) ((((140737487831040LL) + (arr_7 [i_1] [i_0] [i_3 + 1] [i_3] [i_3 + 2]))) == (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 1918003416)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) : (1152921503533105152ULL))) >= (((/* implicit */unsigned long long int) 1918003423))))))));
                        var_12 = ((/* implicit */unsigned char) arr_2 [i_3 - 1] [i_3 - 1] [i_3 - 1]);
                        arr_9 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) (unsigned char)204);
                        var_13 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-1273))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) / (min((((/* implicit */unsigned long long int) var_3)), (1152921503533105152ULL)))))));
                    }
                } 
            } 
            arr_10 [i_1] [i_0] = ((/* implicit */unsigned char) ((min((2147483639), (((/* implicit */int) arr_3 [i_1] [i_1] [i_0])))) % (((/* implicit */int) arr_3 [i_0] [i_0] [i_1]))));
        }
        /* LoopSeq 4 */
        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 3) 
        {
            var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) -173234774))));
            arr_13 [i_0] = ((/* implicit */unsigned long long int) (~(arr_4 [i_0] [i_4] [i_0] [i_0])));
        }
        for (long long int i_5 = 0; i_5 < 18; i_5 += 1) 
        {
            arr_16 [i_0] [i_0] [i_5] = ((/* implicit */signed char) ((short) ((((/* implicit */long long int) ((/* implicit */int) var_3))) / (arr_15 [i_5] [i_5] [i_0]))));
            var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) (!(((/* implicit */_Bool) 1918003416)))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 3) 
            {
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (unsigned char i_8 = 2; i_8 < 16; i_8 += 2) 
                    {
                        {
                            arr_24 [i_5] [i_6] [8LL] [i_8] = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) min((2047), (((/* implicit */int) arr_17 [i_5] [i_7] [i_8]))))))))));
                            var_16 &= ((/* implicit */int) min((min((((/* implicit */long long int) (~(((/* implicit */int) var_6))))), (((((arr_15 [i_0] [i_0] [(unsigned char)9]) + (9223372036854775807LL))) << (((((/* implicit */int) arr_17 [i_6] [i_7] [i_7])) - (57604))))))), (((/* implicit */long long int) 1918003416))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) arr_20 [i_5] [i_0] [i_0] [i_6] [i_6])) < (((/* implicit */int) arr_20 [i_5] [i_0] [i_5] [i_6] [i_6])))))));
            }
        }
        for (unsigned char i_9 = 2; i_9 < 16; i_9 += 2) 
        {
            var_18 = var_9;
            /* LoopNest 3 */
            for (long long int i_10 = 4; i_10 < 17; i_10 += 3) 
            {
                for (unsigned int i_11 = 3; i_11 < 17; i_11 += 2) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        {
                            var_19 ^= ((/* implicit */unsigned int) ((int) (~(((/* implicit */int) arr_12 [i_10 - 3])))));
                            var_20 += ((/* implicit */short) -1405426769);
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (signed char i_13 = 0; i_13 < 18; i_13 += 1) 
            {
                arr_37 [i_0] [i_0] [i_0] [i_0] &= arr_27 [i_0];
                var_21 &= ((/* implicit */unsigned char) var_7);
                var_22 &= ((/* implicit */unsigned int) min((min((((/* implicit */int) (unsigned short)48200)), (arr_30 [i_9 - 2] [i_9 - 2]))), (((/* implicit */int) arr_3 [i_0] [i_0] [i_13]))));
            }
            for (unsigned short i_14 = 2; i_14 < 16; i_14 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned short i_15 = 1; i_15 < 16; i_15 += 1) 
                {
                    for (unsigned int i_16 = 2; i_16 < 16; i_16 += 2) 
                    {
                        {
                            var_23 &= ((/* implicit */unsigned short) (~(((/* implicit */int) (short)-1273))));
                            var_24 ^= ((/* implicit */long long int) ((unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_9 - 2] [i_14] [i_14]))))) < (arr_28 [i_0] [i_0] [i_0]))));
                            var_25 += ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_16 - 1] [i_9 - 2])) ? (((/* implicit */int) arr_44 [i_0] [6LL] [i_14] [i_15] [i_9 - 2])) : (((/* implicit */int) arr_12 [i_14 + 1])))));
                            var_26 &= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((short) (unsigned char)51))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-82))))) : (((((/* implicit */_Bool) 1405426769)) ? (((/* implicit */unsigned int) 1405426769)) : (3023895118U)))))) == (((((/* implicit */_Bool) arr_18 [i_14] [i_9] [i_9])) ? (var_9) : (((/* implicit */long long int) 2147483645))))));
                            arr_46 [i_0] &= ((/* implicit */short) (+(((((/* implicit */_Bool) arr_4 [i_15 + 2] [i_15] [i_15 + 2] [i_15 + 2])) ? ((~(arr_26 [i_16] [i_15 - 1] [i_9]))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_34 [i_0] [i_0])))))))));
                        }
                    } 
                } 
                var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) (+((-(((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) var_9)) : (arr_42 [i_9] [i_14]))))))))));
                /* LoopNest 2 */
                for (short i_17 = 1; i_17 < 17; i_17 += 2) 
                {
                    for (signed char i_18 = 0; i_18 < 18; i_18 += 3) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+((-(var_7))))))));
                            arr_52 [i_9 + 1] [i_9] [i_9] [i_14] [i_18] &= ((/* implicit */short) (+(((/* implicit */int) max(((short)32760), (((/* implicit */short) var_6)))))));
                            var_29 = ((/* implicit */short) ((unsigned long long int) (-(((((/* implicit */_Bool) 17293822570176446463ULL)) ? (arr_39 [i_0] [(signed char)3] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))));
                        }
                    } 
                } 
            }
        }
        for (unsigned short i_19 = 0; i_19 < 18; i_19 += 1) 
        {
            var_30 = ((/* implicit */unsigned long long int) var_8);
            /* LoopNest 2 */
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                for (unsigned char i_21 = 0; i_21 < 18; i_21 += 2) 
                {
                    {
                        var_31 ^= ((/* implicit */unsigned int) ((long long int) (!(((/* implicit */_Bool) 1405426761)))));
                        arr_63 [i_0] [i_19] [(_Bool)1] [i_0] = ((/* implicit */int) min((((((_Bool) arr_55 [i_20])) && (((_Bool) var_0)))), ((_Bool)1)));
                        arr_64 [i_19] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */unsigned char) arr_31 [i_0] [i_0] [i_0] [i_0] [i_0])), (arr_8 [i_0] [i_19] [i_0] [i_0])))) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)30)))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_0] [i_19] [i_20] [i_21] [i_21])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_6), (((/* implicit */signed char) (_Bool)1)))))) : (18446744073709551590ULL))))));
                    }
                } 
            } 
            arr_65 [i_0] [(_Bool)1] = ((/* implicit */signed char) ((((_Bool) ((unsigned short) (short)-1273))) ? (((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) arr_17 [(unsigned char)4] [(unsigned char)4] [(short)16])))))) : (max((((/* implicit */long long int) (short)8190)), (arr_4 [i_19] [(short)12] [i_0] [i_0])))));
            arr_66 [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) arr_45 [i_0] [i_0] [i_0] [i_19] [i_19])), (((arr_54 [i_0]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
        }
        /* LoopSeq 1 */
        for (int i_22 = 3; i_22 < 16; i_22 += 1) 
        {
            var_32 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (((-9223372036854775807LL - 1LL)) - (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? ((-(var_9))) : (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) arr_3 [0ULL] [i_22] [i_22 + 2])))))))))));
            arr_71 [i_0] [i_22] [i_22] = ((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) arr_1 [i_22])), (var_4))), (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) << (((((((/* implicit */int) (short)-32763)) + (32787))) - (14))))))));
            var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)226)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-8186)) ? (((/* implicit */int) (unsigned char)51)) : (((/* implicit */int) (unsigned char)226))))) : (var_4)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_0] [i_22] [(unsigned short)5] [i_0] [i_0]))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0] [i_0] [i_22]))) | (2445044132U))))))));
        }
    }
    var_34 = (unsigned char)213;
}
