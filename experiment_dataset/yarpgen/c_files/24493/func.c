/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24493
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_0 [i_0] [i_0]) / (((/* implicit */unsigned int) var_1))))) && (((/* implicit */_Bool) max((2688123921U), (((/* implicit */unsigned int) var_5)))))))), (((((/* implicit */unsigned long long int) arr_1 [(_Bool)1])) * (3052472850912196999ULL))))))));
        arr_3 [i_0] = ((/* implicit */short) min((((/* implicit */unsigned int) (unsigned short)58508)), (2688123939U)));
        arr_4 [i_0] &= ((((/* implicit */long long int) (~(arr_0 [i_0] [i_0])))) != (max((arr_1 [i_0]), (((/* implicit */long long int) arr_0 [i_0] [i_0])))));
        var_12 |= ((/* implicit */unsigned char) ((unsigned short) -5700497018825178294LL));
    }
    for (signed char i_1 = 1; i_1 < 16; i_1 += 1) 
    {
        var_13 = min((((((/* implicit */_Bool) arr_5 [i_1 - 1])) ? (((/* implicit */int) arr_5 [i_1 + 1])) : (((/* implicit */int) arr_5 [i_1 - 1])))), (((/* implicit */int) min((arr_5 [i_1 + 1]), (arr_5 [i_1 + 1])))));
        /* LoopSeq 1 */
        for (long long int i_2 = 3; i_2 < 15; i_2 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_3 = 0; i_3 < 17; i_3 += 3) 
            {
                arr_13 [i_3] &= ((/* implicit */short) ((unsigned char) (unsigned char)4));
                arr_14 [i_1] [i_1 - 1] [i_2] [i_3] = ((/* implicit */unsigned int) max((min((((/* implicit */long long int) ((((/* implicit */_Bool) 15394271222797354636ULL)) ? (var_1) : (var_1)))), (min((var_6), (((/* implicit */long long int) arr_12 [i_1])))))), (((/* implicit */long long int) max((((1773878674U) % (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) arr_12 [i_1 - 1])))))));
            }
            /* vectorizable */
            for (short i_4 = 0; i_4 < 17; i_4 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned short i_5 = 0; i_5 < 17; i_5 += 2) /* same iter space */
                {
                    arr_21 [(signed char)5] [i_5] [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) 1080863910568919040ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2063518160U)));
                    var_14 = ((/* implicit */unsigned int) ((short) var_4));
                    /* LoopSeq 1 */
                    for (short i_6 = 3; i_6 < 15; i_6 += 4) 
                    {
                        var_15 += ((/* implicit */long long int) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) arr_8 [i_1 - 1])) : (((/* implicit */int) arr_15 [i_1] [i_1 - 1] [i_1 - 1] [i_2]))));
                        var_16 &= ((/* implicit */signed char) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (1606843358U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))));
                        arr_26 [2LL] [2LL] [i_1] [i_6] [i_6] = ((/* implicit */unsigned char) 1606843392U);
                        var_17 = ((/* implicit */short) ((unsigned short) -8379445838195730397LL));
                        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)6)) : (var_1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) (signed char)36)) ? (945209125U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))))));
                    }
                    arr_27 [i_5] [i_4] [i_2] [i_1] = 17076930051527891406ULL;
                    arr_28 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_22 [i_1 - 1] [i_2 + 2] [i_2 + 2] [i_1 - 1] [i_1]))));
                }
                for (unsigned short i_7 = 0; i_7 < 17; i_7 += 2) /* same iter space */
                {
                    var_19 += ((unsigned long long int) ((_Bool) 4202961523U));
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) (unsigned char)57)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (6144297627690693653ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
                    var_21 = ((/* implicit */_Bool) arr_22 [i_1] [i_2 + 1] [i_2] [i_4] [i_7]);
                }
                arr_33 [i_1] [(unsigned char)16] [i_4] = ((/* implicit */signed char) arr_6 [i_1] [i_1]);
                arr_34 [i_1] [(short)6] [(short)6] [i_1 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (2266124792U)));
            }
            /* LoopSeq 1 */
            for (unsigned short i_8 = 0; i_8 < 17; i_8 += 4) 
            {
                var_22 = ((/* implicit */unsigned int) (-(((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (3052472850912196999ULL))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) | (1080863910568919040ULL)))))));
                arr_37 [i_1 - 1] [i_2 + 2] [i_8] [1ULL] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((-841585982) < (((/* implicit */int) (signed char)45)))))));
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 3; i_9 < 14; i_9 += 3) 
                {
                    for (unsigned short i_10 = 2; i_10 < 16; i_10 += 4) 
                    {
                        {
                            arr_43 [(unsigned char)4] [i_2] [i_8] [i_9] [i_10] [i_9] = ((/* implicit */unsigned short) ((short) min((((/* implicit */unsigned long long int) (_Bool)1)), (17365880163140632575ULL))));
                            arr_44 [i_1 + 1] [i_2] [i_9] [i_9] [i_10] = ((/* implicit */short) max((((/* implicit */unsigned short) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)240)))), (var_10)));
                        }
                    } 
                } 
                var_23 |= ((/* implicit */short) ((((min((((/* implicit */long long int) arr_19 [i_1 + 1] [i_1 + 1] [i_2] [i_8] [i_8])), (-8795553620051125117LL))) + (9223372036854775807LL))) << (((max((((/* implicit */unsigned long long int) arr_6 [i_1] [i_8])), (15394271222797354616ULL))) - (15394271222797354616ULL)))));
            }
            var_24 = ((unsigned short) max((var_9), (((/* implicit */unsigned long long int) arr_6 [i_2 - 1] [i_1 + 1]))));
            var_25 = ((((/* implicit */int) max((((/* implicit */unsigned short) (short)32754)), ((unsigned short)65535)))) / (((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_25 [i_1] [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1])), (arr_2 [i_2])))) ? (((int) (unsigned short)1023)) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_5 [(_Bool)1])), ((unsigned short)374)))))));
        }
        var_26 *= ((/* implicit */_Bool) max((((max((17771562257913073608ULL), (((/* implicit */unsigned long long int) -5183517668437334736LL)))) ^ (((/* implicit */unsigned long long int) ((1717969648910489992LL) ^ (((/* implicit */long long int) ((/* implicit */int) (short)-5274)))))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)508), (var_7))))) - (arr_6 [i_1 - 1] [i_1]))))));
        /* LoopNest 2 */
        for (short i_11 = 0; i_11 < 17; i_11 += 1) 
        {
            for (long long int i_12 = 0; i_12 < 17; i_12 += 1) 
            {
                {
                    arr_51 [i_12] [i_11] [i_11] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_0))), (min((-988918520452801024LL), (((/* implicit */long long int) var_3))))))), (((((/* implicit */_Bool) ((unsigned char) var_6))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) var_3)) : (arr_6 [i_1] [i_12])))) : (((((/* implicit */_Bool) (unsigned short)2910)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_13 = 0; i_13 < 17; i_13 += 3) 
                    {
                        var_27 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_16 [i_1 + 1] [i_1 - 1] [i_1 + 1]))))) * (8589934590ULL)));
                        arr_55 [i_12] [i_12] [i_11] [i_12] = ((/* implicit */unsigned char) (-((((~(((/* implicit */int) (_Bool)1)))) | (((/* implicit */int) (signed char)-49))))));
                    }
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_14 = 0; i_14 < 17; i_14 += 3) 
        {
            for (long long int i_15 = 2; i_15 < 16; i_15 += 4) 
            {
                for (unsigned long long int i_16 = 0; i_16 < 17; i_16 += 3) 
                {
                    {
                        arr_66 [i_1] [i_14] [i_14] [i_15] [(short)4] [0LL] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_54 [i_15])) << (((((((/* implicit */_Bool) (unsigned short)60132)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_32 [i_15] [i_15] [i_15 + 1] [i_15 + 1] [i_15 - 2]))) - (30538LL)))));
                        var_28 = ((/* implicit */unsigned short) arr_1 [i_1 + 1]);
                        var_29 = ((/* implicit */unsigned long long int) var_0);
                    }
                } 
            } 
        } 
    }
    var_30 = ((/* implicit */long long int) var_3);
    var_31 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (5983347700100061251ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)249)))))) ? ((~((-(3648619499556308369LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-32745)) ? (((/* implicit */int) (unsigned char)190)) : (((/* implicit */int) (short)31343))))));
}
