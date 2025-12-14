/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24805
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 4; i_0 < 8; i_0 += 3) 
    {
        var_18 ^= min(((~(((arr_1 [0] [0]) ? (((/* implicit */int) arr_1 [(unsigned char)8] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0])))))), ((~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_16)) : (1387325971))))));
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_19 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 + 4] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0 - 2])) : (((/* implicit */int) arr_1 [i_0] [i_1]))))), (((arr_1 [i_0] [i_0 - 4]) ? (((((/* implicit */_Bool) arr_4 [7LL] [i_0] [i_0])) ? (arr_4 [i_0 - 1] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) ((-1743237805) * (((/* implicit */int) arr_0 [i_0] [i_1])))))))));
            var_20 = ((/* implicit */unsigned short) (-(((int) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) arr_3 [i_0] [i_1])))))));
            arr_5 [i_0] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) (~(arr_4 [i_0] [i_0] [i_1])))))));
        }
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 12; i_2 += 3) 
        {
            var_21 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_0 + 4] [i_0 + 4] [i_0 - 4]))));
            var_22 ^= ((/* implicit */unsigned int) (~(((var_5) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0 - 2] [i_0]))))));
        }
        for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 4) 
        {
            var_23 = ((/* implicit */unsigned char) arr_7 [i_3] [(unsigned short)8]);
            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_0 + 2] [i_0 + 3] [i_0]))))) ? (((((/* implicit */_Bool) (~(arr_8 [i_0])))) ? (max((((/* implicit */unsigned long long int) arr_0 [i_0] [9ULL])), (arr_8 [i_0]))) : (arr_4 [i_0 + 4] [i_0] [i_0]))) : (((unsigned long long int) var_8))));
            var_25 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)127)) > (((/* implicit */int) (unsigned char)60)))))) : (arr_8 [i_0])))));
            var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((((arr_8 [i_3]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))) * (((arr_8 [i_3]) ^ (arr_8 [i_3]))))))));
            arr_10 [i_0] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) min((arr_7 [i_0] [i_3]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) -2099235299)))))))) - ((((!((_Bool)1))) ? (((((/* implicit */int) arr_6 [i_3])) << (((/* implicit */int) (unsigned char)20)))) : ((~(((/* implicit */int) arr_9 [i_0] [i_3]))))))));
        }
        arr_11 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_0] [i_0]))) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (!((!(((/* implicit */_Bool) var_1)))))))));
        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) arr_1 [10ULL] [i_0]))));
        /* LoopNest 3 */
        for (unsigned char i_4 = 2; i_4 < 10; i_4 += 1) 
        {
            for (unsigned long long int i_5 = 3; i_5 < 9; i_5 += 4) 
            {
                for (int i_6 = 1; i_6 < 11; i_6 += 3) 
                {
                    {
                        var_28 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_20 [i_0] [i_0] [i_0] [i_0 + 3])) - (arr_4 [i_0 - 3] [i_0] [(unsigned char)9])))) ? (((/* implicit */int) ((((/* implicit */int) arr_2 [i_4 + 2] [i_5] [i_5])) >= (((/* implicit */int) arr_15 [i_0 + 1] [i_0 + 1] [i_5]))))) : (((/* implicit */int) arr_19 [i_4 - 1] [i_5 + 2] [i_0])))) <= (((/* implicit */int) max((arr_12 [i_0] [i_4] [i_0 - 4]), (arr_12 [i_0] [i_4 - 2] [i_0 + 3]))))));
                        var_29 = ((/* implicit */_Bool) ((int) max((((/* implicit */long long int) max((arr_13 [i_0 + 3] [i_0 - 4]), (((/* implicit */unsigned int) 2099235298))))), (min((arr_16 [i_6] [i_0] [i_0] [i_0]), (((/* implicit */long long int) var_16)))))));
                        var_30 = (((!(((/* implicit */_Bool) arr_13 [i_0 - 4] [i_4 + 2])))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_15 [i_0 - 1] [i_0 - 1] [i_0]))))) : (((((/* implicit */unsigned long long int) ((var_2) ^ (((/* implicit */long long int) ((/* implicit */int) var_17)))))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (17332345235746986504ULL))))));
                        var_31 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_0 - 3] [i_6 + 1] [i_0]))));
                        arr_21 [i_0] [i_0] [i_6] [i_6 + 1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) 1743237804)) - (((((/* implicit */_Bool) (+(((/* implicit */int) arr_14 [i_5] [i_5] [i_5]))))) ? (arr_16 [i_5 + 3] [i_0] [i_6 + 1] [i_6 + 1]) : ((+(arr_17 [i_0] [(_Bool)1] [i_6 - 1])))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_7 = 0; i_7 < 23; i_7 += 4) 
    {
        var_32 = ((((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) arr_23 [i_7] [i_7])))))) ? (((((arr_22 [i_7]) > (((/* implicit */int) arr_23 [i_7] [i_7])))) ? (((/* implicit */long long int) (+(arr_22 [i_7])))) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) arr_22 [i_7])) : (var_12))))) : (((/* implicit */long long int) ((/* implicit */int) ((1743237782) != (((((/* implicit */_Bool) arr_22 [i_7])) ? (((/* implicit */int) arr_23 [16U] [i_7])) : (((/* implicit */int) arr_23 [i_7] [i_7])))))))));
        arr_24 [(_Bool)1] [i_7] = ((/* implicit */unsigned char) max((((unsigned long long int) arr_22 [i_7])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_7])) ? (((((/* implicit */_Bool) arr_22 [i_7])) ? (((/* implicit */int) arr_23 [i_7] [i_7])) : (((/* implicit */int) arr_23 [i_7] [i_7])))) : (((((/* implicit */int) arr_23 [i_7] [i_7])) - (((/* implicit */int) var_9)))))))));
        /* LoopNest 2 */
        for (unsigned short i_8 = 0; i_8 < 23; i_8 += 4) 
        {
            for (unsigned long long int i_9 = 1; i_9 < 21; i_9 += 3) 
            {
                {
                    arr_33 [i_7] [i_7] [i_9] = ((/* implicit */int) ((unsigned short) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (-462450438))));
                    var_33 &= ((/* implicit */unsigned long long int) max(((-(((/* implicit */int) (unsigned char)77)))), (max((((((/* implicit */int) arr_23 [5ULL] [(unsigned short)19])) / (((/* implicit */int) arr_30 [i_8] [i_8] [i_9 - 1] [(_Bool)1])))), (min((((/* implicit */int) arr_27 [i_8])), (-1743237815)))))));
                    var_34 = ((/* implicit */unsigned long long int) min((((arr_30 [i_9 - 1] [i_9] [i_9 - 1] [i_9 - 1]) ? (((/* implicit */int) arr_30 [i_9 + 2] [i_9 + 2] [i_9 - 1] [i_9 + 1])) : (((/* implicit */int) arr_30 [i_9 + 2] [i_9 + 1] [i_9 + 1] [i_9 + 2])))), (((/* implicit */int) max((arr_30 [i_9 + 2] [i_9] [i_9 + 2] [i_9 - 1]), (arr_30 [i_9 + 1] [i_9 + 2] [i_9 + 1] [i_9 - 1]))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 1; i_10 < 22; i_10 += 3) 
                    {
                        for (unsigned short i_11 = 0; i_11 < 23; i_11 += 3) 
                        {
                            {
                                var_35 = ((/* implicit */unsigned char) arr_27 [i_7]);
                                var_36 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+((-(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (((-(arr_22 [i_7]))) <= (((((/* implicit */int) (unsigned short)28038)) % (((/* implicit */int) arr_26 [i_7] [i_7])))))))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -1743237815)) - (10465595386769239836ULL)))) ? (((818802899U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [9U] [i_10] [i_9] [i_8] [i_7]))))) : (((/* implicit */unsigned int) ((1689527844) / (((/* implicit */int) (unsigned char)255)))))))));
                                var_37 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_5))));
                                var_38 = ((/* implicit */long long int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) arr_27 [i_8])), (arr_35 [i_7] [i_8] [i_7] [(unsigned short)5]))))) & ((~(arr_31 [i_7] [i_8] [i_11] [i_10]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_23 [i_7] [i_7]))))) ? (((/* implicit */int) arr_26 [i_10] [i_8])) : (((-1870945776) ^ (((/* implicit */int) (_Bool)1)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
    {
        arr_44 [i_12] [i_12] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_43 [i_12 + 1])) ? (((/* implicit */int) arr_42 [i_12 + 1] [i_12 + 1])) : (((/* implicit */int) arr_42 [i_12] [i_12 + 1]))))));
        var_39 = ((/* implicit */_Bool) ((unsigned short) (!((_Bool)0))));
        var_40 = ((_Bool) ((short) (!(((/* implicit */_Bool) 4482338576118972666LL)))));
    }
    /* vectorizable */
    for (unsigned short i_13 = 0; i_13 < 20; i_13 += 3) 
    {
        var_41 = ((/* implicit */_Bool) ((((/* implicit */int) arr_25 [i_13] [i_13])) >> (((/* implicit */int) ((_Bool) var_1)))));
        var_42 = ((/* implicit */short) arr_22 [(short)4]);
        var_43 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_29 [16] [i_13] [i_13] [i_13])))) ? (((((/* implicit */_Bool) arr_31 [i_13] [i_13] [i_13] [i_13])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_13]))) : (18131764866869327252ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_13] [i_13])))));
        var_44 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_13])) || (((((/* implicit */_Bool) arr_22 [i_13])) && (var_10)))));
        var_45 = ((/* implicit */short) ((arr_22 [i_13]) / (((((/* implicit */int) var_15)) * (var_14)))));
    }
    var_46 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */int) var_6)) / (((/* implicit */int) var_9))))))) != (((((/* implicit */_Bool) max((((/* implicit */long long int) var_1)), (var_12)))) ? (min((((/* implicit */long long int) var_5)), (var_2))) : (((/* implicit */long long int) min((((/* implicit */int) var_9)), (-2032424826))))))));
    var_47 = ((/* implicit */unsigned short) ((unsigned long long int) min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_12))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_3))))))));
}
