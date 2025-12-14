/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211914
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
    for (signed char i_0 = 1; i_0 < 24; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) arr_0 [i_0 - 1]);
        /* LoopSeq 3 */
        for (unsigned int i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            var_20 ^= ((/* implicit */unsigned short) var_18);
            var_21 ^= ((/* implicit */signed char) (+(((/* implicit */int) (signed char)-103))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_8 [i_0] [14ULL] [22LL] = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)25)) ^ (arr_1 [i_0 - 1])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) (unsigned short)22999)) : (((/* implicit */int) (unsigned short)22999))))) : (((unsigned int) (short)-8338)));
            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(var_13)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)42539))) : (((1334194096U) - (1213594295U)))));
            var_23 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (1213594307U)));
            /* LoopSeq 3 */
            for (int i_3 = 2; i_3 < 24; i_3 += 3) /* same iter space */
            {
                arr_12 [i_3] [i_2] [i_2] [9] = ((/* implicit */unsigned char) ((unsigned long long int) 1334194072U));
                var_24 |= ((/* implicit */unsigned char) ((signed char) (((~(8191093189747653066LL))) >= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1)))))))));
                /* LoopSeq 1 */
                for (unsigned char i_4 = 2; i_4 < 22; i_4 += 4) 
                {
                    var_25 ^= ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)125))) ^ (((((/* implicit */_Bool) -1919565084)) ? (((/* implicit */long long int) var_18)) : (-13LL))))) ^ (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((4611686018427387904LL) >= (-8191093189747653066LL))))))));
                    arr_16 [i_0] [i_0 + 1] [i_0] [i_0 - 1] [i_0 - 1] [i_0] |= ((/* implicit */_Bool) (-((((_Bool)1) ? (arr_1 [i_2]) : (arr_1 [(unsigned char)18])))));
                }
                var_26 = ((/* implicit */unsigned long long int) 8191093189747653066LL);
            }
            /* vectorizable */
            for (int i_5 = 2; i_5 < 24; i_5 += 3) /* same iter space */
            {
                var_27 = ((/* implicit */long long int) (+(2625974956654137382ULL)));
                /* LoopSeq 2 */
                for (short i_6 = 0; i_6 < 25; i_6 += 1) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_27 [i_5] [i_5] [i_6] [i_7] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_7] [(_Bool)1] [i_6] [i_2] [(signed char)22] [i_2] [i_0]))))) | (((/* implicit */int) (unsigned short)42537))));
                        var_28 ^= ((/* implicit */signed char) (((+(arr_15 [i_0] [i_0] [i_6] [i_7]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                        var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) > (2960773199U)))) : (((/* implicit */int) var_8))));
                        var_30 = ((/* implicit */unsigned int) ((unsigned long long int) arr_9 [i_0 - 1] [i_5] [i_5 - 1] [i_5 - 1]));
                    }
                    arr_28 [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (unsigned char)0))) ? (arr_17 [i_5] [i_5] [i_5 + 1] [i_5 - 1]) : (((/* implicit */unsigned long long int) (+(3356203410U))))));
                }
                for (int i_8 = 2; i_8 < 23; i_8 += 2) 
                {
                    var_31 ^= ((/* implicit */int) ((((/* implicit */_Bool) var_17)) ? (0ULL) : (arr_17 [i_0 + 1] [i_5 - 1] [i_8 - 2] [i_8 - 1])));
                    var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_2] [i_5] [i_5 - 1])) ? (19U) : (((/* implicit */unsigned int) var_18))));
                    var_33 = ((/* implicit */_Bool) ((2960773200U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)97)))));
                    arr_32 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_17) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))) ? (var_18) : (((/* implicit */int) (unsigned short)45508))));
                    arr_33 [i_8] |= ((/* implicit */signed char) (-((+(((/* implicit */int) var_12))))));
                }
            }
            for (int i_9 = 2; i_9 < 24; i_9 += 3) /* same iter space */
            {
                var_34 = ((/* implicit */_Bool) (~((~(((((/* implicit */_Bool) arr_22 [i_9 - 1] [i_9 - 1] [i_2] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)42539))) : (var_1)))))));
                var_35 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) 427542929U)) ? (3356203413U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [(short)23] [i_9 - 2] [i_9 - 2]))))) > (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
                arr_38 [i_0] [9U] [i_0] |= ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_35 [i_0] [i_0] [i_0 - 1] [i_9 - 1])))))));
            }
        }
        /* vectorizable */
        for (unsigned short i_10 = 0; i_10 < 25; i_10 += 1) 
        {
            var_36 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_10 [i_0] [i_10] [i_0]))));
            /* LoopSeq 1 */
            for (long long int i_11 = 0; i_11 < 25; i_11 += 2) 
            {
                var_37 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_4 [(unsigned char)20] [i_0 + 1] [(unsigned char)20]))));
                arr_45 [i_0] [i_10] [i_11] = ((/* implicit */unsigned int) arr_6 [(unsigned char)6] [(unsigned char)6] [(unsigned char)6]);
            }
            var_38 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (9915790281988622528ULL))) < (((((/* implicit */unsigned long long int) 0)) ^ (var_9)))));
        }
    }
    var_39 = ((/* implicit */_Bool) max((var_39), (((/* implicit */_Bool) var_3))));
    var_40 = ((/* implicit */unsigned char) ((long long int) (~(((/* implicit */int) var_4)))));
    var_41 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_10) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) 11971464148909825029ULL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)12736)))))))) || (((/* implicit */_Bool) var_16))));
}
