/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34377
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
    var_13 = ((/* implicit */int) var_10);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) != (arr_4 [i_0] [i_1])))) <= (((/* implicit */int) var_1))))) << ((((~(min((((/* implicit */long long int) var_4)), (var_0))))) + (34LL)))));
                    /* LoopSeq 4 */
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 1) /* same iter space */
                    {
                        /* LoopSeq 4 */
                        for (signed char i_4 = 3; i_4 < 17; i_4 += 2) /* same iter space */
                        {
                            arr_13 [i_0] [i_3] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_10))) & (-9132202381162000486LL)))))) ^ (max((var_0), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_3])) && (((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_2] [i_2] [i_4] [i_2] [i_4 - 2])))))))));
                            var_14 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_10 [(_Bool)1] [i_1] [i_1] [(_Bool)1] [(_Bool)1])) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [6]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_4 + 1] [i_0] [i_0] [i_0]))) : (min((-9132202381162000486LL), (-9132202381162000464LL)))))));
                            arr_14 [15] [i_1] [i_0] [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((_Bool) (((_Bool)0) ? (-1232800084) : (-1232800071)))))));
                        }
                        for (signed char i_5 = 3; i_5 < 17; i_5 += 2) /* same iter space */
                        {
                            var_15 = ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)56))) | (9132202381162000455LL));
                            var_16 *= ((/* implicit */_Bool) ((((/* implicit */int) max((arr_10 [i_5 + 1] [i_1] [i_2] [i_5 + 1] [i_1]), (arr_10 [i_5 + 1] [i_2] [i_5 + 1] [i_3] [i_2])))) & (((/* implicit */int) var_1))));
                        }
                        for (signed char i_6 = 3; i_6 < 17; i_6 += 2) /* same iter space */
                        {
                            var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_15 [i_0] [i_6 + 1] [i_2] [i_6 + 1]), (((/* implicit */unsigned short) var_4))))) && (((_Bool) arr_15 [i_0] [i_2] [i_3] [i_6 - 2]))));
                            var_18 -= (~(((/* implicit */int) ((((/* implicit */int) min((arr_9 [i_1] [i_2] [i_3] [i_6]), (((/* implicit */unsigned char) var_6))))) != ((~(((/* implicit */int) (_Bool)1))))))));
                            var_19 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_4))));
                            arr_19 [i_0] [i_1] [i_1] = ((/* implicit */short) (~(min((((/* implicit */long long int) arr_18 [i_0] [i_1] [i_6 - 1] [i_6 - 1] [i_6])), (var_0)))));
                        }
                        for (signed char i_7 = 3; i_7 < 17; i_7 += 2) /* same iter space */
                        {
                            var_20 = ((/* implicit */short) 4135562780U);
                            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) arr_12 [i_0] [i_1] [i_2] [i_3] [i_3] [i_7] [i_1]))));
                            arr_22 [i_0] [(unsigned char)14] [i_0] [i_0] [i_7 - 2] = ((/* implicit */long long int) var_5);
                        }
                        var_22 = ((/* implicit */unsigned int) var_11);
                    }
                    for (unsigned char i_8 = 0; i_8 < 18; i_8 += 1) /* same iter space */
                    {
                        arr_25 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0] [3])) | (((/* implicit */int) arr_3 [1LL] [i_1])))) < (((/* implicit */int) ((((/* implicit */long long int) -1232800061)) == (9132202381162000485LL))))))) - (((/* implicit */int) var_12))));
                        arr_26 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) min((((int) var_2)), (max((arr_18 [i_0] [i_1] [i_2] [i_8] [12LL]), (arr_18 [i_0] [i_0] [i_1] [i_2] [i_8])))));
                    }
                    for (unsigned char i_9 = 0; i_9 < 18; i_9 += 1) /* same iter space */
                    {
                        var_23 = ((/* implicit */_Bool) min((var_23), (((_Bool) min((arr_28 [i_0] [i_0] [i_9]), (((/* implicit */int) arr_15 [i_9] [i_1] [i_1] [i_0])))))));
                        var_24 = ((/* implicit */_Bool) (~(((/* implicit */int) var_1))));
                        var_25 = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) arr_5 [i_0])) | (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_3))))) | (((/* implicit */long long int) arr_29 [i_0] [i_1] [i_0] [i_9]))));
                        var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((((/* implicit */_Bool) ((arr_3 [i_0] [i_1]) ? (((/* implicit */int) arr_3 [i_1] [(short)1])) : (((/* implicit */int) var_8))))) ? (((unsigned int) (short)-12321)) : (((/* implicit */unsigned int) ((arr_3 [i_0] [i_1]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4))))))))));
                    }
                    for (unsigned int i_10 = 0; i_10 < 18; i_10 += 4) 
                    {
                        var_27 = ((/* implicit */unsigned int) min((var_27), (max((((/* implicit */unsigned int) arr_11 [i_0] [i_1] [i_2] [i_10] [i_0])), ((-(4135562780U)))))));
                        var_28 = (unsigned char)0;
                        var_29 -= ((/* implicit */long long int) arr_11 [i_0] [i_2] [i_0] [i_0] [i_0]);
                    }
                }
            } 
        } 
    } 
    var_30 = ((/* implicit */unsigned char) 9132202381162000485LL);
    var_31 = ((/* implicit */unsigned int) var_6);
    /* LoopSeq 1 */
    for (unsigned char i_11 = 2; i_11 < 23; i_11 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_12 = 2; i_12 < 22; i_12 += 4) 
        {
            for (unsigned int i_13 = 1; i_13 < 24; i_13 += 4) 
            {
                {
                    var_32 = ((/* implicit */int) ((unsigned int) ((arr_34 [i_11]) | (((/* implicit */int) var_4)))));
                    /* LoopNest 2 */
                    for (long long int i_14 = 1; i_14 < 21; i_14 += 3) 
                    {
                        for (int i_15 = 4; i_15 < 24; i_15 += 4) 
                        {
                            {
                                var_33 += ((/* implicit */unsigned short) (~(((long long int) arr_45 [i_13 - 1] [i_13] [i_13] [i_12] [i_12]))));
                                arr_47 [i_11] [i_12] = ((/* implicit */int) arr_41 [i_11 - 1] [i_15 + 1]);
                                var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) ((unsigned char) min((((/* implicit */unsigned int) 438226749)), (177038016U)))))));
                            }
                        } 
                    } 
                    arr_48 [i_11] [i_11] [i_11] = min(((~(((/* implicit */int) arr_37 [i_11] [i_11])))), (((/* implicit */int) min((((/* implicit */unsigned char) arr_37 [i_11] [i_11])), (var_9)))));
                    arr_49 [i_11] [i_11 - 2] [i_12 + 2] [i_13 - 1] = ((/* implicit */long long int) arr_46 [i_11 - 1] [i_11 - 1] [i_12] [i_12] [i_11]);
                }
            } 
        } 
        var_35 -= ((/* implicit */int) ((signed char) arr_34 [(signed char)16]));
        /* LoopNest 2 */
        for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
        {
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                {
                    var_36 = ((/* implicit */unsigned int) (-2147483647 - 1));
                    arr_56 [i_11] [i_16] [i_11] = ((/* implicit */int) ((unsigned short) (~(((/* implicit */int) arr_41 [i_16] [i_17])))));
                    arr_57 [i_11 - 1] [i_11] = ((/* implicit */_Bool) arr_50 [i_16 + 1] [i_11]);
                    /* LoopSeq 4 */
                    for (signed char i_18 = 0; i_18 < 25; i_18 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_19 = 2; i_19 < 23; i_19 += 4) 
                        {
                            var_37 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_16 + 1] [i_11]))) - (((((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_19 + 2] [i_11 - 2]))) | (arr_62 [i_11] [i_19 + 2] [i_11])))));
                            arr_63 [i_11] [i_16 + 1] [i_19] [i_18] [i_19] |= ((((/* implicit */long long int) ((unsigned int) 7251535872461319974LL))) < (max((((/* implicit */long long int) arr_34 [i_19])), (var_0))));
                            arr_64 [i_11] [i_18] [(unsigned short)5] [i_18] = ((/* implicit */signed char) arr_58 [i_16 + 1] [i_11 - 2] [(_Bool)1]);
                        }
                        for (unsigned int i_20 = 0; i_20 < 25; i_20 += 2) 
                        {
                            arr_68 [i_11] [i_11] [i_16 + 1] [i_11] [i_11] [i_16 + 1] [i_20] = ((/* implicit */long long int) ((4135562780U) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)122)))));
                            var_38 = ((/* implicit */long long int) var_5);
                            var_39 = ((/* implicit */unsigned int) arr_39 [i_11] [i_16 + 1] [i_11]);
                        }
                        var_40 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_58 [i_11 + 1] [i_16] [i_16 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_67 [i_18] [i_17] [i_11] [i_11] [i_11]))) <= (arr_65 [i_11 + 2] [i_11] [i_16 + 1] [(unsigned char)18] [i_18]))))) : (((arr_58 [i_17] [i_16 + 1] [i_11 + 1]) | (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))), (arr_44 [i_16] [i_11] [i_16 + 1] [i_16])));
                    }
                    /* vectorizable */
                    for (signed char i_21 = 0; i_21 < 25; i_21 += 1) /* same iter space */
                    {
                        var_41 += ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_6))) <= (arr_45 [i_17] [2U] [i_16 + 1] [2U] [i_11 - 1])));
                        /* LoopSeq 1 */
                        for (_Bool i_22 = 0; i_22 < 0; i_22 += 1) 
                        {
                            arr_76 [i_11] [i_22] = ((/* implicit */unsigned long long int) -1648350947);
                            var_42 = ((/* implicit */short) min((var_42), (((/* implicit */short) ((((-1547228537) + (2147483647))) << (((-9132202381162000486LL) + (9132202381162000487LL))))))));
                        }
                    }
                    for (signed char i_23 = 0; i_23 < 25; i_23 += 1) /* same iter space */
                    {
                        var_43 = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_70 [i_11] [i_16] [i_11 - 2] [i_11] [i_11 + 2] [i_11]), (((/* implicit */long long int) min((((/* implicit */int) arr_75 [(unsigned short)0] [(unsigned short)0] [i_17] [i_17])), (var_11))))))) ? (((arr_51 [i_11] [i_16 + 1]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_11 - 1] [i_16 + 1]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) / (((/* implicit */int) var_12))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) != (var_0)))) : (((/* implicit */int) ((unsigned short) (unsigned short)53050))))))));
                        var_44 *= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) * (max(((~(3426616554U))), (((/* implicit */unsigned int) arr_41 [i_16] [i_17]))))));
                        var_45 = ((/* implicit */unsigned int) -1232800071);
                    }
                    for (signed char i_24 = 0; i_24 < 25; i_24 += 1) /* same iter space */
                    {
                        var_46 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_66 [i_16] [i_16 + 1] [i_16 + 1] [i_11]))))), (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_9))) | (var_0)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_52 [i_16 + 1] [i_11 + 1] [i_16 + 1]))) : (arr_62 [i_11] [i_16 + 1] [i_11 + 2])))));
                        var_47 = ((/* implicit */unsigned char) max((max((65535U), (((/* implicit */unsigned int) (unsigned char)132)))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_72 [i_11 - 1] [i_17] [i_11])) - (((/* implicit */int) arr_72 [i_11] [(unsigned char)6] [i_11])))))));
                    }
                }
            } 
        } 
        arr_83 [i_11] = ((/* implicit */signed char) ((((int) var_10)) << (((/* implicit */int) ((arr_58 [i_11] [i_11 - 2] [i_11]) < (((0U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))))))));
        arr_84 [i_11] = ((/* implicit */long long int) (-(min((((/* implicit */unsigned int) ((_Bool) (unsigned char)229))), (arr_55 [i_11 + 1] [i_11 + 2] [i_11])))));
    }
}
