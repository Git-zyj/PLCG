/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43298
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
    var_10 = var_6;
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        arr_11 [i_0 - 1] [i_0 - 1] [i_3] [i_3] = var_0;
                        var_11 = ((/* implicit */signed char) ((_Bool) min((arr_4 [i_1 + 1] [i_1] [i_0 - 2]), (arr_4 [i_1 + 2] [i_1] [i_0 - 1]))));
                        arr_12 [i_0] [i_1 + 2] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_0)))) ? (min((var_2), (((/* implicit */unsigned long long int) arr_8 [i_0 + 1] [i_0 + 1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_8 [i_0 + 2] [i_0 - 3]), (arr_8 [i_0 + 4] [i_0 - 1])))))));
                        var_12 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned short) var_8)))));
                    }
                    var_13 = ((/* implicit */long long int) ((var_2) % (((/* implicit */unsigned long long int) (~(var_1))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */_Bool) ((unsigned short) min((var_2), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1))))))));
    /* LoopSeq 3 */
    for (int i_4 = 3; i_4 < 7; i_4 += 2) 
    {
        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_4 + 4] [i_4] [i_4] [i_4 - 1] [i_4]))))) ? (((((/* implicit */_Bool) arr_1 [i_4])) ? (6397130278592464536ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned long long int) var_4))))) ? (((/* implicit */unsigned long long int) (((-(((/* implicit */int) (signed char)12)))) * (((/* implicit */int) ((unsigned short) var_0)))))) : (min((var_2), (((/* implicit */unsigned long long int) var_6))))));
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_0), (((/* implicit */long long int) max((((/* implicit */signed char) var_5)), ((signed char)35))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4685474094548565605ULL)))))) : ((~(arr_3 [i_4 - 2])))));
    }
    for (long long int i_5 = 1; i_5 < 18; i_5 += 2) 
    {
        var_17 -= (-(((/* implicit */int) min((arr_4 [i_5 - 1] [i_5 + 2] [i_5 + 1]), (arr_4 [i_5 + 2] [i_5 - 1] [i_5 + 3])))));
        var_18 -= ((long long int) min((13761269979160986011ULL), (((/* implicit */unsigned long long int) arr_17 [i_5 + 3]))));
        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((short) var_6))))))));
    }
    /* vectorizable */
    for (long long int i_6 = 0; i_6 < 25; i_6 += 2) 
    {
        var_20 |= var_0;
        arr_21 [i_6] [i_6] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((1835008LL) + (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_6)) : (arr_20 [i_6] [i_6]))) : (arr_20 [i_6] [i_6])));
        /* LoopSeq 4 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
        {
            arr_24 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_22 [i_7])) ? (arr_22 [i_6]) : (arr_22 [i_6])));
            arr_25 [i_7] = ((/* implicit */unsigned short) ((signed char) arr_20 [i_6] [i_7]));
            var_21 = ((/* implicit */signed char) (!(((_Bool) 12049613795117087079ULL))));
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned short i_9 = 3; i_9 < 24; i_9 += 2) 
            {
                arr_32 [i_9 + 1] [i_6] [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_5) ? (var_0) : (var_3)))) ? (((/* implicit */int) ((arr_29 [i_6] [i_8] [i_9]) != (var_3)))) : (((/* implicit */int) ((4685474094548565591ULL) == (((/* implicit */unsigned long long int) arr_31 [i_6] [i_9 + 1])))))));
                arr_33 [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) var_8))));
                arr_34 [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -485799606873621431LL)) ? (arr_23 [(unsigned short)7] [i_8] [i_9 + 1]) : (((/* implicit */unsigned long long int) var_4))))) ? (3075511917821509253LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))));
                var_22 = ((((/* implicit */_Bool) (~(4685474094548565622ULL)))) ? (((/* implicit */unsigned long long int) arr_22 [i_6])) : (arr_23 [i_9 - 1] [i_9 - 1] [i_9 + 1]));
            }
            for (long long int i_10 = 0; i_10 < 25; i_10 += 2) 
            {
                arr_38 [i_8] [i_8] [i_8] [i_6] = ((/* implicit */signed char) var_8);
                arr_39 [i_10] [(_Bool)1] [(_Bool)1] = ((/* implicit */long long int) ((arr_20 [i_6] [i_10]) >> (((arr_37 [i_6] [i_6] [i_8] [(signed char)18]) - (12225232925619205320ULL)))));
                arr_40 [i_6] [i_6] [i_10] = (((!(((/* implicit */_Bool) -7651032196819255814LL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) (signed char)112)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5749))) : (-1620458205876568534LL))));
            }
            for (signed char i_11 = 0; i_11 < 25; i_11 += 2) 
            {
                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) 15ULL))))))))));
                var_24 = (!(((/* implicit */_Bool) arr_41 [i_6] [i_8] [i_6] [i_11])));
                arr_43 [i_6] [i_6] [(short)11] = ((/* implicit */unsigned long long int) arr_36 [i_6] [(_Bool)1] [i_11] [i_11]);
                arr_44 [i_11] = ((arr_22 [i_8]) << (((arr_22 [i_8]) - (3183949501954312347LL))));
            }
            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_28 [i_6] [i_8])))))));
            /* LoopNest 2 */
            for (long long int i_12 = 1; i_12 < 24; i_12 += 3) 
            {
                for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                {
                    {
                        arr_51 [i_13] [i_8] [i_6] [i_13 + 1] = ((/* implicit */long long int) 13569400044560121283ULL);
                        arr_52 [i_6] [i_6] [i_6] [i_6] [i_6] |= ((/* implicit */unsigned long long int) arr_41 [i_12 - 1] [i_8] [i_12] [i_6]);
                    }
                } 
            } 
        }
        for (long long int i_14 = 1; i_14 < 24; i_14 += 3) 
        {
            var_26 |= 1171721651309795194ULL;
            var_27 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_31 [i_14] [i_6])))) ? (((((/* implicit */_Bool) var_2)) ? (17224963947987661346ULL) : (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_14 - 1] [(unsigned short)5])))));
            arr_55 [i_14] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)53)) ? (6397130278592464549ULL) : (((/* implicit */unsigned long long int) arr_35 [i_6] [i_6] [i_6] [i_6]))))) ? ((-(4095))) : (((/* implicit */int) (_Bool)1))));
            arr_56 [i_14] = ((var_6) % (var_0));
            var_28 += ((/* implicit */unsigned int) ((((((/* implicit */_Bool) -7651032196819255806LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_0))) | (((/* implicit */long long int) ((/* implicit */int) var_7)))));
        }
        for (signed char i_15 = 0; i_15 < 25; i_15 += 2) 
        {
            /* LoopSeq 3 */
            for (long long int i_16 = 4; i_16 < 24; i_16 += 2) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned int i_17 = 2; i_17 < 24; i_17 += 2) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_18 = 0; i_18 < 25; i_18 += 2) 
                    {
                        var_29 = var_6;
                        var_30 = ((/* implicit */_Bool) (+(arr_46 [i_15] [i_16 - 3])));
                        var_31 = ((/* implicit */unsigned long long int) var_0);
                        arr_66 [i_6] [i_6] [i_6] [i_6] [i_6] = ((((/* implicit */_Bool) arr_49 [i_6] [i_18] [i_16] [i_17] [i_18])) ? (arr_35 [i_6] [i_15] [i_17] [i_18]) : (arr_35 [i_6] [i_15] [i_15] [16]));
                    }
                    var_32 = ((/* implicit */unsigned short) var_5);
                    var_33 = ((/* implicit */long long int) 16939603974526898666ULL);
                    var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) 1507140099182652972ULL))));
                    var_35 = ((/* implicit */signed char) min((var_35), (((signed char) (!(((/* implicit */_Bool) (unsigned short)5529)))))));
                }
                arr_67 [i_6] = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_64 [i_16])))))));
            }
            for (long long int i_19 = 4; i_19 < 24; i_19 += 2) /* same iter space */
            {
                var_36 = ((/* implicit */long long int) max((var_36), (((long long int) ((long long int) -485799606873621431LL)))));
                var_37 = ((/* implicit */signed char) ((_Bool) ((var_5) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_61 [13LL] [13LL] [i_19 + 1]))))));
            }
            for (long long int i_20 = 4; i_20 < 24; i_20 += 2) /* same iter space */
            {
                arr_73 [i_20] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_29 [i_20 + 1] [i_20 - 1] [i_20 - 1])));
                /* LoopSeq 1 */
                for (short i_21 = 2; i_21 < 22; i_21 += 2) 
                {
                    var_38 = ((/* implicit */long long int) min((var_38), (((/* implicit */long long int) (+(((unsigned long long int) var_0)))))));
                    var_39 = ((/* implicit */_Bool) arr_23 [i_6] [i_6] [i_20]);
                    arr_77 [i_6] [i_15] [i_20] [i_21 + 3] |= (_Bool)1;
                    arr_78 [i_6] [i_21] = ((/* implicit */unsigned long long int) var_8);
                }
                var_40 |= ((/* implicit */_Bool) -8276634455799444236LL);
                var_41 = ((/* implicit */signed char) (~((+(((/* implicit */int) (unsigned short)49436))))));
            }
            var_42 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_74 [i_6] [i_6] [i_15] [i_15])) ? (arr_74 [i_6] [i_6] [i_6] [i_6]) : (-7401616144141214358LL)));
        }
        arr_79 [(unsigned short)1] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0)))))));
    }
}
