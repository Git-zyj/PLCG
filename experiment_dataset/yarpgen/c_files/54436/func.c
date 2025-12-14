/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54436
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
    var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((((/* implicit */int) var_10)) % (((/* implicit */int) var_9)))), (((/* implicit */int) var_5)))))));
    var_19 = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)83))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (signed char i_2 = 2; i_2 < 18; i_2 += 4) 
            {
                for (short i_3 = 1; i_3 < 17; i_3 += 4) 
                {
                    {
                        arr_12 [10U] = ((/* implicit */unsigned short) min(((signed char)63), ((signed char)-63)));
                        arr_13 [i_0] [i_0] [i_3] = var_2;
                    }
                } 
            } 
            var_20 &= ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) (unsigned short)7784)) != (((/* implicit */int) (unsigned short)7784)))))));
        }
        for (short i_4 = 0; i_4 < 20; i_4 += 1) 
        {
            var_21 = ((/* implicit */signed char) ((short) min((((((/* implicit */_Bool) (unsigned short)65535)) ? (3187561612484399699ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65526))))), (((/* implicit */unsigned long long int) max((var_8), (var_8)))))));
            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((short) (unsigned short)1)), (((/* implicit */short) (signed char)92))))) ? (((/* implicit */int) ((unsigned short) var_4))) : (((((/* implicit */int) var_10)) | (((/* implicit */int) var_0)))))))));
            var_23 |= max((((/* implicit */unsigned short) (_Bool)0)), (max((((/* implicit */unsigned short) max(((signed char)-58), (((/* implicit */signed char) (_Bool)1))))), ((unsigned short)1))));
            arr_16 [i_0] [i_4] [i_4] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)65531)) : (-2134844807)))));
        }
        for (unsigned short i_5 = 0; i_5 < 20; i_5 += 1) 
        {
            arr_21 [i_0] [i_0] [i_5] = ((/* implicit */_Bool) ((long long int) ((unsigned short) ((((/* implicit */int) var_5)) * (((/* implicit */int) var_0))))));
            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) max((min((((/* implicit */long long int) (unsigned short)57755)), (6430326712991216764LL))), (((/* implicit */long long int) (-((+(((/* implicit */int) var_3))))))))))));
        }
        var_25 = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)65522)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) ((((/* implicit */int) (short)-11132)) >= (((/* implicit */int) (signed char)63))))))));
        arr_22 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)48036)) == (((/* implicit */int) (_Bool)1))))) | (((/* implicit */int) ((unsigned short) var_12)))));
    }
    for (signed char i_6 = 1; i_6 < 11; i_6 += 2) 
    {
        /* LoopSeq 2 */
        for (signed char i_7 = 0; i_7 < 12; i_7 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
            {
                var_26 = ((/* implicit */signed char) min((max((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)10356))))), ((+(((/* implicit */int) (unsigned short)65531)))))), (((((/* implicit */int) var_12)) << (((((/* implicit */int) max((((/* implicit */unsigned short) var_5)), ((unsigned short)57756)))) - (65479)))))));
                arr_32 [i_7] [(signed char)2] &= ((/* implicit */short) var_6);
            }
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
            {
                /* LoopSeq 3 */
                for (unsigned int i_10 = 0; i_10 < 12; i_10 += 3) 
                {
                    arr_38 [i_6] [i_7] [11ULL] [i_6] [i_9] = ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)18157)));
                    arr_39 [i_10] [i_10] [i_10] [i_10] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((_Bool) var_3)) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned short)9)) : (var_16))) : (((/* implicit */int) max((var_9), (((/* implicit */short) var_4)))))))) && (((/* implicit */_Bool) max((max((var_13), (var_3))), (((/* implicit */short) var_5)))))));
                }
                /* vectorizable */
                for (int i_11 = 1; i_11 < 11; i_11 += 4) /* same iter space */
                {
                    arr_44 [i_6] [i_7] [i_6] [11LL] [i_7] [(_Bool)1] = ((unsigned short) ((((/* implicit */int) (signed char)-32)) & (((/* implicit */int) var_11))));
                    arr_45 [i_6] [i_11] [i_11] [i_6] = ((/* implicit */_Bool) ((unsigned int) 18446744073709551609ULL));
                }
                for (int i_12 = 1; i_12 < 11; i_12 += 4) /* same iter space */
                {
                    var_27 = ((/* implicit */short) (~(((/* implicit */int) ((max((((/* implicit */int) (_Bool)1)), (2134844799))) <= (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_12)) : (var_16))))))));
                    arr_50 [i_6] [i_6 + 1] [i_6] [i_6 + 1] [i_6] [i_6 + 1] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (signed char)115)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)58163)))), (((((/* implicit */int) var_17)) - (((/* implicit */int) (unsigned short)58163))))));
                }
                var_28 = ((/* implicit */signed char) max(((short)11132), (((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned short) (unsigned short)42485))))))));
                /* LoopSeq 4 */
                for (long long int i_13 = 0; i_13 < 12; i_13 += 4) 
                {
                    var_29 = ((/* implicit */unsigned short) (~((-(((/* implicit */int) var_1))))));
                    var_30 = ((/* implicit */short) var_15);
                    arr_53 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) min(((-(((/* implicit */int) ((short) var_9))))), (((((/* implicit */_Bool) ((unsigned long long int) var_10))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) var_5))))) : (((/* implicit */int) var_14))))));
                    /* LoopSeq 2 */
                    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                    {
                        var_31 = ((((/* implicit */_Bool) min((min((((/* implicit */int) var_5)), (-2134844814))), (((/* implicit */int) ((short) var_1)))))) ? (((/* implicit */int) var_13)) : ((((!(((/* implicit */_Bool) var_16)))) ? (((/* implicit */int) max((((/* implicit */signed char) var_17)), (var_6)))) : (((/* implicit */int) var_2)))));
                        arr_56 [i_13] [i_13] [i_13] [i_14] [i_6 - 1] &= ((signed char) (_Bool)1);
                    }
                    for (long long int i_15 = 1; i_15 < 11; i_15 += 1) 
                    {
                        var_32 = ((/* implicit */unsigned int) min((((((((/* implicit */int) var_7)) <= (((/* implicit */int) var_9)))) ? (max((((/* implicit */int) (_Bool)1)), (-2134844793))) : ((+(((/* implicit */int) (unsigned short)12)))))), (((/* implicit */int) (!(((((/* implicit */int) var_9)) == (((/* implicit */int) var_0)))))))));
                        arr_60 [i_6] = ((/* implicit */_Bool) (signed char)32);
                        arr_61 [i_6] [i_7] [i_9] [i_6] [i_15] = max((((/* implicit */int) max((var_13), (var_9)))), (((((((/* implicit */_Bool) -8060938237758418568LL)) && (((/* implicit */_Bool) var_8)))) ? (((/* implicit */int) (!(var_17)))) : ((+(var_16))))));
                    }
                }
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    arr_65 [i_6 + 1] [i_6] [5U] [5U] = (!((!(((/* implicit */_Bool) var_10)))));
                    var_33 = var_9;
                }
                for (int i_17 = 0; i_17 < 12; i_17 += 3) 
                {
                    var_34 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) ((unsigned short) 18446744073709551615ULL))) ? (((/* implicit */int) var_7)) : ((-(((/* implicit */int) (_Bool)1)))))));
                    arr_68 [2ULL] [i_9] [i_7] [2ULL] |= ((/* implicit */_Bool) var_12);
                }
                for (short i_18 = 0; i_18 < 12; i_18 += 4) 
                {
                    arr_72 [i_6] [i_6] [0] [i_18] [i_6 - 1] = ((long long int) ((unsigned long long int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) var_3)))));
                    arr_73 [i_6] [(_Bool)0] [i_9] [i_18] [(short)11] [i_6] = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) var_17)) < (((/* implicit */int) (unsigned short)7383)))))));
                }
                arr_74 [i_6] [i_6] [i_6] = max((((/* implicit */unsigned short) ((signed char) ((unsigned short) var_3)))), (var_2));
            }
            var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned short) var_4))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_5)), ((unsigned char)136)))) : (((/* implicit */int) (_Bool)1))));
            arr_75 [i_6] [1ULL] = ((/* implicit */short) ((_Bool) (signed char)29));
            var_36 = ((/* implicit */short) ((((/* implicit */int) min((min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)65535))), (max((((/* implicit */unsigned short) var_3)), (var_15)))))) & (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)23051)) || (((/* implicit */_Bool) (unsigned short)42477)))))));
        }
        for (signed char i_19 = 0; i_19 < 12; i_19 += 3) /* same iter space */
        {
            var_37 = ((/* implicit */signed char) max((max((((/* implicit */int) (unsigned short)65527)), (((((/* implicit */int) var_5)) & (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) ((unsigned short) max((var_11), (((/* implicit */unsigned short) var_4))))))));
            var_38 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) 68557276U)), (7389329412985169112LL))))));
            var_39 = ((/* implicit */unsigned short) ((max((((/* implicit */int) var_12)), (((int) (signed char)31)))) >= (((((/* implicit */_Bool) ((unsigned long long int) var_2))) ? ((-(((/* implicit */int) var_15)))) : ((-(((/* implicit */int) (unsigned short)7373))))))));
        }
        arr_78 [i_6] [i_6] = ((/* implicit */unsigned int) (+(((/* implicit */int) min((((_Bool) var_14)), (var_14))))));
        var_40 = ((/* implicit */long long int) min((var_40), (((/* implicit */long long int) var_16))));
    }
}
