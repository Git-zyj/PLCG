/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216220
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_14 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned short)44623))));
        var_15 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)226)) || ((_Bool)0)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [6] [i_1] [i_2] = ((/* implicit */unsigned short) var_1);
                    arr_8 [13] [i_1] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_4 [i_1]))));
                    arr_9 [4] [i_1] [i_2 + 1] = ((/* implicit */long long int) ((4194304) / ((~(((/* implicit */int) (signed char)-13))))));
                    arr_10 [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) -184773881))));
                }
            } 
        } 
        var_16 = ((/* implicit */signed char) ((unsigned short) 184773880));
        var_17 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)214)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2147483647))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)192)))))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_3 = 0; i_3 < 20; i_3 += 2) 
    {
        var_18 = arr_3 [i_3];
        /* LoopSeq 4 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_19 = ((/* implicit */unsigned short) (((_Bool)0) || (((/* implicit */_Bool) (unsigned short)49040))));
            /* LoopSeq 1 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                var_20 = ((/* implicit */_Bool) ((unsigned char) var_7));
                var_21 -= ((/* implicit */_Bool) (~(((((/* implicit */int) (_Bool)1)) >> (((9223372036854775807LL) - (9223372036854775788LL)))))));
            }
        }
        for (signed char i_6 = 0; i_6 < 20; i_6 += 4) 
        {
            /* LoopSeq 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                var_22 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)120)) ? (((/* implicit */int) (unsigned char)35)) : (393216)));
                /* LoopNest 2 */
                for (unsigned short i_8 = 0; i_8 < 20; i_8 += 4) 
                {
                    for (unsigned char i_9 = 0; i_9 < 20; i_9 += 2) 
                    {
                        {
                            var_23 = (~((~(((/* implicit */int) (unsigned short)2048)))));
                            var_24 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)242))));
                            arr_32 [i_3] [i_3] [i_6] [i_7] [i_7] [i_8] [i_3] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_10 = 1; i_10 < 18; i_10 += 4) 
                {
                    for (unsigned short i_11 = 3; i_11 < 19; i_11 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */signed char) ((arr_5 [i_11 + 1] [i_11 + 1] [i_11 - 3] [i_11 + 1]) & (arr_5 [i_11 - 2] [i_11 - 2] [i_11 - 3] [i_11 - 2])));
                            arr_37 [i_3] [i_6] [i_7] [i_6] [i_11 - 2] [i_10] [(unsigned char)0] = ((/* implicit */unsigned short) (signed char)112);
                            var_26 -= ((/* implicit */_Bool) (-(((((/* implicit */int) (signed char)102)) - (2147483628)))));
                            arr_38 [i_3] [i_6] [i_7] [i_10 + 2] [i_11] = ((/* implicit */_Bool) var_7);
                            var_27 = ((/* implicit */signed char) var_2);
                        }
                    } 
                } 
                arr_39 [1] [1] [i_7] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)41283))));
            }
            for (unsigned char i_12 = 3; i_12 < 18; i_12 += 2) 
            {
                var_28 = ((/* implicit */unsigned short) arr_33 [(_Bool)1] [i_12] [i_6] [i_3] [i_6] [i_3]);
                var_29 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)0))));
                var_30 = ((/* implicit */unsigned short) (_Bool)1);
            }
            var_31 = (_Bool)1;
            arr_43 [i_3] [i_6] [i_6] = ((/* implicit */signed char) (~(((int) (unsigned char)255))));
        }
        for (int i_13 = 0; i_13 < 20; i_13 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_14 = 1; i_14 < 18; i_14 += 4) 
            {
                for (unsigned char i_15 = 0; i_15 < 20; i_15 += 4) 
                {
                    {
                        arr_52 [i_15] [i_3] [i_3] = ((/* implicit */unsigned char) (signed char)3);
                        arr_53 [(unsigned short)9] [i_14] [i_13] [i_3] = ((/* implicit */unsigned char) (signed char)-102);
                    }
                } 
            } 
            var_32 = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (unsigned char)30)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_12))));
        }
        for (long long int i_16 = 0; i_16 < 20; i_16 += 1) 
        {
            var_33 = ((/* implicit */int) ((signed char) ((_Bool) (unsigned short)0)));
            var_34 = ((/* implicit */unsigned short) (((((~(((/* implicit */int) (unsigned char)11)))) + (2147483647))) >> ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)12))))));
            /* LoopNest 2 */
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                for (signed char i_18 = 1; i_18 < 19; i_18 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (int i_19 = 0; i_19 < 20; i_19 += 2) 
                        {
                            var_35 |= ((((/* implicit */_Bool) arr_58 [i_3])) ? (((((/* implicit */_Bool) (unsigned char)228)) ? (2147483640) : (((/* implicit */int) (unsigned char)243)))) : (((/* implicit */int) (_Bool)1)));
                            arr_66 [i_19] [i_16] [i_19] [i_18 + 1] [i_19] [i_19] [i_19] &= ((/* implicit */unsigned short) ((unsigned char) (signed char)37));
                        }
                        for (int i_20 = 2; i_20 < 19; i_20 += 1) 
                        {
                            var_36 += ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)45)) * (((/* implicit */int) (unsigned char)22))));
                            arr_70 [(unsigned char)1] [i_16] [i_17] [i_16] [i_20] [i_20] [i_20] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)39))));
                            var_37 = ((/* implicit */int) ((long long int) ((((/* implicit */int) (unsigned short)23307)) - (((/* implicit */int) (unsigned char)29)))));
                            var_38 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65525)) / (((/* implicit */int) (unsigned char)24))))) && (((((/* implicit */_Bool) -217837176)) || (((/* implicit */_Bool) var_0))))));
                        }
                        for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
                        {
                            var_39 = ((/* implicit */int) max((var_39), (((/* implicit */int) ((((/* implicit */int) (signed char)-96)) < (((/* implicit */int) (signed char)109)))))));
                            arr_75 [i_21] [i_16] [i_17] [i_18 + 1] [i_21] [i_16] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) (unsigned char)226))));
                        }
                        var_40 = ((/* implicit */unsigned short) min((var_40), (((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)1)))))));
                        var_41 = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) arr_46 [i_3] [i_18 - 1] [i_17])) : (((/* implicit */int) (unsigned char)156))));
                    }
                } 
            } 
        }
    }
    for (unsigned short i_22 = 3; i_22 < 16; i_22 += 1) 
    {
        var_42 = var_10;
        var_43 = ((/* implicit */_Bool) min((var_43), (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)122)) * (((/* implicit */int) (_Bool)0)))))));
        var_44 = ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned char)24)));
    }
    var_45 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)59246)))) : (((((/* implicit */int) (unsigned char)128)) / (((/* implicit */int) (unsigned short)3172))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)13)) && (((/* implicit */_Bool) -919437976))))) : (((((((/* implicit */int) (unsigned char)252)) <= (((/* implicit */int) (signed char)32)))) ? (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) var_13)) : (-16))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535)))))))));
}
