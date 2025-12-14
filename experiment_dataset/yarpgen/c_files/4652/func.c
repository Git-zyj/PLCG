/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4652
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned int) var_8)), (var_6))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 1048576)) || (((/* implicit */_Bool) 1048576))))))))) ? (min((((/* implicit */unsigned int) var_1)), (min((((/* implicit */unsigned int) var_7)), (var_6))))) : (((/* implicit */unsigned int) min(((-(((/* implicit */int) var_8)))), (-1048563))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                for (unsigned int i_3 = 1; i_3 < 12; i_3 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned char) 1860783767);
                            arr_13 [i_0] [i_2] [(unsigned char)0] [i_2] [i_2] = ((/* implicit */long long int) (+(((/* implicit */int) (short)-28257))));
                        }
                        for (int i_5 = 1; i_5 < 12; i_5 += 4) 
                        {
                            arr_16 [i_0] [i_1] [i_3 + 2] [i_0] [i_5] [i_2] = ((/* implicit */unsigned int) ((unsigned char) max((var_15), (arr_12 [i_5] [i_3] [i_2] [i_1] [i_0]))));
                            var_19 += ((/* implicit */short) min((min((((/* implicit */long long int) (_Bool)0)), (274341036032LL))), (((/* implicit */long long int) ((((((/* implicit */int) (unsigned char)255)) / (((/* implicit */int) (_Bool)1)))) == (min((arr_9 [i_5] [i_2] [i_2] [i_0]), (((/* implicit */int) (unsigned char)212)))))))));
                        }
                        for (unsigned char i_6 = 0; i_6 < 15; i_6 += 1) 
                        {
                            arr_19 [i_0] [i_1] [i_1] [(_Bool)0] [i_3] [i_0] = min((1048570), (((/* implicit */int) (_Bool)1)));
                            var_20 = ((/* implicit */_Bool) (-(((arr_0 [i_2]) * (arr_0 [i_0])))));
                            arr_20 [i_0] = ((/* implicit */unsigned char) var_7);
                            var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) min((arr_7 [i_3 + 1] [i_3 + 1] [i_1] [i_0]), (arr_7 [i_3 + 1] [i_3 - 1] [(unsigned short)7] [(unsigned short)7]))))));
                        }
                        /* LoopSeq 3 */
                        for (unsigned int i_7 = 0; i_7 < 15; i_7 += 3) 
                        {
                            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) min((((((((/* implicit */_Bool) 813380450)) ? (((/* implicit */int) (_Bool)1)) : (813380427))) + (max((arr_7 [i_0] [i_2] [i_2] [i_7]), (arr_8 [i_2] [(unsigned char)8] [(short)14] [i_3] [i_2]))))), (((/* implicit */int) arr_2 [1])))))));
                            var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) min((((/* implicit */int) ((_Bool) 1048578))), (min((arr_11 [11] [i_1] [i_2]), (arr_11 [i_7] [i_2] [i_2]))))))));
                            arr_23 [i_0] [i_0] [i_2] [9] [i_7] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)203)), (9109296261222895648ULL)));
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) 1048588)) ? (((/* implicit */int) min(((short)-1), ((short)-7)))) : (((/* implicit */int) (short)2634))))));
                            arr_26 [i_3] [i_3] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) min((((long long int) arr_12 [i_3 + 3] [i_3] [i_3 + 3] [i_3 + 3] [i_3])), (((/* implicit */long long int) arr_10 [9U] [i_0] [i_2] [i_0] [i_0]))));
                            var_25 *= ((/* implicit */short) (~(((1636435333) / (((/* implicit */int) var_15))))));
                            arr_27 [i_0] [i_0] [i_3] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)212)));
                            var_26 = ((/* implicit */unsigned long long int) (!(((_Bool) arr_3 [(_Bool)1] [i_0]))));
                        }
                        for (int i_9 = 0; i_9 < 15; i_9 += 2) 
                        {
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)0) ? (-1048578) : (1048590)))) ? (((/* implicit */unsigned long long int) (~(arr_31 [i_0] [i_2] [i_3 + 1] [i_0] [i_9])))) : (((8ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)24335)))))));
                            var_28 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((arr_7 [(unsigned char)6] [i_1] [i_2] [i_3]) / (((/* implicit */int) ((signed char) (unsigned char)118)))))) ? (((unsigned int) -1048576)) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (short)7)) : (((/* implicit */int) (signed char)29)))))));
                        }
                        arr_32 [i_0] = ((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_0] [i_3]);
                        arr_33 [i_0] [1LL] [i_2] [i_0] = ((/* implicit */unsigned short) ((_Bool) arr_9 [i_3] [(unsigned short)7] [i_0] [i_3]));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (int i_10 = 0; i_10 < 15; i_10 += 4) 
        {
            var_29 ^= ((/* implicit */_Bool) ((((/* implicit */int) arr_29 [14LL] [(unsigned char)3] [i_0] [9ULL] [9ULL] [i_10])) - (((/* implicit */int) min((arr_12 [i_0] [i_10] [i_10] [i_10] [i_10]), (((/* implicit */unsigned char) arr_24 [i_0] [i_0] [i_0] [i_10] [i_10] [i_10])))))));
            /* LoopNest 2 */
            for (unsigned short i_11 = 4; i_11 < 14; i_11 += 4) 
            {
                for (unsigned char i_12 = 0; i_12 < 15; i_12 += 4) 
                {
                    {
                        var_30 ^= ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_41 [14] [i_12] [i_11] [(unsigned char)6] [i_11 - 4]))))) > ((+(((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (arr_42 [i_11]))))))));
                        var_31 += ((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned char)127)))) && (((/* implicit */_Bool) ((arr_21 [i_11] [i_11 - 2] [(_Bool)1] [i_11] [i_11 - 4] [i_0]) ? (((/* implicit */int) arr_21 [i_11] [i_11 - 3] [i_11] [i_11] [i_11 - 3] [i_11])) : (((/* implicit */int) arr_21 [(_Bool)1] [i_11 - 4] [i_11] [(unsigned char)12] [i_11 - 3] [i_10])))))));
                        var_32 -= ((int) min((10401334527341070488ULL), (((/* implicit */unsigned long long int) (short)2380))));
                        arr_43 [i_12] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 4952545191413451834LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)31))));
                    }
                } 
            } 
            var_33 = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)0))));
        }
        var_34 ^= (~(((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) arr_36 [6] [8ULL] [i_0])))));
        var_35 = ((/* implicit */unsigned char) min((var_35), (var_3)));
        var_36 = ((/* implicit */unsigned char) (-(((/* implicit */int) max((((/* implicit */unsigned short) (short)26)), (var_7))))));
    }
    for (unsigned char i_13 = 4; i_13 < 17; i_13 += 4) 
    {
        var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) (+(((int) var_5)))))));
        /* LoopSeq 1 */
        for (int i_14 = 1; i_14 < 17; i_14 += 3) 
        {
            var_38 = ((/* implicit */unsigned char) arr_47 [i_14 - 1] [i_14]);
            arr_48 [i_13] [i_14] = ((/* implicit */short) max((((((arr_47 [(short)9] [i_14]) >= (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) ? (((/* implicit */int) ((short) arr_44 [i_13 + 1] [i_14]))) : ((-(((/* implicit */int) arr_46 [i_14])))))), (((/* implicit */int) (((~(arr_44 [(_Bool)1] [i_14]))) >= (((/* implicit */unsigned long long int) 564291316)))))));
            var_39 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (((_Bool)1) || (((/* implicit */_Bool) arr_44 [i_13 - 1] [i_14]))))), (min((((/* implicit */unsigned long long int) (short)-2381)), (arr_44 [i_13 - 1] [i_14 + 1])))));
            var_40 = ((/* implicit */unsigned short) min((((int) min((-1048587), (((/* implicit */int) (short)-1))))), (((int) ((unsigned char) (short)32747)))));
            /* LoopSeq 3 */
            for (unsigned int i_15 = 4; i_15 < 15; i_15 += 4) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_16 = 0; i_16 < 18; i_16 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_17 = 0; i_17 < 18; i_17 += 1) 
                    {
                        var_41 = ((/* implicit */int) arr_52 [i_14] [i_14] [i_14 - 1] [i_16] [i_16] [(_Bool)1]);
                        var_42 = ((/* implicit */unsigned long long int) max((var_42), (((/* implicit */unsigned long long int) ((int) arr_54 [i_13 - 3] [i_14] [i_14] [i_14] [i_14 - 1] [i_15 - 2])))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned char i_18 = 1; i_18 < 15; i_18 += 1) 
                    {
                        arr_57 [i_14] [i_16] [i_15] [i_14] [i_14] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)10))));
                        arr_58 [i_14] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_52 [i_13 - 4] [i_13 - 4] [i_13] [i_13 - 2] [i_14 + 1] [i_15 - 3]))));
                    }
                }
                var_43 = ((/* implicit */long long int) max((var_43), (((/* implicit */long long int) ((arr_53 [i_13 - 4] [i_14 - 1] [i_14] [i_15]) <= (((/* implicit */long long int) min((((/* implicit */unsigned int) (short)-2383)), (1559949166U)))))))));
                var_44 = ((/* implicit */short) min((var_44), (((/* implicit */short) ((((/* implicit */int) (unsigned char)129)) / (((/* implicit */int) (_Bool)1)))))));
            }
            for (unsigned char i_19 = 0; i_19 < 18; i_19 += 3) 
            {
                arr_63 [i_13] [i_14 - 1] [i_14] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_52 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13])) / (((/* implicit */int) (short)2380))))) && (((/* implicit */_Bool) ((min((arr_45 [i_13] [i_13]), (arr_47 [i_13] [i_14]))) / (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (short)2380)) : (((/* implicit */int) (unsigned char)112))))))))));
                arr_64 [i_14] [i_14] [i_19] = (((((~(((/* implicit */int) ((((/* implicit */int) (short)-2)) >= (((/* implicit */int) (_Bool)1))))))) + (2147483647))) << (((((/* implicit */int) (unsigned char)144)) - (144))));
                arr_65 [6] [i_14 - 1] [i_19] [i_14] = ((/* implicit */_Bool) arr_54 [i_13 - 3] [i_14] [i_19] [i_13 - 3] [i_13] [i_13]);
            }
            /* vectorizable */
            for (unsigned int i_20 = 4; i_20 < 14; i_20 += 1) 
            {
                arr_69 [i_14] [i_14] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_66 [(unsigned short)17] [i_20 + 1] [i_14 - 1] [i_13 - 2])) ? (((/* implicit */int) arr_66 [i_13] [i_20 - 4] [i_14 + 1] [i_13 - 1])) : (((/* implicit */int) arr_66 [i_14] [i_20 + 3] [i_14 - 1] [i_13 - 3]))));
                var_45 = ((((/* implicit */int) arr_66 [(_Bool)1] [i_14] [i_14] [1U])) ^ (((/* implicit */int) var_3)));
                arr_70 [i_13] [i_14] [i_20] = ((/* implicit */int) arr_45 [i_13] [i_14]);
                arr_71 [i_14] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) arr_66 [i_13 - 2] [i_20 + 3] [i_20] [i_14 - 1]))));
            }
        }
    }
    for (unsigned char i_21 = 1; i_21 < 15; i_21 += 4) 
    {
        arr_74 [i_21] [i_21] = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) 1570222529)), (27ULL))), (min((min((((/* implicit */unsigned long long int) arr_49 [i_21] [(unsigned short)8])), (12175194559702671779ULL))), (((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned char) arr_60 [i_21] [i_21] [i_21] [i_21])))))))));
        arr_75 [i_21] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) ((_Bool) (short)2377)))) ? (var_1) : (((-1058129247) | (-1296118656)))));
    }
}
