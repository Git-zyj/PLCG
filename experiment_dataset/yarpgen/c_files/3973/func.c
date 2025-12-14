/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3973
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
    var_10 = ((/* implicit */unsigned long long int) min((((unsigned int) ((((var_2) + (9223372036854775807LL))) << (((1624159901) - (1624159901)))))), (((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned char) var_1))))))));
    var_11 -= ((/* implicit */_Bool) var_7);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_1 [i_0]) & (((/* implicit */long long int) min((var_9), (((/* implicit */unsigned int) (short)-14459)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) & (var_9))))))) : (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) -3022870976361131199LL)))))));
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) min((var_6), (((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) var_0))) ^ (((/* implicit */int) var_5))))))))));
            var_13 = ((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned int) ((signed char) (signed char)122)))));
            /* LoopSeq 3 */
            for (int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                var_14 = ((/* implicit */long long int) arr_5 [i_0] [i_0]);
                var_15 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) min((arr_6 [i_2] [i_1]), (((/* implicit */long long int) var_0)))))) ? ((~(arr_1 [i_0]))) : (((((/* implicit */_Bool) ((var_6) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-123)))))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) / (arr_0 [i_1])))) : (min((arr_1 [i_0]), (((/* implicit */long long int) (signed char)114))))))));
                /* LoopSeq 1 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_16 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) (signed char)122)) ? (((/* implicit */int) (short)-27795)) : (664053406))));
                    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (~(-664053399)))), ((~(arr_6 [i_0] [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((unsigned char) var_8))))) : (((((((((/* implicit */long long int) var_3)) ^ (arr_1 [(short)12]))) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (7513042066579930072LL))) + (14435LL)))))));
                    var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((unsigned long long int) min((max((var_6), (var_6))), (((/* implicit */long long int) ((var_1) == (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))))))));
                }
            }
            for (int i_4 = 0; i_4 < 24; i_4 += 4) 
            {
                var_19 = ((/* implicit */short) (~(((((/* implicit */int) arr_11 [i_0])) * (((/* implicit */int) arr_11 [7ULL]))))));
                var_20 = ((/* implicit */signed char) arr_6 [i_0] [i_0]);
                var_21 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_2 [i_0])))) ? (min((var_6), (((/* implicit */long long int) arr_2 [i_0])))) : (((/* implicit */long long int) max((664053401), (((/* implicit */int) arr_2 [i_4])))))));
                arr_13 [i_4] [i_0] = var_1;
                var_22 = ((/* implicit */int) (short)-27818);
            }
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                var_23 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */int) min(((short)27794), (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [(short)16])))) + (((/* implicit */int) var_5))))) | (((((/* implicit */_Bool) (unsigned short)32767)) ? (((((/* implicit */_Bool) var_5)) ? (var_1) : (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0]))))))))));
                arr_16 [i_0] [(signed char)18] [i_5] [(_Bool)1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_9)))) : (var_7)));
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 20; i_6 += 1) 
                {
                    for (long long int i_7 = 0; i_7 < 24; i_7 += 4) 
                    {
                        {
                            arr_23 [i_0] [i_0] [i_5] [i_5] = ((/* implicit */unsigned char) min((((/* implicit */long long int) (!((!(((/* implicit */_Bool) 664053386))))))), (min((((/* implicit */long long int) min((((/* implicit */unsigned int) arr_21 [i_0] [i_0])), (var_7)))), (min((var_6), (((/* implicit */long long int) (signed char)123))))))));
                            arr_24 [i_5] [i_1] = ((((/* implicit */_Bool) -664053388)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_2 [i_6])), (var_3)))) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_0 [i_7]))))))))) : ((((!(((/* implicit */_Bool) (unsigned short)32760)))) ? (arr_6 [i_6 + 2] [(unsigned short)17]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)27490)) != (((/* implicit */int) arr_20 [i_5] [i_5] [i_5] [(unsigned char)2] [i_5])))))))));
                        }
                    } 
                } 
            }
        }
        for (signed char i_8 = 0; i_8 < 24; i_8 += 4) /* same iter space */
        {
            arr_27 [(signed char)21] [i_8] [i_8] &= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((short) var_6))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_15 [(unsigned char)0] [i_0]))))) : ((~(var_9))))) << (((((/* implicit */int) (unsigned short)32776)) - (32771)))));
            arr_28 [i_0] [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((-2145811349) + (2147483647))) << (((arr_8 [13] [i_0] [i_0] [i_0]) - (1616619452U)))))) ? (((/* implicit */int) ((((/* implicit */int) var_0)) > (((/* implicit */int) arr_20 [i_8] [i_0] [(short)10] [i_0] [i_8]))))) : (((/* implicit */int) ((signed char) var_4))))), (((/* implicit */int) arr_20 [i_8] [i_8] [i_8] [i_8] [10LL]))));
        }
        for (signed char i_9 = 0; i_9 < 24; i_9 += 4) /* same iter space */
        {
            arr_31 [i_0] [(unsigned char)15] [i_0] = ((/* implicit */long long int) max(((+(((/* implicit */int) ((short) arr_4 [i_0]))))), (((((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)53519)))) + (2147483647))) >> (((((((-3836180544090294086LL) + (9223372036854775807LL))) >> (((arr_29 [i_9]) - (293752648U))))) - (39196960LL)))))));
            arr_32 [i_9] = ((/* implicit */signed char) min(((~(var_6))), (((/* implicit */long long int) min((var_5), (var_5))))));
            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (var_7) : (((/* implicit */unsigned int) (~(max((arr_17 [i_0] [i_0] [(_Bool)1] [20] [i_9]), (2147483643))))))));
        }
        arr_33 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((int) (!(((/* implicit */_Bool) var_4)))))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (var_6)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_0] [i_0])) ? (((/* implicit */int) (signed char)29)) : (var_3)))) : ((-(12131621858128197764ULL)))))));
        var_25 = ((/* implicit */long long int) max((((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) var_6)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32766))))))), (min(((unsigned short)32760), ((unsigned short)1)))));
        arr_34 [i_0] = ((/* implicit */int) ((((/* implicit */int) min(((unsigned char)0), (((/* implicit */unsigned char) (signed char)-100))))) <= (((/* implicit */int) min((max(((unsigned short)55248), (((/* implicit */unsigned short) (short)-27795)))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_0))))))))));
    }
    var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) var_6))));
    var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)32746)) ? (((/* implicit */int) (short)27787)) : (-1903172437)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (-18LL) : (var_6)))) ? (((var_1) << (((/* implicit */int) (_Bool)1)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_0))))))));
}
