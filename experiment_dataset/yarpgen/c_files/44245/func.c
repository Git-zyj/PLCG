/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44245
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
    var_13 &= ((/* implicit */long long int) var_0);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (18446744073709551615ULL)))) << (((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) != (((/* implicit */int) (unsigned char)236)))))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 15; i_2 += 2) 
            {
                for (int i_3 = 0; i_3 < 16; i_3 += 2) 
                {
                    {
                        var_14 = ((/* implicit */_Bool) max(((short)0), ((short)0)));
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_12 [i_0] [(short)5] [i_4] [i_3] [i_4] = ((/* implicit */unsigned char) (short)0);
                            var_15 = ((((/* implicit */int) max(((short)16), ((short)32748)))) <= (((/* implicit */int) ((((/* implicit */int) (unsigned char)197)) == (((/* implicit */int) (signed char)120))))));
                            var_16 = ((/* implicit */unsigned short) (unsigned char)197);
                            var_17 &= ((/* implicit */long long int) ((((min((3810947897U), (((/* implicit */unsigned int) (signed char)-1)))) / (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)-16))))))) | (((/* implicit */unsigned int) ((/* implicit */int) min((min(((short)-31630), ((short)-27))), ((short)16)))))));
                        }
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned int i_5 = 2; i_5 < 14; i_5 += 1) /* same iter space */
        {
            arr_15 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) ((3622497097U) == (((/* implicit */unsigned int) ((/* implicit */int) (short)-27)))))) * (((/* implicit */int) ((((/* implicit */int) (unsigned char)24)) >= (((/* implicit */int) (unsigned char)255)))))));
            var_18 = 16281047185167626024ULL;
            /* LoopNest 2 */
            for (unsigned int i_6 = 0; i_6 < 16; i_6 += 1) 
            {
                for (signed char i_7 = 0; i_7 < 16; i_7 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (long long int i_8 = 0; i_8 < 16; i_8 += 2) 
                        {
                            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((min((22U), (((/* implicit */unsigned int) (_Bool)1)))) | (((/* implicit */unsigned int) ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (unsigned char)31)))))))))));
                            var_20 = ((/* implicit */unsigned int) ((max((((/* implicit */int) (unsigned char)31)), (-1291215218))) << (((((((((/* implicit */int) (short)-22919)) + (2147483647))) << (((((/* implicit */int) (unsigned char)211)) - (211))))) - (2147460710)))));
                            var_21 = ((/* implicit */_Bool) min((var_21), (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)36226))) | (1583189683U)))) || (((/* implicit */_Bool) ((-1291215218) ^ (((/* implicit */int) (_Bool)1)))))))));
                        }
                        arr_22 [i_6] = ((/* implicit */short) ((((2147483647) << (((/* implicit */int) (_Bool)0)))) / (((2147483647) << (((2711777613U) - (2711777613U)))))));
                        arr_23 [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-22919)) + (2147483647))) << (((((((((/* implicit */int) (unsigned char)215)) | (((/* implicit */int) (signed char)-78)))) + (13))) - (4)))));
                    }
                } 
            } 
        }
        for (unsigned int i_9 = 2; i_9 < 14; i_9 += 1) /* same iter space */
        {
            arr_26 [i_9] [(signed char)9] = ((/* implicit */unsigned int) (unsigned char)236);
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)203)) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)149)), (4294967289U))))));
            var_23 = ((/* implicit */unsigned int) ((((2770902183558702661LL) ^ (((/* implicit */long long int) -1291215218)))) == (((/* implicit */long long int) max((((/* implicit */unsigned int) -2147483631)), (2711777615U))))));
            var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) 4398046511103LL)) || (((/* implicit */_Bool) (unsigned char)16))))) / (min((((/* implicit */int) (unsigned short)61970)), (2147483647)))));
        }
        for (unsigned int i_10 = 2; i_10 < 14; i_10 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned int i_11 = 0; i_11 < 16; i_11 += 1) 
            {
                var_25 = (_Bool)0;
                var_26 -= ((/* implicit */_Bool) (unsigned short)61970);
                var_27 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) <= (4655413893965386014ULL)));
            }
            /* vectorizable */
            for (unsigned short i_12 = 3; i_12 < 15; i_12 += 4) 
            {
                /* LoopSeq 1 */
                for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                {
                    var_28 = ((/* implicit */short) ((((/* implicit */int) (signed char)120)) > (((/* implicit */int) ((((/* implicit */int) (signed char)21)) == (((/* implicit */int) (signed char)118)))))));
                    arr_37 [i_0] [i_0] [i_12] [i_12] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) (unsigned char)240))));
                }
                /* LoopSeq 3 */
                for (unsigned int i_14 = 0; i_14 < 16; i_14 += 2) 
                {
                    arr_41 [i_12] [i_10] [i_10 - 1] [i_10 + 1] = ((/* implicit */unsigned short) -1LL);
                    var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) / (((2957492320U) % (((/* implicit */unsigned int) 1291215217)))))))));
                }
                for (unsigned short i_15 = 0; i_15 < 16; i_15 += 2) 
                {
                    arr_46 [i_12] [i_12 + 1] [i_10] [12U] [i_12] = ((/* implicit */_Bool) (unsigned char)144);
                    arr_47 [i_0] [i_0] [i_12 - 3] [i_15] &= ((/* implicit */unsigned int) (signed char)-87);
                    var_30 = (unsigned short)46520;
                    /* LoopSeq 3 */
                    for (unsigned int i_16 = 3; i_16 < 14; i_16 += 2) 
                    {
                        var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) (signed char)-116))));
                        arr_50 [i_0] [i_10 - 2] [(short)7] [i_12] [i_15] [i_12] = ((/* implicit */unsigned short) 3158729033U);
                    }
                    for (long long int i_17 = 1; i_17 < 14; i_17 += 2) /* same iter space */
                    {
                        var_32 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)127)) == (((/* implicit */int) (signed char)120))));
                        var_33 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned short)6088))));
                    }
                    for (long long int i_18 = 1; i_18 < 14; i_18 += 2) /* same iter space */
                    {
                        var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) ((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (signed char)120)))))));
                        var_35 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)106)) >= (((/* implicit */int) (unsigned char)108))));
                        arr_56 [i_0] [i_12] [i_0] [i_15] [i_0] = ((/* implicit */_Bool) (short)-26245);
                        var_36 = ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)41))) == (861666067U))) || ((_Bool)0));
                        var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) (_Bool)1))));
                    }
                    /* LoopSeq 1 */
                    for (short i_19 = 1; i_19 < 15; i_19 += 3) 
                    {
                        var_38 += ((/* implicit */signed char) ((-6880671586217830282LL) <= (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) | (455590966U))))));
                        arr_60 [i_0] [i_0] [i_0] [i_15] [i_12] = ((((/* implicit */_Bool) (unsigned char)8)) || (((/* implicit */_Bool) (unsigned char)255)));
                    }
                }
                for (short i_20 = 0; i_20 < 16; i_20 += 1) 
                {
                    var_39 &= ((/* implicit */long long int) (_Bool)1);
                    arr_64 [i_0] [i_0] |= (signed char)-127;
                    /* LoopSeq 2 */
                    for (unsigned long long int i_21 = 1; i_21 < 15; i_21 += 3) 
                    {
                        var_40 = ((/* implicit */signed char) ((1995282050U) << (((((/* implicit */int) (short)1023)) - (1003)))));
                        arr_67 [1U] [i_10 - 1] [i_12] [i_20] [1U] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)30479)) <= (((/* implicit */int) (signed char)-119))));
                    }
                    for (unsigned int i_22 = 0; i_22 < 16; i_22 += 3) 
                    {
                        arr_71 [i_12] [(signed char)6] [(short)2] [(short)13] [i_22] = ((/* implicit */short) ((2299685251U) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-127)))));
                        var_41 -= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)63215))) / (2672487014408016529LL)));
                    }
                }
                var_42 = ((/* implicit */unsigned long long int) (unsigned char)255);
            }
            arr_72 [i_0] = ((/* implicit */unsigned long long int) 4294967289U);
        }
    }
    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
    {
        arr_75 [i_23] [i_23] = min((((/* implicit */unsigned int) max((((/* implicit */unsigned char) (signed char)-2)), ((unsigned char)255)))), (455590991U));
        arr_76 [i_23] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) -1)), (1165438704U)))) - (((6486655270551390142ULL) | (((/* implicit */unsigned long long int) 2667890897U))))));
        var_43 = ((/* implicit */_Bool) max((var_43), (((((((/* implicit */_Bool) (signed char)46)) || (((/* implicit */_Bool) 438034115)))) || (((/* implicit */_Bool) max((2147483647U), (((/* implicit */unsigned int) (unsigned char)116)))))))));
    }
}
