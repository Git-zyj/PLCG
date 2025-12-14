/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215184
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
    var_16 = ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) (short)-19087)) > (((/* implicit */int) var_7)))))))) ? (5036736934268691300ULL) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))))));
    var_17 = max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) * ((+(((/* implicit */int) var_13))))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((var_3) ? (((/* implicit */int) (short)-19087)) : (((/* implicit */int) var_14))))) : (((((/* implicit */_Bool) (short)23288)) ? (((/* implicit */unsigned long long int) var_6)) : (13410007139440860316ULL))))));
    var_18 = ((/* implicit */int) (signed char)-74);
    /* LoopSeq 3 */
    for (int i_0 = 2; i_0 < 22; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = ((_Bool) var_1);
        var_19 *= ((/* implicit */short) 9223372036854775807LL);
    }
    for (int i_1 = 2; i_1 < 22; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned long long int i_2 = 1; i_2 < 21; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_3 = 3; i_3 < 21; i_3 += 2) 
            {
                for (long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                {
                    {
                        arr_15 [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7))));
                        arr_16 [i_4] [i_3] [i_2] [i_4] = ((/* implicit */unsigned short) var_10);
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (short i_5 = 4; i_5 < 19; i_5 += 3) 
            {
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)89)))))) : (((((/* implicit */_Bool) 1449801419)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (13002874806112803111ULL)))));
                var_21 ^= ((/* implicit */unsigned long long int) arr_18 [(unsigned short)21] [i_2 - 1] [i_5 - 1]);
                arr_19 [i_1] [i_1] [i_1] [i_5] = ((/* implicit */_Bool) 13410007139440860315ULL);
            }
            for (int i_6 = 0; i_6 < 23; i_6 += 2) 
            {
                arr_22 [(short)7] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-14)) && (((/* implicit */_Bool) var_2))));
                var_22 ^= ((/* implicit */signed char) (((_Bool)1) ? (arr_10 [i_1 + 1] [i_1 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))));
                arr_23 [i_1] [i_2 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((((/* implicit */_Bool) arr_12 [i_1] [i_1])) ? (4235434182486025019ULL) : (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned short)34586)) : (((/* implicit */int) arr_18 [(signed char)2] [(signed char)2] [i_6])))))));
                var_23 = ((/* implicit */unsigned int) (~(6417175372508020257LL)));
            }
            var_24 = ((/* implicit */unsigned char) (((_Bool)1) ? (((((/* implicit */int) (short)29815)) - (((/* implicit */int) var_3)))) : (((/* implicit */int) var_7))));
        }
        for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 2) 
        {
            arr_26 [i_1] [i_1] = ((/* implicit */unsigned long long int) (signed char)-99);
            arr_27 [i_1] = ((unsigned short) (-((-(var_8)))));
        }
        for (unsigned long long int i_8 = 2; i_8 < 22; i_8 += 1) 
        {
            /* LoopSeq 2 */
            for (signed char i_9 = 0; i_9 < 23; i_9 += 3) 
            {
                var_25 -= (_Bool)1;
                var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) (unsigned short)65535))));
                var_27 = ((/* implicit */short) max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) - (5036736934268691300ULL))), (((/* implicit */unsigned long long int) (short)0))));
            }
            for (unsigned short i_10 = 1; i_10 < 21; i_10 += 1) 
            {
                arr_37 [i_10] [i_8] [i_8] &= ((/* implicit */short) min((((4762714995532973ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_1 + 1] [i_1 - 1] [i_1 - 1]))))), (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) (_Bool)0)) << (((5443869267596748504ULL) - (5443869267596748484ULL)))))))));
                /* LoopNest 2 */
                for (int i_11 = 2; i_11 < 22; i_11 += 2) 
                {
                    for (unsigned short i_12 = 2; i_12 < 20; i_12 += 3) 
                    {
                        {
                            var_28 = ((/* implicit */short) max((var_28), (max(((short)19191), (var_2)))));
                            var_29 = ((((/* implicit */_Bool) ((arr_5 [i_1 - 2] [(unsigned char)8]) / (((/* implicit */long long int) ((/* implicit */int) var_11)))))) ? (((((((/* implicit */_Bool) var_6)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-16))))) - (((/* implicit */unsigned long long int) 1143284693894863605LL)))) : (((((/* implicit */_Bool) ((unsigned int) arr_3 [i_8]))) ? (max((((/* implicit */unsigned long long int) -2000415554)), (5767558985861263212ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))));
                            var_30 &= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_14)) >= (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)28137))) > (arr_40 [i_1 - 1] [i_8] [i_10 + 2] [i_11])))))))) == (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)23288)) : (((/* implicit */int) (unsigned char)38))))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_12))))) : (((((/* implicit */_Bool) var_13)) ? (-6417175372508020257LL) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))))));
                        }
                    } 
                } 
                var_31 = ((/* implicit */unsigned short) var_4);
                var_32 -= ((/* implicit */unsigned long long int) -2000415561);
            }
            arr_43 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_40 [i_1] [i_1] [i_1 - 1] [i_8 + 1]) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)40)))))) ? (((arr_36 [i_1 - 2] [i_8 - 2]) & (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30015)))));
            arr_44 [2] [i_1] [i_8] = max((((/* implicit */int) var_1)), (min(((((_Bool)1) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (short)16368)))), (((((/* implicit */_Bool) (unsigned char)38)) ? (arr_3 [i_1]) : (((/* implicit */int) (unsigned short)120)))))));
            /* LoopNest 2 */
            for (long long int i_13 = 1; i_13 < 22; i_13 += 2) 
            {
                for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
                {
                    {
                        var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) (short)16378))));
                        var_34 &= ((/* implicit */_Bool) ((((((/* implicit */int) var_2)) + (((((/* implicit */_Bool) arr_41 [i_1] [i_1] [i_1] [i_1] [i_14])) ? (((/* implicit */int) (unsigned short)42125)) : (((/* implicit */int) var_14)))))) * (((/* implicit */int) ((((/* implicit */int) var_12)) == (((/* implicit */int) var_1)))))));
                    }
                } 
            } 
        }
        for (short i_15 = 0; i_15 < 23; i_15 += 2) 
        {
            var_35 = ((/* implicit */unsigned int) (~((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551589ULL)))));
            var_36 = ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))));
        }
        var_37 = ((((((((/* implicit */_Bool) (unsigned char)206)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2349951638U))) == (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (_Bool)1)))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) arr_46 [i_1] [i_1 + 1] [i_1 - 2])));
    }
    for (int i_16 = 2; i_16 < 22; i_16 += 2) /* same iter space */
    {
        var_38 -= ((/* implicit */unsigned short) arr_20 [i_16] [(short)20] [(short)20] [i_16]);
        var_39 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)37806)) : (((/* implicit */int) (unsigned char)1))));
        arr_57 [(unsigned short)13] [(unsigned short)13] = ((/* implicit */short) (+(((/* implicit */int) ((var_0) > (((/* implicit */int) arr_28 [i_16 - 2] [i_16 + 1])))))));
    }
    var_40 ^= ((((/* implicit */_Bool) (unsigned short)22110)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : ((+(min((var_6), (((/* implicit */long long int) var_1)))))));
}
