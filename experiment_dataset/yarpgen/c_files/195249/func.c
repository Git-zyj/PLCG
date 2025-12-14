/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195249
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 3; i_1 < 20; i_1 += 1) 
        {
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) var_11);
            var_13 -= ((/* implicit */_Bool) (((-(((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) var_0)))))) * ((~(((/* implicit */int) arr_1 [i_1]))))));
        }
        for (unsigned short i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            arr_9 [i_0] [i_2] = ((/* implicit */_Bool) max((((((/* implicit */int) arr_4 [i_2])) | (((/* implicit */int) arr_4 [i_2])))), (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) arr_5 [i_0] [i_0] [i_2]))))))));
            /* LoopNest 3 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned short i_4 = 0; i_4 < 21; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_14 -= ((/* implicit */signed char) max(((-(((/* implicit */int) var_7)))), ((+((+(((/* implicit */int) var_10))))))));
                            var_15 |= ((/* implicit */_Bool) ((((((/* implicit */int) (!(arr_2 [i_3])))) > (((/* implicit */int) var_4)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (-(arr_7 [i_2])))) || (((/* implicit */_Bool) (~(((/* implicit */int) var_12))))))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (min((((/* implicit */unsigned int) (_Bool)1)), (var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)203), (((/* implicit */unsigned char) var_12))))))))));
                            var_16 = ((/* implicit */unsigned short) (_Bool)1);
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((_Bool) var_5))), (((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2] [i_2] [i_2])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (((((_Bool) var_6)) ? (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)5))) | (var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_4])))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 4 */
            /* vectorizable */
            for (long long int i_6 = 0; i_6 < 21; i_6 += 4) 
            {
                var_18 = ((/* implicit */_Bool) ((signed char) (-(((/* implicit */int) var_4)))));
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)112)) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */int) (signed char)56)) >= (((/* implicit */int) arr_11 [i_0])))))));
            }
            for (unsigned short i_7 = 0; i_7 < 21; i_7 += 3) 
            {
                var_20 = ((/* implicit */_Bool) arr_14 [i_0] [i_2] [i_2] [i_2] [i_2] [i_7]);
                var_21 = ((/* implicit */unsigned short) max((var_21), ((unsigned short)50797)));
            }
            for (signed char i_8 = 0; i_8 < 21; i_8 += 1) 
            {
                arr_27 [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1896463504731735358LL)) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_18 [i_8] [i_8])), ((+(var_11))))))));
                arr_28 [(unsigned short)16] |= ((/* implicit */unsigned int) min((((/* implicit */int) ((unsigned short) (!(var_2))))), ((-(((var_0) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6))))))));
                /* LoopNest 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (unsigned short i_10 = 0; i_10 < 21; i_10 += 3) 
                    {
                        {
                            arr_37 [i_0] [(short)6] [i_0] [i_0] |= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_0] [i_2] [i_8] [(signed char)4])) >> (((((/* implicit */int) var_1)) - (52574)))))) ? (((/* implicit */int) ((unsigned short) (unsigned short)40531))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)-107)) : (((/* implicit */int) var_4))))))));
                            arr_38 [i_0] [i_8] [i_0] [i_9] [i_10] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_0] [i_2] [i_8]))))) << (((/* implicit */int) (!((_Bool)1))))));
                        }
                    } 
                } 
                arr_39 [i_8] [i_8] [i_8] = ((/* implicit */short) min((((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_9)), (arr_4 [i_2])))), (((((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) arr_23 [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_8] [i_8] [i_2] [i_0]))) : ((~(var_11)))))));
            }
            for (signed char i_11 = 2; i_11 < 20; i_11 += 3) 
            {
                arr_44 [i_0] [i_0] [(unsigned short)0] &= ((/* implicit */signed char) (~(min((((/* implicit */unsigned int) max((var_4), (((/* implicit */unsigned short) var_10))))), (((((/* implicit */_Bool) var_8)) ? (arr_7 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))));
                var_22 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-120)) ? (441521917U) : ((~(var_8)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_0])) / (((/* implicit */int) var_10)))))))) : (((/* implicit */int) arr_22 [i_0] [i_0] [i_0]))));
            }
            var_23 -= ((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned short) var_7)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_17 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2])))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_42 [i_2] [i_0] [i_0]))))));
        }
        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((signed char)120), ((signed char)-120)))) ? (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (var_7)))) : (((/* implicit */int) var_3))))) ? (arr_33 [(_Bool)1] [i_0] [i_0] [i_0] [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_5)), (arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))))));
        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((max((((((/* implicit */int) var_2)) << (((/* implicit */int) arr_31 [i_0] [i_0] [i_0] [(unsigned char)16] [i_0])))), (((/* implicit */int) min((arr_11 [i_0]), (((/* implicit */signed char) var_0))))))) >> (((arr_36 [i_0] [i_0] [(_Bool)1] [i_0]) >> (((((/* implicit */int) arr_43 [(unsigned short)6] [(unsigned short)6] [i_0])) - (57))))))))));
    }
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned short) ((max((((/* implicit */int) (_Bool)1)), ((+(((/* implicit */int) (_Bool)1)))))) > (((min((var_9), ((_Bool)1))) ? ((~(((/* implicit */int) arr_30 [i_12])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))));
        arr_47 [i_12] = ((/* implicit */unsigned char) max((min((((arr_34 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12]) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_12] [i_12] [i_12]))))), (((/* implicit */unsigned int) max((((/* implicit */short) (_Bool)1)), (arr_18 [i_12] [i_12])))))), (((max((((/* implicit */unsigned int) var_4)), (var_11))) & (((/* implicit */unsigned int) (~(((/* implicit */int) arr_34 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12])))))))));
        arr_48 [(_Bool)1] |= ((/* implicit */unsigned short) arr_33 [i_12] [i_12] [i_12] [i_12] [(unsigned short)2]);
        arr_49 [i_12] [i_12] = ((/* implicit */short) max((((((/* implicit */_Bool) max((((/* implicit */short) var_9)), (arr_5 [i_12] [i_12] [i_12])))) ? (min((((/* implicit */long long int) (_Bool)1)), (4640802157025963073LL))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_9)), (arr_4 [i_12]))))))), (((/* implicit */long long int) min((max((1424848639U), (((/* implicit */unsigned int) arr_18 [i_12] [i_12])))), (((/* implicit */unsigned int) (unsigned short)15932)))))));
    }
    /* vectorizable */
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
    {
        arr_52 [2U] [i_13] &= ((/* implicit */unsigned short) var_11);
        arr_53 [i_13] [i_13] = ((/* implicit */unsigned short) ((((((/* implicit */int) var_5)) | (((/* implicit */int) var_10)))) * (((/* implicit */int) var_9))));
        arr_54 [12U] &= ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_13])) / (((/* implicit */int) arr_19 [i_13] [i_13] [i_13] [(_Bool)1]))));
        arr_55 [6U] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_1))))) : (arr_36 [i_13] [i_13] [14U] [i_13])));
    }
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
    {
        arr_58 [i_14] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14])) ? (((/* implicit */int) min((arr_35 [i_14] [i_14] [i_14] [i_14] [14U]), (var_0)))) : (((/* implicit */int) (((_Bool)1) && (arr_35 [i_14] [i_14] [i_14] [i_14] [(_Bool)1]))))));
        arr_59 [i_14] = ((/* implicit */signed char) min((((var_12) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_50 [i_14])))), (((/* implicit */int) ((((/* implicit */int) arr_57 [i_14])) >= (((/* implicit */int) arr_57 [i_14])))))));
        /* LoopSeq 3 */
        for (unsigned int i_15 = 2; i_15 < 15; i_15 += 4) /* same iter space */
        {
            var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((((_Bool) ((var_8) <= (arr_26 [i_15] [i_15] [i_15] [i_15])))) ? (((/* implicit */int) var_1)) : (min(((~(((/* implicit */int) var_12)))), ((~(((/* implicit */int) (signed char)-85)))))))))));
            var_28 &= ((/* implicit */unsigned int) ((((_Bool) arr_21 [i_14] [i_15 + 3] [i_15 + 3] [i_14])) ? (((/* implicit */int) max((arr_21 [i_14] [i_15 + 3] [i_14] [i_15]), (arr_21 [i_14] [i_15 - 1] [i_14] [i_15])))) : (((((/* implicit */_Bool) arr_21 [i_14] [i_15 + 2] [i_15] [i_15])) ? (((/* implicit */int) arr_21 [i_14] [i_15 - 2] [i_14] [i_15])) : (((/* implicit */int) var_2))))));
        }
        for (unsigned int i_16 = 2; i_16 < 15; i_16 += 4) /* same iter space */
        {
            var_29 += ((/* implicit */unsigned short) min(((-(((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)6298)))))), (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_26 [i_16] [i_16] [i_16] [i_16])) ? (((/* implicit */int) (signed char)84)) : (((/* implicit */int) arr_31 [i_14] [i_14] [i_14] [i_16] [i_14]))))))));
            arr_66 [i_16 - 1] [i_14] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_51 [i_14] [i_16]))));
        }
        for (unsigned int i_17 = 2; i_17 < 15; i_17 += 4) /* same iter space */
        {
            arr_69 [i_14] [i_17] = ((/* implicit */signed char) (((((~(((((/* implicit */_Bool) arr_5 [i_14] [i_14] [i_14])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_5 [i_14] [i_17] [i_17])))))) + (2147483647))) << (((((((((/* implicit */_Bool) (unsigned short)59238)) ? (((/* implicit */int) arr_11 [i_17 + 2])) : (((/* implicit */int) arr_12 [i_17 + 2])))) + (102))) - (2)))));
            var_30 = ((/* implicit */_Bool) max((var_30), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), (arr_63 [i_14] [i_14] [i_14])))) ? ((+(((/* implicit */int) arr_4 [i_17])))) : (((/* implicit */int) var_0)))))))));
        }
    }
    var_31 |= ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1)))) - (((/* implicit */int) ((((/* implicit */int) (signed char)-15)) <= (((/* implicit */int) (unsigned short)46912))))))) + (((/* implicit */int) ((((/* implicit */int) var_4)) != (((/* implicit */int) min((var_3), (((/* implicit */unsigned char) var_2))))))))));
}
