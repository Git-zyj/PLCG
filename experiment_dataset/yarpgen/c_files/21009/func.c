/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21009
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
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)205)) ? (((/* implicit */unsigned long long int) ((unsigned int) var_5))) : (min((((/* implicit */unsigned long long int) (unsigned char)44)), (3167835698999240907ULL)))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)205))))) : ((-(var_8))))) : (((var_3) ? (var_2) : (((((/* implicit */_Bool) (short)-16446)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-5651440933527908388LL)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 7; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) min((((/* implicit */int) arr_4 [6ULL] [(_Bool)1] [i_1])), ((~(((/* implicit */int) (unsigned char)205)))))))));
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) (unsigned char)50))))) ? (min((((/* implicit */int) (unsigned char)205)), (var_11))) : (var_11)))) ? (((/* implicit */long long int) min((((((/* implicit */_Bool) arr_3 [i_0] [i_1 - 1])) ? (((/* implicit */int) (short)18485)) : (((/* implicit */int) var_7)))), (((/* implicit */int) arr_0 [i_0]))))) : (arr_1 [i_0])));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_2 = 2; i_2 < 15; i_2 += 3) 
    {
        arr_8 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-5651440933527908396LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2 + 2] [i_2 + 1])))));
        /* LoopSeq 2 */
        for (unsigned char i_3 = 1; i_3 < 16; i_3 += 2) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_2 + 1])) ? (((/* implicit */unsigned long long int) 2147483640)) : (arr_5 [i_2 + 1])));
            arr_11 [i_2] [i_3] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (arr_10 [i_3 + 2]) : (arr_10 [i_3 + 2])));
            arr_12 [i_2 + 3] [i_2 + 3] [i_3 + 2] = ((/* implicit */unsigned char) arr_5 [i_2]);
        }
        for (unsigned char i_4 = 1; i_4 < 16; i_4 += 2) /* same iter space */
        {
            /* LoopSeq 4 */
            for (int i_5 = 4; i_5 < 16; i_5 += 3) /* same iter space */
            {
                arr_19 [i_2 + 1] [i_2] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_5 + 1] [i_5] [i_5 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))) : (((((/* implicit */_Bool) (short)24942)) ? (5651440933527908388LL) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_4] [i_4])))))));
                var_22 = ((/* implicit */unsigned int) arr_18 [i_2] [i_4] [(signed char)2]);
                arr_20 [i_4] [i_5] [i_4] [(unsigned short)9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_5 + 1])) ? (((/* implicit */int) arr_6 [i_2 - 2])) : (arr_16 [i_2 - 2] [i_2 + 1] [i_4] [i_5 - 1])));
                var_23 = ((/* implicit */unsigned int) 8962366014082484567ULL);
            }
            for (int i_6 = 4; i_6 < 16; i_6 += 3) /* same iter space */
            {
                arr_23 [i_2 + 1] [i_2] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -5651440933527908388LL)) ? (arr_5 [i_4 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_4])))));
                arr_24 [i_4] [i_4 + 2] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) arr_18 [i_2] [i_4] [i_4 - 1])) ? (5651440933527908403LL) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_2 - 2] [i_4] [i_4 + 1])))));
                arr_25 [i_4] [(signed char)12] = ((/* implicit */unsigned short) var_13);
                /* LoopNest 2 */
                for (unsigned short i_7 = 2; i_7 < 15; i_7 += 2) 
                {
                    for (unsigned short i_8 = 4; i_8 < 16; i_8 += 3) 
                    {
                        {
                            var_24 ^= ((/* implicit */short) arr_22 [i_7] [i_2 - 2] [(unsigned short)16]);
                            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_2 + 2] [i_4 - 1])) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)14616)))));
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_4]))) <= ((-(arr_22 [i_4] [i_4 + 1] [i_6 - 2])))));
                            var_27 &= ((/* implicit */unsigned short) var_12);
                        }
                    } 
                } 
            }
            for (int i_9 = 3; i_9 < 17; i_9 += 3) 
            {
                var_28 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_4 - 1])) ? (((/* implicit */int) arr_6 [i_2 + 1])) : (((/* implicit */int) (unsigned short)65535))));
                var_29 -= ((/* implicit */signed char) var_1);
            }
            for (short i_10 = 0; i_10 < 18; i_10 += 3) 
            {
                var_30 = ((/* implicit */unsigned int) var_6);
                arr_34 [i_4] [i_4] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_2 + 2] [i_4] [i_10])) ? (arr_15 [i_4] [i_4 + 2]) : (((/* implicit */unsigned int) var_11))))) && (((/* implicit */_Bool) (unsigned char)0))));
                var_31 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_26 [i_2] [i_4] [i_10] [i_4]))))));
            }
            var_32 &= arr_21 [8ULL] [i_4];
        }
        var_33 = ((/* implicit */signed char) ((long long int) var_2));
    }
    for (int i_11 = 1; i_11 < 12; i_11 += 3) 
    {
        arr_37 [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [(signed char)13] [i_11] [i_11 - 1])) && ((!((_Bool)1)))));
        arr_38 [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((9223372036854775799LL), (-5651440933527908388LL)))) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)201))))))) : (((/* implicit */int) arr_7 [i_11 + 1] [i_11 + 1]))));
    }
    var_34 = var_1;
    var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) 4294967278U)) : (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)243))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) -677556037)) : (7182129853973917909ULL)))))));
}
