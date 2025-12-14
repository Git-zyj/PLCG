/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30156
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
    var_18 = ((/* implicit */short) var_2);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) 2782776464U);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_3 = 2; i_3 < 21; i_3 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (int i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)27011))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_5 [i_1] [i_3 + 1]))))) : (2782776452U)));
                            var_21 = ((/* implicit */signed char) (+(arr_11 [i_4] [6LL] [i_1] [i_4] [i_1] [i_3] [i_3 + 1])));
                            var_22 = ((/* implicit */unsigned short) var_4);
                            var_23 = ((/* implicit */_Bool) -3097908555641468483LL);
                        }
                        var_24 = ((var_8) ^ (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [i_1 + 3] [i_3 - 1]))));
                        arr_13 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_9)) ? (2782776452U) : (1512190843U))) <= (((((/* implicit */_Bool) var_11)) ? (var_16) : (var_2)))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_5 = 2; i_5 < 24; i_5 += 3) 
                        {
                            arr_17 [i_0] [i_1] [i_2] [i_3 + 4] [i_0] = ((/* implicit */signed char) ((long long int) (unsigned short)50834));
                            var_25 = ((unsigned char) var_17);
                            arr_18 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 18126967976771043755ULL)) ? (((/* implicit */int) (unsigned short)118)) : (((/* implicit */int) arr_6 [i_1] [i_1] [i_3 - 2])))))));
                        }
                        for (unsigned char i_6 = 1; i_6 < 24; i_6 += 4) 
                        {
                            var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(-1225517227756216106LL)))) ? (1225517227756216121LL) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_2] [i_2] [5] [i_6] [i_1])))));
                            var_27 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_6] [1U] [i_1] [i_6 - 1] [i_6]))));
                            arr_23 [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */int) ((unsigned char) (-(((/* implicit */int) var_0)))));
                        }
                    }
                }
            } 
        } 
        arr_24 [i_0] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (4546692723822809956ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) : (min((((/* implicit */unsigned long long int) 2782776464U)), (4546692723822809956ULL))))));
        var_28 = ((/* implicit */signed char) var_2);
        arr_25 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((unsigned int) max(((signed char)-48), ((signed char)87))))) == (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_16 [(_Bool)1] [i_0] [i_0] [i_0] [i_0] [(_Bool)1])))));
        arr_26 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0])))))) ? (min((((/* implicit */unsigned int) arr_5 [i_0] [i_0])), (arr_11 [i_0] [i_0] [i_0] [i_0] [2LL] [i_0] [2LL]))) : (((((/* implicit */_Bool) 1512190832U)) ? (1512190825U) : (((/* implicit */unsigned int) 2053751974))))));
    }
    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_8 = 1; i_8 < 9; i_8 += 3) 
        {
            arr_33 [i_7] [6LL] = ((/* implicit */long long int) arr_5 [(unsigned char)8] [(_Bool)1]);
            /* LoopNest 2 */
            for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
            {
                for (unsigned long long int i_10 = 3; i_10 < 9; i_10 += 4) 
                {
                    {
                        var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_15 [16ULL]))) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)0)))))));
                        var_30 = ((((/* implicit */long long int) ((/* implicit */int) var_0))) / (((((/* implicit */_Bool) (+(-1225517227756216119LL)))) ? (((long long int) arr_32 [i_9] [i_9] [(short)4])) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)35))))));
                        arr_39 [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_20 [i_7] [i_7] [i_7] [i_8] [i_7] [i_9] [i_7])) ? (((/* implicit */int) (unsigned char)164)) : (-235422076)))))) ? (var_6) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((5517019792305751968ULL) & (arr_4 [i_7] [(_Bool)1] [i_9])))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)4)), ((unsigned short)56280)))) : (((/* implicit */int) var_4)))))));
                    }
                } 
            } 
        }
        arr_40 [i_7 + 1] = ((/* implicit */short) ((((((/* implicit */_Bool) max((var_8), (((/* implicit */long long int) 2782776452U))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) -235422076)) >= (arr_27 [i_7 + 1] [i_7 + 1]))))) : (1285516640678785950ULL))) >> (((((((/* implicit */_Bool) (~(((/* implicit */int) (short)566))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)105)), ((short)-16425))))) : (((long long int) var_2)))) + (16473LL)))));
        /* LoopNest 2 */
        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
        {
            for (unsigned int i_12 = 0; i_12 < 10; i_12 += 3) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_13 = 1; i_13 < 9; i_13 += 4) 
                    {
                        arr_48 [i_7] [i_7] [i_7] = ((/* implicit */unsigned char) var_5);
                        arr_49 [i_11] [(short)8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((-(var_8))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_5))))))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_43 [i_13 - 1] [i_11 - 1]), (arr_43 [i_13 - 1] [i_11 - 1]))))) : (((long long int) (unsigned char)89))));
                    }
                    for (signed char i_14 = 2; i_14 < 8; i_14 += 2) 
                    {
                        arr_54 [(signed char)2] = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)181)) ? (-889527180) : (((/* implicit */int) (short)8191))))) | ((((!(((/* implicit */_Bool) arr_11 [i_7] [i_7] [i_14] [i_11 - 1] [i_12] [(_Bool)1] [i_14])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_6 [i_14] [i_14] [i_14]))))) : (min((390927916U), (869211264U)))))));
                        var_31 = ((/* implicit */signed char) ((int) max((var_6), (((/* implicit */unsigned long long int) (short)-11685)))));
                        arr_55 [i_7] [5ULL] [i_12] [i_14] = ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) (unsigned char)98)))))) ? (((/* implicit */int) var_0)) : (((int) (~(var_16)))));
                    }
                    for (unsigned int i_15 = 0; i_15 < 10; i_15 += 3) 
                    {
                        arr_59 [i_7] [i_7] [9ULL] [i_12] [i_15] [(unsigned short)1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((unsigned int) var_2))) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)3952)))))))) <= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))));
                        var_32 = min(((short)18985), (((/* implicit */short) arr_57 [i_15] [i_15])));
                        var_33 = ((/* implicit */unsigned short) 15528177783917989289ULL);
                        arr_60 [i_12] [i_15] [i_12] [3U] [2U] [i_7] = ((/* implicit */short) var_17);
                        arr_61 [i_15] [i_15] = ((/* implicit */long long int) var_6);
                    }
                    for (unsigned int i_16 = 0; i_16 < 10; i_16 += 4) 
                    {
                        var_34 = ((/* implicit */int) 1512190854U);
                        arr_64 [i_7] [i_11] [5LL] = ((/* implicit */long long int) ((((((/* implicit */int) (_Bool)0)) >> (((((/* implicit */int) (short)-22095)) + (22125))))) <= (((/* implicit */int) ((short) ((unsigned long long int) var_10))))));
                    }
                    arr_65 [(signed char)2] [i_11] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_27 [i_12] [(_Bool)1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1698113055U))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (-3247832121623529524LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)167)))))) || (((/* implicit */_Bool) ((int) arr_19 [10LL] [i_11] [i_11 - 1] [i_11] [i_11] [i_11] [i_11 - 1]))))))));
                    var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [(signed char)2])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_7 [(unsigned short)16] [(_Bool)1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (unsigned char)9)))) : (((((/* implicit */_Bool) (unsigned char)9)) ? (var_15) : (var_15))))))));
                }
            } 
        } 
        var_36 &= ((/* implicit */unsigned char) var_9);
        var_37 = ((/* implicit */_Bool) (-(min((((/* implicit */long long int) arr_5 [0LL] [i_7 + 1])), (arr_16 [i_7] [i_7] [i_7] [i_7] [i_7 + 1] [i_7 + 1])))));
    }
}
