/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39328
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
    for (int i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 8; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    {
                        arr_9 [i_0] [i_0] [i_0] [i_3] [i_1] [i_1] = ((/* implicit */unsigned int) ((((712287324U) - (((/* implicit */unsigned int) ((/* implicit */int) ((712287324U) >= (3582679981U))))))) > (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                        var_18 += min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_0 + 1] [8U]))))), (((((/* implicit */_Bool) arr_1 [i_2] [6U])) ? (arr_7 [i_1]) : (arr_7 [(unsigned char)8]))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 1) 
        {
            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-104))) : (1594822115U)));
            arr_13 [i_0 - 2] [i_0] [i_4] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) 2358383816U)), (arr_1 [i_0] [i_0])));
            var_20 &= ((/* implicit */signed char) ((((/* implicit */int) var_12)) & (((/* implicit */int) max((arr_3 [i_0] [i_0]), (((/* implicit */unsigned short) arr_10 [(_Bool)1])))))));
            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_7 [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_17))), (((((/* implicit */_Bool) arr_7 [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_7 [i_4])))))) ? (((arr_0 [i_0 - 2]) * (((/* implicit */unsigned long long int) ((unsigned int) 0U))))) : (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [i_0]))))), (((unsigned long long int) var_14)))))))));
        }
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 3) 
        {
            for (unsigned long long int i_6 = 3; i_6 < 7; i_6 += 3) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (-(2700145181U)))), (((arr_0 [i_0 - 1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_0] [i_5])))))));
                    var_23 = ((/* implicit */signed char) (_Bool)1);
                    var_24 = ((/* implicit */signed char) ((unsigned int) var_4));
                    /* LoopSeq 4 */
                    for (long long int i_7 = 2; i_7 < 9; i_7 += 2) 
                    {
                        var_25 = ((/* implicit */short) (-((+(((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))))));
                        arr_23 [i_7 - 1] [i_6 - 1] [i_7] [i_0] [1ULL] [i_7 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_6 - 3] [i_6 + 1] [i_6 + 2] [i_6 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0]))) : (((arr_7 [i_7]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) ? (max((((/* implicit */int) (unsigned short)42161)), (-1910170429))) : (((/* implicit */int) ((_Bool) max((((/* implicit */unsigned long long int) arr_17 [i_0] [i_5] [i_5] [i_6])), (var_5)))))));
                    }
                    for (short i_8 = 0; i_8 < 10; i_8 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_9 = 0; i_9 < 10; i_9 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 10740803965547204287ULL)) ? (2004950196U) : (2290017100U))), (arr_18 [i_0] [i_6] [i_6 + 1] [i_8])));
                            arr_30 [i_0] [i_9] [4LL] [4LL] [i_0] [i_9] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)1240))) - (arr_20 [i_9] [i_5] [i_6] [i_0])))) ? (arr_7 [i_5]) : (((unsigned long long int) arr_16 [i_0] [i_0] [i_6]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_10 [i_0])) == (min((((/* implicit */int) arr_24 [(_Bool)1] [(_Bool)1] [8LL] [i_8] [i_8])), (arr_28 [6LL] [i_0]))))))) : (max((((/* implicit */unsigned int) min((arr_11 [i_5] [5ULL]), (arr_11 [i_0] [i_0])))), (arr_8 [i_0 - 1] [i_0 - 3] [i_0 - 1] [i_6 + 3]))));
                            var_27 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 5806816384746149049ULL)))))));
                            arr_31 [i_0] [i_8] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_0] [i_0])) != (((/* implicit */int) arr_22 [i_0] [i_5] [i_6] [i_8] [i_6]))));
                        }
                        arr_32 [i_0] [i_5] [i_0] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15634869439584426057ULL)) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned long long int) var_2))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [0U] [(unsigned char)3] [i_6 + 2] [i_8]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0] [i_8])))))))));
                        var_28 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (+(0U)))) <= (arr_1 [i_0] [i_0])));
                        var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_0 - 3] [i_0] [i_0 + 1] [i_0])) ? (((/* implicit */int) arr_17 [i_5] [i_5] [i_5] [i_5])) : (((/* implicit */int) min(((signed char)120), (((/* implicit */signed char) (_Bool)1)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [(unsigned short)1]))) : (var_0)));
                    }
                    for (unsigned char i_10 = 0; i_10 < 10; i_10 += 1) 
                    {
                        var_30 = ((/* implicit */unsigned int) max((arr_28 [i_0 + 1] [i_0]), (((/* implicit */int) (unsigned char)194))));
                        arr_35 [i_0] [i_6] [i_5] [i_0] = ((/* implicit */short) (-(((/* implicit */int) arr_34 [i_6] [i_5] [i_0] [i_6] [i_5] [8]))));
                    }
                    for (unsigned char i_11 = 0; i_11 < 10; i_11 += 2) 
                    {
                        arr_40 [i_6] [i_6] [i_0] [i_0] [(signed char)3] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) (short)-30725))));
                        var_31 |= ((((/* implicit */_Bool) arr_12 [i_11] [i_5])) ? (((min((var_11), (4128378217065235373ULL))) << (((/* implicit */int) max((arr_15 [(_Bool)1] [i_5] [i_6 + 1]), (var_14)))))) : (((/* implicit */unsigned long long int) (+((-(arr_1 [i_6] [i_11])))))));
                    }
                    var_32 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)208))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned char i_12 = 0; i_12 < 10; i_12 += 3) 
        {
            var_33 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_10)))))));
            var_34 = ((/* implicit */unsigned int) ((unsigned long long int) ((min((arr_41 [i_12]), (var_1))) ? ((~(var_5))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-66))))))));
            var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [i_0 - 2] [i_0 - 2] [i_12] [i_12])) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [(signed char)7] [i_12]))) : (2147221504LL)));
        }
    }
    for (unsigned long long int i_13 = 0; i_13 < 22; i_13 += 2) 
    {
        var_36 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)48)) ? (((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned long long int) 709913650U)) : (17165818360828017157ULL))) : (((((/* implicit */_Bool) var_3)) ? (var_11) : (((/* implicit */unsigned long long int) 3520685638U))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned long long int) arr_43 [18LL] [(signed char)15]))))) ? (((/* implicit */int) arr_43 [i_13] [i_13])) : ((-(((/* implicit */int) arr_43 [i_13] [i_13]))))))) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (3175986264U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_13] [i_13])))))), (((((/* implicit */_Bool) 2577493284U)) ? (arr_44 [i_13] [i_13]) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))))));
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 22; i_14 += 2) 
        {
            for (unsigned int i_15 = 4; i_15 < 20; i_15 += 3) 
            {
                {
                    arr_49 [i_14] [i_14] [i_14] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned long long int) (unsigned short)3885))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_13]))) : (max((((/* implicit */unsigned int) (_Bool)1)), (((268435455U) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_16 = 1; i_16 < 20; i_16 += 1) 
                    {
                        for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
                        {
                            {
                                var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) min((((/* implicit */int) arr_51 [i_13] [i_14] [i_14] [(short)6])), (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (signed char)-106)))))))));
                                var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) max((min((arr_54 [i_13] [i_14] [i_15] [i_16 + 2] [i_16] [i_16] [i_17]), (((/* implicit */unsigned int) arr_43 [i_15] [i_13])))), (((((/* implicit */_Bool) var_0)) ? (16383U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32743)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1229350265)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_12))))) ? (min((7090149118299251613ULL), (((/* implicit */unsigned long long int) arr_48 [i_13] [i_16])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_13] [(_Bool)1])))))));
                                var_39 = ((/* implicit */unsigned short) arr_52 [i_13] [i_17 - 1] [i_16] [i_16 + 2]);
                                var_40 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) (unsigned short)63594)) ? ((~(63U))) : (8388607U))));
                                var_41 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) -5430245454656908342LL)))) > (((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_50 [i_13] [i_14] [i_15] [i_16]))))))));
                            }
                        } 
                    } 
                    var_42 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (arr_46 [i_13] [i_13] [i_13]) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 2700145154U)) ? (arr_50 [i_15] [i_15] [i_14] [(unsigned short)14]) : (((/* implicit */long long int) ((/* implicit */int) (short)26703))))) ^ (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)255))))))))));
                    var_43 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_51 [i_13] [i_13] [i_15] [i_13]))) / (var_5)))) ? (((/* implicit */unsigned long long int) (~(arr_44 [i_13] [(_Bool)1])))) : (arr_46 [i_15] [i_15 - 4] [i_15 - 4])))));
                }
            } 
        } 
        var_44 = (~(max((1717474013U), (((/* implicit */unsigned int) (unsigned short)11465)))));
    }
    for (unsigned long long int i_18 = 0; i_18 < 24; i_18 += 1) 
    {
        var_45 = ((/* implicit */unsigned long long int) min((var_45), (((/* implicit */unsigned long long int) arr_55 [i_18] [i_18]))));
        var_46 += ((/* implicit */unsigned char) (~(((max((((/* implicit */unsigned long long int) var_13)), (var_0))) ^ ((~(var_11)))))));
    }
    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
    {
        var_47 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_54 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19] [i_19])) ? (arr_54 [i_19] [i_19] [i_19] [(_Bool)1] [i_19] [5ULL] [i_19]) : (arr_54 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19] [i_19]))) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)72)))));
        var_48 -= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) 0)), (((((/* implicit */_Bool) 12639927688963402576ULL)) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_57 [(unsigned char)2] [i_19]))) | (var_8))) : (((((/* implicit */_Bool) (unsigned short)18078)) ? (arr_54 [i_19] [i_19] [8ULL] [i_19] [i_19] [i_19] [i_19]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))));
        var_49 -= ((/* implicit */unsigned short) ((long long int) (~((~(1839571947U))))));
    }
    var_50 = ((/* implicit */unsigned long long int) (!(var_14)));
    var_51 = ((/* implicit */unsigned int) min((var_51), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1054782166U)) ? (((/* implicit */int) (short)15427)) : (((/* implicit */int) (signed char)-95)))))));
    var_52 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (short)-15427)), (4294967295U)));
    var_53 ^= ((/* implicit */int) max(((unsigned short)48627), (((/* implicit */unsigned short) (short)16285))));
}
