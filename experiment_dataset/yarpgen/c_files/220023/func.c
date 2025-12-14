/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220023
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
    var_17 = ((/* implicit */long long int) min((var_17), (var_10)));
    var_18 |= ((/* implicit */unsigned char) ((long long int) (short)-25690));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */long long int) arr_2 [i_0] [i_0]);
                arr_5 [(unsigned short)8] &= ((/* implicit */short) (-(((/* implicit */int) var_1))));
                var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) ((short) arr_0 [i_0]))) ^ (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned char)36)) : (((/* implicit */int) var_12))))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (long long int i_2 = 0; i_2 < 22; i_2 += 2) 
    {
        var_20 = ((/* implicit */long long int) ((((((/* implicit */int) arr_7 [i_2] [i_2])) >= (((/* implicit */int) (short)27058)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_6 [i_2]) <= (min((8270593036425109291LL), (-6013631247477705364LL))))))) : (((unsigned long long int) ((arr_6 [i_2]) ^ (((/* implicit */long long int) ((/* implicit */int) var_11))))))));
        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_8 [i_2])) && (((/* implicit */_Bool) (short)-25690)))) ? (((/* implicit */int) arr_7 [i_2] [i_2])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2])))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) - (((((/* implicit */_Bool) (short)25690)) ? (((/* implicit */unsigned long long int) arr_6 [i_2])) : (var_6))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-25690))))))))));
        var_22 += (short)-25716;
    }
    /* vectorizable */
    for (long long int i_3 = 2; i_3 < 10; i_3 += 1) 
    {
        var_23 = ((((/* implicit */_Bool) 2978645179U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-25691))) : (-5401348732184980768LL));
        /* LoopNest 3 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                for (short i_6 = 1; i_6 < 7; i_6 += 2) 
                {
                    {
                        var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((var_4) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)43647))))) : (((((/* implicit */_Bool) arr_17 [i_6 - 1] [i_5] [i_3] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [(_Bool)1]))) : (var_5))))))));
                        /* LoopSeq 3 */
                        for (short i_7 = 0; i_7 < 11; i_7 += 3) 
                        {
                            arr_24 [i_3 + 1] [(short)8] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_5 - 1])) ? (((/* implicit */long long int) (~(arr_23 [i_5 - 1])))) : ((((_Bool)0) ? (arr_15 [i_3] [i_4] [i_3] [5LL]) : (((/* implicit */long long int) ((/* implicit */int) var_16)))))));
                            arr_25 [i_3] [i_4] [i_7] [i_3] [(unsigned char)0] &= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)28815))) <= (-6864819089678811016LL)));
                            arr_26 [i_4] [i_6] [i_5] [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_4] [i_7])) ? (arr_14 [(short)6] [(unsigned short)9]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_3 - 1])))));
                        }
                        for (unsigned char i_8 = 0; i_8 < 11; i_8 += 1) 
                        {
                            arr_30 [i_6] [i_6] [i_5] [i_4] [i_6] = ((/* implicit */_Bool) arr_12 [i_3 - 2] [i_5 - 1]);
                            var_25 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_19 [i_3 - 2] [i_8] [i_5]))));
                        }
                        for (long long int i_9 = 0; i_9 < 11; i_9 += 3) 
                        {
                            arr_33 [i_3] [i_6] [i_5] [(unsigned char)2] [i_9] = ((/* implicit */_Bool) ((long long int) var_2));
                            arr_34 [i_9] [i_6] [i_5 - 1] [i_6] [i_3] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (short)13602)))) ? (arr_12 [i_3 + 1] [i_5 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_4] [(unsigned char)10] [i_4])))));
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (long long int i_10 = 3; i_10 < 10; i_10 += 2) 
        {
            for (short i_11 = 0; i_11 < 11; i_11 += 2) 
            {
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    {
                        var_26 = ((((/* implicit */_Bool) var_14)) ? (arr_14 [i_3] [i_3 - 2]) : (((/* implicit */long long int) ((/* implicit */int) var_3))));
                        arr_43 [i_3] [i_10] [i_11] [i_12] [i_11] = (~(var_9));
                        arr_44 [i_3] [i_3 - 2] [(_Bool)1] [i_11] [(_Bool)1] = ((/* implicit */_Bool) ((var_4) ? (((((/* implicit */_Bool) -4824084155485356204LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)38769))) : (9223372036854775807LL))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_20 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])))))));
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((unsigned long long int) arr_9 [i_3 - 2])))));
    }
    for (unsigned int i_13 = 0; i_13 < 10; i_13 += 2) 
    {
        arr_47 [2LL] [i_13] |= ((/* implicit */short) (-(((/* implicit */int) (short)-25690))));
        arr_48 [i_13] [i_13] = ((/* implicit */long long int) min(((!(((/* implicit */_Bool) arr_32 [i_13] [i_13] [i_13] [i_13] [i_13])))), ((!(((/* implicit */_Bool) arr_18 [i_13]))))));
    }
    for (long long int i_14 = 0; i_14 < 20; i_14 += 4) 
    {
        arr_51 [i_14] [i_14] = ((/* implicit */unsigned long long int) arr_49 [i_14] [i_14]);
        var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((((((((/* implicit */int) var_14)) + (2147483647))) << (((arr_8 [i_14]) - (17555443749519341236ULL))))) & (((arr_50 [i_14] [(short)14]) ? (((/* implicit */int) arr_50 [i_14] [i_14])) : (((/* implicit */int) arr_50 [i_14] [i_14])))))))));
        var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((-4824084155485356204LL) + (9223372036854775807LL))) >> (((/* implicit */int) arr_7 [(unsigned char)7] [(unsigned char)7]))))) ? (((8942882533449173494ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_50 [i_14] [i_14])))))));
        var_30 = (~(((((/* implicit */long long int) ((/* implicit */int) min((var_0), (((/* implicit */short) var_15)))))) ^ (((((/* implicit */_Bool) (short)-25680)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-6111670596354810568LL))))));
    }
}
