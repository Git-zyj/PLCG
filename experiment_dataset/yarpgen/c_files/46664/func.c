/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46664
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
    var_13 = ((/* implicit */short) var_1);
    var_14 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (short)480)))) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)480)) || (((/* implicit */_Bool) var_5)))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (short)-480)), ((unsigned short)16256)))) : (((/* implicit */int) (short)480)))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        var_15 = ((/* implicit */short) var_12);
        var_16 = ((/* implicit */signed char) (short)473);
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (+((-(((var_12) % (((/* implicit */long long int) ((/* implicit */int) var_11))))))))))));
        var_18 += ((/* implicit */short) (~((((((~(((/* implicit */int) (unsigned short)65527)))) + (2147483647))) >> ((((~(((/* implicit */int) var_11)))) + (70)))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (short i_2 = 4; i_2 < 15; i_2 += 3) 
            {
                for (unsigned int i_3 = 3; i_3 < 16; i_3 += 1) 
                {
                    {
                        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((var_1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)23494))) : (var_10))))));
                        arr_11 [i_0] [(signed char)12] [i_2 + 3] [i_3] = ((/* implicit */unsigned short) var_4);
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (short i_4 = 0; i_4 < 19; i_4 += 3) 
            {
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 15; i_5 += 3) 
                {
                    for (signed char i_6 = 0; i_6 < 19; i_6 += 2) 
                    {
                        {
                            var_20 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)483)) : (((/* implicit */int) (short)497)))) <= (((/* implicit */int) (unsigned char)15))));
                            var_21 = ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)0))));
                            arr_23 [i_5] [(unsigned char)16] [i_5] [i_6] = ((/* implicit */int) (short)-29561);
                            var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (short)-464))));
                            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */int) (short)29560)) / (((/* implicit */int) (short)-29580)))))));
                        }
                    } 
                } 
                arr_24 [(unsigned short)14] [(_Bool)1] [(_Bool)1] = ((((/* implicit */_Bool) (short)-507)) && ((!(((/* implicit */_Bool) var_3)))));
                var_24 &= ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)40213))));
            }
        }
        /* vectorizable */
        for (unsigned int i_7 = 0; i_7 < 19; i_7 += 3) 
        {
            var_25 = ((/* implicit */signed char) (-(((/* implicit */int) (short)29560))));
            var_26 *= (((-(((/* implicit */int) (unsigned char)64)))) / (((((/* implicit */int) (unsigned char)192)) - (((/* implicit */int) (short)-29561)))));
        }
        for (short i_8 = 1; i_8 < 16; i_8 += 3) 
        {
            var_27 = ((/* implicit */int) var_7);
            var_28 *= ((/* implicit */unsigned short) ((((/* implicit */int) var_11)) | (((/* implicit */int) (!(((/* implicit */_Bool) (short)-480)))))));
        }
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        arr_32 [i_9] = ((/* implicit */signed char) (~(min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57344))) % (var_10))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1)))))))));
        var_29 = ((/* implicit */signed char) 268173312);
        var_30 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) 268173300)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_6))))), (((/* implicit */long long int) ((((/* implicit */int) (short)15872)) >= (((/* implicit */int) (_Bool)1)))))));
        /* LoopSeq 4 */
        for (signed char i_10 = 1; i_10 < 10; i_10 += 3) /* same iter space */
        {
            arr_37 [i_10] [8] [i_10 + 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned long long int) (unsigned char)192))))) ? (min((((/* implicit */int) (unsigned short)8191)), (268173295))) : (((((/* implicit */int) var_6)) & (((/* implicit */int) (signed char)-114))))));
            var_31 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) (unsigned char)126)))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (short)484))) : (var_12)))) ? (((((/* implicit */_Bool) 268173312)) ? (var_10) : (var_10))) : (min((((/* implicit */unsigned long long int) (unsigned short)0)), (var_10))))))));
            var_32 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)130))));
            arr_38 [i_9] [i_9] [i_9] = ((/* implicit */_Bool) var_9);
        }
        for (signed char i_11 = 1; i_11 < 10; i_11 += 3) /* same iter space */
        {
            /* LoopSeq 4 */
            /* vectorizable */
            for (unsigned long long int i_12 = 0; i_12 < 12; i_12 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned int i_13 = 0; i_13 < 12; i_13 += 3) 
                {
                    for (short i_14 = 0; i_14 < 12; i_14 += 3) 
                    {
                        {
                            var_33 = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)0))));
                            var_34 |= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) > (6758707935095322626LL)));
                        }
                    } 
                } 
                var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)126)) % (((/* implicit */int) (unsigned char)10))))) ? (((var_7) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))))) : (((/* implicit */unsigned long long int) (~(var_12)))))))));
            }
            for (unsigned short i_15 = 3; i_15 < 10; i_15 += 4) 
            {
                var_36 = ((/* implicit */int) max((max(((!(((/* implicit */_Bool) (signed char)-91)))), (((((/* implicit */_Bool) (short)26859)) && (((/* implicit */_Bool) var_11)))))), (((((((/* implicit */_Bool) (short)-22051)) && (((/* implicit */_Bool) (unsigned short)718)))) || (((var_0) || (((/* implicit */_Bool) (unsigned char)126))))))));
                /* LoopNest 2 */
                for (unsigned short i_16 = 0; i_16 < 12; i_16 += 2) 
                {
                    for (signed char i_17 = 0; i_17 < 12; i_17 += 4) 
                    {
                        {
                            var_37 = ((/* implicit */unsigned char) max((var_37), (((/* implicit */unsigned char) max(((+(6008263888007528393ULL))), (((/* implicit */unsigned long long int) ((unsigned short) (_Bool)1))))))));
                            arr_54 [i_11] [i_16] = ((/* implicit */signed char) min((((/* implicit */short) (unsigned char)17)), ((short)17130)));
                            var_38 = ((/* implicit */short) min((4321434586473011758LL), (5366062775618224474LL)));
                            var_39 = ((/* implicit */unsigned short) max((var_39), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) (signed char)-84)) ? (min((((/* implicit */unsigned int) var_2)), (0U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((255U) == (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))))) == (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)130))))))))));
                            arr_55 [i_9] [i_9] [i_11] [i_11] [i_16] [i_17] = ((/* implicit */int) (((+((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)14)))))) != (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)2)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32179))) : (-5366062775618224475LL))) >= (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_18 = 0; i_18 < 12; i_18 += 2) 
                {
                    for (unsigned short i_19 = 0; i_19 < 12; i_19 += 3) 
                    {
                        {
                            var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((5366062775618224474LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-15))))), (((/* implicit */long long int) (short)32750))))) ? (max((((/* implicit */unsigned long long int) (short)32721)), (6973215917881725022ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)31), (((/* implicit */signed char) var_1))))))));
                            arr_61 [i_9] [i_9] [i_19] [(unsigned short)11] = ((/* implicit */signed char) (~((~(((/* implicit */int) (short)32178))))));
                        }
                    } 
                } 
            }
            for (unsigned int i_20 = 0; i_20 < 12; i_20 += 4) 
            {
                var_41 = ((/* implicit */_Bool) (signed char)-10);
                var_42 = max((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) (signed char)-14)) ? (((/* implicit */int) (short)-32756)) : (((/* implicit */int) (_Bool)1)))));
            }
            /* vectorizable */
            for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
            {
                var_43 = ((/* implicit */short) (+((~(12438480185702023247ULL)))));
                var_44 = ((/* implicit */unsigned short) max((var_44), (((unsigned short) var_4))));
                var_45 = ((/* implicit */signed char) var_3);
                var_46 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)0))))) || (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)26)) & (((/* implicit */int) (signed char)34)))))));
                var_47 = ((/* implicit */unsigned char) min((var_47), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (-5853384738325915894LL))) + (((/* implicit */long long int) 251U)))))));
            }
            var_48 = ((/* implicit */unsigned short) min((var_48), ((unsigned short)1459)));
            var_49 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_6)), ((+(var_12)))))), (35182224605184ULL)));
            var_50 = ((/* implicit */short) max((var_50), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))) ? (((/* implicit */int) (!(((((/* implicit */int) (unsigned char)254)) >= (((/* implicit */int) var_11))))))) : (((/* implicit */int) var_9)))))));
            arr_67 [1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)-98))));
        }
        for (short i_22 = 0; i_22 < 12; i_22 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_23 = 0; i_23 < 12; i_23 += 3) 
            {
                for (unsigned int i_24 = 2; i_24 < 10; i_24 += 2) 
                {
                    {
                        var_51 ^= ((/* implicit */long long int) (+((-(((/* implicit */int) max((var_8), ((unsigned short)64076))))))));
                        var_52 = ((((/* implicit */int) ((((/* implicit */int) var_9)) != ((-(var_5)))))) / (((/* implicit */int) ((((((/* implicit */int) (unsigned short)17448)) % (((/* implicit */int) var_3)))) > (((/* implicit */int) ((((/* implicit */_Bool) (signed char)94)) || (((/* implicit */_Bool) (unsigned short)1023)))))))));
                        var_53 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((0) / (((/* implicit */int) (unsigned short)10011))))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)0)) % (((/* implicit */int) var_11))))) : (var_4)));
                    }
                } 
            } 
            arr_75 [i_9] [i_9] [i_22] = ((/* implicit */unsigned int) (unsigned short)32464);
        }
        for (short i_25 = 0; i_25 < 12; i_25 += 2) /* same iter space */
        {
            var_54 = ((/* implicit */unsigned int) min((var_54), (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((4294967040U) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))) > (((((/* implicit */_Bool) 1460260445U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967065U)))))))))));
            /* LoopNest 2 */
            for (short i_26 = 1; i_26 < 10; i_26 += 2) 
            {
                for (short i_27 = 3; i_27 < 8; i_27 += 3) 
                {
                    {
                        arr_86 [i_26] [i_26] [i_25] [i_26] = ((((/* implicit */_Bool) (signed char)-72)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64076))) : (4294967040U));
                        arr_87 [i_26] [i_26] = ((/* implicit */unsigned int) var_4);
                        arr_88 [i_27] [i_26] [i_26] [i_27 - 3] = ((/* implicit */short) (~(((/* implicit */int) ((var_7) != (((/* implicit */unsigned long long int) max((-1), (((/* implicit */int) (unsigned char)50))))))))));
                    }
                } 
            } 
            var_55 = ((((8) / (((/* implicit */int) (unsigned short)10023)))) / (((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */int) (unsigned short)3163)) : (((/* implicit */int) (_Bool)1)))));
            arr_89 [(_Bool)1] [i_9] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)10023)), ((-(((/* implicit */int) var_9))))))) ? (min((((((/* implicit */_Bool) var_6)) ? (263U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)10021))) % (134217727U))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967049U)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 817314984U))))) : (((/* implicit */int) var_2)))))));
        }
    }
    var_56 = ((/* implicit */unsigned short) var_10);
    /* LoopSeq 1 */
    for (unsigned short i_28 = 3; i_28 < 10; i_28 += 2) 
    {
        arr_92 [i_28] = ((/* implicit */unsigned int) (-((+(var_7)))));
        var_57 &= ((/* implicit */unsigned short) (~((+(((/* implicit */int) ((((/* implicit */int) var_9)) != (((/* implicit */int) var_2)))))))));
    }
}
