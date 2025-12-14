/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23110
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
    var_20 = ((/* implicit */_Bool) var_0);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 2; i_0 < 17; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            var_21 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1949822715467387735LL)) ? (1999153150324618075ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))))))));
            arr_5 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 71987225293750272ULL)) ? ((-(((/* implicit */int) (unsigned short)65535)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 117440512)))))));
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                for (signed char i_3 = 2; i_3 < 17; i_3 += 1) 
                {
                    {
                        var_22 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 117440509)))) ? (((/* implicit */int) arr_3 [i_0 + 1] [i_1] [i_2])) : (((((/* implicit */_Bool) 13910234639813992201ULL)) ? (((/* implicit */int) arr_4 [i_3 - 2] [7U] [i_0])) : (((/* implicit */int) arr_6 [i_2]))))));
                        arr_10 [i_2] = ((/* implicit */unsigned long long int) 1949822715467387731LL);
                        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_0 + 1] [i_1] [i_2])) : (((/* implicit */int) arr_3 [i_3 - 2] [i_1] [i_2])))))));
                        var_24 ^= ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) arr_7 [i_3] [i_1] [i_1] [i_0])) ? (arr_0 [(short)2]) : (((/* implicit */int) arr_7 [(signed char)14] [i_0 - 2] [i_1] [i_0 + 1])))));
                        arr_11 [i_2] [i_1] [i_2] [i_2] = ((/* implicit */signed char) (-((+(arr_0 [i_1])))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_4 = 0; i_4 < 18; i_4 += 3) 
            {
                for (signed char i_5 = 0; i_5 < 18; i_5 += 2) 
                {
                    {
                        var_25 = ((/* implicit */signed char) arr_12 [i_5] [i_4] [i_1] [i_0]);
                        var_26 = (!(((/* implicit */_Bool) (short)-1)));
                        var_27 &= ((/* implicit */int) ((unsigned short) (short)16376));
                    }
                } 
            } 
        }
        for (int i_6 = 0; i_6 < 18; i_6 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (short i_8 = 0; i_8 < 18; i_8 += 4) 
                {
                    {
                        var_28 = ((/* implicit */_Bool) (~(((unsigned long long int) arr_16 [i_0 + 1] [i_0]))));
                        /* LoopSeq 1 */
                        for (short i_9 = 0; i_9 < 18; i_9 += 2) 
                        {
                            var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) arr_15 [(_Bool)1] [i_9] [i_9] [(unsigned char)8]))));
                            var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) arr_16 [i_6] [i_9]))));
                        }
                    }
                } 
            } 
            var_31 = ((/* implicit */int) min((var_31), ((+(((/* implicit */int) arr_20 [i_0 + 1] [i_0] [i_6] [i_0 - 2]))))));
            arr_27 [i_6] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)5)) ? (-1949822715467387735LL) : (1949822715467387740LL))))));
            /* LoopNest 2 */
            for (unsigned char i_10 = 1; i_10 < 16; i_10 += 2) 
            {
                for (unsigned short i_11 = 0; i_11 < 18; i_11 += 4) 
                {
                    {
                        var_32 = ((/* implicit */int) ((((/* implicit */_Bool) (~((~(((/* implicit */int) arr_21 [i_0] [i_6] [i_10] [i_11]))))))) ? (((((((/* implicit */unsigned long long int) 1949822715467387734LL)) != (532575944704ULL))) ? (18446744073709551613ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33211))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? ((+(((/* implicit */int) var_4)))) : (((/* implicit */int) arr_19 [i_0 - 1] [i_10 + 1])))))));
                        /* LoopSeq 2 */
                        for (signed char i_12 = 1; i_12 < 16; i_12 += 1) 
                        {
                            arr_35 [i_0] [i_0] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) min((1949822715467387732LL), (((/* implicit */long long int) arr_12 [i_0] [i_6] [i_10] [i_11]))))))) ? (1949822715467387738LL) : (((/* implicit */long long int) 4010756171U))));
                            var_33 -= ((/* implicit */signed char) -1949822715467387727LL);
                            var_34 ^= ((/* implicit */unsigned int) -1453806475);
                            arr_36 [i_11] [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)101))))), (144106391982833664ULL))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_13 = 0; i_13 < 18; i_13 += 2) 
                        {
                            var_35 = ((/* implicit */_Bool) min((var_35), (((arr_33 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]) >= (((/* implicit */int) ((_Bool) arr_23 [i_11])))))));
                            var_36 = var_19;
                            var_37 &= ((/* implicit */unsigned long long int) (unsigned char)255);
                            var_38 = ((/* implicit */unsigned long long int) max((var_38), (((/* implicit */unsigned long long int) arr_4 [i_13] [i_6] [i_0 - 2]))));
                            var_39 ^= ((/* implicit */signed char) 16509500829792484159ULL);
                        }
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            for (unsigned long long int i_15 = 0; i_15 < 18; i_15 += 2) 
            {
                {
                    arr_47 [i_0] [i_14] [i_15] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((signed char) arr_2 [i_0 - 2]))), ((+(1949822715467387719LL)))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_16 = 0; i_16 < 18; i_16 += 4) 
                    {
                        arr_50 [i_0 - 2] [i_0 - 1] [i_14] [i_15] [i_16] = ((/* implicit */signed char) arr_34 [i_0 - 2] [i_14] [9ULL] [i_15] [i_0] [i_15]);
                        arr_51 [5ULL] [i_15] [(signed char)13] [i_0 - 2] [i_0] = ((/* implicit */signed char) arr_30 [i_0 + 1] [i_0 - 2] [i_0 + 1] [i_16] [i_0]);
                        arr_52 [i_0 - 1] [i_0] [i_14] [i_14] [i_15] [i_16] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_19 [i_0 - 2] [i_0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1949822715467387713LL))))) : (((/* implicit */int) arr_1 [i_0 - 2]))));
                    }
                    /* vectorizable */
                    for (unsigned short i_17 = 0; i_17 < 18; i_17 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_18 = 0; i_18 < 18; i_18 += 4) 
                        {
                            arr_57 [i_0] [i_14] = ((short) arr_6 [i_17]);
                            var_40 = (signed char)-10;
                        }
                        /* LoopSeq 1 */
                        for (unsigned char i_19 = 0; i_19 < 18; i_19 += 1) 
                        {
                            arr_61 [i_19] [i_19] [i_17] [i_15] [i_15] [i_14] [i_0] = ((/* implicit */unsigned char) (((((+(-2026123735479840044LL))) + (9223372036854775807LL))) << (((arr_0 [i_14]) - (1197915805)))));
                            var_41 = ((((/* implicit */int) (unsigned short)63)) == (117440518));
                        }
                    }
                    /* vectorizable */
                    for (unsigned char i_20 = 0; i_20 < 18; i_20 += 4) 
                    {
                        var_42 = ((/* implicit */unsigned short) ((unsigned char) arr_62 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 - 2]));
                        arr_64 [i_14] [i_14] [i_0 - 2] [i_20] = ((/* implicit */signed char) ((((/* implicit */int) arr_6 [i_15])) / (((/* implicit */int) arr_6 [i_15]))));
                    }
                }
            } 
        } 
        var_43 *= ((((/* implicit */_Bool) max(((+(arr_62 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1]))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-16365)))))))) ? (((/* implicit */unsigned long long int) (-((+(1949822715467387731LL)))))) : (max((((/* implicit */unsigned long long int) (short)16393)), (4536509433895559393ULL))));
        /* LoopNest 2 */
        for (int i_21 = 1; i_21 < 17; i_21 += 2) 
        {
            for (unsigned short i_22 = 0; i_22 < 18; i_22 += 2) 
            {
                {
                    var_44 ^= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_19 [i_21 + 1] [6])) ? (((/* implicit */int) (signed char)126)) : (((/* implicit */int) arr_19 [i_21 + 1] [i_21]))))));
                    var_45 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_49 [i_0 - 2]))));
                    arr_70 [i_0 - 2] [i_21 - 1] [i_22] = ((/* implicit */_Bool) arr_26 [i_0] [i_0 - 2] [i_22] [i_0] [i_0]);
                }
            } 
        } 
    }
    for (unsigned long long int i_23 = 2; i_23 < 17; i_23 += 4) /* same iter space */
    {
        arr_73 [i_23] = ((/* implicit */unsigned short) (+(((((arr_16 [i_23 - 2] [i_23]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1131)))))));
        arr_74 [i_23] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((short) arr_44 [i_23 - 1] [i_23]))) ? (((((/* implicit */unsigned long long int) 117440512)) / (11383107491252759469ULL))) : (min((((/* implicit */unsigned long long int) (short)-28684)), (2891317031968037065ULL))))) / (((((/* implicit */_Bool) arr_17 [i_23 + 1])) ? (max((((/* implicit */unsigned long long int) var_2)), (arr_16 [i_23] [i_23]))) : (min((arr_32 [i_23]), (((/* implicit */unsigned long long int) arr_31 [i_23 - 1] [i_23 + 1]))))))));
        var_46 -= ((/* implicit */short) arr_33 [i_23] [i_23] [i_23] [i_23 + 1] [i_23] [i_23] [i_23 - 2]);
    }
    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
    {
        arr_79 [i_24] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) 4196460732U)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)125)) : (((/* implicit */int) arr_75 [i_24]))))) : (((((/* implicit */_Bool) 36028779839094784LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1134))) : (7063636582456792146ULL))))));
        var_47 += ((/* implicit */unsigned int) var_1);
    }
    var_48 = ((/* implicit */unsigned short) min((var_48), (((/* implicit */unsigned short) var_7))));
    var_49 = ((/* implicit */int) var_11);
    var_50 = ((/* implicit */unsigned long long int) var_10);
}
