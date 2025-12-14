/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211644
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_2] = ((/* implicit */unsigned long long int) max((((/* implicit */int) (short)29545)), ((-(((/* implicit */int) arr_5 [10] [i_1] [i_2]))))));
                    arr_7 [i_1] [i_2] = (unsigned short)7;
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18417))) & (min((max((((/* implicit */unsigned int) var_3)), (var_12))), (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned short)61341)), (-1930255223)))))))))));
                        var_19 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_3 [i_0] [i_1])))) ? (((/* implicit */int) (short)-7572)) : (((/* implicit */int) arr_8 [i_0] [i_1]))))), (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))) : (17004879651512591286ULL)))));
                        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)56851)) || (((/* implicit */_Bool) max((5931126710079666970ULL), (((/* implicit */unsigned long long int) 1414631243)))))))), (var_7))))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 24; i_4 += 3) 
                    {
                        arr_14 [i_4] [(unsigned short)11] [(unsigned short)11] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_1]))) : (var_4))), (((/* implicit */unsigned int) arr_1 [i_0] [i_0])))) : (((((/* implicit */_Bool) (unsigned char)7)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2175)))))));
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1370618866437370963LL)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 7184220712067708625LL)) ? (((/* implicit */int) (unsigned short)8696)) : (((/* implicit */int) (unsigned char)212)))))));
                    }
                    var_22 = ((/* implicit */int) min((max((arr_13 [i_0] [i_0]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)61341))))))), (((/* implicit */unsigned long long int) var_0))));
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned short) 14075234769554065931ULL);
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_5 = 0; i_5 < 24; i_5 += 2) 
        {
            arr_19 [i_0] [i_0] [(short)10] = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)30))));
            var_24 = ((/* implicit */unsigned char) ((arr_16 [i_0] [i_5]) < (var_15)));
            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_1 [i_0] [i_5])) : (((/* implicit */int) arr_1 [i_5] [i_0]))));
        }
        for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 1) 
        {
            var_26 ^= ((/* implicit */int) arr_11 [i_6] [i_6] [i_0] [i_6] [i_6]);
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned char i_7 = 0; i_7 < 24; i_7 += 1) /* same iter space */
            {
                arr_24 [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)15))));
                var_27 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)56866))));
                /* LoopSeq 2 */
                for (long long int i_8 = 0; i_8 < 24; i_8 += 3) 
                {
                    arr_28 [i_6] [i_8] [11ULL] = var_7;
                    arr_29 [(short)6] [i_8] [i_7] [i_8] [i_7] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned short)112))));
                    var_28 = ((/* implicit */unsigned int) min((var_28), (((var_4) | (((/* implicit */unsigned int) arr_22 [i_0] [i_6] [i_7]))))));
                }
                for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 3) 
                {
                    var_29 = ((/* implicit */unsigned char) var_1);
                    var_30 = ((/* implicit */unsigned short) min((var_30), (arr_23 [19] [i_6] [i_6] [i_9])));
                    var_31 &= ((/* implicit */long long int) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)112))) & (var_15))));
                }
                arr_34 [i_0] = ((/* implicit */unsigned long long int) var_4);
            }
            for (unsigned char i_10 = 0; i_10 < 24; i_10 += 1) /* same iter space */
            {
                var_32 *= ((/* implicit */unsigned short) (unsigned char)210);
                var_33 &= ((/* implicit */unsigned long long int) 7292520226441457568LL);
                arr_38 [i_0] [i_0] [(_Bool)1] = ((/* implicit */unsigned short) ((long long int) 783188468));
                var_34 = ((/* implicit */int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)202), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 12672111712238915706ULL)) && (((/* implicit */_Bool) var_1))))))))) : (((((/* implicit */_Bool) var_6)) ? (var_10) : (max((((/* implicit */unsigned long long int) var_13)), (arr_30 [i_0] [i_0] [i_0] [6ULL] [i_0])))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_11 = 0; i_11 < 24; i_11 += 3) 
                {
                    var_35 = ((/* implicit */unsigned int) min((var_35), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [(short)20] [9] [i_11])) ? (((((/* implicit */_Bool) (unsigned short)18417)) ? (((/* implicit */unsigned long long int) 498025322)) : (14763270681675297033ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))))))));
                    arr_41 [i_11] [i_10] [i_6] [i_11] = ((/* implicit */int) ((unsigned long long int) var_2));
                }
                for (unsigned char i_12 = 0; i_12 < 24; i_12 += 1) 
                {
                    arr_45 [i_0] [i_12] [i_10] = ((/* implicit */unsigned long long int) (short)960);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_13 = 0; i_13 < 24; i_13 += 1) 
                    {
                        arr_48 [i_12] [i_12] [i_12] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_14)) * (var_6)));
                        var_36 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_23 [(unsigned char)20] [i_6] [i_10] [i_12])) ? (arr_25 [i_0] [11] [(unsigned short)1] [0U] [i_13] [(short)10]) : (arr_25 [i_0] [i_6] [i_6] [i_6] [(signed char)11] [i_13])));
                        var_37 = ((/* implicit */long long int) min((var_37), (((/* implicit */long long int) 11518374240777269029ULL))));
                        var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_40 [i_13] [i_13] [4ULL] [i_13] [i_13])) ? (((/* implicit */int) arr_40 [i_12] [i_6] [i_10] [i_10] [i_10])) : (((/* implicit */int) arr_40 [(short)3] [i_6] [i_6] [i_0] [0ULL]))));
                        var_39 = ((/* implicit */_Bool) arr_27 [i_0] [i_6] [(short)2] [i_12] [23]);
                    }
                }
            }
            for (unsigned char i_14 = 0; i_14 < 24; i_14 += 1) /* same iter space */
            {
                var_40 = ((/* implicit */long long int) min((var_40), (((/* implicit */long long int) var_14))));
                var_41 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (arr_3 [i_6] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) arr_46 [i_6] [i_6] [i_6] [0])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) -1948804978)) != (1370618866437370971LL))))) : (((((/* implicit */_Bool) arr_27 [i_14] [2ULL] [i_6] [i_0] [(_Bool)1])) ? (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)64742), (((/* implicit */unsigned short) (unsigned char)237)))))) : (((((/* implicit */long long int) var_14)) | (7292520226441457568LL)))))));
                /* LoopSeq 4 */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    var_42 += ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) 14297292521542027786ULL)) ? (((/* implicit */unsigned long long int) var_13)) : (arr_16 [i_0] [i_0])))));
                    arr_56 [i_0] [4U] [i_6] = ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) var_2)), (310187449U))) >> ((((~(((/* implicit */int) (unsigned char)43)))) + (53)))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned long long int i_16 = 0; i_16 < 24; i_16 += 4) 
                    {
                        var_43 = ((/* implicit */int) min((var_43), ((-(((/* implicit */int) arr_9 [i_6]))))));
                        var_44 += ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)43))));
                    }
                    for (unsigned char i_17 = 0; i_17 < 24; i_17 += 4) 
                    {
                        var_45 += ((/* implicit */_Bool) (+(((/* implicit */int) ((short) var_9)))));
                        var_46 = ((/* implicit */int) min(((unsigned char)131), ((unsigned char)254)));
                        var_47 -= ((/* implicit */unsigned short) (+(((/* implicit */int) min(((unsigned char)112), (((/* implicit */unsigned char) arr_10 [i_17] [i_17] [i_15] [i_15])))))));
                        arr_62 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_20 [i_0] [i_15]);
                    }
                    for (long long int i_18 = 0; i_18 < 24; i_18 += 2) 
                    {
                        var_48 = ((/* implicit */signed char) min((var_48), (((/* implicit */signed char) arr_54 [12] [i_14]))));
                        var_49 = ((/* implicit */unsigned long long int) min(((unsigned short)61406), (((/* implicit */unsigned short) (signed char)116))));
                    }
                    var_50 ^= ((/* implicit */long long int) ((signed char) 3984779846U));
                }
                for (signed char i_19 = 0; i_19 < 24; i_19 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_20 = 3; i_20 < 20; i_20 += 3) 
                    {
                        var_51 = ((/* implicit */signed char) min((var_51), (((/* implicit */signed char) max((((((/* implicit */_Bool) arr_0 [i_6] [(short)18])) ? (max((2232658345682514731ULL), (((/* implicit */unsigned long long int) (unsigned short)65535)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)405))) != (8686993482361322863ULL))))))), (((/* implicit */unsigned long long int) var_13)))))));
                        var_52 *= ((/* implicit */short) (~(((/* implicit */int) var_16))));
                        arr_70 [i_0] [i_6] [i_20] [i_20] = ((/* implicit */unsigned long long int) arr_50 [i_6] [i_14] [i_19] [i_20]);
                    }
                    /* vectorizable */
                    for (unsigned char i_21 = 0; i_21 < 24; i_21 += 2) 
                    {
                        var_53 = ((/* implicit */unsigned short) max((var_53), (((/* implicit */unsigned short) ((_Bool) (!(((/* implicit */_Bool) var_13))))))));
                        var_54 = ((/* implicit */unsigned long long int) var_16);
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_22 = 0; i_22 < 24; i_22 += 1) 
                    {
                        arr_76 [i_0] [10] [i_0] [0LL] [i_22] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3098867526624467956LL)) ? (362455226510902504LL) : (((/* implicit */long long int) -533606875))));
                        var_55 = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) (unsigned char)109))))));
                    }
                    var_56 += ((((/* implicit */unsigned long long int) var_14)) / (var_8));
                }
                for (unsigned char i_23 = 0; i_23 < 24; i_23 += 3) 
                {
                    var_57 = ((/* implicit */unsigned char) var_0);
                    var_58 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 621907521))));
                    var_59 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)1008))));
                }
                for (unsigned char i_24 = 4; i_24 < 23; i_24 += 3) 
                {
                    var_60 = ((/* implicit */int) (!(((/* implicit */_Bool) 16158560360692806289ULL))));
                    var_61 = ((unsigned short) (+(((var_4) - (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_24] [i_6])))))));
                }
                var_62 = ((/* implicit */long long int) ((max((((((/* implicit */_Bool) arr_81 [i_0] [(unsigned char)14] [(unsigned char)14] [(short)0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_15))), (((/* implicit */unsigned long long int) (unsigned char)255)))) == (((unsigned long long int) min((-621907522), (((/* implicit */int) arr_47 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
            }
        }
        var_63 = ((/* implicit */unsigned short) arr_16 [(short)4] [(short)4]);
    }
    var_64 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (-((+(var_14)))))) & (max((min((((/* implicit */unsigned long long int) 1710031654)), (8183738754932566196ULL))), (((/* implicit */unsigned long long int) var_16))))));
    var_65 = ((/* implicit */int) (+(min((((/* implicit */unsigned int) (signed char)-76)), (var_12)))));
}
