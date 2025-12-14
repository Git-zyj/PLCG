/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199649
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
    var_20 = ((/* implicit */unsigned long long int) ((unsigned short) max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_10)) : (var_16))), (((/* implicit */unsigned long long int) (signed char)-41)))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_21 = ((/* implicit */signed char) ((var_5) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-1)) || (((/* implicit */_Bool) (signed char)(-127 - 1)))))))) : (arr_0 [i_0])));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            arr_4 [i_1] = ((/* implicit */signed char) (~((+(((((/* implicit */int) (signed char)1)) + (((/* implicit */int) (signed char)-42))))))));
            var_22 += (!(((/* implicit */_Bool) ((var_0) ? (((((/* implicit */_Bool) (signed char)-21)) ? (((/* implicit */int) (short)-19304)) : (((/* implicit */int) (unsigned char)255)))) : (((((/* implicit */_Bool) (short)19304)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (signed char)14))))))));
            var_23 = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1266169959U)) ? (arr_1 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? (((long long int) arr_3 [i_0] [i_1])) : (((/* implicit */long long int) ((/* implicit */int) (signed char)41))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)37)) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (signed char)-7)) : (((/* implicit */int) (unsigned short)16))))))));
            arr_5 [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) (((((!(((/* implicit */_Bool) (unsigned char)160)))) ? (-3065959053984605767LL) : (((((/* implicit */_Bool) (unsigned short)10430)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-109))) : (arr_1 [i_0]))))) * (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))));
            arr_6 [i_0] [i_0] [i_0] &= ((/* implicit */unsigned char) arr_1 [i_1]);
        }
    }
    for (unsigned char i_2 = 1; i_2 < 21; i_2 += 3) 
    {
        var_24 = ((/* implicit */unsigned char) (-(((/* implicit */int) min((var_17), (((/* implicit */unsigned char) var_5)))))));
        var_25 = ((/* implicit */unsigned short) min(((+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)9)) : (((/* implicit */int) (_Bool)0)))))), (((((/* implicit */_Bool) max((var_15), (((/* implicit */unsigned short) var_6))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((/* implicit */_Bool) -2125211582)) && (((/* implicit */_Bool) arr_7 [i_2 + 1])))))))));
        /* LoopSeq 2 */
        for (int i_3 = 2; i_3 < 20; i_3 += 2) 
        {
            var_26 = ((/* implicit */unsigned char) var_4);
            arr_14 [i_3] = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) arr_7 [i_2 - 1])) ? (((/* implicit */int) arr_12 [i_2 + 2] [i_3 - 1] [i_3 - 1])) : (((/* implicit */int) arr_11 [i_2 - 1] [i_3 - 2])))));
            var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)1))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_18)))))))))))));
        }
        /* vectorizable */
        for (unsigned long long int i_4 = 4; i_4 < 21; i_4 += 3) 
        {
            /* LoopSeq 3 */
            for (short i_5 = 0; i_5 < 23; i_5 += 3) 
            {
                /* LoopSeq 1 */
                for (signed char i_6 = 0; i_6 < 23; i_6 += 1) 
                {
                    /* LoopSeq 2 */
                    for (short i_7 = 0; i_7 < 23; i_7 += 3) 
                    {
                        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-2134)) && (((/* implicit */_Bool) var_12))));
                        var_29 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_16 [i_2 - 1])) : (((arr_15 [i_5]) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_19))))));
                    }
                    for (short i_8 = 0; i_8 < 23; i_8 += 2) 
                    {
                        arr_27 [i_8] |= ((signed char) arr_11 [i_2] [i_4 - 3]);
                        arr_28 [i_2] [i_6] [i_5] [i_5] [i_8] = (signed char)-92;
                    }
                    arr_29 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */signed char) var_3);
                }
                arr_30 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1] = ((/* implicit */signed char) ((((/* implicit */int) arr_16 [i_2 + 1])) + (((/* implicit */int) var_6))));
                var_30 = ((/* implicit */unsigned short) ((signed char) ((_Bool) var_9)));
                arr_31 [i_5] [i_4 - 2] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)255)) ? (var_10) : (((/* implicit */int) var_9)))) ^ (((/* implicit */int) arr_15 [i_4 + 1]))));
            }
            for (short i_9 = 1; i_9 < 22; i_9 += 1) 
            {
                var_31 = ((/* implicit */int) max((var_31), ((-(((/* implicit */int) var_19))))));
                /* LoopSeq 2 */
                for (signed char i_10 = 1; i_10 < 21; i_10 += 3) 
                {
                    var_32 = ((/* implicit */_Bool) ((unsigned long long int) ((int) var_10)));
                    var_33 = ((signed char) var_18);
                }
                for (unsigned char i_11 = 0; i_11 < 23; i_11 += 4) 
                {
                    var_34 = ((/* implicit */long long int) var_9);
                    /* LoopSeq 1 */
                    for (short i_12 = 0; i_12 < 23; i_12 += 3) 
                    {
                        var_35 = ((/* implicit */unsigned long long int) arr_32 [i_2 + 2] [i_4 - 3] [i_9 + 1]);
                        var_36 = ((/* implicit */short) var_11);
                        var_37 -= ((/* implicit */signed char) (~(((/* implicit */int) var_1))));
                        var_38 = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)0))));
                    }
                    var_39 = ((/* implicit */unsigned short) ((short) arr_37 [i_4 + 2] [i_4 + 2] [i_4 + 2] [i_11] [i_4 + 2] [i_9 - 1]));
                }
            }
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                var_40 -= ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (unsigned short)14))))));
                var_41 = ((/* implicit */signed char) min((var_41), (((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) var_17)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_2])))))))));
            }
            var_42 = ((/* implicit */unsigned char) min((var_42), (((/* implicit */unsigned char) var_8))));
        }
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_14 = 0; i_14 < 15; i_14 += 2) 
    {
        var_43 = ((signed char) ((signed char) (unsigned short)32768));
        var_44 = ((/* implicit */unsigned short) (((~(((/* implicit */int) var_17)))) | (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_36 [i_14])) : (((/* implicit */int) var_7))))));
    }
    var_45 = var_2;
}
