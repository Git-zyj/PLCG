/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46653
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
    var_14 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min(((((_Bool)1) ? (((/* implicit */int) (signed char)24)) : (((/* implicit */int) var_4)))), (var_13))))));
    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) min((((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) (short)-13466)) < (var_1))))), (max((min((var_6), (var_6))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)116))) > (var_2)))))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            var_16 = ((((/* implicit */_Bool) ((unsigned long long int) (short)-13450))) || (((/* implicit */_Bool) ((short) -2081536991))));
            arr_5 [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)13449)) ? (((/* implicit */int) (short)13444)) : (((/* implicit */int) (signed char)113)))))))), (max((var_13), (((/* implicit */int) arr_4 [i_0]))))));
            var_17 = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_4 [i_0]), (((/* implicit */short) (!((_Bool)1))))))) && (((/* implicit */_Bool) (~(((((/* implicit */_Bool) 14736702683342709628ULL)) ? (((/* implicit */int) (short)13465)) : (((/* implicit */int) (_Bool)1)))))))));
            arr_6 [i_0] [i_0] [i_1] = arr_0 [i_0];
        }
        for (long long int i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_3 = 0; i_3 < 24; i_3 += 4) 
            {
                /* LoopSeq 3 */
                for (unsigned int i_4 = 0; i_4 < 24; i_4 += 4) 
                {
                    var_18 = ((/* implicit */long long int) (-(((unsigned int) (signed char)116))));
                    var_19 = ((/* implicit */short) ((((/* implicit */unsigned int) min((-134217728), (-134217726)))) + (((unsigned int) 3140332124702513607ULL))));
                }
                for (long long int i_5 = 0; i_5 < 24; i_5 += 4) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_6 = 0; i_6 < 24; i_6 += 1) 
                    {
                        var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_8))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_2 [i_0] [i_3])) != (arr_3 [i_5] [(unsigned char)1])))) : (((/* implicit */int) arr_13 [i_6] [i_5] [i_3] [i_2] [i_2] [i_0])))))));
                        arr_23 [i_5] [i_0] [(unsigned char)19] [i_5] [i_6] [i_0] = ((/* implicit */unsigned int) arr_21 [i_6] [i_2] [i_2] [15ULL] [i_2] [i_0]);
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 1) 
                    {
                        arr_28 [i_0] [i_2] [i_2] [i_0] [i_2] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) arr_8 [i_3] [i_0])))));
                        var_21 = ((/* implicit */long long int) min((max((3439906393U), (396469927U))), (max((((/* implicit */unsigned int) (_Bool)1)), (arr_2 [i_0] [i_2])))));
                        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned long long int) min(((unsigned char)51), (((/* implicit */unsigned char) (signed char)-120)))))))))));
                    }
                    arr_29 [7] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [(unsigned char)21])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-125))) : (12736108798301348673ULL)))))));
                    arr_30 [i_0] [i_2] [i_3] [i_3] [i_5] = ((max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-27))))), (878420867U))) & (((/* implicit */unsigned int) min((-134217728), (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_3])))))))));
                }
                for (long long int i_8 = 0; i_8 < 24; i_8 += 4) /* same iter space */
                {
                    arr_34 [i_0] [i_0] = ((/* implicit */signed char) ((unsigned short) max((167629709U), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) <= (1360131548)))))));
                    arr_35 [i_0] = (-(((((/* implicit */_Bool) -4888446402257864220LL)) ? (134217727) : (((/* implicit */int) (signed char)-114)))));
                }
                var_23 = ((/* implicit */_Bool) ((int) ((arr_14 [i_0] [i_2] [i_3] [i_3]) % (arr_14 [i_0] [i_0] [i_0] [i_0]))));
            }
            for (int i_9 = 0; i_9 < 24; i_9 += 4) 
            {
                /* LoopSeq 1 */
                for (int i_10 = 0; i_10 < 24; i_10 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_11 = 0; i_11 < 24; i_11 += 1) 
                    {
                        var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) (((!(((/* implicit */_Bool) max((3416546428U), (((/* implicit */unsigned int) (unsigned short)10784))))))) || ((!(((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) || (arr_11 [i_11]))))))))));
                        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) -1157860896)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned short)10784))));
                    }
                    for (long long int i_12 = 0; i_12 < 24; i_12 += 1) 
                    {
                        arr_47 [i_0] [i_0] [i_0] [i_0] [i_12] [i_0] = max((((/* implicit */int) (!(((/* implicit */_Bool) min((arr_18 [i_12]), (-2000969882582255560LL))))))), (max((859309946), (((/* implicit */int) min((((/* implicit */unsigned short) (short)11490)), ((unsigned short)35616)))))));
                        arr_48 [i_0] [i_0] = ((/* implicit */unsigned char) -859309957);
                        var_26 = (~(((((/* implicit */int) (unsigned char)37)) >> (((((((/* implicit */_Bool) 4169811285U)) ? (-1157860896) : (((/* implicit */int) arr_22 [i_12] [i_12] [i_12] [i_12] [i_12])))) + (1157860921))))));
                        arr_49 [i_10] [i_0] [i_0] = ((/* implicit */_Bool) max((((((/* implicit */int) ((signed char) -1758608823))) / (max((((/* implicit */int) arr_44 [i_10] [i_0] [i_10] [i_10] [i_10])), (arr_14 [i_12] [i_2] [i_2] [i_2]))))), (arr_21 [i_0] [i_0] [i_9] [(unsigned char)16] [i_10] [14])));
                    }
                    /* LoopSeq 3 */
                    for (int i_13 = 0; i_13 < 24; i_13 += 4) 
                    {
                        var_27 = ((/* implicit */unsigned long long int) ((arr_50 [i_0]) * (((/* implicit */unsigned int) max((-859309974), (((/* implicit */int) (!(((/* implicit */_Bool) arr_39 [i_0]))))))))));
                        var_28 |= ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)29920))));
                        arr_54 [i_0] [i_2] [i_9] [i_10] [i_2] = ((/* implicit */unsigned char) arr_21 [i_0] [i_13] [i_9] [i_9] [i_13] [i_9]);
                        var_29 = ((/* implicit */unsigned char) ((signed char) max((2147483647), (((/* implicit */int) ((signed char) -2147483619))))));
                    }
                    for (short i_14 = 0; i_14 < 24; i_14 += 2) /* same iter space */
                    {
                        var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 18446744073709551604ULL)) ? (((int) (-(arr_39 [i_0])))) : (((((/* implicit */_Bool) 32764U)) ? (((/* implicit */int) (unsigned char)37)) : (max((((/* implicit */int) (short)(-32767 - 1))), (-859309957)))))));
                        var_31 = ((/* implicit */unsigned long long int) arr_58 [i_0] [i_2] [i_0] [i_0] [(signed char)6] [i_2]);
                    }
                    for (short i_15 = 0; i_15 < 24; i_15 += 2) /* same iter space */
                    {
                        var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) max((3817622372U), (((/* implicit */unsigned int) -859309957)))))))) >> ((~(max((18446744073709551614ULL), (((/* implicit */unsigned long long int) arr_59 [i_0] [i_2] [i_0] [i_0] [i_15] [i_2]))))))));
                        var_33 = ((/* implicit */int) max((((/* implicit */unsigned long long int) 4806903610300878778LL)), ((+(max((((/* implicit */unsigned long long int) arr_58 [i_0] [i_0] [i_0] [(unsigned char)4] [i_0] [i_0])), (arr_52 [i_0] [i_0] [i_0] [i_9] [i_10] [i_15])))))));
                    }
                    var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_56 [i_0] [i_0] [i_0] [4U] [i_0] [i_0])), (1663903996224668216LL)))) ? (((/* implicit */unsigned int) ((int) (_Bool)1))) : (arr_16 [7ULL] [7ULL] [i_2] [i_2])));
                    arr_61 [i_9] [i_0] [i_9] [i_9] [3ULL] [i_9] = ((/* implicit */signed char) var_12);
                }
                var_35 = ((/* implicit */unsigned long long int) ((_Bool) (+(((((/* implicit */_Bool) arr_59 [i_0] [i_2] [i_0] [i_0] [i_0] [i_2])) ? (((/* implicit */long long int) 2147483647)) : (var_3))))));
                var_36 ^= min((((/* implicit */long long int) (unsigned char)37)), (((((long long int) 8625238936842515767ULL)) ^ (((/* implicit */long long int) var_1)))));
            }
            /* LoopSeq 2 */
            for (signed char i_16 = 0; i_16 < 24; i_16 += 4) 
            {
                var_37 = ((/* implicit */unsigned char) arr_37 [i_16] [i_16]);
                var_38 = ((/* implicit */_Bool) max((var_38), (((/* implicit */_Bool) max((((/* implicit */long long int) arr_21 [i_2] [i_2] [i_2] [i_2] [i_0] [i_0])), (arr_57 [i_16]))))));
            }
            /* vectorizable */
            for (signed char i_17 = 0; i_17 < 24; i_17 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_18 = 0; i_18 < 24; i_18 += 4) 
                {
                    var_39 = ((/* implicit */int) ((long long int) arr_60 [i_0] [i_0] [i_17] [i_18] [i_18] [i_18]));
                    var_40 = ((/* implicit */int) ((signed char) (~(0U))));
                }
                var_41 = ((/* implicit */int) (unsigned char)37);
                var_42 = ((/* implicit */int) (unsigned short)35615);
            }
            arr_69 [(unsigned char)1] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(1663903996224668216LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)35638))) : (max((arr_65 [i_0]), (((/* implicit */unsigned int) arr_67 [i_0])))))))));
        }
        for (unsigned char i_19 = 0; i_19 < 24; i_19 += 3) 
        {
            var_43 = ((/* implicit */long long int) (~(-319811300)));
            var_44 = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) -1157860896)) ? (-1663903996224668247LL) : (4159130916493235786LL)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_0] [i_0] [12] [i_19] [12]))) : (arr_50 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_1)))))), (((/* implicit */unsigned int) ((((_Bool) 807808843U)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((unsigned char) arr_70 [i_0] [i_0] [i_0])))))));
            arr_74 [i_0] [i_19] [i_19] = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)98))));
        }
        var_45 = ((/* implicit */short) ((((/* implicit */unsigned long long int) var_13)) < (arr_52 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
        var_46 = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_63 [i_0] [i_0] [i_0] [i_0])) ? (((((/* implicit */unsigned long long int) 841373141U)) * (arr_12 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) arr_63 [i_0] [i_0] [i_0] [9])))));
    }
    var_47 |= ((/* implicit */unsigned short) var_7);
    var_48 ^= ((/* implicit */long long int) ((unsigned int) ((short) var_5)));
}
