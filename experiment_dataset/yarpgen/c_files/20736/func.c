/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20736
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
    var_13 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))));
    var_14 = ((((/* implicit */_Bool) min((max((var_0), (((/* implicit */unsigned int) var_5)))), (min((((/* implicit */unsigned int) var_8)), (var_0)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((4136462958U), (((/* implicit */unsigned int) (short)14517))))) ? (((/* implicit */int) (signed char)-26)) : (((/* implicit */int) var_3))))) : (max((((unsigned long long int) var_9)), ((~(10354729454815497811ULL))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_15 &= min((((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) arr_1 [i_0])))))), (var_0));
        var_16 = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_0)) ? (arr_1 [0ULL]) : (arr_1 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_1 [i_0])))))));
        var_17 = ((/* implicit */signed char) var_4);
        var_18 += ((/* implicit */unsigned int) (short)14498);
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            var_19 = ((/* implicit */unsigned short) (signed char)-19);
            var_20 = ((/* implicit */unsigned int) var_5);
            var_21 = (unsigned short)12530;
            var_22 = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)47708)) | (((/* implicit */int) (short)26212))))) ? (3968ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)16989)) < (((/* implicit */int) (short)-5640)))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) min(((short)0), (((/* implicit */short) var_3))))))))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            var_23 = ((/* implicit */short) arr_3 [i_0]);
            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((unsigned int) arr_3 [(signed char)0])))));
        }
        for (unsigned short i_3 = 0; i_3 < 17; i_3 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned int i_4 = 0; i_4 < 17; i_4 += 1) 
            {
                for (unsigned short i_5 = 0; i_5 < 17; i_5 += 1) 
                {
                    {
                        var_25 = ((/* implicit */_Bool) min((7U), (1067574084U)));
                        var_26 = ((/* implicit */long long int) ((unsigned short) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) (unsigned short)40249))))), (arr_8 [(signed char)5] [(signed char)5]))));
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (long long int i_6 = 0; i_6 < 17; i_6 += 2) 
            {
                arr_18 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_12)) ? (var_4) : (((/* implicit */unsigned long long int) 2770726537U)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-14498)) >= (((/* implicit */int) ((((/* implicit */_Bool) (short)5629)) || (((/* implicit */_Bool) arr_10 [i_0] [i_3]))))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_7 = 1; i_7 < 15; i_7 += 1) 
                {
                    var_27 = ((/* implicit */signed char) arr_1 [i_6]);
                    var_28 += ((/* implicit */unsigned int) 7758231953823197826LL);
                    /* LoopSeq 1 */
                    for (unsigned short i_8 = 0; i_8 < 17; i_8 += 1) 
                    {
                        var_29 = ((/* implicit */signed char) ((((/* implicit */int) (short)14498)) * (((/* implicit */int) arr_4 [i_0] [i_7 + 2]))));
                        arr_23 [i_0] [(short)14] [i_0] [i_7] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_15 [i_0] [i_3] [i_0] [i_0]))));
                    }
                    var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) (short)14510))) ? ((~(((/* implicit */int) arr_3 [i_0])))) : (((/* implicit */int) var_8))));
                    var_31 = ((/* implicit */long long int) ((unsigned int) arr_20 [i_7 + 2] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 2]));
                }
                var_32 = ((/* implicit */signed char) ((unsigned short) ((_Bool) min((4611686018426863616ULL), (((/* implicit */unsigned long long int) var_6))))));
                arr_24 [i_6] [i_0] [i_0] [i_0] = ((/* implicit */signed char) min((var_9), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8)))))));
            }
            for (unsigned int i_9 = 0; i_9 < 17; i_9 += 2) 
            {
                /* LoopSeq 1 */
                for (short i_10 = 0; i_10 < 17; i_10 += 4) 
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_11 = 2; i_11 < 16; i_11 += 4) /* same iter space */
                    {
                        var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) ((10LL) - (((/* implicit */long long int) arr_19 [i_11 - 1] [i_11 + 1] [i_10] [i_10] [i_0])))))));
                        arr_33 [i_0] [i_0] [i_3] [i_0] [i_10] [(unsigned short)11] = ((/* implicit */signed char) 6538341838021962378LL);
                    }
                    for (unsigned short i_12 = 2; i_12 < 16; i_12 += 4) /* same iter space */
                    {
                        var_34 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)65535))))) / (((((/* implicit */_Bool) (signed char)4)) ? (15727658196456351870ULL) : (((/* implicit */unsigned long long int) 8U))))));
                        arr_36 [i_10] [(_Bool)1] [i_10] [14U] [i_10] [i_10] [i_0] = ((/* implicit */unsigned int) arr_32 [(short)6] [5U] [i_12 - 2] [i_12 - 1] [i_12 - 1]);
                        var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) var_9))));
                        var_36 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (max((((((/* implicit */int) var_12)) - (((/* implicit */int) var_3)))), (((/* implicit */int) arr_12 [i_12 - 1] [i_12 - 2] [i_12 - 2] [i_12 + 1])))) : (((((/* implicit */int) arr_17 [i_12 - 2])) % (((/* implicit */int) (signed char)1))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_13 = 0; i_13 < 17; i_13 += 3) 
                    {
                        var_37 += ((/* implicit */unsigned long long int) (signed char)-13);
                        arr_39 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_26 [i_0] [i_3])) ^ (arr_6 [i_0] [i_3] [i_9])));
                        var_38 = ((/* implicit */signed char) ((4147503422U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_3])))));
                        var_39 = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_7 [i_0]))));
                    }
                    var_40 = ((/* implicit */unsigned short) 1106314389U);
                }
                var_41 = ((/* implicit */signed char) max((min((arr_27 [i_0] [i_3] [i_9]), (((/* implicit */short) ((3188652906U) >= (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))), (((/* implicit */short) (unsigned char)0))));
                var_42 += ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) ((((/* implicit */_Bool) 0U)) || (((/* implicit */_Bool) 1481279836U))))), (var_6))))) % (var_0)));
            }
            for (unsigned int i_14 = 0; i_14 < 17; i_14 += 4) 
            {
                var_43 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)55678))));
                arr_44 [i_0] [i_3] [i_14] = ((/* implicit */short) var_0);
                var_44 = ((/* implicit */unsigned char) -3063515212763805373LL);
            }
        }
    }
    var_45 = ((/* implicit */unsigned short) var_4);
    var_46 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_10)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) / (((var_11) / (((/* implicit */long long int) ((/* implicit */int) (signed char)42)))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28479))) ^ (var_9)))) ? (((/* implicit */int) ((-3063515212763805373LL) != (((/* implicit */long long int) ((/* implicit */int) var_3)))))) : (((/* implicit */int) min(((unsigned short)0), (var_8)))))))));
}
