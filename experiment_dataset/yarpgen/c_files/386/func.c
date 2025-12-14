/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/386
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? ((+(var_12))) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned char)249)))))));
        /* LoopSeq 1 */
        for (long long int i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            var_20 = ((((/* implicit */_Bool) ((((/* implicit */int) var_18)) << (((/* implicit */int) (_Bool)1))))) ? (arr_3 [i_1 - 1] [i_1 + 4] [i_1 - 1]) : (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (var_5))));
            arr_4 [i_0] [i_0] [9] = ((/* implicit */int) (-(arr_1 [i_0])));
            var_21 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_16))));
            /* LoopSeq 1 */
            for (unsigned char i_2 = 2; i_2 < 21; i_2 += 3) 
            {
                arr_7 [i_0] [i_1] [i_2 + 2] = ((/* implicit */_Bool) ((3121947001013842846LL) - (((/* implicit */long long int) -959773880))));
                arr_8 [i_0] [i_0] [(signed char)18] [i_0] = ((/* implicit */unsigned short) 7U);
            }
        }
        /* LoopNest 3 */
        for (signed char i_3 = 1; i_3 < 22; i_3 += 2) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (unsigned long long int i_5 = 2; i_5 < 21; i_5 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 1; i_6 < 19; i_6 += 2) 
                        {
                            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)55565)) ? ((-(((/* implicit */int) (signed char)117)))) : ((-(((/* implicit */int) (unsigned short)48143))))));
                            var_23 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) var_1)) : (18446744073709551615ULL))) | (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)7))) : (arr_9 [i_4] [i_5])))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned char i_7 = 0; i_7 < 23; i_7 += 3) 
                        {
                            var_24 = ((/* implicit */unsigned char) ((long long int) arr_12 [i_4] [i_3 + 1] [i_4]));
                            arr_25 [i_0] [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */int) var_14)) ^ (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0])))) < (((((/* implicit */int) (unsigned short)22603)) << (((((/* implicit */int) var_18)) - (1606)))))));
                        }
                        var_25 -= (+(((((/* implicit */_Bool) (unsigned char)221)) ? (4294967266U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))));
                    }
                } 
            } 
        } 
        arr_26 [i_0] [i_0] = ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (arr_3 [i_0] [i_0] [i_0]) : (arr_3 [i_0] [(unsigned short)14] [i_0]));
    }
    for (unsigned long long int i_8 = 1; i_8 < 9; i_8 += 4) 
    {
        arr_30 [i_8] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_12)))) ? (max((13278140730609708488ULL), (((/* implicit */unsigned long long int) (unsigned char)102)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (signed char)66))))));
        var_26 = ((/* implicit */unsigned char) max((((unsigned int) (((_Bool)1) ? (8207365244740360232LL) : (((/* implicit */long long int) var_16))))), (((/* implicit */unsigned int) ((((/* implicit */int) var_10)) & (((/* implicit */int) min((var_14), ((signed char)3)))))))));
        var_27 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) var_11)) ? (arr_24 [i_8] [i_8 - 1] [i_8] [i_8 + 1] [i_8]) : (((/* implicit */unsigned long long int) 8925578823653816703LL)))));
        /* LoopNest 3 */
        for (signed char i_9 = 0; i_9 < 10; i_9 += 2) 
        {
            for (unsigned long long int i_10 = 1; i_10 < 6; i_10 += 3) 
            {
                for (unsigned int i_11 = 0; i_11 < 10; i_11 += 2) 
                {
                    {
                        var_28 |= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) << (((-1818607) + (1818626)))))), (min((((/* implicit */unsigned long long int) (unsigned char)32)), (17066319795858292600ULL)))))));
                        var_29 = ((/* implicit */unsigned long long int) max((var_29), (((max((((/* implicit */unsigned long long int) arr_15 [i_8 - 1] [i_9] [(unsigned char)10])), ((-(856802842432069555ULL))))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)23642)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)-3842))))) ? (209329730398197097ULL) : (((/* implicit */unsigned long long int) max((var_4), (4294967288U))))))))));
                        arr_37 [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)255)), (arr_36 [i_8 + 1] [i_10 + 2] [i_10] [i_8])))) ? (((/* implicit */int) ((((/* implicit */int) var_11)) != (((/* implicit */int) var_8))))) : (((/* implicit */int) min((var_9), (var_9))))));
                        var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) arr_33 [i_8] [(_Bool)1]))));
                    }
                } 
            } 
        } 
    }
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        arr_42 [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_17))))), (15088630690002195239ULL)))) ? ((-(((unsigned long long int) var_17)))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_12] [(short)15] [i_12] [i_12])) % (((/* implicit */int) var_8))))), (min((((/* implicit */unsigned int) var_0)), (var_12))))))));
        arr_43 [i_12] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)50081)) ? (-6301169494851412606LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? ((+(((/* implicit */int) (unsigned short)46748)))) : (((/* implicit */int) var_14))))), (var_12)));
    }
    /* LoopSeq 3 */
    for (unsigned char i_13 = 3; i_13 < 17; i_13 += 4) 
    {
        var_31 += ((/* implicit */unsigned long long int) var_8);
        arr_46 [i_13] [i_13] = ((/* implicit */long long int) arr_20 [i_13 - 2] [i_13] [i_13 - 2] [i_13 - 2] [i_13]);
        /* LoopNest 3 */
        for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
        {
            for (unsigned int i_15 = 0; i_15 < 19; i_15 += 2) 
            {
                for (signed char i_16 = 1; i_16 < 18; i_16 += 3) 
                {
                    {
                        var_32 *= ((short) max((((((/* implicit */int) var_10)) >= (-1))), (((((/* implicit */int) var_7)) > (((/* implicit */int) (unsigned char)30))))));
                        arr_54 [i_13 - 3] [i_13] [i_13] [i_13 + 2] [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 32767U)), (5784372023876199083ULL)))) ? (((/* implicit */int) ((arr_23 [(short)7] [i_13] [i_13 + 1] [i_13 + 1] [i_16]) != (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_16 + 1])))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_16 - 1]))) == (8711931964855748340ULL))))));
                        arr_55 [i_13] [i_14] [i_15] [i_13] = ((/* implicit */unsigned char) ((((((/* implicit */long long int) 2000288865U)) != (-5626225270296698107LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((long long int) -2345248296640415686LL)) > (((/* implicit */long long int) ((/* implicit */int) var_0))))))) : (((max((12180389215050243056ULL), (((/* implicit */unsigned long long int) var_17)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_13 + 2] [22U] [i_13 - 2])))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (long long int i_17 = 1; i_17 < 18; i_17 += 4) 
        {
            for (unsigned int i_18 = 4; i_18 < 17; i_18 += 4) 
            {
                for (unsigned long long int i_19 = 2; i_19 < 16; i_19 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_20 = 0; i_20 < 0; i_20 += 1) 
                        {
                            arr_65 [i_20] [i_13] [(unsigned char)0] [i_13] [i_13] [i_13] = ((/* implicit */unsigned int) (-(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)110))) / (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)46))) ^ (3305881935348174561LL)))))));
                            var_33 += ((/* implicit */long long int) ((((/* implicit */unsigned long long int) max((arr_23 [i_20] [i_19 + 1] [i_19] [i_19 - 1] [i_18 - 2]), (arr_23 [i_19] [i_19 + 2] [i_19] [i_19] [i_18 + 1])))) - (((unsigned long long int) (unsigned char)6))));
                        }
                        arr_66 [i_13] = ((/* implicit */unsigned long long int) (+((((!(((/* implicit */_Bool) var_9)))) ? (min((var_16), (((/* implicit */unsigned int) var_8)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))));
                        arr_67 [i_18] |= ((/* implicit */_Bool) ((((((/* implicit */_Bool) max(((signed char)-1), (((/* implicit */signed char) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [(_Bool)1] [(_Bool)1] [i_18] [i_19] [i_18])))))) : (((unsigned long long int) var_0)))) >> ((((+(((/* implicit */int) max((((/* implicit */short) arr_15 [i_13] [i_17 + 1] [i_18 - 4])), (var_18)))))) - (1608)))));
                        var_34 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+((~(((/* implicit */int) var_3))))))) ? (((/* implicit */int) max((var_6), (((/* implicit */signed char) (!(arr_50 [18LL] [i_17] [i_18] [i_19]))))))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_20 [i_19] [i_17] [i_19] [i_19 - 1] [i_19])) ? (1690766472U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_49 [i_18] [i_18])))))))));
                        var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) ((((arr_3 [i_13 + 2] [i_17 + 1] [i_18 - 1]) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-111))))) ? (((/* implicit */int) max((((unsigned short) (unsigned short)49557)), (((/* implicit */unsigned short) ((_Bool) 772055110352273161LL)))))) : ((((_Bool)1) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) < (3821589202U)))) : (((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) || (((/* implicit */_Bool) (unsigned short)29602))))))))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_21 = 0; i_21 < 15; i_21 += 2) 
    {
        arr_71 [i_21] |= ((/* implicit */signed char) (+(3705393696U)));
        var_36 &= ((/* implicit */unsigned short) ((max(((((_Bool)1) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11)))), (((/* implicit */int) arr_57 [i_21])))) + ((-(((/* implicit */int) var_17))))));
    }
    for (signed char i_22 = 0; i_22 < 22; i_22 += 2) 
    {
        arr_76 [i_22] [i_22] = ((/* implicit */short) ((unsigned long long int) (+(((var_1) | (((/* implicit */long long int) ((/* implicit */int) var_10))))))));
        var_37 -= ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((unsigned short)64585), (((/* implicit */unsigned short) (_Bool)1))))) ? (((/* implicit */unsigned int) ((int) arr_2 [i_22]))) : (max((var_5), (((/* implicit */unsigned int) var_11))))))), (max((((/* implicit */unsigned long long int) min((-2229157574190205643LL), (((/* implicit */long long int) var_9))))), (((arr_13 [i_22]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))));
        arr_77 [i_22] = ((/* implicit */_Bool) max((15428922337782384219ULL), (((/* implicit */unsigned long long int) var_7))));
        arr_78 [i_22] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 2415701220U)) ? (((/* implicit */int) (short)32323)) : (((/* implicit */int) (unsigned short)42912)))), (((((/* implicit */_Bool) 4553834535578618818ULL)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_6))))))) ? (((((/* implicit */_Bool) 4095ULL)) ? (2305843009213693952ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)108))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))));
        var_38 = ((/* implicit */_Bool) min((var_38), (((((/* implicit */_Bool) ((unsigned long long int) ((-1503035158793420781LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))))) || (((((/* implicit */_Bool) (unsigned short)61772)) && ((_Bool)1)))))));
    }
}
