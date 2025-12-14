/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27290
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
    var_20 = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)57396))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_21 *= ((/* implicit */short) (-((+(((((/* implicit */int) (short)-26844)) * (((/* implicit */int) (unsigned short)33781))))))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 22; i_2 += 2) /* same iter space */
                {
                    arr_9 [i_0] [i_1] [i_1] [2U] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)57396)) : (((/* implicit */int) (unsigned char)16))))));
                    var_22 = ((/* implicit */unsigned char) (~((~(4921699782512642851ULL)))));
                }
                for (long long int i_3 = 0; i_3 < 22; i_3 += 2) /* same iter space */
                {
                    var_23 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((6618988568302439585LL), (((/* implicit */long long int) (unsigned short)8161))))) ? (((/* implicit */int) (unsigned char)229)) : (((/* implicit */int) (unsigned short)9045))))) ? (((/* implicit */int) (short)-26841)) : (max((((((/* implicit */_Bool) 4181849910U)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)9045)))), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)8161)) && ((_Bool)1))))))));
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 22; i_4 += 3) 
                    {
                        for (unsigned long long int i_5 = 2; i_5 < 20; i_5 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_17), (((/* implicit */unsigned short) var_5)))))) <= (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)30))) : (14835727017974380820ULL))))))) : ((-(((var_4) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))))))));
                                arr_19 [i_4] [i_4] [i_1] [i_1] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) max(((unsigned char)50), ((unsigned char)229)))) && (((/* implicit */_Bool) (unsigned short)57404))));
                                arr_20 [i_4] [i_4] [i_4] = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) max(((unsigned char)255), ((unsigned char)20)))) ? (((/* implicit */int) max(((unsigned short)0), ((unsigned short)0)))) : (((/* implicit */int) var_15))))), (((((/* implicit */_Bool) (+(6150219503266499896LL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (max((var_19), (((/* implicit */long long int) var_1))))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) var_18))));
                }
                for (unsigned long long int i_6 = 1; i_6 < 21; i_6 += 4) 
                {
                    var_26 = (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)57417)) - ((~(((/* implicit */int) (signed char)127))))))));
                    arr_23 [(unsigned char)9] [(unsigned char)9] [(unsigned char)9] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((((/* implicit */int) var_14)) % (((/* implicit */int) var_5)))) == ((~(-188037750))))))));
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 22; i_7 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 2; i_8 < 19; i_8 += 2) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 22; i_9 += 3) 
                        {
                            {
                                var_27 -= ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
                                var_28 += ((/* implicit */unsigned long long int) ((-105707878) / (((/* implicit */int) (unsigned short)57418))));
                                var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_18)) ? (var_18) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
                                var_30 = ((/* implicit */unsigned int) (short)-30511);
                            }
                        } 
                    } 
                    var_31 = (!(((/* implicit */_Bool) ((int) (_Bool)1))));
                    arr_30 [i_0] [i_7] [i_0] [i_0] = ((/* implicit */unsigned int) (unsigned short)22);
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_10 = 0; i_10 < 18; i_10 += 4) 
    {
        arr_34 [i_10] = ((/* implicit */unsigned int) ((unsigned long long int) max(((+(((/* implicit */int) (unsigned char)97)))), (((((/* implicit */int) (unsigned char)175)) * (((/* implicit */int) var_10)))))));
        arr_35 [i_10] [i_10] = ((/* implicit */long long int) max((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)57404))))) ? (((/* implicit */unsigned long long int) 216779601)) : (((((/* implicit */_Bool) (unsigned short)65526)) ? (((/* implicit */unsigned long long int) var_19)) : (17443387572959659869ULL))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-85)))))));
        /* LoopSeq 2 */
        for (short i_11 = 0; i_11 < 18; i_11 += 2) 
        {
            /* LoopSeq 4 */
            for (long long int i_12 = 2; i_12 < 17; i_12 += 1) 
            {
                /* LoopSeq 3 */
                for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                {
                    var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) (unsigned char)255))));
                    arr_42 [i_10] [i_11] [i_12] [(signed char)5] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)8137)) ? (((/* implicit */int) (unsigned short)56502)) : (-1389968144)))) < (((((/* implicit */_Bool) max(((unsigned short)57404), (((/* implicit */unsigned short) (_Bool)1))))) ? (((/* implicit */long long int) 54024981)) : ((-9223372036854775807LL - 1LL))))));
                }
                /* vectorizable */
                for (unsigned long long int i_14 = 0; i_14 < 18; i_14 += 3) 
                {
                    var_33 = ((/* implicit */unsigned char) (-(372941414)));
                    var_34 -= ((/* implicit */unsigned short) (~(11867742107617032306ULL)));
                }
                for (unsigned long long int i_15 = 0; i_15 < 18; i_15 += 4) 
                {
                    var_35 ^= -3319322162685739221LL;
                    var_36 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) max(((unsigned short)47712), ((unsigned short)14)))), (min((((/* implicit */unsigned int) (_Bool)1)), (1U)))))) ? (((((/* implicit */_Bool) 15923635155589248011ULL)) ? (7479137789072279549ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3660137741U)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_16)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned short)47699)))))))));
                }
                var_37 = ((/* implicit */long long int) max((var_37), (((/* implicit */long long int) var_15))));
                var_38 = ((/* implicit */unsigned int) max((var_38), (((/* implicit */unsigned int) min((((/* implicit */int) max(((_Bool)0), ((_Bool)1)))), ((+(((/* implicit */int) (unsigned short)17837)))))))));
            }
            for (unsigned short i_16 = 0; i_16 < 18; i_16 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned char i_17 = 0; i_17 < 18; i_17 += 4) 
                {
                    for (short i_18 = 0; i_18 < 18; i_18 += 3) 
                    {
                        {
                            arr_55 [i_10] [i_11] [i_10] [i_17] [i_17] [16ULL] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)39170)) ? (((/* implicit */int) ((unsigned char) (unsigned char)159))) : (min((-1648865673), (((/* implicit */int) (unsigned short)17837)))))))));
                            arr_56 [i_18] [i_10] = ((/* implicit */unsigned short) (+(18446744073709551615ULL)));
                            arr_57 [10U] [i_11] [i_16] [i_16] [(_Bool)0] = ((unsigned short) (unsigned char)174);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_19 = 0; i_19 < 18; i_19 += 3) 
                {
                    for (unsigned short i_20 = 0; i_20 < 18; i_20 += 2) 
                    {
                        {
                            var_39 = ((/* implicit */_Bool) (unsigned char)192);
                            var_40 = ((/* implicit */long long int) (+((-(((/* implicit */int) (_Bool)1))))));
                            arr_64 [(short)4] [i_19] [17U] [i_19] = (unsigned char)0;
                        }
                    } 
                } 
            }
            for (unsigned char i_21 = 2; i_21 < 16; i_21 += 2) 
            {
                /* LoopSeq 3 */
                for (unsigned short i_22 = 1; i_22 < 16; i_22 += 1) 
                {
                    arr_69 [i_10] [i_10] [i_10] [i_21 + 2] [i_21 + 2] = ((/* implicit */_Bool) (-(min((1388291275841837963ULL), (((/* implicit */unsigned long long int) (_Bool)1))))));
                    /* LoopSeq 1 */
                    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                    {
                        var_41 = ((/* implicit */unsigned short) min((var_41), (((/* implicit */unsigned short) var_15))));
                        arr_72 [i_10] [i_11] [i_11] [i_22] [i_23] = ((/* implicit */int) min((((/* implicit */long long int) (+(min((((/* implicit */int) (unsigned char)243)), (var_13)))))), (var_19)));
                    }
                    var_42 = ((/* implicit */long long int) min((var_42), (((/* implicit */long long int) 3013778861U))));
                    var_43 = ((/* implicit */unsigned short) (+(4294967295U)));
                }
                for (unsigned long long int i_24 = 1; i_24 < 16; i_24 += 4) 
                {
                    var_44 ^= ((/* implicit */short) (-(((((/* implicit */int) (short)7936)) + (((/* implicit */int) var_5))))));
                    var_45 = ((/* implicit */unsigned long long int) max((var_45), (((/* implicit */unsigned long long int) (_Bool)1))));
                    arr_76 [i_21] [i_11] [i_21] [i_24 + 1] &= ((/* implicit */_Bool) ((int) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)47699))))), (1388291275841837963ULL))));
                }
                for (long long int i_25 = 0; i_25 < 18; i_25 += 4) 
                {
                    var_46 = ((/* implicit */long long int) min((var_46), (((/* implicit */long long int) -852756551))));
                    arr_80 [(unsigned short)6] = ((/* implicit */unsigned long long int) (-(-216779581)));
                    var_47 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1480618614)) ? ((-(((/* implicit */int) (unsigned short)32767)))) : ((-(((/* implicit */int) (_Bool)1))))))) ? (10ULL) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (short)-30911)) ? (1706767904) : (((/* implicit */int) (unsigned char)1)))), (((/* implicit */int) (unsigned char)159)))))));
                }
                arr_81 [i_10] [(unsigned short)1] [(signed char)0] [i_21] = ((/* implicit */_Bool) (-(max((1U), (((/* implicit */unsigned int) (unsigned char)164))))));
            }
            for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
            {
                arr_84 [i_11] [i_26] = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((unsigned short) 0U))), ((~(((/* implicit */int) var_11))))));
                arr_85 [i_10] [(unsigned char)15] [i_26] [(unsigned char)15] = (unsigned short)10343;
            }
            var_48 -= ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */unsigned long long int) 0U)) != (((((/* implicit */_Bool) 11220219436080662751ULL)) ? (((/* implicit */unsigned long long int) -216779603)) : (var_4)))))), (min(((~(((/* implicit */int) (unsigned char)0)))), (((((/* implicit */_Bool) (unsigned char)159)) ? (((/* implicit */int) (unsigned short)24853)) : (((/* implicit */int) (unsigned char)97))))))));
        }
        /* vectorizable */
        for (short i_27 = 0; i_27 < 18; i_27 += 4) 
        {
            arr_88 [i_10] = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)91))));
            var_49 ^= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)65528)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)129))) : (4422115071524453174ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4125118152970329912LL))))))));
        }
    }
}
