/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26155
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
    var_12 = ((/* implicit */signed char) ((((/* implicit */int) var_10)) >= (max((var_1), ((~(((/* implicit */int) (signed char)-30))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 127ULL))));
        var_14 = ((/* implicit */unsigned char) var_11);
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_11 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */_Bool) var_0);
                    arr_12 [i_0] [1] = (_Bool)1;
                    var_15 = ((/* implicit */unsigned char) (signed char)-63);
                    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2 + 1] [i_0] [i_0] [i_2 + 1])) ? (arr_8 [i_2] [i_0] [i_0] [i_2 + 1]) : (var_5)));
                    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_2 + 1] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) -1301429035)) : (var_8)));
                }
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 15; i_3 += 1) 
    {
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_5 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
        var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1536882227U))));
    }
    for (unsigned int i_4 = 0; i_4 < 10; i_4 += 3) 
    {
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */int) arr_2 [(signed char)12])) + (((/* implicit */int) arr_16 [i_4])))))));
        /* LoopNest 3 */
        for (unsigned int i_5 = 1; i_5 < 7; i_5 += 4) 
        {
            for (unsigned char i_6 = 0; i_6 < 10; i_6 += 1) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 3) 
                {
                    {
                        arr_24 [i_4] [i_5] = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned char)126)) ? (12607817846649269905ULL) : (9080051233429650911ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_20 [i_5 - 1] [i_5])), (var_9)))))));
                        var_21 = ((/* implicit */_Bool) var_3);
                        var_22 ^= arr_14 [i_5 + 3] [i_5 + 2];
                    }
                } 
            } 
        } 
        arr_25 [i_4] = ((/* implicit */unsigned short) (-(min((((/* implicit */int) ((signed char) var_7))), (((((/* implicit */int) (signed char)-63)) + (((/* implicit */int) (signed char)85))))))));
    }
    /* vectorizable */
    for (unsigned char i_8 = 1; i_8 < 19; i_8 += 2) 
    {
        arr_30 [12ULL] &= ((/* implicit */int) (unsigned char)217);
        /* LoopSeq 2 */
        for (signed char i_9 = 0; i_9 < 20; i_9 += 4) 
        {
            var_23 *= ((/* implicit */unsigned long long int) ((short) (unsigned char)126));
            /* LoopSeq 3 */
            for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 2) 
            {
                var_24 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (arr_27 [i_8 + 1] [i_8 - 1]) : (arr_27 [i_8 + 1] [i_8 - 1])));
                /* LoopSeq 2 */
                for (int i_11 = 0; i_11 < 20; i_11 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (long long int i_12 = 0; i_12 < 20; i_12 += 1) 
                    {
                        var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_8)))))));
                        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) 3699615348U)) ? (arr_33 [i_9] [i_9] [i_10]) : (var_4))))));
                        var_27 = (((((-(((/* implicit */int) (_Bool)1)))) + (2147483647))) >> (((var_2) + (1692592318))));
                        arr_40 [i_8] [i_9] [(unsigned char)13] [(unsigned char)6] [(signed char)5] [i_8] = ((/* implicit */short) ((((/* implicit */int) arr_37 [i_8] [(signed char)9] [i_10] [i_8 - 1] [i_12])) % (((/* implicit */int) arr_39 [(signed char)11] [i_9] [i_9] [i_8 - 1] [i_8 - 1]))));
                    }
                    var_28 -= ((/* implicit */signed char) (~(((/* implicit */int) arr_38 [i_10] [i_10]))));
                }
                for (int i_13 = 0; i_13 < 20; i_13 += 4) /* same iter space */
                {
                    var_29 = ((/* implicit */short) ((unsigned char) arr_27 [i_8 - 1] [(signed char)13]));
                    var_30 = ((((/* implicit */long long int) ((/* implicit */int) arr_39 [i_8 - 1] [i_8] [i_8 - 1] [i_8] [i_8 + 1]))) / (7848901447016084129LL));
                }
            }
            for (unsigned int i_14 = 1; i_14 < 19; i_14 += 3) 
            {
                /* LoopSeq 1 */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_16 = 0; i_16 < 20; i_16 += 1) 
                    {
                        var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_10)) <= (((/* implicit */int) arr_37 [i_8] [i_9] [i_16] [i_16] [i_9])))))) == (arr_45 [i_8] [i_8 + 1] [i_14 + 1] [i_15])));
                        arr_54 [(short)7] [i_9] [(short)16] [i_8] [i_16] = ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))));
                        var_32 = ((/* implicit */signed char) ((((/* implicit */int) (short)14336)) ^ (arr_42 [(unsigned char)3] [i_14 + 1] [(unsigned char)3] [i_8])));
                    }
                    arr_55 [i_8] [i_15] [i_14 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_50 [i_8 + 1] [i_14 + 1] [i_8] [i_8 - 1] [i_14] [i_8])) ? (arr_50 [i_8] [i_14 - 1] [i_14] [i_8 + 1] [(signed char)8] [5U]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-39)))));
                    arr_56 [14ULL] [(short)8] [(short)8] [i_9] &= ((/* implicit */long long int) ((((/* implicit */int) arr_28 [i_14 + 1] [i_8 - 1])) / (((/* implicit */int) ((((/* implicit */_Bool) arr_44 [i_8 + 1] [i_8 + 1] [i_8 + 1])) || (((/* implicit */_Bool) var_0)))))));
                    var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_47 [i_8] [i_8 + 1] [i_8 + 1] [1ULL] [i_14] [(unsigned short)4])) ? ((~(((/* implicit */int) var_7)))) : (((((/* implicit */int) var_10)) + (((/* implicit */int) (_Bool)1))))));
                    var_34 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_41 [i_9] [i_14] [i_9] [3ULL])) : (((/* implicit */int) arr_36 [i_8]))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_34 [i_8]))))) : ((((_Bool)1) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
                }
                var_35 = ((/* implicit */long long int) ((arr_41 [i_9] [i_14] [i_9] [i_14]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_41 [i_8] [i_8 - 1] [i_14 - 1] [i_8]))));
            }
            for (int i_17 = 1; i_17 < 17; i_17 += 4) 
            {
                arr_60 [i_8] [i_8] [i_8] = ((/* implicit */short) (+(arr_45 [i_17 - 1] [i_17 + 3] [i_8 - 1] [i_8 - 1])));
                var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) (-(((arr_48 [i_8] [i_9] [i_17]) / (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))))));
                arr_61 [19] [i_8] [i_9] [i_17] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) (signed char)(-127 - 1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-10))) : (((arr_50 [i_17] [i_17] [i_17] [i_9] [i_9] [i_8]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_8] [i_17] [i_9])))))));
                var_37 = ((/* implicit */long long int) (~(((/* implicit */int) var_9))));
            }
            var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)141))))) ? (((/* implicit */int) arr_38 [i_8] [i_8])) : (((/* implicit */int) arr_28 [i_8 + 1] [i_8 - 1]))));
            arr_62 [i_8] [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) 655203587)) ? (((/* implicit */int) arr_58 [i_8 + 1] [i_9] [i_8 + 1] [i_8])) : (((/* implicit */int) arr_58 [i_8] [i_8 - 1] [(signed char)19] [i_8]))));
            arr_63 [i_8] [(signed char)12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_27 [i_8 + 1] [i_8 + 1])) && (((/* implicit */_Bool) var_5))));
        }
        for (unsigned long long int i_18 = 1; i_18 < 17; i_18 += 4) 
        {
            var_39 ^= ((/* implicit */long long int) (+(((/* implicit */int) var_10))));
            var_40 = ((/* implicit */short) ((((/* implicit */int) arr_35 [i_8] [7] [6ULL])) ^ (arr_59 [i_18] [i_8] [5])));
        }
        arr_66 [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)30571)) ? (((/* implicit */unsigned long long int) 1873353956U)) : (13871893881899205975ULL)));
    }
    var_41 = ((/* implicit */signed char) min((var_41), (((/* implicit */signed char) (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7)))))))))));
    /* LoopNest 2 */
    for (signed char i_19 = 0; i_19 < 24; i_19 += 4) 
    {
        for (unsigned long long int i_20 = 0; i_20 < 24; i_20 += 4) 
        {
            {
                var_42 = ((/* implicit */_Bool) min((var_42), (((/* implicit */_Bool) var_5))));
                /* LoopSeq 1 */
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    arr_73 [i_21] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) min((arr_71 [i_21] [i_21] [i_20] [i_21]), (arr_71 [i_21] [i_19] [i_21] [i_21])))), (((((/* implicit */_Bool) var_0)) ? (var_3) : (arr_72 [i_19] [18ULL] [i_21] [i_19])))));
                    arr_74 [i_21] = min(((-((-(var_8))))), (((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (max((var_5), (((/* implicit */unsigned long long int) (_Bool)0)))) : (var_8))));
                    var_43 = ((/* implicit */_Bool) var_2);
                    var_44 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_9)) ? (((3890590486715455796ULL) << (((((/* implicit */int) (unsigned char)255)) - (217))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_69 [i_19] [i_20] [i_21])))))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_68 [i_19] [i_20])))))));
                }
            }
        } 
    } 
}
