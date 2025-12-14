/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190138
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        var_10 += ((/* implicit */unsigned short) 4095U);
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_2 = 1; i_2 < 14; i_2 += 2) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_3 = 3; i_3 < 12; i_3 += 2) 
                {
                    arr_12 [i_3] [1U] [i_3] [i_3 + 1] [1U] [9U] = ((/* implicit */unsigned int) ((unsigned short) ((unsigned short) (unsigned short)48722)));
                    arr_13 [i_0] [i_0] = ((unsigned short) arr_5 [i_2] [i_2 - 1] [i_0]);
                    arr_14 [3U] [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) (~(3156197545U)));
                    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_1])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2 + 1] [i_2])))));
                    var_12 = ((/* implicit */unsigned int) min((var_12), (arr_5 [i_3] [i_2] [i_0 - 2])));
                }
                for (unsigned short i_4 = 1; i_4 < 12; i_4 += 4) 
                {
                    arr_18 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 3156197522U)) ? (3880745283U) : (2671573396U))), (1782332379U)))) ? (((/* implicit */int) max((((var_9) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)48730))))), ((!(((/* implicit */_Bool) var_2))))))) : ((-(((/* implicit */int) arr_8 [i_4] [i_1] [i_1] [14U]))))));
                    arr_19 [i_4] [i_4] [i_4] [i_0] = max((((((arr_3 [14U] [(unsigned short)11] [i_4]) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62872))))) - (min((((/* implicit */unsigned int) arr_9 [i_0 - 2] [i_0 - 2] [i_2] [i_0 - 2])), (2551973377U))))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_15 [i_2 + 1] [i_2 + 1] [i_4 + 2] [i_4]))))));
                    arr_20 [i_0] [i_0] [i_4] [i_0] [i_4 + 3] [i_0] = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned int) arr_15 [i_0 + 2] [i_1] [i_0 + 2] [i_4])), ((-(var_2))))) > (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_4])))));
                    var_13 = ((/* implicit */unsigned short) ((((unsigned int) var_0)) - (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((1228299161U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1))))))))));
                }
                var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((unsigned int) (unsigned short)48722)) + (((unsigned int) 1097455191U))))) || ((!(((/* implicit */_Bool) arr_10 [i_0 + 2] [i_0 + 2] [i_0 + 2]))))));
            }
            /* LoopSeq 1 */
            for (unsigned int i_5 = 1; i_5 < 14; i_5 += 1) 
            {
                var_15 = ((/* implicit */unsigned int) min((var_15), (((min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)17310))) > (var_7)))), (max((var_2), (((/* implicit */unsigned int) arr_23 [i_5] [i_1] [i_0])))))) | (((unsigned int) (unsigned short)17310))))));
                arr_24 [i_0] [i_5] [(unsigned short)8] [i_5 - 1] = ((/* implicit */unsigned int) min((((/* implicit */int) ((min((var_6), (((/* implicit */unsigned int) arr_9 [i_0 + 3] [i_0] [i_1] [i_5])))) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0 + 3] [i_1] [(unsigned short)10] [i_0 + 3])))))), ((-(((/* implicit */int) (unsigned short)22356))))));
            }
        }
        for (unsigned int i_6 = 3; i_6 < 14; i_6 += 2) 
        {
            arr_28 [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)3), (((unsigned short) arr_16 [i_0] [i_0] [i_0] [i_0])))))) & (var_7)));
            var_16 = ((/* implicit */unsigned short) max((3068527239U), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 1743260808U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_3))) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_7 = 0; i_7 < 15; i_7 += 2) 
            {
                var_17 = ((/* implicit */unsigned int) min((var_17), (((unsigned int) arr_7 [i_6] [i_0 + 3] [i_0]))));
                var_18 += ((/* implicit */unsigned int) ((unsigned short) (~(3108207138U))));
            }
            /* LoopSeq 4 */
            for (unsigned int i_8 = 0; i_8 < 15; i_8 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned int i_9 = 0; i_9 < 15; i_9 += 4) 
                {
                    for (unsigned short i_10 = 2; i_10 < 14; i_10 += 3) 
                    {
                        {
                            arr_38 [i_6] [i_6] [i_6] [i_6] [i_6] [i_10 + 1] [i_10 + 1] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 1225456341U))))) > (((((/* implicit */int) var_4)) | (((/* implicit */int) arr_23 [i_0 - 1] [i_0] [i_0 + 1])))))))));
                            var_19 = ((/* implicit */unsigned int) min(((unsigned short)49874), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_30 [(unsigned short)5] [(unsigned short)5] [i_8]))) > ((+(arr_11 [i_0] [i_8] [i_8] [i_8]))))))));
                            var_20 = ((/* implicit */unsigned int) min((var_20), (((((((/* implicit */_Bool) ((unsigned short) var_4))) ? (((((/* implicit */_Bool) 2492413011U)) ? (arr_3 [i_0] [i_0 - 1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31344))))) : (min((((/* implicit */unsigned int) arr_31 [i_10] [10U] [10U])), (3156197560U))))) & (((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_0 + 2] [i_6 + 1] [i_8] [i_9])) & ((+(((/* implicit */int) (unsigned short)9917)))))))))));
                            var_21 ^= ((/* implicit */unsigned int) (unsigned short)5191);
                        }
                    } 
                } 
                var_22 |= max((max((((var_7) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)36000))))), (((/* implicit */unsigned int) (unsigned short)44662)))), (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)45048))) > (arr_27 [(unsigned short)10] [(unsigned short)10]))))) & (min((1U), (((/* implicit */unsigned int) arr_2 [i_6 - 3])))))));
            }
            for (unsigned short i_11 = 2; i_11 < 12; i_11 += 1) /* same iter space */
            {
                arr_43 [(unsigned short)7] [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) arr_39 [i_6] [i_6]))) ? (min((arr_39 [i_6] [i_6]), (((/* implicit */unsigned int) arr_35 [i_11] [i_0] [i_11 - 1] [i_6 + 1] [i_0] [i_0 - 1])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_6] [i_6] [i_0 - 1] [i_6 + 1] [i_6] [i_0 - 1])))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_12 = 4; i_12 < 12; i_12 += 3) /* same iter space */
                {
                    arr_46 [i_6] [i_6] = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */int) (unsigned short)3072)) + (((/* implicit */int) var_8)))));
                    var_23 = ((/* implicit */unsigned int) (unsigned short)3072);
                    var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_33 [i_0] [i_12 + 1] [i_11] [i_12])))))));
                    var_25 = ((arr_7 [i_12 - 1] [i_6 - 1] [i_0 - 2]) | (arr_7 [i_12 + 2] [i_6 - 3] [i_0 + 1]));
                }
                for (unsigned int i_13 = 4; i_13 < 12; i_13 += 3) /* same iter space */
                {
                    var_26 = min((((/* implicit */unsigned int) (unsigned short)21594)), (var_7));
                    arr_51 [i_6] [i_6] [i_6] [i_0] = ((/* implicit */unsigned int) min((((unsigned short) arr_32 [i_13 + 1] [i_0 - 1] [i_11 + 3] [i_6 - 3])), ((unsigned short)14775)));
                }
                for (unsigned int i_14 = 4; i_14 < 12; i_14 += 3) /* same iter space */
                {
                    arr_55 [i_0 - 2] [i_6] [i_6] [i_11 - 2] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */int) ((3019407826U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0 - 2] [i_0 + 1] [i_0] [i_14 + 3])))))) & (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) (unsigned short)36754)))))));
                    var_27 = 101281008U;
                    var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((((/* implicit */int) max((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18955))) > (3987893835U))), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)54445))) <= (arr_27 [i_6] [(unsigned short)6])))))) | (((/* implicit */int) ((unsigned short) (unsigned short)7708))))))));
                }
                var_29 = ((/* implicit */unsigned int) arr_54 [i_0] [i_6 + 1] [i_6 + 1] [i_11] [12U]);
            }
            for (unsigned short i_15 = 2; i_15 < 12; i_15 += 1) /* same iter space */
            {
                var_30 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((unsigned short) min((arr_4 [i_0] [i_0]), ((unsigned short)13701))))), (((((/* implicit */_Bool) (-(3122801262U)))) ? (2147483647U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19955)))))));
                /* LoopNest 2 */
                for (unsigned short i_16 = 2; i_16 < 13; i_16 += 2) 
                {
                    for (unsigned short i_17 = 0; i_17 < 15; i_17 += 2) 
                    {
                        {
                            arr_62 [i_17] [i_6] [i_15] [i_15 - 1] [i_6] [i_6] [i_0] = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned int) arr_10 [i_0] [i_16] [i_17])), (max((246654930U), (arr_50 [(unsigned short)1] [(unsigned short)1]))))) & (1286482136U)));
                            arr_63 [i_6] [i_6] = arr_2 [i_0];
                            var_31 = ((/* implicit */unsigned short) max((max((arr_34 [i_0] [i_6 - 1] [i_15 + 1] [i_16 + 2] [i_17]), (arr_34 [i_0] [i_6] [(unsigned short)12] [i_17] [i_17]))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_0 [i_0]))))), (((unsigned short) var_5)))))));
                            var_32 = ((unsigned int) min((arr_27 [i_15] [i_0 + 2]), ((+(arr_39 [i_0] [i_6])))));
                            var_33 = ((/* implicit */unsigned int) min((var_33), (max((min((arr_34 [i_0] [i_0] [i_0] [i_16] [i_16 - 1]), (((/* implicit */unsigned int) arr_47 [i_0] [i_0 + 3] [i_0 + 3] [i_6 + 1] [i_6 + 1] [i_15 + 1])))), (((/* implicit */unsigned int) ((unsigned short) (!(((/* implicit */_Bool) 4294967295U))))))))));
                        }
                    } 
                } 
                arr_64 [i_0] [i_6] [i_6] [i_6] = ((arr_27 [i_0] [i_6 - 2]) & (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_0 + 1] [i_6 - 3] [i_6 + 1])))))));
                var_34 ^= ((/* implicit */unsigned int) ((33292288U) > (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)54445)))))));
            }
            for (unsigned short i_18 = 2; i_18 < 12; i_18 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned short i_19 = 0; i_19 < 15; i_19 += 3) 
                {
                    for (unsigned short i_20 = 1; i_20 < 11; i_20 += 4) 
                    {
                        {
                            arr_72 [i_6] [i_18] [i_18] = ((/* implicit */unsigned short) ((min((arr_41 [i_6] [i_6]), (1U))) + (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)54874)))))));
                            var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) ((unsigned int) (~(4048312341U)))))));
                            arr_73 [i_0] [11U] [11U] [i_19] [i_6] = max((arr_29 [i_20 + 4] [i_6] [i_18] [i_18 + 2]), ((+(arr_29 [i_20 + 1] [(unsigned short)12] [i_18] [i_18 + 3]))));
                            arr_74 [i_0] [i_6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) ((var_0) > (2288368479U)))), (((unsigned short) arr_69 [i_6] [i_6])))))));
                            var_36 = ((/* implicit */unsigned short) arr_41 [i_6] [i_6]);
                        }
                    } 
                } 
                arr_75 [i_6] = ((/* implicit */unsigned int) (unsigned short)65535);
                var_37 = ((/* implicit */unsigned int) min((var_37), (min((((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) 425349755U)) || (((/* implicit */_Bool) (unsigned short)0)))))))), (min((min((((/* implicit */unsigned int) (unsigned short)54146)), (2497518711U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)28672)) || (((/* implicit */_Bool) 2434902009U)))))))))));
                var_38 = ((/* implicit */unsigned short) min((var_38), (((/* implicit */unsigned short) min((((((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_18 + 3] [i_0] [i_18 + 3] [i_18 + 3] [i_0] [i_18]))) - (arr_39 [i_0 - 1] [i_0]))), (((/* implicit */unsigned int) arr_31 [i_18] [i_6 + 1] [i_0 - 2])))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_21 = 4; i_21 < 14; i_21 += 1) 
                {
                    arr_78 [i_0] [(unsigned short)11] [i_6] [(unsigned short)8] = ((/* implicit */unsigned int) (((~(((/* implicit */int) arr_10 [i_21 + 1] [i_18] [i_0])))) | (((/* implicit */int) ((((/* implicit */int) (unsigned short)43125)) > (((/* implicit */int) (unsigned short)17133)))))));
                    var_39 += ((/* implicit */unsigned short) var_1);
                    arr_79 [i_0] [11U] [i_18 - 2] [i_6] = ((/* implicit */unsigned int) ((unsigned short) 4294967282U));
                    var_40 = arr_56 [i_6] [i_6] [i_6] [i_21 - 2];
                }
                for (unsigned int i_22 = 0; i_22 < 15; i_22 += 3) 
                {
                    arr_82 [i_6] [0U] [(unsigned short)11] [i_18] [(unsigned short)11] [i_6] = 0U;
                    var_41 = 1797448584U;
                }
            }
        }
    }
    for (unsigned short i_23 = 0; i_23 < 15; i_23 += 2) 
    {
        arr_86 [i_23] [i_23] = 3U;
        arr_87 [i_23] [i_23] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((2497518685U), (453974251U))))));
    }
    var_42 = ((unsigned short) max((((/* implicit */unsigned int) (unsigned short)6852)), (1275559455U)));
}
