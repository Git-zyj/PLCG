/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247761
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
    var_10 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_5))));
    var_11 = ((/* implicit */short) var_5);
    var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) var_0))));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 7; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */unsigned long long int) var_0);
                    var_14 |= ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0] [i_0] [i_0])) % (-1755842505)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)62716)))))) : (((arr_6 [(unsigned short)5]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)51))))))) >= (((/* implicit */unsigned long long int) ((arr_8 [i_2 + 2] [i_0] [i_2]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2 + 2] [5ULL] [5ULL]))) : (8176U))))));
                    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) arr_6 [i_0]))));
                }
            } 
        } 
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (+(max((8172U), (7U)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967294U)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_5 [i_0]))))) ? (1152921504606846976LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) 4294959112U)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) var_5))))))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_3 = 0; i_3 < 11; i_3 += 3) 
        {
            /* LoopNest 2 */
            for (short i_4 = 3; i_4 < 7; i_4 += 2) 
            {
                for (unsigned int i_5 = 0; i_5 < 11; i_5 += 2) 
                {
                    {
                        var_17 = ((/* implicit */short) (!(arr_7 [i_0] [i_0] [i_0])));
                        arr_17 [i_3] [i_3] [i_3] [i_4 + 2] [i_4] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)39500)) ? (((/* implicit */int) arr_15 [i_4] [i_4] [i_4] [i_4] [i_4 - 1])) : (((/* implicit */int) arr_15 [(short)4] [(short)4] [i_3] [i_3] [i_4 - 1]))));
                        /* LoopSeq 3 */
                        for (int i_6 = 2; i_6 < 10; i_6 += 3) 
                        {
                            var_18 = ((/* implicit */_Bool) ((arr_12 [i_0] [(_Bool)1] [i_4 - 2] [i_6 + 1]) ? (((/* implicit */int) ((unsigned short) arr_19 [i_3] [i_3] [i_4] [i_5] [i_6] [i_5] [i_0]))) : (((/* implicit */int) ((((/* implicit */int) var_6)) >= (((/* implicit */int) arr_1 [i_0] [i_6])))))));
                            var_19 &= ((/* implicit */long long int) (!(arr_1 [i_4 + 3] [i_4 + 3])));
                        }
                        for (unsigned short i_7 = 1; i_7 < 10; i_7 += 4) 
                        {
                            var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) (~(4294967290U))))));
                            var_21 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_4 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)249))) : (arr_22 [i_0] [i_3] [i_4 + 1] [i_5] [5U])));
                            var_22 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18936))) ^ (8169U)));
                            arr_23 [i_0] [i_0] [i_0] [1U] [i_3] = ((/* implicit */_Bool) (short)24112);
                        }
                        for (unsigned short i_8 = 1; i_8 < 7; i_8 += 2) 
                        {
                            var_23 *= ((/* implicit */unsigned int) ((unsigned short) var_0));
                            var_24 -= ((/* implicit */short) (((_Bool)1) ? ((((_Bool)1) ? (arr_10 [i_3]) : (arr_20 [i_0] [i_3] [i_4] [i_5] [i_8 + 3] [i_8 + 1]))) : (((/* implicit */int) (unsigned short)35961))));
                        }
                    }
                } 
            } 
            var_25 |= var_4;
            var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) ^ (arr_6 [i_3])))) && (((/* implicit */_Bool) arr_15 [(short)0] [i_3] [i_3] [i_0] [i_0]))));
            var_27 = ((/* implicit */unsigned short) ((6087851618263843528LL) / (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))));
            /* LoopSeq 2 */
            for (unsigned int i_9 = 0; i_9 < 11; i_9 += 4) 
            {
                var_28 = ((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_9] [i_0] [i_9])) * (((/* implicit */int) arr_14 [i_3] [i_3] [i_3]))));
                var_29 &= ((/* implicit */unsigned short) arr_0 [(unsigned short)4] [i_9]);
                var_30 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_29 [i_9] [i_9] [i_9] [i_0])) || (((/* implicit */_Bool) arr_29 [i_0] [i_9] [i_9] [i_9]))));
                var_31 += ((/* implicit */unsigned int) ((arr_26 [i_0] [i_3] [i_0]) > (((/* implicit */int) (short)28312))));
            }
            for (unsigned short i_10 = 0; i_10 < 11; i_10 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_11 = 2; i_11 < 10; i_11 += 4) 
                {
                    arr_34 [i_0] [i_3] [i_10] [i_11] = ((/* implicit */_Bool) ((var_8) ? (((/* implicit */int) var_0)) : (arr_20 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10])));
                    var_32 = ((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0] [i_3] [i_10])) << (((/* implicit */int) var_4))));
                    var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-28286)) ? (6087851618263843522LL) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                    var_34 = (+(((/* implicit */int) (unsigned char)3)));
                    var_35 = ((/* implicit */unsigned short) (~(15183802613989725320ULL)));
                }
                arr_35 [i_0] [i_3] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 18014726317601179730ULL)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (arr_20 [i_0] [i_3] [i_3] [i_10] [i_10] [i_10])));
                var_36 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_3])) ? (4294959100U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_10] [i_3] [i_3] [i_0])))));
            }
        }
        for (unsigned short i_12 = 0; i_12 < 11; i_12 += 1) 
        {
            var_37 = ((/* implicit */unsigned char) arr_19 [i_12] [i_12] [i_0] [i_12] [i_12] [i_0] [i_0]);
            arr_39 [i_12] [(unsigned char)2] [i_12] = ((unsigned int) arr_1 [(unsigned short)4] [i_0]);
        }
    }
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        var_38 = ((/* implicit */unsigned short) max((var_38), (((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) arr_40 [i_13]))))))));
        arr_44 [i_13] [i_13] = ((/* implicit */short) ((min((((/* implicit */int) arr_43 [i_13])), (((int) (unsigned short)19172)))) & (((/* implicit */int) max(((short)20837), (((/* implicit */short) (!(var_2)))))))));
        var_39 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65534)) ? (((/* implicit */int) (unsigned short)20151)) : (((/* implicit */int) (short)4409))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3346624826U)) ? (((/* implicit */int) arr_43 [i_13])) : (((/* implicit */int) var_0))))) / (arr_42 [i_13] [i_13]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_43 [i_13])) % (((/* implicit */int) (short)-32756)))))));
        var_40 = ((/* implicit */short) ((((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)1)))) ? (((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9))))) | (((unsigned long long int) var_7)))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)31254)) | (((/* implicit */int) (_Bool)1))))), (arr_42 [i_13] [i_13])))));
        var_41 = ((/* implicit */unsigned short) (((-((-(((/* implicit */int) arr_40 [8LL])))))) > (((/* implicit */int) max((((_Bool) var_4)), ((!(((/* implicit */_Bool) var_3)))))))));
    }
    for (signed char i_14 = 2; i_14 < 15; i_14 += 4) 
    {
        /* LoopNest 3 */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            for (short i_16 = 0; i_16 < 16; i_16 += 3) 
            {
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    {
                        var_42 = ((/* implicit */long long int) arr_47 [i_16]);
                        var_43 = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)237))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned int i_18 = 0; i_18 < 16; i_18 += 3) 
        {
            var_44 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
            var_45 &= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_42 [i_14 + 1] [i_14 - 2]) <= (arr_42 [i_14 - 1] [i_14 + 1]))))) | (max((((/* implicit */unsigned long long int) 4294959111U)), (arr_42 [i_14 - 2] [i_14 - 1])))));
        }
        for (short i_19 = 0; i_19 < 16; i_19 += 4) 
        {
            var_46 = ((/* implicit */unsigned char) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_14]))) ^ (arr_42 [i_14] [i_19]))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_53 [i_14])))))) >> (((((/* implicit */int) ((short) ((((/* implicit */int) arr_59 [i_19] [(short)2] [i_14 + 1])) % (630265610))))) + (21392)))));
            var_47 = ((/* implicit */unsigned short) (~(((((/* implicit */int) arr_47 [i_14 + 1])) + (((/* implicit */int) arr_47 [i_14 + 1]))))));
            /* LoopSeq 1 */
            for (unsigned short i_20 = 1; i_20 < 15; i_20 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_21 = 2; i_21 < 15; i_21 += 2) 
                {
                    var_48 = ((/* implicit */short) arr_42 [i_21 - 1] [i_21 + 1]);
                    var_49 = ((/* implicit */_Bool) max(((unsigned short)20263), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_57 [i_20 + 1] [i_21 + 1] [i_21 - 2])))))));
                    var_50 |= ((/* implicit */signed char) arr_47 [i_14 - 2]);
                    var_51 = ((/* implicit */_Bool) max((var_51), (((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1))))));
                }
                for (int i_22 = 0; i_22 < 16; i_22 += 4) 
                {
                    var_52 -= ((/* implicit */unsigned long long int) ((short) (-(((/* implicit */int) ((_Bool) arr_65 [i_14] [i_19] [i_14] [i_22]))))));
                    var_53 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */int) arr_51 [i_20 - 1] [i_19] [i_20 - 1])) % (((/* implicit */int) arr_48 [i_20 + 1] [i_20 + 1] [i_20 - 1])))));
                    arr_68 [i_20] [i_22] [i_20] = ((/* implicit */short) (~(4294959112U)));
                }
                arr_69 [i_14] [i_14 - 2] = ((/* implicit */unsigned short) (~((+(10210484767053325788ULL)))));
                arr_70 [i_14] [i_19] [7U] [i_20 + 1] = ((/* implicit */_Bool) var_6);
            }
            var_54 = ((/* implicit */unsigned char) min((var_54), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_14]))) % (arr_60 [(short)15] [(short)14] [(short)14]))))));
        }
    }
    for (_Bool i_23 = 0; i_23 < 0; i_23 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_24 = 0; i_24 < 20; i_24 += 1) 
        {
            var_55 = ((/* implicit */unsigned char) max((var_55), (((/* implicit */unsigned char) ((_Bool) ((((/* implicit */int) min((((/* implicit */unsigned char) arr_75 [i_23] [(unsigned short)3] [i_24])), ((unsigned char)21)))) / ((-(((/* implicit */int) var_9))))))))));
            var_56 = ((/* implicit */unsigned short) (_Bool)1);
            arr_77 [i_24] = ((/* implicit */unsigned short) (unsigned char)144);
            var_57 &= ((/* implicit */unsigned short) ((unsigned long long int) (_Bool)1));
        }
        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
        {
            var_58 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_73 [(_Bool)0] [(unsigned short)12]))));
            /* LoopNest 2 */
            for (unsigned short i_26 = 4; i_26 < 19; i_26 += 4) 
            {
                for (unsigned short i_27 = 0; i_27 < 20; i_27 += 1) 
                {
                    {
                        var_59 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) 8236259306656225835ULL))) ? (((arr_78 [i_26 - 3] [i_26] [i_26]) ? (((/* implicit */int) (unsigned char)240)) : (((/* implicit */int) arr_78 [i_26 - 3] [i_26] [i_26])))) : (((((/* implicit */_Bool) (short)11265)) ? (((/* implicit */int) arr_84 [i_27] [i_27] [i_26 - 4] [i_27] [i_26 - 2])) : (((/* implicit */int) var_3))))));
                        var_60 = 1034147282;
                    }
                } 
            } 
        }
        arr_87 [i_23] = ((/* implicit */short) (-(((((((/* implicit */_Bool) arr_83 [i_23 + 1] [i_23] [i_23] [i_23])) && (((/* implicit */_Bool) 2269341909U)))) ? (((/* implicit */int) (unsigned char)239)) : (((/* implicit */int) max((((/* implicit */unsigned char) var_2)), (var_0))))))));
        var_61 = ((((/* implicit */int) (signed char)82)) >= (((/* implicit */int) (_Bool)1)));
    }
}
