/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225610
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_13 -= ((/* implicit */unsigned int) (+(-750138983)));
        arr_4 [(unsigned short)3] [i_0] = ((/* implicit */unsigned short) arr_2 [i_0] [i_0]);
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_12 [i_0] [i_0] [9U] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((short) (signed char)-72))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)42924)) ? (((/* implicit */int) (unsigned char)18)) : (((/* implicit */int) (unsigned char)0))))) ? (min((arr_0 [i_2]), (((/* implicit */unsigned long long int) arr_3 [i_0])))) : (((/* implicit */unsigned long long int) 4294967295U))))));
                    var_14 = ((/* implicit */int) max((min((arr_9 [i_0] [(unsigned char)0]), (((/* implicit */long long int) var_5)))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_0 [i_1]), (18446744073709551615ULL)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)234))) / (arr_11 [i_2] [0] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 288230376151711743LL)))))))));
                    arr_13 [i_0] = ((/* implicit */unsigned int) (+(max((((/* implicit */long long int) (unsigned short)65532)), (arr_8 [i_0] [i_1] [i_0] [3])))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        var_15 &= ((/* implicit */unsigned short) arr_0 [i_2]);
                        arr_16 [i_2] &= ((/* implicit */unsigned char) min((((/* implicit */long long int) ((signed char) min(((unsigned short)15045), (((/* implicit */unsigned short) arr_5 [i_3] [i_2] [i_0])))))), ((+((+(var_6)))))));
                        /* LoopSeq 4 */
                        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            arr_20 [i_0] [i_0] [(signed char)5] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((var_9) / (((/* implicit */long long int) ((/* implicit */int) min((arr_5 [i_2] [(unsigned short)1] [i_4]), (arr_5 [i_0] [i_1] [(signed char)7])))))));
                            arr_21 [i_0] [i_0] [i_1] [i_0] [i_3] [i_3] [i_1] |= ((/* implicit */unsigned char) (~(((min((var_11), (748105934370083398ULL))) << (((var_10) - (5070660964521752847LL)))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_5 = 2; i_5 < 7; i_5 += 3) 
                        {
                            var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4398046511103LL)) ? (((/* implicit */int) var_7)) : ((-(((/* implicit */int) (short)(-32767 - 1))))))))));
                            var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) arr_18 [4LL] [i_1] [4LL] [i_2] [4LL] [i_5]))));
                        }
                        /* vectorizable */
                        for (signed char i_6 = 1; i_6 < 9; i_6 += 3) 
                        {
                            var_18 = ((/* implicit */unsigned int) (-((+(((/* implicit */int) (unsigned char)7))))));
                            var_19 &= ((/* implicit */int) ((unsigned long long int) var_1));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 4) 
                        {
                            var_20 *= ((/* implicit */signed char) (~(min((((/* implicit */long long int) (signed char)12)), (var_9)))));
                            arr_30 [i_0] [(unsigned short)0] [i_0] [(signed char)3] [(unsigned short)0] = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)7))) != (9223372036854775807LL)))) * (((/* implicit */int) ((((/* implicit */int) (unsigned char)249)) == (((/* implicit */int) (signed char)15))))))));
                            var_21 = ((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_8)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-64))))), (((/* implicit */long long int) min((arr_28 [i_7] [(unsigned short)8] [i_0]), (arr_28 [i_0] [i_1] [i_2]))))))) ? (((((/* implicit */_Bool) arr_24 [(signed char)5] [9U] [9U] [i_3] [i_7])) ? (((/* implicit */long long int) min((arr_27 [6LL] [i_1] [i_7]), (1993652692)))) : (min((arr_8 [i_0] [i_1] [i_0] [i_3]), (((/* implicit */long long int) var_5)))))) : ((+(arr_9 [i_1] [i_2])))));
                            arr_31 [i_0] [i_1] [6U] [i_2] [i_3] [i_7] &= ((/* implicit */unsigned long long int) arr_25 [i_7] [(signed char)8] [0LL] [i_7]);
                        }
                        arr_32 [(signed char)0] [i_2] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */int) min((min((((/* implicit */long long int) var_5)), (max((((/* implicit */long long int) arr_15 [i_3] [i_2] [i_0] [i_0])), (var_0))))), (((/* implicit */long long int) ((((/* implicit */int) var_2)) * (((((/* implicit */_Bool) 6231497418400178472LL)) ? (((/* implicit */int) (unsigned short)1387)) : (arr_27 [i_3] [i_2] [i_0]))))))));
                    }
                }
            } 
        } 
        /* LoopSeq 2 */
        for (short i_8 = 0; i_8 < 10; i_8 += 2) 
        {
            var_22 -= ((/* implicit */unsigned int) min(((-(((/* implicit */int) ((((/* implicit */_Bool) 4294967295U)) || (((/* implicit */_Bool) (unsigned char)161))))))), (((/* implicit */int) ((unsigned char) var_11)))));
            arr_35 [3LL] [(_Bool)0] = arr_15 [3U] [4LL] [7LL] [9U];
        }
        for (int i_9 = 0; i_9 < 10; i_9 += 1) 
        {
            var_23 += ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_28 [i_0] [i_0] [0LL])), (((((/* implicit */_Bool) arr_36 [8U] [8U] [i_0])) ? (var_10) : (var_6))))))));
            var_24 *= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) arr_33 [i_0] [i_9])) : (((/* implicit */int) arr_33 [i_9] [i_0])))) != ((+(((/* implicit */int) (unsigned short)65527))))));
        }
    }
    var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-52)) / (((/* implicit */int) (_Bool)1))));
    var_26 = ((/* implicit */long long int) ((((/* implicit */long long int) max(((+(((/* implicit */int) (unsigned short)11343)))), (((/* implicit */int) ((_Bool) (unsigned short)49656)))))) < (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)(-32767 - 1))), (2375265362069371339ULL)))) ? (var_9) : (((/* implicit */long long int) max((((/* implicit */unsigned int) (signed char)70)), (1023392991U))))))));
}
