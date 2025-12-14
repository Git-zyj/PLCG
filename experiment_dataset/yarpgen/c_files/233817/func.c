/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233817
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
    for (signed char i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0 - 1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_0 [i_0 + 2])))) | ((-(var_8)))));
        arr_3 [i_0] = ((/* implicit */unsigned short) max((arr_1 [i_0]), (((/* implicit */unsigned char) ((_Bool) arr_1 [i_0 - 1])))));
        var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) (+(((((/* implicit */_Bool) var_5)) ? (arr_0 [i_0 + 2]) : (102215614U))))))));
    }
    for (unsigned int i_1 = 3; i_1 < 17; i_1 += 3) 
    {
        var_14 = ((/* implicit */unsigned short) max((min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_5 [i_1]))))), (max((((/* implicit */unsigned int) arr_5 [i_1])), (var_8))))), (max((arr_6 [i_1]), ((+(arr_6 [i_1 + 3])))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            var_15 = ((/* implicit */int) ((short) 580343968U));
            /* LoopSeq 1 */
            for (signed char i_3 = 0; i_3 < 20; i_3 += 2) 
            {
                var_16 = ((/* implicit */unsigned int) ((int) var_4));
                arr_13 [(unsigned char)7] [i_2] [(short)19] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_7 [i_1 + 2] [i_2]))));
            }
            /* LoopNest 2 */
            for (unsigned short i_4 = 0; i_4 < 20; i_4 += 3) 
            {
                for (unsigned int i_5 = 3; i_5 < 16; i_5 += 3) 
                {
                    {
                        var_17 = ((/* implicit */long long int) (-(((/* implicit */int) arr_17 [i_1 - 3] [i_1 - 3] [i_1] [i_1 + 1] [i_1 - 2] [1]))));
                        var_18 ^= ((/* implicit */unsigned char) ((unsigned int) var_7));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned int i_6 = 3; i_6 < 19; i_6 += 2) 
        {
            arr_20 [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (2596540031U)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9))));
            var_19 = ((/* implicit */unsigned short) ((580343968U) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_1 + 1] [i_6] [i_6 + 1] [(signed char)7] [i_1] [i_6])))));
        }
        for (long long int i_7 = 0; i_7 < 20; i_7 += 1) 
        {
            var_20 = ((/* implicit */int) arr_6 [6U]);
            arr_24 [i_7] [i_7] = ((/* implicit */unsigned long long int) ((unsigned int) (~(arr_11 [i_1] [i_1 - 2] [i_1 - 2] [i_7]))));
            arr_25 [i_7] [i_7] [(unsigned char)3] = ((/* implicit */signed char) max((((/* implicit */int) ((var_8) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))), (((int) -8))));
        }
        arr_26 [(_Bool)1] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned int) var_11))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_23 [3] [(unsigned short)2])))) : (((unsigned int) var_6))))), (((((/* implicit */_Bool) min((((/* implicit */long long int) arr_10 [(signed char)0] [(signed char)0])), (var_7)))) ? (((((/* implicit */_Bool) var_9)) ? (var_3) : (((/* implicit */long long int) arr_6 [i_1])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (var_8) : (580343968U))))))));
        /* LoopNest 2 */
        for (unsigned int i_8 = 3; i_8 < 17; i_8 += 1) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                {
                    arr_33 [i_1] [i_9] [i_1] = ((/* implicit */int) (~(((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [16LL] [i_8 - 1])) ? (((/* implicit */int) arr_30 [i_9] [i_9])) : (((/* implicit */int) arr_27 [i_1] [i_1 + 2] [i_1 + 2]))))) | (arr_8 [i_8 - 2])))));
                    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((long long int) ((((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) -2199023255552LL)))) ? (min((15403965612207254560ULL), (((/* implicit */unsigned long long int) 3714623332U)))) : (((/* implicit */unsigned long long int) min((3950461236U), (((/* implicit */unsigned int) arr_16 [12ULL] [i_1] [(_Bool)1] [i_8] [i_8] [10])))))))))));
                }
            } 
        } 
        arr_34 [i_1] [i_1 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 580343968U)) ? (((/* implicit */int) arr_9 [(unsigned char)14])) : (((/* implicit */int) var_11))))))) || (((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))))));
    }
    for (unsigned short i_10 = 0; i_10 < 18; i_10 += 3) 
    {
        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)0)))))));
        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) arr_17 [i_10] [3ULL] [i_10] [(unsigned char)14] [i_10] [i_10]))));
        arr_38 [i_10] [i_10] = (~(((/* implicit */int) (unsigned char)65)));
    }
    var_24 = ((/* implicit */int) var_4);
    /* LoopSeq 3 */
    for (int i_11 = 0; i_11 < 20; i_11 += 2) /* same iter space */
    {
        var_25 = ((/* implicit */_Bool) max((min((((((/* implicit */_Bool) var_4)) ? (arr_29 [i_11] [i_11] [i_11] [(_Bool)1]) : (2994778742U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_11] [i_11] [i_11])) ? (((/* implicit */int) (unsigned short)17)) : (((/* implicit */int) var_9))))))), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) 2994778742U)) ? (var_10) : (((/* implicit */int) var_12)))), (((/* implicit */int) ((unsigned short) var_11))))))));
        var_26 = ((/* implicit */int) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned int) var_11)), (var_2))), (((/* implicit */unsigned int) (signed char)45))))) ? (max((((((/* implicit */_Bool) 67783358)) ? (2994778742U) : (arr_31 [i_11] [i_11] [i_11]))), (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))))) : (1300188553U)));
        var_27 = ((/* implicit */int) arr_23 [i_11] [(unsigned short)5]);
        arr_43 [i_11] = ((/* implicit */_Bool) min((((/* implicit */int) ((min((67783358), (67783358))) < (((/* implicit */int) max(((unsigned char)44), (((/* implicit */unsigned char) var_11)))))))), (max(((~(((/* implicit */int) var_6)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))));
    }
    for (int i_12 = 0; i_12 < 20; i_12 += 2) /* same iter space */
    {
        arr_46 [i_12] [i_12] = ((/* implicit */unsigned long long int) min(((unsigned short)21030), (((/* implicit */unsigned short) ((arr_4 [i_12]) || (((/* implicit */_Bool) ((long long int) arr_45 [i_12]))))))));
        arr_47 [i_12] [(short)3] = ((/* implicit */unsigned int) (-2147483647 - 1));
        arr_48 [19U] [19U] = ((/* implicit */_Bool) min((((/* implicit */long long int) 2147483647)), (((((_Bool) arr_39 [i_12])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (((arr_23 [i_12] [i_12]) | (((/* implicit */long long int) arr_18 [i_12] [i_12]))))))));
        arr_49 [(unsigned short)11] [i_12] = ((/* implicit */_Bool) (+((~(arr_23 [i_12] [i_12])))));
    }
    /* vectorizable */
    for (int i_13 = 1; i_13 < 10; i_13 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_14 = 1; i_14 < 9; i_14 += 3) 
        {
            arr_56 [i_13] = (_Bool)1;
            arr_57 [i_14 + 3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_14] [(signed char)16] [i_14 + 2] [i_14])) || (((/* implicit */_Bool) arr_16 [i_14 + 3] [i_14 + 2] [i_14] [i_14] [i_14] [14U]))));
        }
        for (signed char i_15 = 1; i_15 < 8; i_15 += 3) 
        {
            arr_60 [i_13] [i_15 - 1] &= ((signed char) -1);
            var_28 = ((((/* implicit */_Bool) 34359738367LL)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) >= (var_8))))));
        }
        /* LoopNest 2 */
        for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
        {
            for (int i_17 = 1; i_17 < 11; i_17 += 4) 
            {
                {
                    var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) arr_27 [i_13] [i_13] [i_17]))));
                    var_30 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_27 [i_13 + 2] [15LL] [17]))));
                    var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) arr_1 [i_13 + 1]))));
                    var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) arr_8 [i_13 + 1])) : (var_5))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_18 = 0; i_18 < 12; i_18 += 1) 
                    {
                        arr_71 [i_17] [i_17] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_65 [i_17]))));
                        var_33 = ((/* implicit */unsigned int) var_3);
                        var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) -600443946))));
                        var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) ((7643960075365251227ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))))));
                        var_36 = ((/* implicit */int) min((var_36), (((/* implicit */int) ((unsigned int) ((_Bool) var_5))))));
                    }
                }
            } 
        } 
        var_37 = ((/* implicit */unsigned short) max((var_37), (((/* implicit */unsigned short) var_3))));
    }
}
