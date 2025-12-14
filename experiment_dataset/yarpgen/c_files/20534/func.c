/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20534
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        arr_4 [i_0] [0ULL] = ((/* implicit */int) var_12);
        /* LoopSeq 2 */
        for (int i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            var_13 = ((/* implicit */unsigned long long int) arr_5 [i_1 + 1] [i_0 + 2] [3U]);
            arr_7 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) < (7412751458062694440ULL)))) <= (((/* implicit */int) (!(var_9))))));
            var_14 = ((/* implicit */long long int) ((((((/* implicit */int) (signed char)55)) - (((/* implicit */int) var_6)))) * (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)55)))))));
            arr_8 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_1 - 1] [i_1])) | (((/* implicit */int) arr_1 [i_1 - 2] [13ULL]))));
            arr_9 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_1)));
        }
        for (unsigned long long int i_2 = 2; i_2 < 15; i_2 += 3) 
        {
            var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_0 + 1] [i_2 + 3])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_0 [i_0 + 2])))))));
            var_16 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) > ((~(((/* implicit */int) (signed char)55))))));
        }
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_0 + 4])) ? (var_3) : (((/* implicit */unsigned long long int) arr_3 [i_0 + 4])))))));
        /* LoopSeq 3 */
        for (unsigned int i_3 = 3; i_3 < 17; i_3 += 2) 
        {
            var_18 = ((/* implicit */unsigned int) 8618728668455739714ULL);
            var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0 + 1])) < (((/* implicit */int) arr_0 [i_0 + 4]))));
            var_20 = ((/* implicit */unsigned long long int) arr_11 [i_0] [i_0]);
        }
        for (long long int i_4 = 3; i_4 < 18; i_4 += 3) 
        {
            var_21 = ((/* implicit */_Bool) (-(-5739389909358528483LL)));
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((_Bool) var_9))) : (((/* implicit */int) var_10))));
        }
        for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 3) 
        {
            var_23 = ((/* implicit */_Bool) (((((-(((/* implicit */int) var_4)))) + (2147483647))) << (((arr_5 [i_5] [i_0] [i_0]) - (1152384776U)))));
            var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_5] [i_5] [i_0 + 4])) ? (arr_5 [(unsigned short)8] [i_0] [i_0 + 1]) : (var_0))))));
        }
    }
    for (unsigned char i_6 = 0; i_6 < 19; i_6 += 3) 
    {
        var_25 = ((/* implicit */long long int) (unsigned short)1);
        arr_23 [i_6] = ((/* implicit */unsigned long long int) (-2147483647 - 1));
        arr_24 [i_6] = (~(((((/* implicit */int) arr_12 [i_6])) - (((/* implicit */int) arr_12 [i_6])))));
        /* LoopSeq 3 */
        for (unsigned int i_7 = 2; i_7 < 17; i_7 += 2) 
        {
            var_26 -= ((/* implicit */short) (~(((9828015405253811902ULL) >> (((arr_20 [i_6] [i_7 + 1] [i_6]) + (3244184870032050067LL)))))));
            var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((((/* implicit */unsigned long long int) 408712588U)) == (((((((/* implicit */unsigned long long int) -544303894386993292LL)) != (0ULL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30459))) : (((((/* implicit */_Bool) 8618728668455739714ULL)) ? (9828015405253811901ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)55))))))))))));
        }
        for (long long int i_8 = 2; i_8 < 16; i_8 += 3) /* same iter space */
        {
            var_28 = ((/* implicit */unsigned long long int) ((min((arr_18 [i_8 + 2]), (arr_18 [i_8 + 3]))) < (((((/* implicit */_Bool) arr_18 [i_8 - 2])) ? (arr_18 [i_8 + 1]) : (arr_18 [i_8 + 1])))));
            var_29 = ((/* implicit */signed char) 8618728668455739714ULL);
            var_30 = ((/* implicit */unsigned int) ((((max((((/* implicit */unsigned long long int) (short)32767)), (0ULL))) * (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (short)-13849)), (arr_6 [i_8] [i_6])))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [(short)1] [i_8] [i_6]))))))));
            var_31 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [17U])) ? (((/* implicit */int) (unsigned short)55399)) : (((/* implicit */int) arr_0 [1U]))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (short)32767)), (var_4)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_6])) && (((/* implicit */_Bool) arr_12 [i_6])))))))), (max((499152533970016795ULL), (((/* implicit */unsigned long long int) var_6))))));
            var_32 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_17 [i_8] [i_8]))))));
        }
        for (long long int i_9 = 2; i_9 < 16; i_9 += 3) /* same iter space */
        {
            var_33 = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) ((132120576U) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)55)))))), (((((/* implicit */_Bool) (signed char)-56)) ? (6119835588479921551ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))))))) ^ (((/* implicit */unsigned long long int) 2432898521U))));
            var_34 = ((/* implicit */short) ((((((/* implicit */_Bool) max((arr_14 [i_9]), (((/* implicit */unsigned short) var_12))))) ? (((((/* implicit */int) var_12)) | (((/* implicit */int) (short)32767)))) : ((+(((/* implicit */int) (short)(-32767 - 1))))))) > (((/* implicit */int) ((unsigned short) (~(((/* implicit */int) var_9))))))));
        }
    }
    for (unsigned char i_10 = 0; i_10 < 19; i_10 += 2) 
    {
        var_35 = ((/* implicit */unsigned int) min((var_35), (((/* implicit */unsigned int) ((((((/* implicit */int) var_7)) + (2147483647))) >> (((((/* implicit */int) var_11)) - (3808))))))));
        /* LoopSeq 1 */
        for (unsigned int i_11 = 2; i_11 < 15; i_11 += 2) 
        {
            var_36 |= ((/* implicit */unsigned int) max((((((((/* implicit */_Bool) arr_29 [i_10] [i_11 + 2] [i_11])) && (((/* implicit */_Bool) arr_20 [i_10] [i_11] [i_10])))) ? (((((/* implicit */int) (unsigned short)27138)) << (((/* implicit */int) (unsigned short)0)))) : (((/* implicit */int) min((var_10), (((/* implicit */unsigned char) var_6))))))), (((/* implicit */int) arr_21 [i_11 + 4]))));
            var_37 -= ((/* implicit */short) arr_28 [i_10]);
        }
        arr_38 [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((8097725572118699138LL), (((/* implicit */long long int) (unsigned short)0))))) ? (((/* implicit */int) max((arr_16 [i_10] [i_10] [i_10]), (arr_16 [i_10] [i_10] [i_10])))) : (((/* implicit */int) min(((unsigned short)0), ((unsigned short)65535))))));
        arr_39 [i_10] [i_10] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_10] [i_10] [i_10])) ? (((/* implicit */int) (signed char)122)) : (((/* implicit */int) arr_11 [i_10] [i_10]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_26 [(unsigned char)6] [i_10] [i_10]), (((/* implicit */signed char) arr_25 [i_10] [i_10] [i_10])))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_10] [i_10]))) ^ (arr_32 [(unsigned char)0])))))));
    }
    var_38 = var_6;
    var_39 = ((/* implicit */short) max((((/* implicit */unsigned long long int) 1610612736U)), (14267922834861865520ULL)));
    var_40 = ((/* implicit */unsigned int) var_6);
    var_41 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) || (var_9)))) : (((/* implicit */int) var_11))))) | (max((((((/* implicit */long long int) ((/* implicit */int) var_4))) & (var_8))), (max((var_8), (((/* implicit */long long int) var_12))))))));
}
