/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44729
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_16 -= ((/* implicit */unsigned char) (~(((((/* implicit */int) var_7)) << (((((/* implicit */int) (signed char)65)) - (50)))))));
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_17 = ((arr_3 [i_1] [i_0]) < (((((/* implicit */int) arr_0 [i_0] [i_0])) - (((/* implicit */int) var_13)))));
            arr_6 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) (unsigned char)48))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_5 [i_1])) == (((/* implicit */int) var_12)))))) : (14949996354740575401ULL)));
        }
        for (unsigned char i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) != (((unsigned long long int) (short)-7035))));
            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) 2U))));
            /* LoopSeq 2 */
            for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 4) 
            {
                var_20 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(4611686018427387904ULL)))) ? (((/* implicit */int) arr_5 [i_0])) : ((~(((/* implicit */int) (signed char)-105))))));
                var_21 = ((/* implicit */unsigned char) var_9);
                var_22 = ((/* implicit */short) arr_1 [i_2] [i_2]);
            }
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 20; i_5 += 4) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 4) 
                    {
                        {
                            arr_21 [i_6] [i_5] [i_4] [i_2] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1821))) > (((((/* implicit */_Bool) 13835058055282163712ULL)) ? (((/* implicit */unsigned long long int) 1U)) : (arr_19 [i_6] [i_4])))));
                            arr_22 [i_0] [i_0] [i_0] [i_0] [3LL] = ((/* implicit */unsigned char) (~(13835058055282163691ULL)));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (short i_7 = 0; i_7 < 20; i_7 += 3) 
                {
                    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))))) / (arr_8 [i_2] [i_7]))))));
                    arr_27 [(_Bool)1] [i_2] [i_4] [i_7] = ((/* implicit */_Bool) ((arr_14 [i_0] [(signed char)9] [i_2] [i_7]) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (176953683131628460LL)));
                }
                for (unsigned int i_8 = 0; i_8 < 20; i_8 += 3) 
                {
                    var_24 *= ((/* implicit */long long int) (((_Bool)1) || (((/* implicit */_Bool) (signed char)-102))));
                    var_25 = ((/* implicit */signed char) (-(((/* implicit */int) arr_15 [i_0] [i_2] [i_4] [i_8]))));
                }
            }
        }
        for (short i_9 = 1; i_9 < 18; i_9 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_10 = 0; i_10 < 20; i_10 += 3) 
            {
                var_26 *= ((/* implicit */long long int) ((((/* implicit */int) arr_20 [i_0] [i_9 + 1] [13U] [(unsigned short)0])) > (0)));
                var_27 = ((/* implicit */int) arr_17 [i_9 - 1] [i_9 - 1]);
                arr_36 [(_Bool)0] [i_10] [i_9] = ((/* implicit */int) ((1125269891854201154LL) < (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (2147483647) : (((/* implicit */int) var_6)))))));
            }
            for (signed char i_11 = 0; i_11 < 20; i_11 += 2) 
            {
                var_28 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_9 - 1] [i_9 - 1]))) + (arr_23 [i_9 + 1] [i_9 - 1] [i_11] [i_0] [i_0])));
                arr_40 [i_9] [i_9] = ((/* implicit */signed char) (+(var_0)));
                /* LoopSeq 1 */
                for (short i_12 = 2; i_12 < 18; i_12 += 3) 
                {
                    arr_43 [i_9] [i_9] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_39 [i_9 + 2]))));
                    var_29 *= ((/* implicit */unsigned long long int) var_12);
                    var_30 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_2 [(_Bool)1] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))));
                }
                arr_44 [i_9] = ((/* implicit */unsigned short) arr_20 [i_0] [i_9] [i_11] [i_0]);
                arr_45 [i_0] [i_0] [i_9] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-16049))))) ? (((unsigned long long int) var_10)) : (((((/* implicit */_Bool) 6107465735740638734LL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 6107465735740638734LL))))));
            }
            var_31 = (~(((/* implicit */int) arr_17 [i_9] [i_9 + 1])));
            var_32 = ((/* implicit */int) ((((/* implicit */_Bool) arr_28 [i_9 + 2] [i_0] [i_0] [i_0])) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) | (2484175590U))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)65)))));
        }
    }
    for (short i_13 = 1; i_13 < 17; i_13 += 1) 
    {
        var_33 ^= ((/* implicit */short) max((((((/* implicit */_Bool) 13835058055282163717ULL)) ? (4965401268452779237ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_13 + 1] [i_13] [i_13] [i_13 - 1]))))), (((4611686018427387912ULL) | (9445685055255961371ULL)))));
        arr_48 [i_13] = ((/* implicit */int) (short)16049);
        /* LoopSeq 2 */
        for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) /* same iter space */
        {
            arr_51 [i_13] = (-(0ULL));
            /* LoopSeq 3 */
            /* vectorizable */
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                arr_55 [i_13 + 1] [i_13] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_38 [i_13] [i_13])) <= (((/* implicit */int) (short)15725))));
                arr_56 [(short)8] [i_13] [i_13] [i_13 + 2] = ((/* implicit */short) (~(537770311)));
            }
            for (unsigned short i_16 = 3; i_16 < 18; i_16 += 1) /* same iter space */
            {
                arr_60 [i_13] [i_13] [i_13] = ((/* implicit */short) var_11);
                /* LoopNest 2 */
                for (unsigned long long int i_17 = 0; i_17 < 19; i_17 += 3) 
                {
                    for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
                    {
                        {
                            var_34 = ((/* implicit */unsigned long long int) var_5);
                            var_35 = ((/* implicit */int) var_3);
                        }
                    } 
                } 
                arr_65 [i_13] = ((/* implicit */unsigned char) (-((~(var_9)))));
            }
            for (unsigned short i_19 = 3; i_19 < 18; i_19 += 1) /* same iter space */
            {
                var_36 -= ((/* implicit */short) (-(((/* implicit */int) ((short) arr_61 [i_13] [i_14] [i_13] [i_19] [(unsigned char)6])))));
                arr_69 [i_13] [17U] [i_13] = ((/* implicit */short) ((min((((arr_2 [i_14 - 1] [i_13]) - (((/* implicit */unsigned long long int) -2)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-15725)) + (((/* implicit */int) (short)15725))))))) - (((arr_2 [i_14 - 1] [i_14 - 1]) + (((/* implicit */unsigned long long int) ((((/* implicit */int) var_15)) - (((/* implicit */int) (short)-1024)))))))));
            }
        }
        /* vectorizable */
        for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) /* same iter space */
        {
            var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 537770311)) ? (((arr_15 [i_13] [i_13] [i_20] [i_20]) ? (arr_47 [i_13]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)187)))));
            var_38 = ((/* implicit */unsigned short) (unsigned char)0);
        }
    }
    var_39 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_0), (((/* implicit */long long int) (unsigned short)0))))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : ((+(var_1))))))));
}
