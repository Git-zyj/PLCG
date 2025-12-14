/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44086
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
    var_12 = ((/* implicit */unsigned long long int) -263247289);
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned char i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_3 = 1; i_3 < 10; i_3 += 3) 
                {
                    arr_11 [i_3] [i_1] [i_2] = ((/* implicit */unsigned short) (~(((/* implicit */int) (short)26121))));
                    var_13 &= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_6)))) % (((unsigned long long int) var_2))));
                }
                arr_12 [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(max((3966581233U), (((/* implicit */unsigned int) (short)-26738)))))))));
                /* LoopNest 2 */
                for (unsigned char i_4 = 2; i_4 < 12; i_4 += 4) 
                {
                    for (unsigned short i_5 = 0; i_5 < 14; i_5 += 1) 
                    {
                        {
                            var_14 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */unsigned long long int) arr_3 [i_4] [i_4] [i_4])) + (1915158144888916720ULL))))) ? (min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_0 [(unsigned char)10])) : (((/* implicit */int) (unsigned short)54605)))), (((/* implicit */int) (unsigned char)15)))) : (((/* implicit */int) arr_5 [i_0]))));
                            arr_19 [i_0] [i_2] [i_1 + 2] [i_2] [i_2] [i_5] = ((/* implicit */unsigned long long int) ((((var_8) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)227))))) >> (((/* implicit */int) ((_Bool) (+(var_4)))))));
                            var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0 - 1])))))));
                            var_16 = ((/* implicit */_Bool) 0U);
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned long long int) (unsigned char)28))))))));
            }
            /* LoopSeq 2 */
            for (int i_6 = 3; i_6 < 13; i_6 += 3) 
            {
                arr_24 [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)224)), (((((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)45)), (var_8)))) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                var_18 = ((/* implicit */int) ((long long int) ((_Bool) ((unsigned int) var_1))));
            }
            /* vectorizable */
            for (unsigned short i_7 = 1; i_7 < 13; i_7 += 4) 
            {
                /* LoopNest 2 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 1) 
                    {
                        {
                            arr_33 [9ULL] = ((/* implicit */_Bool) (~(var_8)));
                            var_19 = ((/* implicit */unsigned short) (unsigned char)236);
                        }
                    } 
                } 
                arr_34 [i_0] [0LL] [i_7] = ((/* implicit */unsigned short) -905440646);
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 14; i_10 += 2) 
                {
                    for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */int) arr_5 [i_0 - 2]);
                            var_21 |= ((/* implicit */long long int) (-(((((/* implicit */int) (unsigned char)241)) << (((((/* implicit */int) (unsigned char)237)) - (237)))))));
                        }
                    } 
                } 
            }
        }
        for (unsigned char i_12 = 1; i_12 < 12; i_12 += 1) /* same iter space */
        {
            var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)15))))) ? (((int) (unsigned char)241)) : ((+(1073741760)))))) ? (((/* implicit */long long int) min((((/* implicit */int) (unsigned char)16)), (((int) arr_20 [i_12]))))) : (((max((((/* implicit */long long int) (unsigned char)240)), (var_8))) / (((((/* implicit */_Bool) (unsigned short)47245)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))));
            /* LoopSeq 3 */
            for (long long int i_13 = 3; i_13 < 13; i_13 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_14 = 0; i_14 < 14; i_14 += 1) 
                {
                    for (long long int i_15 = 0; i_15 < 14; i_15 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned short) (short)-26738);
                            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -8888809205927923107LL)) ? (10808081912576388976ULL) : (((/* implicit */unsigned long long int) var_4))))) ? (((((/* implicit */_Bool) arr_16 [i_13] [i_12 - 1] [i_12] [i_12 - 1] [i_12])) ? (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_15] [i_12 + 1] [i_0]))) : (-111914034920827637LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_0] [i_12] [i_13] [i_14] [i_15] [(unsigned char)3])))))) ? ((+(((/* implicit */int) ((_Bool) var_7))))) : (((/* implicit */int) (((~(((/* implicit */int) arr_16 [i_13] [i_12] [(short)5] [i_14] [i_15])))) == (max((arr_3 [i_0] [3] [(short)1]), (((/* implicit */int) arr_35 [i_15] [(unsigned short)7] [i_13] [i_12] [i_0] [(short)8])))))))));
                            arr_49 [i_15] [(short)11] [i_13] [i_12 + 2] [i_0] = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (1789899558) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)226)))))))), (var_5)));
                            var_25 = ((/* implicit */unsigned char) 1477768858U);
                        }
                    } 
                } 
                var_26 &= ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)240))) ? ((-(var_0))) : (((/* implicit */unsigned long long int) ((int) (!(((/* implicit */_Bool) 1775561168))))))));
            }
            for (unsigned long long int i_16 = 0; i_16 < 14; i_16 += 4) 
            {
                var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) min((0ULL), (((/* implicit */unsigned long long int) 1307072871U)))))) ? (min((((/* implicit */long long int) ((int) arr_21 [i_0] [13ULL]))), (arr_27 [i_0 + 1] [i_12 + 2] [i_16]))) : (((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) -3788616287702901745LL))))))))));
                /* LoopNest 2 */
                for (short i_17 = 1; i_17 < 12; i_17 += 4) 
                {
                    for (unsigned long long int i_18 = 2; i_18 < 10; i_18 += 4) 
                    {
                        {
                            var_28 = ((/* implicit */long long int) ((((((/* implicit */_Bool) -9054634529900985473LL)) ? (((((/* implicit */_Bool) 2122746154)) ? (var_2) : (((/* implicit */int) (short)26737)))) : (arr_29 [13]))) >= (((/* implicit */int) (unsigned short)27398))));
                            var_29 = ((/* implicit */signed char) max((((/* implicit */unsigned int) (unsigned short)18307)), (min((arr_46 [i_18] [i_18 + 2] [i_18] [i_12 - 1] [i_0 - 1] [i_0 - 2]), (arr_46 [i_18] [i_18 + 2] [i_16] [i_12 - 1] [i_12] [i_0 + 1])))));
                            var_30 = ((/* implicit */short) ((_Bool) max((var_5), (((/* implicit */long long int) arr_7 [i_18] [i_17] [i_16])))));
                            var_31 *= ((/* implicit */signed char) (-(((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65070))))) ? (((((/* implicit */int) (unsigned short)6034)) ^ (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (unsigned short)11))))));
                        }
                    } 
                } 
            }
            for (unsigned short i_19 = 2; i_19 < 12; i_19 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_20 = 2; i_20 < 10; i_20 += 4) 
                {
                    for (short i_21 = 0; i_21 < 14; i_21 += 1) 
                    {
                        {
                            arr_64 [i_12] [i_12] [i_21] = ((/* implicit */signed char) (+(((/* implicit */int) var_6))));
                            arr_65 [i_0] [i_12 + 2] [i_12 + 2] [1U] [(_Bool)1] = ((/* implicit */long long int) ((short) (!(((/* implicit */_Bool) arr_48 [i_20 + 2] [i_20 - 2] [i_20 - 2])))));
                        }
                    } 
                } 
                var_32 = ((/* implicit */_Bool) ((unsigned char) max(((unsigned short)59501), (((/* implicit */unsigned short) var_11)))));
                var_33 = ((/* implicit */unsigned int) arr_35 [i_0] [i_0] [i_12] [i_19] [i_19] [i_19 - 2]);
                /* LoopNest 2 */
                for (unsigned char i_22 = 1; i_22 < 11; i_22 += 4) 
                {
                    for (short i_23 = 0; i_23 < 14; i_23 += 1) 
                    {
                        {
                            arr_71 [i_23] = ((/* implicit */int) ((long long int) (-(9223372036854775807LL))));
                            var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) ((unsigned int) min((((/* implicit */long long int) ((int) arr_21 [i_19] [i_22]))), (arr_58 [i_0] [i_22 + 2] [i_19] [i_22])))))));
                        }
                    } 
                } 
                var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) ((((((/* implicit */_Bool) arr_22 [i_0] [i_0 - 2] [i_0 - 2] [i_0])) ? (arr_22 [i_0 + 1] [i_0 - 2] [i_19] [i_19]) : (var_5))) >= ((~(arr_22 [i_0 - 1] [i_0 + 1] [i_19] [i_19]))))))));
            }
            arr_72 [i_12] [i_12] = ((/* implicit */int) (short)14812);
        }
        var_36 *= ((/* implicit */unsigned short) (-((-(((/* implicit */int) ((unsigned char) (unsigned short)39508)))))));
        var_37 = ((/* implicit */long long int) min((var_37), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_50 [i_0] [i_0] [i_0] [i_0]))))) ^ (((((/* implicit */_Bool) (unsigned short)37402)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)59501))))))) || (((/* implicit */_Bool) ((unsigned char) min((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)99))))))))));
    }
    for (unsigned short i_24 = 0; i_24 < 22; i_24 += 4) 
    {
        arr_76 [i_24] = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)35118)) : (0))) | (((/* implicit */int) (unsigned char)56))))) ? (arr_73 [i_24] [(unsigned char)21]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_74 [i_24]))));
        arr_77 [i_24] = ((/* implicit */unsigned char) 24LL);
    }
    var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) || ((!(((/* implicit */_Bool) max((2129222115), (var_2))))))));
    /* LoopNest 3 */
    for (unsigned short i_25 = 3; i_25 < 12; i_25 += 1) 
    {
        for (signed char i_26 = 1; i_26 < 13; i_26 += 3) 
        {
            for (short i_27 = 1; i_27 < 13; i_27 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_28 = 0; i_28 < 15; i_28 += 4) 
                    {
                        for (int i_29 = 0; i_29 < 15; i_29 += 1) 
                        {
                            {
                                arr_93 [i_26] [i_27] [i_28] [i_28] [i_29] [i_28] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_79 [i_25 - 1]))) ? (((long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)26738)) : (((/* implicit */int) (unsigned short)59501))))) : (min((((/* implicit */long long int) (-(((/* implicit */int) var_11))))), (2822991660428783727LL)))));
                                var_39 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (unsigned short)7217)), ((+(max((var_5), (((/* implicit */long long int) arr_82 [(_Bool)1] [i_26] [i_26]))))))));
                            }
                        } 
                    } 
                    arr_94 [i_25] [i_26] [i_25] = ((/* implicit */unsigned short) (~(((min((((/* implicit */long long int) (unsigned short)53917)), (4796714615489241211LL))) | (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (signed char)-77)), ((short)31455)))))))));
                    var_40 = ((/* implicit */unsigned short) arr_84 [i_25] [i_25] [i_25]);
                    var_41 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) 943071002)) ? (((/* implicit */long long int) var_4)) : (var_7))), (var_8)));
                }
            } 
        } 
    } 
}
