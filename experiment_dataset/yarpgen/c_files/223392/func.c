/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223392
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (3395133039U)));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            var_11 *= ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_3 [i_1] [i_1]) || (((/* implicit */_Bool) (signed char)0)))))) & (2047U)))) > (((((var_7) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65524))) : (53526044422381193LL))) / (((/* implicit */long long int) arr_5 [i_1]))))));
            var_12 *= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) (-(-1559316713)))) || (((_Bool) arr_0 [i_1]))))) - ((-((-(((/* implicit */int) var_0))))))));
            var_13 = ((/* implicit */unsigned int) var_5);
            var_14 = ((((/* implicit */int) var_9)) & ((+(((/* implicit */int) ((signed char) (signed char)-94))))));
            var_15 = ((/* implicit */long long int) arr_3 [i_0] [i_0]);
        }
        for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) (signed char)(-127 - 1)))))))));
            var_17 = ((/* implicit */int) ((((/* implicit */long long int) 1559316713)) != (((((/* implicit */_Bool) (signed char)-1)) ? (arr_4 [i_0]) : (7938568433753092095LL)))));
        }
        var_18 = ((/* implicit */unsigned char) ((unsigned short) (~(((/* implicit */int) (signed char)0)))));
    }
    for (signed char i_3 = 0; i_3 < 15; i_3 += 1) /* same iter space */
    {
        var_19 -= ((/* implicit */unsigned char) max((((/* implicit */long long int) ((_Bool) max((((/* implicit */long long int) (_Bool)0)), (1325810526321349872LL))))), (((((((/* implicit */_Bool) (signed char)-74)) || (arr_3 [i_3] [0U]))) ? (min((53526044422381193LL), (((/* implicit */long long int) (unsigned short)45017)))) : (((/* implicit */long long int) 1559316730))))));
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((min((max((((/* implicit */long long int) (signed char)-15)), (var_4))), (((/* implicit */long long int) ((((-2147483638) + (2147483647))) << (((((/* implicit */int) (signed char)(-127 - 1))) + (136)))))))) % (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)27029)) : (((/* implicit */int) max((var_8), ((signed char)(-127 - 1)))))))))))));
    }
    /* vectorizable */
    for (signed char i_4 = 0; i_4 < 15; i_4 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_4] [i_4])) ? (((/* implicit */int) (signed char)3)) : (((/* implicit */int) (short)127))));
        arr_14 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */int) (signed char)-17)) - (((/* implicit */int) (unsigned short)1872))))) * (((((/* implicit */long long int) (-2147483647 - 1))) / (-53526044422381193LL)))));
        var_22 ^= ((/* implicit */long long int) ((arr_3 [i_4] [14]) ? (((/* implicit */int) arr_3 [(_Bool)1] [(_Bool)1])) : (((/* implicit */int) (unsigned short)65524))));
        /* LoopSeq 2 */
        for (int i_5 = 0; i_5 < 15; i_5 += 3) /* same iter space */
        {
            arr_18 [i_4] [(unsigned short)2] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_4]))) & (arr_0 [i_4])))) ? (((/* implicit */int) ((signed char) (signed char)-1))) : (((/* implicit */int) arr_3 [(unsigned short)1] [i_4]))));
            /* LoopSeq 4 */
            for (unsigned short i_6 = 0; i_6 < 15; i_6 += 4) 
            {
                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (signed char)17)) < (((/* implicit */int) var_2))))) >> (((/* implicit */int) var_1)))))));
                var_24 = ((/* implicit */signed char) ((arr_5 [i_5]) >> (((72978877U) - (72978849U)))));
            }
            for (unsigned int i_7 = 0; i_7 < 15; i_7 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned int i_8 = 0; i_8 < 15; i_8 += 1) 
                {
                    for (int i_9 = 0; i_9 < 15; i_9 += 2) 
                    {
                        {
                            var_25 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(2132060395)))) || (((/* implicit */_Bool) (~(((/* implicit */int) (short)2047)))))));
                            arr_31 [i_4] [i_5] [i_5] [(unsigned char)10] [i_5] [i_5] = ((/* implicit */unsigned char) var_8);
                        }
                    } 
                } 
                arr_32 [i_4] [i_4] [12ULL] [i_4] &= ((/* implicit */long long int) ((arr_6 [i_5] [i_5]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_4] [i_5] [(unsigned char)0])))));
                /* LoopSeq 1 */
                for (unsigned long long int i_10 = 0; i_10 < 15; i_10 += 1) 
                {
                    var_26 = ((/* implicit */unsigned char) ((_Bool) (unsigned short)25788));
                    var_27 = ((/* implicit */signed char) ((long long int) arr_16 [i_5] [i_5] [i_4]));
                    /* LoopSeq 2 */
                    for (unsigned char i_11 = 0; i_11 < 15; i_11 += 1) /* same iter space */
                    {
                        var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) arr_20 [i_5] [i_5] [i_5] [(signed char)6]))));
                        var_29 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-19570))) ^ (arr_11 [i_5] [i_11])));
                        var_30 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-10197))));
                        var_31 += ((/* implicit */signed char) ((((/* implicit */_Bool) 4294967295U)) ? (((var_4) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65524))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-49)))));
                        arr_37 [i_4] [1U] [i_4] [i_4] [i_11] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) -1182512722))))) != (((/* implicit */int) (signed char)63))));
                    }
                    for (unsigned char i_12 = 0; i_12 < 15; i_12 += 1) /* same iter space */
                    {
                        var_32 = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) arr_39 [(unsigned short)8] [(unsigned short)8] [i_5] [(short)12] [i_10] [i_12] [i_12]))) ? (var_10) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-76)) & (((/* implicit */int) var_8)))))));
                        var_33 ^= ((/* implicit */int) ((((/* implicit */unsigned int) 1520231640)) > (arr_7 [i_4] [i_7] [i_12])));
                        arr_40 [(_Bool)1] [(signed char)13] [i_7] [i_4] = (signed char)-17;
                        var_34 += ((/* implicit */short) (!((((_Bool)1) && ((_Bool)1)))));
                    }
                }
            }
            for (long long int i_13 = 0; i_13 < 15; i_13 += 2) 
            {
                var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) -1559316713))));
                arr_45 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) var_5);
                var_36 = ((unsigned long long int) var_3);
            }
            for (unsigned char i_14 = 0; i_14 < 15; i_14 += 3) 
            {
                arr_48 [i_4] = ((/* implicit */unsigned long long int) ((arr_33 [i_4] [i_4] [i_4] [i_4]) == (((/* implicit */unsigned long long int) 34205245U))));
                arr_49 [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_15 [i_4] [i_5] [i_14])) : (((/* implicit */int) (short)1023))));
            }
        }
        for (int i_15 = 0; i_15 < 15; i_15 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned int i_16 = 1; i_16 < 11; i_16 += 1) /* same iter space */
            {
                var_37 = ((/* implicit */short) var_10);
                arr_55 [12] &= ((/* implicit */short) (-(((long long int) 2097151LL))));
                /* LoopNest 2 */
                for (unsigned long long int i_17 = 0; i_17 < 15; i_17 += 2) 
                {
                    for (unsigned long long int i_18 = 3; i_18 < 13; i_18 += 1) 
                    {
                        {
                            var_38 += ((/* implicit */unsigned long long int) (unsigned char)119);
                            arr_62 [4U] [i_15] [i_4] [i_15] [i_15] = ((/* implicit */unsigned long long int) ((arr_61 [i_18 - 3] [i_4]) & (((/* implicit */int) (_Bool)0))));
                            arr_63 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) 4294967288U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-6))) : (290627689919799920ULL)));
                            arr_64 [i_17] [i_16] [i_17] &= ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) & (((/* implicit */int) arr_21 [i_4] [i_17] [i_16]))));
                            var_39 *= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_38 [i_4] [i_17] [i_4] [i_15] [i_16] [i_17] [i_18 - 2])) : (2147483647))) | (((/* implicit */int) arr_29 [(signed char)8] [i_15] [i_15] [i_17] [i_18] [i_15]))));
                        }
                    } 
                } 
            }
            for (unsigned int i_19 = 1; i_19 < 11; i_19 += 1) /* same iter space */
            {
                var_40 = ((/* implicit */unsigned int) ((18446744073709551615ULL) & (((/* implicit */unsigned long long int) arr_61 [i_19 + 1] [i_4]))));
                /* LoopNest 2 */
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    for (unsigned long long int i_21 = 4; i_21 < 13; i_21 += 2) 
                    {
                        {
                            var_41 = ((/* implicit */unsigned char) min((var_41), (((/* implicit */unsigned char) var_5))));
                            var_42 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (var_3)))) ? (((3263375933417967363LL) & (((/* implicit */long long int) -944867450)))) : (((/* implicit */long long int) arr_27 [i_21 + 1] [i_21] [i_21] [i_21] [i_21] [i_21 - 3] [i_21 - 2]))));
                        }
                    } 
                } 
            }
            var_43 = ((/* implicit */unsigned int) arr_36 [(unsigned short)9] [i_4] [i_4] [i_15] [i_4] [i_15]);
            /* LoopSeq 1 */
            for (int i_22 = 0; i_22 < 15; i_22 += 4) 
            {
                arr_73 [i_4] [i_15] [i_4] = ((/* implicit */long long int) -1882873182);
                var_44 = ((/* implicit */unsigned char) max((var_44), (((/* implicit */unsigned char) ((((/* implicit */int) arr_34 [i_4] [(unsigned char)2] [(unsigned char)2] [i_4] [(signed char)14] [i_4])) >> (((((699217938084260012ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)31604))))) - (699217938084238276ULL))))))));
            }
            arr_74 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)26882)) ? (((arr_25 [i_4] [i_15] [4ULL] [i_15] [i_15] [i_4]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-16))))) : ((-(16777215U)))));
            arr_75 [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_56 [i_4] [i_4] [i_15] [4U] [i_4] [i_4])) ? (arr_25 [i_4] [i_15] [i_15] [i_15] [i_15] [i_4]) : (arr_25 [i_4] [i_15] [1U] [i_15] [(_Bool)1] [i_4])));
        }
    }
    var_45 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((3992053822922024927LL), (((/* implicit */long long int) 1882873192))))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (5475713530442548953LL)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-30)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-30))) : (var_3)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9))))) : (((var_4) & (((/* implicit */long long int) -1520231640)))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_4))))));
}
