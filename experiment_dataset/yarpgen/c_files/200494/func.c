/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200494
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */unsigned int) var_6);
                var_12 = ((/* implicit */long long int) ((((((/* implicit */int) var_10)) != (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((long long int) var_5))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [(unsigned char)10])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)53))))))))) : ((~(((/* implicit */int) ((((/* implicit */_Bool) 1669970866U)) || (((/* implicit */_Bool) (signed char)7)))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (unsigned int i_3 = 2; i_3 < 8; i_3 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */long long int) min((var_13), (min((((/* implicit */long long int) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)53))) == (4294967295U))))), ((+(((((/* implicit */long long int) 0)) | (var_9)))))))));
                            var_14 += ((/* implicit */signed char) ((-1429881681) > ((~(((/* implicit */int) (unsigned short)63273))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) (+(((/* implicit */int) max((((/* implicit */unsigned char) max(((signed char)53), (var_2)))), (min((var_1), (((/* implicit */unsigned char) var_3)))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_4 = 1; i_4 < 9; i_4 += 2) 
    {
        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) arr_9 [i_4] [i_4]))));
        arr_13 [(signed char)9] [i_4 + 1] |= ((/* implicit */int) ((4294967295U) >> (((((/* implicit */int) arr_3 [i_4] [4] [i_4 - 1])) - (45571)))));
    }
    for (long long int i_5 = 0; i_5 < 19; i_5 += 4) 
    {
        arr_16 [i_5] [i_5] = ((/* implicit */unsigned int) ((int) (-(((-12) * (((/* implicit */int) (signed char)-53)))))));
        var_17 = ((/* implicit */short) max((((/* implicit */unsigned int) min((var_4), (var_4)))), ((-(var_5)))));
        var_18 = ((/* implicit */unsigned char) 2610987535621198553LL);
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) arr_15 [i_5]))));
    }
    for (short i_6 = 2; i_6 < 11; i_6 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_7 = 2; i_7 < 13; i_7 += 3) 
        {
            var_20 = arr_19 [i_6];
            var_21 = ((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_6]))) + (((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_6] [5]))) | (arr_19 [i_7]))));
            /* LoopSeq 2 */
            for (int i_8 = 0; i_8 < 14; i_8 += 3) /* same iter space */
            {
                arr_25 [8] [(_Bool)0] [i_6] [8] |= ((/* implicit */int) ((((/* implicit */_Bool) ((int) var_10))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (arr_19 [(_Bool)0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [4ULL] [i_8])))))) : (-2610987535621198553LL)));
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 652624010)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-63)))));
            }
            for (int i_9 = 0; i_9 < 14; i_9 += 3) /* same iter space */
            {
                arr_28 [i_7] [i_7] [i_6] = ((/* implicit */signed char) -1);
                arr_29 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned char) (+(((((/* implicit */unsigned int) var_6)) + (arr_19 [i_7 - 2])))));
                /* LoopSeq 1 */
                for (unsigned char i_10 = 0; i_10 < 14; i_10 += 4) 
                {
                    arr_32 [i_7] [i_7] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_2)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_7] [i_9])))))));
                    arr_33 [i_6] [i_6 - 2] [i_6] [i_7] = var_2;
                    arr_34 [i_6] [i_7] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_24 [i_6] [i_6 + 3] [i_9] [i_7])) << (((var_7) - (498037695)))));
                    var_23 = ((/* implicit */unsigned int) min((var_23), (0U)));
                }
            }
        }
        arr_35 [i_6] [i_6] = ((((/* implicit */_Bool) arr_22 [i_6 + 3] [i_6 - 2])) && (((/* implicit */_Bool) (+((-9223372036854775807LL - 1LL))))));
        arr_36 [i_6 - 2] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((arr_24 [i_6] [i_6] [i_6] [6]) ? (-1) : (((/* implicit */int) var_3)))), (((/* implicit */int) arr_15 [i_6 + 2]))))) ? ((~(((((/* implicit */unsigned long long int) var_5)) | (9919477983849416597ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)207))))))));
    }
    for (signed char i_11 = 0; i_11 < 25; i_11 += 4) 
    {
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)53)) ? (0ULL) : (((/* implicit */unsigned long long int) 0))));
        arr_39 [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_5)))) ? (((/* implicit */int) min(((signed char)62), (((/* implicit */signed char) (!(((/* implicit */_Bool) 10U)))))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_5)))))));
        /* LoopSeq 4 */
        for (unsigned char i_12 = 1; i_12 < 24; i_12 += 1) 
        {
            arr_43 [i_11] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))), ((+(((/* implicit */int) arr_37 [i_12] [i_12]))))))) ? (((/* implicit */int) var_0)) : (((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)25901)) : (((/* implicit */int) (signed char)-63)))) + (((/* implicit */int) arr_38 [i_12 - 1] [i_12]))))));
            var_25 = max((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_11] [13]))) > (max((2206291U), (9U)))))), (((((/* implicit */_Bool) var_9)) ? (((int) arr_41 [i_11] [i_12 + 1])) : (max((((/* implicit */int) arr_40 [i_11] [i_11])), (var_6))))));
        }
        for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_14 = 0; i_14 < 25; i_14 += 4) 
            {
                for (unsigned char i_15 = 0; i_15 < 25; i_15 += 3) 
                {
                    {
                        var_26 -= ((/* implicit */long long int) ((unsigned char) (+(1U))));
                        arr_52 [i_11] &= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)53))))) * (min((0ULL), (((/* implicit */unsigned long long int) (_Bool)0))))));
                    }
                } 
            } 
            var_27 = ((/* implicit */unsigned char) ((int) min((995844581U), (((/* implicit */unsigned int) (-2147483647 - 1))))));
            var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) min((((/* implicit */long long int) var_1)), (((((/* implicit */_Bool) 11U)) ? (((/* implicit */long long int) var_4)) : (max((-9195684532282991175LL), (((/* implicit */long long int) var_3)))))))))));
            var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_13 + 1] [23])) ? (((/* implicit */int) ((_Bool) 4294967295U))) : (((((/* implicit */_Bool) (short)27717)) ? (((/* implicit */int) arr_45 [i_13] [i_11] [i_11])) : (((/* implicit */int) var_10))))))) ? (2044927448) : (((/* implicit */int) (signed char)53))));
            var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) -12))))), (var_4))))));
        }
        for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) /* same iter space */
        {
            var_31 += ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) var_9)))))) & (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2743854432U)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_37 [i_11] [i_11]))))))))));
            var_32 = (+(((((/* implicit */_Bool) min((arr_45 [i_11] [i_11] [i_11]), (((/* implicit */unsigned short) (_Bool)1))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_0)), (var_8)))) : (var_6))));
        }
        for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) /* same iter space */
        {
            var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)57)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-5733934426800279746LL))))));
            arr_59 [i_11] [i_11] [i_17] |= ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1)))) != (((/* implicit */int) ((((/* implicit */long long int) var_7)) != (arr_49 [i_11] [i_11] [18ULL] [i_11]))))))), (((long long int) arr_56 [i_11]))));
        }
        var_34 += ((/* implicit */long long int) ((short) ((((/* implicit */long long int) min((var_4), (((/* implicit */int) (_Bool)0))))) / (arr_44 [i_11] [i_11]))));
    }
    /* LoopNest 2 */
    for (long long int i_18 = 0; i_18 < 20; i_18 += 3) 
    {
        for (unsigned long long int i_19 = 0; i_19 < 20; i_19 += 1) 
        {
            {
                var_35 = ((/* implicit */unsigned long long int) min((var_35), (((/* implicit */unsigned long long int) ((_Bool) (!(((/* implicit */_Bool) var_1))))))));
                var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) ((unsigned int) min((((((/* implicit */_Bool) -4132956308601166941LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_63 [0ULL] [0ULL]))), (((((/* implicit */_Bool) var_0)) ? (-2610987535621198553LL) : (((/* implicit */long long int) ((/* implicit */int) arr_53 [(signed char)6])))))))))));
            }
        } 
    } 
}
