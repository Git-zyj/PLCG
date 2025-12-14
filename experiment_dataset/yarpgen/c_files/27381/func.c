/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27381
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
    for (short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_11 = ((/* implicit */_Bool) (+((((((~(((/* implicit */int) (_Bool)1)))) + (2147483647))) << (((/* implicit */int) (_Bool)0))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 14; i_4 += 1) 
                        {
                            {
                                arr_13 [(unsigned short)12] [i_0] [i_0] [(_Bool)1] [i_0] [i_3] = ((/* implicit */unsigned long long int) max((var_6), ((_Bool)1)));
                                var_12 = ((/* implicit */int) max((var_12), (max((((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_0)))) - (((/* implicit */int) ((_Bool) var_7))))), (((((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [(signed char)12] [(_Bool)1])) && (((/* implicit */_Bool) var_2))))) >> (((long long int) arr_2 [i_4 + 1]))))))));
                                var_13 = ((/* implicit */unsigned short) (~((+(((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)(-32767 - 1)))))))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */_Bool) ((unsigned short) ((unsigned char) max((((/* implicit */unsigned char) arr_12 [i_0] [i_1] [i_2] [i_1] [i_2])), ((unsigned char)119)))));
                    var_15 &= ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) - ((-(((/* implicit */int) (short)26612))))));
                    arr_14 [i_0] [i_2] = (+(((/* implicit */int) var_6)));
                }
            } 
        } 
        var_16 &= arr_12 [(_Bool)1] [(_Bool)1] [i_0] [i_0] [i_0];
    }
    /* LoopNest 2 */
    for (long long int i_5 = 1; i_5 < 19; i_5 += 4) 
    {
        for (unsigned char i_6 = 3; i_6 < 21; i_6 += 4) 
        {
            {
                var_17 |= ((/* implicit */long long int) ((unsigned short) min((arr_17 [i_5 - 1]), (arr_17 [i_5 + 2]))));
                var_18 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_6 - 3] [i_6 + 1] [i_6 - 3]))) + (2234895755489305276ULL))) & (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_19 [i_5 + 2] [i_5 + 1])), (max((-1634717573), (var_5))))))));
                var_19 |= ((((_Bool) ((_Bool) (unsigned char)255))) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_5] [i_5] [i_5 + 3]))) : ((+((~(var_3))))));
                var_20 |= ((/* implicit */_Bool) ((((/* implicit */int) max(((_Bool)0), ((_Bool)1)))) - (((/* implicit */int) max((((/* implicit */unsigned char) arr_17 [i_6])), (max(((unsigned char)242), (((/* implicit */unsigned char) (_Bool)1)))))))));
                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1128618768)) || (arr_19 [i_5 - 1] [i_6])))), (min((2234895755489305276ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))) ? (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_5] [i_6 - 2] [i_5]))) : (var_3))) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_22 |= ((/* implicit */unsigned char) ((unsigned short) (!(((/* implicit */_Bool) arr_11 [i_7] [i_7] [i_7] [i_7] [i_7])))));
        var_23 = ((/* implicit */_Bool) (~((((_Bool)1) ? (18446744073709551609ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
    }
    /* vectorizable */
    for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 1) 
    {
        var_24 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_6))));
        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (unsigned short)6857)))) <= (var_8)));
        /* LoopNest 2 */
        for (unsigned long long int i_9 = 4; i_9 < 15; i_9 += 1) 
        {
            for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
            {
                {
                    arr_30 [i_8] [i_8] [(signed char)13] [i_8] = arr_27 [i_9 - 4] [i_8];
                    var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) var_1))));
                }
            } 
        } 
        arr_31 [i_8] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_17 [i_8])) : (((/* implicit */int) (_Bool)1)))) << (((((/* implicit */int) arr_19 [i_8] [i_8])) << (((/* implicit */int) (_Bool)1))))));
        var_27 = ((/* implicit */signed char) var_7);
    }
    for (unsigned long long int i_11 = 0; i_11 < 10; i_11 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            for (unsigned short i_13 = 1; i_13 < 8; i_13 += 4) 
            {
                {
                    arr_38 [i_11] [i_12] [i_12] = arr_26 [i_12];
                    var_28 = ((/* implicit */signed char) min((var_28), (((signed char) (!(((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), (var_7)))))))));
                    var_29 &= ((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) (_Bool)0)), (((((/* implicit */_Bool) (unsigned char)0)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)3))))))), (((/* implicit */unsigned long long int) ((_Bool) (unsigned short)57092)))));
                    arr_39 [i_11] [i_12] [i_12] [i_13 + 1] = ((/* implicit */unsigned long long int) ((unsigned char) ((long long int) (_Bool)0)));
                }
            } 
        } 
        var_30 = ((/* implicit */_Bool) (unsigned char)108);
        var_31 &= ((/* implicit */_Bool) ((unsigned long long int) max((((/* implicit */unsigned long long int) var_1)), (min((arr_16 [i_11]), (((/* implicit */unsigned long long int) var_2)))))));
    }
    for (long long int i_14 = 0; i_14 < 21; i_14 += 2) 
    {
        var_32 = ((/* implicit */signed char) -2147483643);
        var_33 = (!(((/* implicit */_Bool) min((((long long int) arr_16 [i_14])), (((/* implicit */long long int) arr_17 [i_14]))))));
        arr_42 [i_14] [i_14] = ((/* implicit */_Bool) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) ((_Bool) -1639080153)))));
        /* LoopSeq 1 */
        for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
        {
            arr_46 [i_15] [(_Bool)1] [i_15] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (unsigned char)53)))) && (((/* implicit */_Bool) -1109773157))));
            var_34 = ((/* implicit */unsigned char) ((int) min((((/* implicit */unsigned long long int) var_5)), ((-(arr_16 [(unsigned short)16]))))));
        }
    }
}
