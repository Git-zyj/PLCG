/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211089
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_6 [i_1] [9U] = ((((/* implicit */_Bool) (short)-15421)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1881502619798458588ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)4))))) : (((((/* implicit */_Bool) (unsigned char)251)) ? (((((/* implicit */_Bool) -1964742118867237602LL)) ? (18134560071579652964ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)224))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1095140736)) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) (unsigned char)251))))))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    arr_10 [22U] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1964742118867237601LL)) ? (-1964742118867237602LL) : (((/* implicit */long long int) 136484452))));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 3; i_3 < 23; i_3 += 4) 
                    {
                        var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1964742118867237603LL)) ? (((/* implicit */int) (signed char)-118)) : (((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5971))) : (8428427369679645541LL)));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            arr_19 [i_1] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)32))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (8060791068479583373ULL)));
                            var_13 -= ((/* implicit */int) ((((/* implicit */_Bool) 13656453748934969741ULL)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)13)))));
                        }
                        for (unsigned char i_5 = 0; i_5 < 24; i_5 += 3) 
                        {
                            arr_22 [(unsigned short)10] [i_5] |= ((/* implicit */int) (unsigned char)146);
                            var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) 458413283))));
                            arr_23 [i_0] [13U] [i_2] [13U] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)224)) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) (unsigned char)245))));
                        }
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_15 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (unsigned char)224)) : (((/* implicit */int) (unsigned char)15))));
                        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */int) (short)24887)) : (((/* implicit */int) (signed char)-76)))))));
                        arr_26 [i_1] [i_2] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (4790290324774581871ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)31)))));
                    }
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 24; i_7 += 2) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_17 -= ((/* implicit */unsigned int) 1188025574);
                                var_18 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1612015375U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)15))) : (13656453748934969741ULL)));
                                arr_31 [i_0] [i_1] [i_1] [i_7] [22] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)6564)) ? (((/* implicit */unsigned long long int) -8149806861476408362LL)) : (3ULL)));
                            }
                        } 
                    } 
                }
                for (unsigned int i_9 = 0; i_9 < 24; i_9 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 0; i_10 < 24; i_10 += 2) 
                    {
                        for (unsigned long long int i_11 = 1; i_11 < 20; i_11 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6483067)) ? (((/* implicit */int) (unsigned char)243)) : (((/* implicit */int) (unsigned char)245))))) ? (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) -1073343171989633842LL)) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)13)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)13)) ? (((/* implicit */int) (short)16201)) : (((/* implicit */int) (unsigned char)252))))) : (-2487215695168914131LL))))));
                                arr_38 [i_0] [i_1] [i_0] [i_10] [i_1] = ((/* implicit */unsigned short) (_Bool)1);
                                var_20 = ((/* implicit */_Bool) (unsigned short)61400);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_12 = 0; i_12 < 24; i_12 += 4) 
                    {
                        for (unsigned long long int i_13 = 0; i_13 < 24; i_13 += 4) 
                        {
                            {
                                arr_44 [(short)0] [i_1] [i_9] [i_12] [i_1] = ((/* implicit */signed char) -554972448);
                                arr_45 [i_0] [i_1] [i_9] [i_12] [i_1] = ((/* implicit */unsigned long long int) 2147483647);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_14 = 0; i_14 < 24; i_14 += 2) 
                    {
                        for (unsigned long long int i_15 = 0; i_15 < 24; i_15 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) 9223372036854775807LL))));
                                arr_52 [i_0] [i_9] [i_0] [i_1] = ((/* implicit */short) 6240997943092953348ULL);
                                arr_53 [i_1] [(short)9] [i_9] [i_14] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)13)) ? (((/* implicit */int) (unsigned char)13)) : (-2147483647)))) ? (8799326642750642566ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11505)))))) ? (8799326642750642568ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8799326642750642566ULL)) ? (((/* implicit */int) (short)-8862)) : (((/* implicit */int) (signed char)60))))));
                            }
                        } 
                    } 
                    arr_54 [i_0] [i_1] [i_9] = 8799326642750642568ULL;
                }
                for (unsigned int i_16 = 0; i_16 < 24; i_16 += 3) 
                {
                    arr_57 [i_1] [i_0] [i_1] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-23725)) ? (((/* implicit */int) (short)23724)) : (((/* implicit */int) (short)8862))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)23724)) ? (((/* implicit */int) (unsigned char)195)) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) (short)-25547)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)25533))) : (12061460736581373669ULL)))));
                    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 10586525527970355490ULL)) ? (((/* implicit */unsigned long long int) 1656934708)) : (12061460736581373669ULL)))) ? ((((_Bool)1) ? (562949953421296ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)9))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-23725)) ? (((/* implicit */int) (short)129)) : (((/* implicit */int) (signed char)80))))))))));
                }
                for (unsigned long long int i_17 = 0; i_17 < 24; i_17 += 2) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned long long int i_18 = 0; i_18 < 24; i_18 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_19 = 0; i_19 < 24; i_19 += 4) 
                        {
                            arr_64 [i_1] [i_19] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 10102934777044700895ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-4678987715991380205LL)));
                            var_23 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)11287)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-2123))) : (1518852282U)));
                            arr_65 [i_0] [i_1] [i_1] [i_1] [i_1] [i_19] = ((((/* implicit */_Bool) (unsigned char)229)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)30546))) : (728665397U));
                            var_24 = ((/* implicit */unsigned char) (short)129);
                        }
                        for (unsigned long long int i_20 = 1; i_20 < 23; i_20 += 3) 
                        {
                            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)82)) ? (((/* implicit */int) (unsigned short)4136)) : (((/* implicit */int) (short)136)))))));
                            arr_70 [i_0] [15U] [i_17] [(unsigned char)19] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2776115029U)) ? (((/* implicit */int) (short)-3369)) : (((/* implicit */int) (unsigned short)4136))))) ? (((/* implicit */unsigned int) (((_Bool)0) ? (-616915068) : (((/* implicit */int) (signed char)-104))))) : (((((/* implicit */_Bool) -214782586)) ? (3548463760U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))));
                            arr_71 [i_0] [i_0] [i_0] [i_1] [i_20 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967291U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)208))) : (746503536U)));
                        }
                        arr_72 [i_0] [i_1] [i_1] [i_17] [i_0] = ((/* implicit */unsigned short) (unsigned char)150);
                    }
                    for (unsigned long long int i_21 = 0; i_21 < 24; i_21 += 3) /* same iter space */
                    {
                        var_26 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)127)) ? (746503535U) : ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)16))) : (3729699546U)))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_22 = 0; i_22 < 24; i_22 += 2) 
                        {
                            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (unsigned char)209)) : (((/* implicit */int) (unsigned short)52121))));
                            var_28 = (short)(-32767 - 1);
                            arr_81 [i_1] [i_17] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)229)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)255))))) ? ((((_Bool)1) ? (((/* implicit */int) (unsigned short)52140)) : (((/* implicit */int) (unsigned char)106)))) : (((/* implicit */int) (unsigned char)27))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)240))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) 17U)) ? (((/* implicit */int) (_Bool)1)) : (-798276777)))))) : (((((/* implicit */_Bool) (unsigned char)118)) ? (((/* implicit */unsigned int) -798276777)) : (4082661716U)))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned long long int i_23 = 0; i_23 < 24; i_23 += 3) /* same iter space */
                    {
                        var_29 = ((/* implicit */_Bool) (unsigned char)56);
                        var_30 -= ((/* implicit */short) 212305580U);
                        var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) -442505960))));
                    }
                    var_32 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)106)) ? (2900774812551226461LL) : (((/* implicit */long long int) 37U))))) ? (((((/* implicit */_Bool) 8023091185596368349ULL)) ? (8191LL) : (((/* implicit */long long int) ((/* implicit */int) (short)16177))))) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)82)) : (((/* implicit */int) (unsigned char)61)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_24 = 0; i_24 < 24; i_24 += 2) 
                    {
                        for (unsigned long long int i_25 = 0; i_25 < 24; i_25 += 4) 
                        {
                            {
                                arr_91 [i_1] [i_24] = ((/* implicit */int) (unsigned char)213);
                                var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) ((((/* implicit */_Bool) 8796092497920ULL)) ? (-7214642234707855272LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)42561)) ? (((/* implicit */int) (short)-15122)) : (((/* implicit */int) (short)-14826))))))))));
                            }
                        } 
                    } 
                    arr_92 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1LL)) ? ((((_Bool)1) ? (((/* implicit */int) (unsigned char)255)) : (-1085722531))) : (((((/* implicit */_Bool) 8191LL)) ? (((/* implicit */int) (unsigned char)236)) : (((/* implicit */int) (_Bool)1))))));
                    /* LoopNest 2 */
                    for (_Bool i_26 = 1; i_26 < 1; i_26 += 1) 
                    {
                        for (int i_27 = 0; i_27 < 24; i_27 += 2) 
                        {
                            {
                                var_34 = (short)15038;
                                var_35 = ((/* implicit */unsigned short) (unsigned char)57);
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (unsigned long long int i_28 = 0; i_28 < 24; i_28 += 3) 
                {
                    for (unsigned int i_29 = 0; i_29 < 24; i_29 += 1) 
                    {
                        {
                            arr_104 [i_0] [i_1] [8] [i_28] [i_29] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (10423652888113183244ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0)))))) ? (((((/* implicit */_Bool) (unsigned char)127)) ? (10423652888113183244ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) (short)-21662)) ? (((/* implicit */unsigned long long int) 3555773140U)) : (14475658511491671488ULL)))));
                            var_36 = ((/* implicit */unsigned char) (unsigned short)35651);
                            arr_105 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)14825)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (short)25051)) : (((((/* implicit */_Bool) (unsigned char)44)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)60))))));
                            var_37 = ((/* implicit */unsigned char) max((var_37), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 14354586310420780216ULL)) ? (739194135U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)127)))))) ? (((/* implicit */int) (unsigned char)44)) : (((((/* implicit */_Bool) (signed char)0)) ? (-745835918) : (2147483647))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_38 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) 8317881048281025652LL)) : (var_11)));
}
