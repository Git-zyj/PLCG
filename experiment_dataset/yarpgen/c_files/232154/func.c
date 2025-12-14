/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232154
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
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */int) 6941673168048270757LL);
                arr_5 [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2147483643)))))) / (((((/* implicit */_Bool) (~(arr_1 [i_0])))) ? (max((6525591433235366041ULL), (((/* implicit */unsigned long long int) -3090190926670228189LL)))) : (((/* implicit */unsigned long long int) var_13))))));
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) (~(var_5)));
    /* LoopSeq 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_21 = ((/* implicit */long long int) arr_7 [i_2]);
        var_22 = ((/* implicit */unsigned char) max((15602666273485910322ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)219)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (short)-17725)))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 4) 
        {
            var_23 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_3])) ? (arr_0 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))), (2844077800223641294ULL)));
            /* LoopSeq 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_24 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((var_16) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6))))) && (arr_11 [(_Bool)1] [i_3] [i_3]))) ? (((/* implicit */int) max((arr_9 [i_2] [i_2] [i_4]), (arr_9 [i_2] [i_3] [i_4])))) : (((/* implicit */int) var_16))));
                /* LoopSeq 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                {
                    arr_14 [i_2] [i_3] [i_3] [i_5] = ((/* implicit */_Bool) max((var_0), (((((/* implicit */_Bool) ((var_6) ? (((/* implicit */long long int) arr_13 [i_2] [i_2] [i_2] [i_2])) : (arr_6 [1LL] [i_3])))) ? (-3090190926670228196LL) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 65535LL))))))));
                    var_25 = arr_13 [i_2] [i_3] [i_4] [i_5];
                    arr_15 [i_2] [i_3] [i_2] [i_5] = ((/* implicit */long long int) var_7);
                    var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_3 [i_3] [8LL] [i_5])))) : ((~(-146715005338964220LL)))))) ? (arr_13 [i_2] [i_2] [i_4] [i_2]) : (((/* implicit */int) arr_4 [i_2]))));
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                {
                    arr_18 [i_2] [i_2] [i_3] [i_4] [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */int) ((arr_0 [i_3]) != (((/* implicit */long long int) 15))))) == (((arr_11 [i_2] [i_2] [i_2]) ? (((/* implicit */int) arr_3 [(_Bool)1] [i_4] [i_6])) : (((/* implicit */int) arr_11 [i_3] [i_4] [i_3]))))));
                    arr_19 [i_2] [i_3] [i_3] [(_Bool)1] [i_6] = ((/* implicit */long long int) -366906152);
                    arr_20 [i_3] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
                    var_27 = arr_6 [6] [6];
                }
                arr_21 [i_2] [i_3] [i_4] [i_4] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_3 [i_2] [i_3] [i_4])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_4 [i_2])))), (((/* implicit */int) (short)7031))));
            }
            for (long long int i_7 = 0; i_7 < 10; i_7 += 4) 
            {
                /* LoopSeq 4 */
                for (long long int i_8 = 2; i_8 < 8; i_8 += 3) 
                {
                    var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) var_7))));
                    var_29 = ((/* implicit */_Bool) arr_23 [i_8 - 1] [i_8 + 2] [i_8 + 2]);
                }
                for (short i_9 = 2; i_9 < 6; i_9 += 3) 
                {
                    var_30 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_9 + 1] [i_9])) ? (var_18) : (((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_9 - 2])) ? (arr_0 [i_9 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_9 - 1] [8ULL]))))))));
                    arr_31 [i_9] [i_2] = ((/* implicit */short) (~(((/* implicit */int) arr_4 [i_7]))));
                    arr_32 [i_9] [i_3] [i_7] = ((/* implicit */unsigned char) max((((/* implicit */long long int) (short)-7031)), (max((((/* implicit */long long int) ((((/* implicit */_Bool) 6525591433235366031ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_3))))), (arr_1 [i_9 + 4])))));
                }
                for (long long int i_10 = 0; i_10 < 10; i_10 += 1) /* same iter space */
                {
                    arr_35 [i_10] [i_3] [i_7] = ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_8 [i_2] [i_3])), ((((_Bool)1) ? ((+(((/* implicit */int) arr_28 [(unsigned char)2] [5ULL] [i_10] [i_10] [i_3] [i_2])))) : (((/* implicit */int) var_9))))));
                    var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) 4727493079985014725LL)) ? (((/* implicit */int) ((4638820096581027692LL) == (511LL)))) : (((((/* implicit */_Bool) arr_0 [i_2])) ? ((~(((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
                }
                for (long long int i_11 = 0; i_11 < 10; i_11 += 1) /* same iter space */
                {
                    var_32 = ((/* implicit */int) (short)-3739);
                    arr_38 [i_2] [i_3] [i_3] [9] [i_11] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) var_5))) ? (((/* implicit */long long int) ((/* implicit */int) (short)0))) : ((((~(var_15))) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                }
                var_33 = arr_28 [(_Bool)1] [6LL] [i_7] [i_3] [0] [i_7];
            }
        }
        for (unsigned char i_12 = 1; i_12 < 9; i_12 += 1) 
        {
            var_34 *= ((/* implicit */_Bool) var_13);
            arr_41 [i_12] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_4 [i_2]))))) : (((((/* implicit */_Bool) 125035785662793302LL)) ? (arr_22 [i_2] [i_2] [5LL] [i_12]) : (((/* implicit */long long int) arr_25 [i_2] [i_12]))))))));
            /* LoopSeq 2 */
            for (long long int i_13 = 0; i_13 < 10; i_13 += 4) 
            {
                arr_46 [i_2] [i_12] [i_12] [i_13] = ((/* implicit */unsigned long long int) -5221979834742200806LL);
                var_35 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_2])) ? (((/* implicit */int) arr_40 [i_13])) : (((/* implicit */int) (_Bool)1))));
                arr_47 [i_12] [i_12] = ((/* implicit */_Bool) arr_36 [(_Bool)1] [i_2] [(short)5] [0ULL] [i_13]);
                arr_48 [i_12] [i_12 - 1] [(_Bool)0] = ((/* implicit */unsigned char) (+((+(2090980293962033769LL)))));
                /* LoopSeq 1 */
                for (short i_14 = 0; i_14 < 10; i_14 += 4) 
                {
                    var_36 = ((/* implicit */short) (-((-(((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) var_7)))))))));
                    arr_53 [i_2] [i_12] [i_12] [i_13] [i_13] [i_13] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) % (max((-1802832245983489449LL), (((/* implicit */long long int) -257316616))))));
                    var_37 = ((/* implicit */long long int) (~(-257316614)));
                    var_38 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((_Bool) (_Bool)1)))));
                }
            }
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                arr_56 [i_2] [i_2] [i_12] [i_2] = ((/* implicit */long long int) var_11);
                arr_57 [i_12] [i_12] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9056698152278088230LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_43 [i_2] [i_2] [i_12 - 1] [i_2])) ^ (((/* implicit */int) var_8))))) ? (min((arr_0 [i_12]), (((/* implicit */long long int) var_18)))) : (((/* implicit */long long int) (~(((/* implicit */int) var_14))))))) : (((long long int) (~(var_15)))));
                arr_58 [i_12] [i_12] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_18)) : (((((/* implicit */_Bool) ((short) var_17))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */unsigned long long int) var_5)) * (arr_55 [i_2] [i_2] [i_2] [i_15])))))));
            }
            var_39 = ((/* implicit */unsigned long long int) max((arr_8 [8LL] [0LL]), (((/* implicit */unsigned char) ((_Bool) var_18)))));
        }
    }
    for (unsigned char i_16 = 2; i_16 < 22; i_16 += 3) 
    {
        var_40 -= ((/* implicit */_Bool) (~(max((((arr_61 [i_16] [i_16]) % (1802832245983489448LL))), (((((/* implicit */_Bool) 65540LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-9565))) : (arr_60 [i_16])))))));
        /* LoopNest 2 */
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            for (long long int i_18 = 0; i_18 < 24; i_18 += 2) 
            {
                {
                    var_41 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((_Bool) (+(var_13)))))));
                    var_42 = ((/* implicit */_Bool) var_12);
                }
            } 
        } 
    }
    for (short i_19 = 1; i_19 < 19; i_19 += 2) 
    {
        arr_69 [i_19] [i_19 - 1] = ((/* implicit */unsigned char) arr_66 [i_19] [i_19] [(_Bool)1] [i_19]);
        arr_70 [i_19] = ((/* implicit */int) ((var_1) % (((((/* implicit */_Bool) -4727493079985014718LL)) ? (((/* implicit */long long int) 2147483647)) : (var_1)))));
        var_43 = ((/* implicit */short) var_13);
        arr_71 [i_19] = ((/* implicit */long long int) arr_65 [15] [i_19]);
    }
    var_44 = ((((/* implicit */_Bool) (~((~(-65536LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) 8247641990049075421LL)))) || (((/* implicit */_Bool) ((var_14) ? (((/* implicit */int) (short)2051)) : (-1199647478)))))))) : ((-((~(0LL))))));
    var_45 = ((/* implicit */unsigned long long int) max(((short)-18332), (((/* implicit */short) (_Bool)1))));
}
