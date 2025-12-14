/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216811
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
    var_12 = var_6;
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            var_13 = ((/* implicit */signed char) ((unsigned char) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0])))));
            var_14 = ((/* implicit */short) ((unsigned long long int) max((-1906589275107216078LL), (((/* implicit */long long int) 3264071675U)))));
            arr_5 [i_0] [i_1] [(short)18] = ((/* implicit */long long int) var_8);
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned char i_3 = 0; i_3 < 21; i_3 += 3) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (short i_5 = 0; i_5 < 21; i_5 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) min((max((((/* implicit */unsigned int) arr_13 [i_0] [i_2] [i_3] [(unsigned char)15] [i_4] [i_5] [i_5])), (3264071685U))), (((/* implicit */unsigned int) ((3264071675U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))))))))));
                            arr_14 [i_0] [i_0] [i_0] [i_0] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((int) arr_11 [i_2] [i_5])))));
                            var_16 = ((/* implicit */unsigned int) max((var_8), (((/* implicit */unsigned char) min(((_Bool)1), ((_Bool)0))))));
                            var_17 -= ((/* implicit */short) max((max((-1906589275107216078LL), (1906589275107216078LL))), (((/* implicit */long long int) -316305869))));
                        }
                    } 
                } 
            } 
            var_18 = ((/* implicit */short) (_Bool)0);
        }
        var_19 = ((/* implicit */unsigned short) var_2);
    }
    for (long long int i_6 = 0; i_6 < 20; i_6 += 3) 
    {
        /* LoopSeq 1 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_20 [i_7] [i_7] [i_6] = ((/* implicit */unsigned long long int) min((-1906589275107216078LL), (((/* implicit */long long int) (_Bool)1))));
            arr_21 [i_6] [i_6] [i_7] = ((((/* implicit */_Bool) (short)11316)) && (((_Bool) arr_1 [i_7])));
            var_20 = ((/* implicit */unsigned char) ((min(((_Bool)1), ((_Bool)0))) || (((/* implicit */_Bool) min((1906589275107216058LL), (((/* implicit */long long int) (unsigned char)33)))))));
            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_9 [i_6]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_6] [i_7])))))) || (((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [19U] [i_7])))))));
            var_22 |= ((/* implicit */short) min((((/* implicit */unsigned int) ((arr_17 [i_6] [i_7]) == (arr_17 [i_6] [i_7])))), (min((((/* implicit */unsigned int) var_2)), (arr_17 [i_6] [i_6])))));
        }
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (arr_9 [i_6])))));
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 1) 
        {
            for (signed char i_9 = 0; i_9 < 20; i_9 += 4) 
            {
                {
                    var_24 = ((/* implicit */short) arr_4 [i_8] [i_8]);
                    var_25 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_8)))) || (((/* implicit */_Bool) ((arr_0 [i_6] [i_8]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_6]))))))));
                    var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((/* implicit */_Bool) min((arr_3 [i_6] [i_6]), (((/* implicit */long long int) var_11))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) : (((arr_3 [i_6] [i_8]) / (arr_3 [i_8] [i_8]))))))));
                    var_27 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_8] [i_9])) ? (arr_12 [(unsigned char)19] [i_6] [i_8] [i_9] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)126)))))))) ? (((/* implicit */unsigned long long int) -1906589275107216059LL)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) / (min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_26 [i_6] [i_9]))))));
                }
            } 
        } 
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            for (unsigned long long int i_12 = 0; i_12 < 20; i_12 += 4) 
            {
                {
                    arr_35 [i_10] &= ((/* implicit */short) var_7);
                    arr_36 [i_10] = ((/* implicit */short) (!(((/* implicit */_Bool) -3824748188110115843LL))));
                    var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) ((long long int) ((((/* implicit */long long int) ((((/* implicit */int) var_11)) - (((/* implicit */int) var_11))))) * (arr_3 [i_10] [i_10])))))));
                    var_29 = ((unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_12] [i_11]))) : (min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_25 [i_10] [i_11] [(_Bool)1])))));
                    var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_16 [i_12] [i_12])) ? (((/* implicit */int) arr_16 [i_12] [i_11])) : (((/* implicit */int) arr_16 [i_12] [i_11])))))))));
                }
            } 
        } 
        var_31 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((arr_3 [i_10] [i_10]), (((/* implicit */long long int) (_Bool)1)))))));
    }
    for (unsigned char i_13 = 0; i_13 < 24; i_13 += 1) 
    {
        arr_40 [i_13] = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) arr_37 [i_13] [i_13]))) > (((/* implicit */int) ((((/* implicit */int) arr_37 [i_13] [i_13])) != (((/* implicit */int) arr_37 [i_13] [i_13])))))));
        var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) max((((/* implicit */unsigned char) min((arr_39 [i_13]), (var_5)))), (var_3))))));
        arr_41 [i_13] = ((/* implicit */unsigned int) var_10);
        /* LoopSeq 1 */
        for (unsigned char i_14 = 2; i_14 < 23; i_14 += 4) 
        {
            arr_44 [i_13] [i_14] [i_13] = ((/* implicit */unsigned long long int) min((max(((-(((/* implicit */int) (_Bool)0)))), (((((/* implicit */int) var_2)) | (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) arr_42 [i_13] [i_13]))));
            arr_45 [i_13] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_39 [i_13]))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (var_1))))));
            /* LoopNest 2 */
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    {
                        var_33 = ((/* implicit */unsigned char) min((((/* implicit */int) var_7)), (max((((/* implicit */int) var_3)), (((((/* implicit */int) var_0)) | (((/* implicit */int) var_8))))))));
                        arr_50 [i_14] [i_14] [i_13] [i_16] [i_14] = (i_13 % 2 == 0) ? (((/* implicit */unsigned int) (((+(((/* implicit */int) var_6)))) >> (((((/* implicit */int) arr_48 [i_13] [i_14 + 1])) - (8857)))))) : (((/* implicit */unsigned int) (((+(((/* implicit */int) var_6)))) >> (((((((/* implicit */int) arr_48 [i_13] [i_14 + 1])) - (8857))) - (23799))))));
                        var_34 = ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) ((1906589275107216077LL) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))), (var_2))))) - (max((-1906589275107216078LL), (((/* implicit */long long int) (unsigned short)126)))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_17 = 2; i_17 < 23; i_17 += 4) 
                        {
                            var_35 = ((/* implicit */short) min(((-(((/* implicit */int) (_Bool)1)))), (((arr_37 [i_17 - 2] [i_14 + 1]) ? (((/* implicit */int) arr_42 [i_17 - 1] [i_14 - 1])) : (((/* implicit */int) arr_37 [i_17 + 1] [i_14 - 1]))))));
                            arr_53 [i_13] [i_13] [i_13] [i_16] [i_16] = ((/* implicit */long long int) ((((/* implicit */int) max((var_6), (((/* implicit */short) ((unsigned char) var_7)))))) < (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_49 [i_13] [(short)6] [(short)6] [i_16])))))));
                        }
                    }
                } 
            } 
            var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_47 [i_13] [i_13] [i_13]))) : (arr_47 [i_13] [i_14] [i_14])));
        }
    }
    var_37 = ((/* implicit */short) ((((/* implicit */int) var_6)) - (((/* implicit */int) (_Bool)1))));
}
