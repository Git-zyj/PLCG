/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238223
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
    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((long long int) (unsigned char)255))))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_2 = 1; i_2 < 9; i_2 += 3) 
                {
                    arr_7 [i_0] [i_1] = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_0 [i_0 - 3]))))), (((((/* implicit */_Bool) 54155980U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (2223662020U)))));
                    var_21 *= ((/* implicit */unsigned int) ((max((0), (((/* implicit */int) (signed char)20)))) >= (((/* implicit */int) ((unsigned short) 0ULL)))));
                    arr_8 [i_1] [i_1] [i_0] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) ((min((((/* implicit */unsigned long long int) var_8)), (var_1))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)117))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 4; i_3 < 9; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_1] [i_1] [(unsigned char)7] [(unsigned char)4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1247424091)) ? (11) : (((/* implicit */int) (unsigned char)101))));
                                var_22 = min((((/* implicit */unsigned long long int) var_4)), (((arr_6 [i_1] [i_1 - 3] [i_2] [8LL]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)120))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned long long int i_5 = 1; i_5 < 10; i_5 += 1) 
                {
                    var_23 = ((/* implicit */short) ((((/* implicit */int) (short)(-32767 - 1))) >= (11)));
                    var_24 *= ((/* implicit */signed char) ((unsigned char) (((_Bool)1) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (signed char)98)))));
                    var_25 = ((((2126275203) / (((/* implicit */int) var_0)))) / (((/* implicit */int) (unsigned short)3746)));
                }
                var_26 = min((((/* implicit */unsigned long long int) (_Bool)1)), (18ULL));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (int i_6 = 0; i_6 < 18; i_6 += 2) /* same iter space */
    {
        var_27 = ((/* implicit */signed char) ((((arr_17 [i_6]) % (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_6]))))) == (((/* implicit */unsigned int) ((int) arr_18 [i_6])))));
        var_28 = ((/* implicit */unsigned int) var_19);
    }
    for (int i_7 = 0; i_7 < 18; i_7 += 2) /* same iter space */
    {
        arr_23 [i_7] = ((/* implicit */signed char) 1684155140547471248ULL);
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 3; i_8 < 17; i_8 += 2) 
        {
            for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
            {
                {
                    var_29 = (-(((/* implicit */int) (unsigned short)65535)));
                    var_30 = ((/* implicit */unsigned long long int) max((2147483647), (((/* implicit */int) (short)-5537))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_10 = 1; i_10 < 17; i_10 += 3) 
                    {
                        var_31 = ((/* implicit */signed char) ((((((/* implicit */int) (short)6644)) == (var_9))) ? (((unsigned long long int) arr_18 [i_7])) : (((/* implicit */unsigned long long int) ((arr_19 [i_9]) ? (((/* implicit */int) (signed char)113)) : (((/* implicit */int) (_Bool)1)))))));
                        var_32 ^= ((/* implicit */int) -1LL);
                    }
                }
            } 
        } 
    }
    for (int i_11 = 0; i_11 < 18; i_11 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (short i_12 = 0; i_12 < 18; i_12 += 3) 
        {
            /* LoopNest 3 */
            for (int i_13 = 0; i_13 < 18; i_13 += 2) 
            {
                for (unsigned int i_14 = 3; i_14 < 17; i_14 += 3) 
                {
                    for (unsigned short i_15 = 0; i_15 < 18; i_15 += 1) 
                    {
                        {
                            var_33 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) 1839232219)) ^ (2688548389U)))), (((((/* implicit */_Bool) -1570582135)) ? (18446744073709551611ULL) : (8734365087574179248ULL)))))) ? (((((/* implicit */_Bool) ((short) 1028412923U))) ? (((/* implicit */long long int) min((4294967291U), (((/* implicit */unsigned int) var_7))))) : (((long long int) 2688548389U)))) : (((/* implicit */long long int) ((unsigned int) -899726873)))));
                            var_34 = ((/* implicit */unsigned int) arr_18 [i_14 - 3]);
                            var_35 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) 899726883)) ? (min((((/* implicit */unsigned long long int) arr_32 [i_15])), (5ULL))) : (((/* implicit */unsigned long long int) ((arr_17 [i_12]) | (3138924142U)))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)22)) % (((/* implicit */int) (short)6644)))))));
                            var_36 = ((/* implicit */int) min((var_36), (((/* implicit */int) ((long long int) ((((/* implicit */_Bool) arr_20 [i_14 - 1])) ? (((/* implicit */int) arr_20 [i_14 + 1])) : (((/* implicit */int) arr_20 [i_14 - 2]))))))));
                        }
                    } 
                } 
            } 
            var_37 = ((/* implicit */unsigned short) (short)-21385);
            var_38 += ((/* implicit */signed char) ((((/* implicit */_Bool) 0U)) ? (-1685642620) : (-150684468)));
        }
        for (int i_16 = 0; i_16 < 18; i_16 += 1) 
        {
            var_39 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) (unsigned char)253))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)2855)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_11] [i_16])) && (((/* implicit */_Bool) (unsigned short)35605))))) : (((((/* implicit */_Bool) (short)-28295)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) (signed char)22))))))) : (((((/* implicit */_Bool) arr_44 [i_11] [i_11])) ? (arr_44 [(unsigned char)15] [i_16]) : (arr_44 [(_Bool)1] [i_16])))));
            var_40 ^= ((/* implicit */long long int) ((unsigned long long int) 12));
            var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)22)) && (((/* implicit */_Bool) (unsigned short)7992))));
        }
        var_42 = ((/* implicit */_Bool) ((int) (signed char)-37));
        var_43 = ((/* implicit */short) var_5);
        var_44 = ((/* implicit */unsigned char) min((((/* implicit */int) (signed char)-20)), (-899726881)));
        var_45 = (unsigned short)65280;
    }
    for (int i_17 = 0; i_17 < 23; i_17 += 3) 
    {
        /* LoopSeq 4 */
        for (short i_18 = 0; i_18 < 23; i_18 += 3) 
        {
            arr_52 [i_17] [i_17] = ((/* implicit */int) var_11);
            var_46 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)32767)) ? (max((((var_3) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_4)))), (arr_51 [i_17]))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4793675951059298229LL)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-37)))))) && (((/* implicit */_Bool) 3277235965U)))))));
            var_47 *= ((/* implicit */short) (_Bool)1);
            var_48 = ((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)0)), (max((((((/* implicit */_Bool) arr_49 [i_17])) ? (((/* implicit */int) (unsigned short)6012)) : (arr_50 [i_17]))), (((/* implicit */int) ((((/* implicit */int) (unsigned char)214)) >= (arr_50 [(unsigned short)4]))))))));
            var_49 = ((/* implicit */int) var_1);
        }
        for (signed char i_19 = 0; i_19 < 23; i_19 += 2) 
        {
            /* LoopNest 2 */
            for (int i_20 = 4; i_20 < 21; i_20 += 2) 
            {
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    {
                        arr_59 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -4793675951059298229LL)) ? (((/* implicit */int) (short)-32767)) : (1428092194)))));
                        arr_60 [i_21] [i_21] [i_17] [5U] [i_21] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)15)) : (((/* implicit */int) (unsigned char)79))))) ? (((/* implicit */int) ((((/* implicit */int) ((unsigned char) (unsigned char)3))) != (min((((/* implicit */int) (unsigned char)162)), (1197634893)))))) : (((/* implicit */int) (short)5099))));
                        arr_61 [i_17] = ((/* implicit */short) ((unsigned long long int) (-(max((var_6), (((/* implicit */unsigned long long int) 1428092201)))))));
                        var_50 = ((/* implicit */unsigned int) 2115562174);
                        var_51 = ((/* implicit */signed char) min((var_51), (((/* implicit */signed char) (short)32764))));
                    }
                } 
            } 
            arr_62 [i_17] [i_17] = var_2;
            var_52 = ((/* implicit */short) ((((/* implicit */_Bool) -1428092194)) ? (((((/* implicit */_Bool) max((arr_55 [i_19] [i_17] [i_17]), (var_5)))) ? (((/* implicit */int) max((((/* implicit */signed char) var_17)), (arr_55 [9U] [i_19] [i_19])))) : (1428092196))) : (max((((/* implicit */int) (!(((/* implicit */_Bool) -2114754486))))), (((((/* implicit */int) var_13)) ^ (((/* implicit */int) var_0))))))));
            var_53 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) 311130525))) ? (((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) var_0)), (2536687080U))) + (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)95)), (2115562174))))))) : ((~(((unsigned long long int) arr_56 [i_19] [i_17] [i_19] [i_17]))))));
        }
        for (unsigned char i_22 = 0; i_22 < 23; i_22 += 3) 
        {
            var_54 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) (+(((/* implicit */int) var_16))))) / (9223372036854775807LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_0)))) : (max((2536687072U), (2536687071U)))));
            var_55 = (-((+(min((0ULL), (((/* implicit */unsigned long long int) var_2)))))));
        }
        for (short i_23 = 0; i_23 < 23; i_23 += 2) 
        {
            var_56 = ((((((unsigned int) arr_65 [i_17])) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)38529))))) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_53 [i_17] [i_17] [i_23]) ? (((/* implicit */long long int) ((/* implicit */int) (short)-14138))) : (-8113575890981607418LL)))) ? (((/* implicit */int) (unsigned short)16690)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))))));
            var_57 = ((/* implicit */unsigned char) min((var_57), (((/* implicit */unsigned char) 17))));
            var_58 += ((/* implicit */unsigned int) (-(524287)));
            var_59 -= ((/* implicit */unsigned short) min((-7921019106201689641LL), (((/* implicit */long long int) (signed char)-43))));
            var_60 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (~(469367591U))))))) + (arr_50 [i_23])));
        }
        /* LoopSeq 2 */
        for (long long int i_24 = 3; i_24 < 20; i_24 += 2) 
        {
            arr_69 [i_17] [i_24 + 3] [i_17] = ((/* implicit */int) arr_48 [i_17]);
            var_61 = ((/* implicit */short) ((((/* implicit */int) var_17)) >> (((min(((-(((/* implicit */int) (unsigned short)668)))), (((/* implicit */int) ((((/* implicit */_Bool) (short)32767)) && (((/* implicit */_Bool) (short)-15991))))))) + (684)))));
        }
        for (unsigned short i_25 = 2; i_25 < 19; i_25 += 3) 
        {
            var_62 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)123)) ? (((/* implicit */int) (unsigned short)1934)) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) (_Bool)1)) : (((arr_63 [i_17] [11U]) - (((/* implicit */int) (signed char)43))))))) ? (11910684848082567495ULL) : (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)14)), (-403115789))))));
            arr_73 [i_17] [i_25] [i_25 + 4] = ((/* implicit */signed char) min((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_11)) ? (var_15) : (var_15))))), (min((max((505919530), (((/* implicit */int) (unsigned char)70)))), (arr_70 [i_17])))));
        }
        var_63 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) (short)25035))) ? (((/* implicit */int) (unsigned char)8)) : (((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */int) (unsigned char)253)) : (var_7)))))) ? (((/* implicit */unsigned int) ((505919516) + (((/* implicit */int) (unsigned short)54218))))) : (2394968884U)));
    }
}
