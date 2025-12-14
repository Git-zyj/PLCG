/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221100
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */signed char) max((((min((6119170791823414101LL), (6119170791823414101LL))) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_1]))))), (((/* implicit */long long int) ((6119170791823414101LL) == (((/* implicit */long long int) 546145140U)))))));
                var_21 = ((/* implicit */long long int) (_Bool)0);
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned char i_2 = 0; i_2 < 19; i_2 += 3) 
    {
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3748822156U)) ? (((/* implicit */long long int) 3410293173U)) : (6119170791823414086LL)));
        arr_8 [i_2] = ((/* implicit */unsigned char) arr_0 [(_Bool)1] [i_2]);
        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) min(((-((-(((/* implicit */int) arr_4 [i_2] [i_2])))))), (((((/* implicit */int) arr_3 [i_2] [i_2] [i_2])) >> ((((((_Bool)0) ? (((/* implicit */int) arr_5 [i_2])) : (((/* implicit */int) arr_4 [i_2] [i_2])))) - (23506))))))))));
    }
    /* vectorizable */
    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 20; i_4 += 1) 
        {
            for (unsigned long long int i_5 = 3; i_5 < 19; i_5 += 3) 
            {
                {
                    arr_16 [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) arr_0 [i_3] [i_3]);
                    var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44301))) == (((546145145U) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
                    var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((((/* implicit */int) arr_13 [(unsigned char)8] [(unsigned char)8] [i_3])) + ((+(((/* implicit */int) (_Bool)0)))))))));
                    var_26 = ((/* implicit */short) arr_11 [i_5 - 3] [i_5 - 1] [i_5 - 3]);
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 4) 
                {
                    {
                        var_27 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_23 [i_3] [i_6] [i_7] [i_8]))));
                        arr_27 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)110))))) ? (((/* implicit */unsigned long long int) -1182160617)) : (((unsigned long long int) 2023630780))));
                    }
                } 
            } 
            arr_28 [i_3] [17] = ((/* implicit */int) 6119170791823414086LL);
            /* LoopSeq 1 */
            for (long long int i_9 = 0; i_9 < 20; i_9 += 2) 
            {
                var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) (+((((_Bool)1) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) (_Bool)1)))))))));
                var_29 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 18209145038887656466ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-30426))) : (2867089878U))) >> ((((+(((/* implicit */int) (unsigned short)43800)))) - (43777)))));
                arr_31 [i_3] = ((/* implicit */signed char) ((arr_2 [i_3] [i_6] [i_9]) != (arr_2 [i_3] [i_6] [i_3])));
                var_30 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_0 [i_3] [i_9]))));
            }
        }
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            var_31 = (-(((((/* implicit */_Bool) 2867089869U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_10] [i_10]))) : (1427877402U))));
            arr_35 [i_3] [i_10] [i_10] = ((/* implicit */_Bool) ((signed char) ((arr_33 [i_3]) + (8372912818829757689LL))));
        }
    }
    for (signed char i_11 = 0; i_11 < 21; i_11 += 2) 
    {
        var_32 = ((/* implicit */unsigned short) (short)21161);
        arr_38 [i_11] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-21161)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (short)32753)))));
        var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) max((((/* implicit */unsigned int) ((unsigned short) arr_37 [i_11]))), (max((arr_36 [i_11]), (((/* implicit */unsigned int) arr_37 [i_11])))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_12 = 0; i_12 < 21; i_12 += 1) /* same iter space */
        {
            arr_42 [i_11] [i_12] = ((/* implicit */signed char) ((long long int) arr_37 [i_11]));
            var_34 = ((/* implicit */signed char) (~(((/* implicit */int) (short)-32327))));
            arr_43 [i_12] [i_12] |= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_41 [13LL] [i_11])) ? (arr_41 [i_11] [i_12]) : (((/* implicit */long long int) 2867089869U))))));
        }
        for (unsigned int i_13 = 0; i_13 < 21; i_13 += 1) /* same iter space */
        {
            arr_46 [i_11] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */long long int) max(((short)56), (((/* implicit */short) (unsigned char)146))))), (max((((/* implicit */long long int) (_Bool)0)), (arr_44 [i_11] [i_11] [i_13]))))))));
            var_35 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)244))))) >> (((max((17441577281442461451ULL), (arr_39 [i_11] [i_11]))) - (17441577281442461431ULL)))))), ((+(arr_40 [i_11] [i_11] [i_11])))));
            arr_47 [i_11] [i_11] [i_13] = ((/* implicit */unsigned char) ((unsigned long long int) ((long long int) ((_Bool) (unsigned short)37974))));
        }
        arr_48 [i_11] [i_11] = ((/* implicit */_Bool) (-(274877906943LL)));
    }
    var_36 |= ((/* implicit */unsigned short) ((((/* implicit */long long int) 2867089893U)) + (34359738367LL)));
    var_37 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (var_11)))))) ? (max((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)183))) + (34359738367LL))), (((/* implicit */long long int) (signed char)111)))) : (((/* implicit */long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned short)21735)))) && (((/* implicit */_Bool) var_19))))))));
    /* LoopSeq 3 */
    for (long long int i_14 = 0; i_14 < 10; i_14 += 1) /* same iter space */
    {
        arr_52 [i_14] = ((/* implicit */signed char) -1665537855);
        var_38 &= ((/* implicit */signed char) max((((/* implicit */int) max((arr_26 [i_14] [6] [i_14]), (arr_26 [i_14] [(unsigned short)6] [i_14])))), ((+(((/* implicit */int) arr_26 [i_14] [(_Bool)1] [i_14]))))));
        var_39 = ((/* implicit */unsigned int) max((var_39), (((/* implicit */unsigned int) max((min((((/* implicit */int) (!(((/* implicit */_Bool) 3521813349641843927LL))))), (((((/* implicit */int) (unsigned short)21735)) ^ (((/* implicit */int) (signed char)114)))))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) arr_37 [i_14])) - (2783)))))) <= (min((arr_39 [i_14] [i_14]), (((/* implicit */unsigned long long int) arr_15 [6ULL]))))))))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_15 = 2; i_15 < 9; i_15 += 3) 
        {
            arr_56 [i_14] [i_14] = ((/* implicit */unsigned char) max((((/* implicit */long long int) (-(((((/* implicit */_Bool) (short)30426)) ? (((/* implicit */int) (short)29613)) : (((/* implicit */int) (signed char)-111))))))), (((((/* implicit */_Bool) max((4294967267U), (((/* implicit */unsigned int) (short)-22029))))) ? (min((arr_2 [i_14] [i_15 + 1] [(unsigned char)6]), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) ((/* implicit */int) ((-1LL) >= (arr_15 [i_14])))))))));
            arr_57 [i_14] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */int) arr_12 [i_15 + 1] [i_15 - 1])) / (((/* implicit */int) (short)30419)))));
            arr_58 [i_14] [8ULL] [8ULL] = ((/* implicit */unsigned short) min((((/* implicit */long long int) min((arr_32 [i_14]), (((/* implicit */short) (signed char)127))))), (max((arr_22 [i_15 - 2] [i_15 + 1] [i_15 + 1]), (((/* implicit */long long int) arr_19 [i_14] [i_14]))))));
            var_40 = (+(((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)1325)), (arr_51 [i_14] [i_14])))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)6639))) / (arr_44 [i_14] [i_15] [i_14]))) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_14] [i_14]))))));
        }
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
            {
                for (signed char i_18 = 0; i_18 < 10; i_18 += 1) 
                {
                    {
                        var_41 = ((2294643942U) & (((((/* implicit */_Bool) (signed char)37)) ? (min((2507283619U), (((/* implicit */unsigned int) (unsigned short)128)))) : (2294643957U))));
                        var_42 = ((/* implicit */long long int) max((var_42), (((/* implicit */long long int) ((int) max((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)58890))))), (min((1427877428U), (((/* implicit */unsigned int) (unsigned char)255))))))))));
                        arr_66 [i_14] [i_16] [i_16] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) 6107800686297082068LL)), ((((!(((/* implicit */_Bool) (unsigned short)58890)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)0))))) : (((((/* implicit */_Bool) 2867089894U)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))))));
                        arr_67 [i_14] [i_16] [i_17] [i_18] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2000323338U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)29270))) : (((((/* implicit */long long int) 760591711U)) ^ (4079478134628738065LL)))));
                        arr_68 [i_18] [i_14] [i_14] [i_14] = max((2000323339U), (((/* implicit */unsigned int) (unsigned char)136)));
                    }
                } 
            } 
            var_43 = ((/* implicit */unsigned short) 1406592930U);
        }
    }
    for (long long int i_19 = 0; i_19 < 10; i_19 += 1) /* same iter space */
    {
        var_44 = ((/* implicit */signed char) max((var_44), (((/* implicit */signed char) (+(((((/* implicit */int) (unsigned short)36241)) | (97095722))))))));
        var_45 = ((/* implicit */unsigned short) arr_26 [i_19] [16ULL] [i_19]);
        arr_72 [i_19] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max(((unsigned short)24137), (((/* implicit */unsigned short) arr_26 [i_19] [8ULL] [i_19])))))));
        var_46 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(arr_60 [(unsigned short)6] [(unsigned short)6]))))));
        var_47 = ((/* implicit */_Bool) max((var_47), (((/* implicit */_Bool) ((arr_39 [i_19] [i_19]) & (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) arr_23 [4U] [i_19] [4U] [i_19])) : (((/* implicit */int) (unsigned short)30324))))))))))));
    }
    /* vectorizable */
    for (long long int i_20 = 0; i_20 < 10; i_20 += 1) /* same iter space */
    {
        arr_77 [i_20] = ((/* implicit */signed char) (!((_Bool)0)));
        /* LoopNest 2 */
        for (unsigned short i_21 = 0; i_21 < 10; i_21 += 4) 
        {
            for (unsigned long long int i_22 = 0; i_22 < 10; i_22 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_23 = 0; i_23 < 10; i_23 += 4) 
                    {
                        for (int i_24 = 0; i_24 < 10; i_24 += 3) 
                        {
                            {
                                arr_90 [i_20] [i_20] [i_20] [i_20] [i_20] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_83 [i_23] [i_20]))));
                                var_48 += ((/* implicit */unsigned char) ((arr_60 [i_21] [i_22]) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))));
                                var_49 *= ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) -4575847547661009582LL)))))));
                            }
                        } 
                    } 
                    var_50 = ((/* implicit */unsigned char) max((var_50), (((/* implicit */unsigned char) ((((/* implicit */_Bool) -2008256056)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)19316)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_22] [i_21]))) : (arr_55 [i_21] [i_22])))) : (((7301042982154250385LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_22] [i_21]))))))))));
                    var_51 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) 4079478134628738065LL))))) >> (((((((/* implicit */_Bool) -4575847547661009582LL)) ? (3700186248U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6639))))) - (3700186243U)))));
                }
            } 
        } 
        var_52 = (!(((0U) == (arr_36 [i_20]))));
    }
}
