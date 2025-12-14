/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53810
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
    for (short i_0 = 2; i_0 < 19; i_0 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */_Bool) ((unsigned char) (signed char)(-127 - 1)));
        arr_2 [i_0] [i_0] = (signed char)-121;
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 19; i_3 += 1) 
                {
                    {
                        var_21 -= ((/* implicit */short) ((long long int) ((((unsigned long long int) (signed char)121)) / (((/* implicit */unsigned long long int) min((arr_1 [i_0]), (var_9)))))));
                        var_22 ^= ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)-88)), (3997513804U)))) && (((/* implicit */_Bool) arr_4 [i_0]))))), (((((/* implicit */_Bool) ((long long int) (signed char)(-127 - 1)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)0))))));
                    }
                } 
            } 
            var_23 = ((/* implicit */unsigned char) arr_0 [i_1]);
            /* LoopNest 2 */
            for (long long int i_4 = 1; i_4 < 19; i_4 += 3) 
            {
                for (unsigned char i_5 = 0; i_5 < 20; i_5 += 1) 
                {
                    {
                        var_24 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4944174287907055059LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)1))) : (4132361580806903456LL)))) || (((/* implicit */_Bool) (~(((/* implicit */int) (signed char)18)))))));
                        var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+(3997513804U)))) & (((arr_12 [i_0 - 1] [i_0 + 1] [i_0 - 2] [i_4 - 1]) >> (((((/* implicit */int) arr_3 [i_0 - 1] [i_0 + 1])) - (137))))))))));
                        arr_15 [i_0 + 1] [i_0] [i_0] [i_4] = var_18;
                        var_26 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned char)242)) ? (0U) : (297453492U)))));
                        var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) (unsigned char)44))) ? (((/* implicit */unsigned long long int) ((long long int) 8551825447551124490ULL))) : (var_2)));
                    }
                } 
            } 
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
        {
            var_28 = ((/* implicit */short) max((-1LL), (((/* implicit */long long int) (unsigned char)90))));
            var_29 = ((/* implicit */unsigned char) (signed char)-116);
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned char i_7 = 0; i_7 < 20; i_7 += 1) /* same iter space */
            {
                var_30 = ((/* implicit */unsigned char) max((var_30), ((unsigned char)242)));
                var_31 = ((/* implicit */long long int) (~(((/* implicit */int) arr_14 [8LL]))));
                var_32 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)1))));
            }
            for (unsigned char i_8 = 0; i_8 < 20; i_8 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (signed char i_9 = 4; i_9 < 17; i_9 += 1) 
                {
                    for (unsigned char i_10 = 2; i_10 < 19; i_10 += 1) 
                    {
                        {
                            var_33 = ((/* implicit */signed char) 476054996U);
                            var_34 = max((((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (5336207704498241981LL))), (min((((/* implicit */long long int) (unsigned char)213)), (-2LL))));
                            var_35 = ((/* implicit */unsigned char) max(((signed char)115), (((/* implicit */signed char) (_Bool)0))));
                        }
                    } 
                } 
                arr_29 [i_0] [i_6] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (max((8174834742174293886LL), (3880724124270508179LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (unsigned char)76)))))))));
                var_36 += arr_21 [i_0 - 1] [i_0];
            }
            for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
            {
                var_37 = ((/* implicit */signed char) ((long long int) max((var_1), (((/* implicit */long long int) arr_21 [i_0 + 1] [i_11 + 1])))));
                var_38 -= ((/* implicit */long long int) min((((var_2) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_16)))))), (((/* implicit */unsigned long long int) max(((-(((/* implicit */int) (signed char)-116)))), (((/* implicit */int) (short)-1)))))));
                var_39 ^= ((/* implicit */short) (((!(((/* implicit */_Bool) arr_20 [i_11 + 1])))) ? (((/* implicit */unsigned long long int) min((arr_30 [i_0 - 2] [i_11 + 1]), (((((/* implicit */_Bool) (unsigned char)198)) ? (-2648258164353972105LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-7753)))))))) : (72040001851883520ULL)));
            }
        }
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
        {
            var_40 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) min((arr_24 [i_0] [i_0] [i_0] [i_0 - 2] [4LL] [i_0 - 2]), (((/* implicit */short) (_Bool)0)))))) + (2353515689U)));
            var_41 = ((/* implicit */signed char) min((var_41), (((/* implicit */signed char) (unsigned char)139))));
            /* LoopSeq 1 */
            for (long long int i_13 = 0; i_13 < 20; i_13 += 3) 
            {
                arr_38 [i_0] [i_12] [i_13] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) -3880724124270508195LL)) ? (18374704071857668088ULL) : (((/* implicit */unsigned long long int) 2353515689U))))));
                var_42 ^= ((/* implicit */long long int) (~((~(((/* implicit */int) (unsigned char)153))))));
            }
            arr_39 [i_0] [i_12] = ((/* implicit */long long int) max((((((/* implicit */_Bool) 70368744177663ULL)) ? (((/* implicit */unsigned long long int) -3880724124270508179LL)) : (4845128201987512293ULL))), (18030982852204146377ULL)));
        }
        var_43 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_6 [i_0] [i_0 - 1] [i_0])) ? (((/* implicit */int) (unsigned char)102)) : (((/* implicit */int) var_7))))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-7753))))) : (max((((/* implicit */unsigned int) (signed char)127)), (1145138352U)))));
    }
    /* vectorizable */
    for (short i_14 = 2; i_14 < 19; i_14 += 3) /* same iter space */
    {
        var_44 = ((/* implicit */long long int) min((var_44), (((/* implicit */long long int) arr_32 [i_14] [i_14] [i_14] [i_14]))));
        /* LoopNest 2 */
        for (unsigned char i_15 = 0; i_15 < 20; i_15 += 1) 
        {
            for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
            {
                {
                    var_45 = ((long long int) arr_35 [i_15]);
                    arr_48 [i_14] = ((/* implicit */unsigned char) ((signed char) (unsigned char)42));
                    var_46 = ((/* implicit */unsigned long long int) arr_16 [i_14] [i_14 - 2]);
                    var_47 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3149828943U)) ? (((/* implicit */int) arr_16 [i_14 + 1] [i_15])) : (((/* implicit */int) ((unsigned char) arr_22 [i_14] [i_15] [i_14 - 1] [i_16 - 1])))));
                }
            } 
        } 
        var_48 = ((/* implicit */long long int) min((var_48), (((long long int) arr_31 [i_14] [(_Bool)1] [i_14] [i_14]))));
    }
    for (unsigned char i_17 = 0; i_17 < 18; i_17 += 3) 
    {
        var_49 = ((/* implicit */unsigned char) ((long long int) max(((short)127), (((/* implicit */short) max((((/* implicit */unsigned char) (signed char)7)), ((unsigned char)34)))))));
        var_50 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -7266767754264425291LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_17] [i_17] [i_17] [i_17] [18U] [i_17]))) : (8778905396267007336LL)))) <= (min((((/* implicit */unsigned long long int) (_Bool)1)), (3130473502897508827ULL)))));
        arr_51 [i_17] = ((long long int) (!(((/* implicit */_Bool) arr_42 [i_17]))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_18 = 0; i_18 < 18; i_18 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_19 = 1; i_19 < 15; i_19 += 1) 
            {
                var_51 = ((/* implicit */unsigned char) var_1);
                arr_57 [i_19] [i_19] [i_17] = arr_31 [i_17] [i_17] [11U] [i_19];
                var_52 *= (short)9707;
            }
            var_53 = ((((/* implicit */unsigned long long int) arr_23 [i_18] [i_17])) & (((((/* implicit */_Bool) -5336207704498241974LL)) ? (2028613332537795931ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))));
            /* LoopNest 3 */
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                for (unsigned long long int i_21 = 0; i_21 < 18; i_21 += 2) 
                {
                    for (unsigned char i_22 = 0; i_22 < 18; i_22 += 4) 
                    {
                        {
                            var_54 = ((/* implicit */unsigned long long int) (unsigned char)213);
                            var_55 = ((/* implicit */_Bool) arr_41 [i_17]);
                            var_56 -= ((/* implicit */long long int) arr_27 [i_17] [i_17] [i_17] [i_17] [i_17]);
                            var_57 = ((/* implicit */short) ((((/* implicit */_Bool) (-(-6066814564567881641LL)))) ? (((/* implicit */int) arr_49 [i_17])) : (((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
            } 
            arr_66 [i_18] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (arr_28 [i_17] [i_17] [i_18] [i_18]) : (((/* implicit */long long int) ((/* implicit */int) arr_60 [i_18])))));
            /* LoopNest 3 */
            for (signed char i_23 = 1; i_23 < 17; i_23 += 3) 
            {
                for (unsigned long long int i_24 = 2; i_24 < 16; i_24 += 3) 
                {
                    for (unsigned long long int i_25 = 0; i_25 < 18; i_25 += 2) 
                    {
                        {
                            var_58 = (-(121100075224987520LL));
                            var_59 = ((/* implicit */long long int) ((unsigned char) arr_27 [i_17] [i_17] [i_23] [6LL] [i_25]));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (unsigned long long int i_26 = 0; i_26 < 18; i_26 += 1) 
        {
            var_60 = ((/* implicit */unsigned int) var_15);
            var_61 = ((/* implicit */unsigned char) max((var_61), (((/* implicit */unsigned char) var_14))));
        }
        for (unsigned char i_27 = 0; i_27 < 18; i_27 += 1) 
        {
            var_62 |= ((/* implicit */short) max(((signed char)-16), (((/* implicit */signed char) (_Bool)0))));
            /* LoopSeq 1 */
            for (unsigned int i_28 = 1; i_28 < 14; i_28 += 3) 
            {
                var_63 = ((/* implicit */short) max((var_63), (((/* implicit */short) ((((/* implicit */long long int) 2353515661U)) <= (2147483647LL))))));
                var_64 = ((/* implicit */unsigned long long int) min((var_64), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) << (((((/* implicit */int) (unsigned char)254)) - (252)))))), (2353515654U))))));
                /* LoopNest 2 */
                for (unsigned char i_29 = 2; i_29 < 16; i_29 += 4) 
                {
                    for (unsigned char i_30 = 2; i_30 < 16; i_30 += 1) 
                    {
                        {
                            var_65 = ((/* implicit */_Bool) (-9223372036854775807LL - 1LL));
                            var_66 = (~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) arr_80 [i_30 + 1] [i_17] [i_28 - 1] [i_29] [i_30 + 1] [i_29]))) : (arr_10 [i_30 - 2] [15LL] [i_28] [i_29] [(short)16]))));
                            arr_87 [i_27] [(unsigned char)15] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((unsigned char) (signed char)53))), (max((((/* implicit */unsigned long long int) (+(var_9)))), (17313723422605226462ULL)))));
                            var_67 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1941451607U)) ? (524287ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1))))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-32736))))) : (min((18446744073709027328ULL), (9491442465113787846ULL)))));
                            var_68 ^= ((/* implicit */_Bool) 17313723422605226462ULL);
                        }
                    } 
                } 
                arr_88 [14U] [i_27] [i_27] [i_28] = 4418121127460355096LL;
            }
        }
    }
    var_69 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) (+(-7528844733327275229LL)))) && (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) - (-1832590528756608487LL)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_31 = 0; i_31 < 15; i_31 += 2) 
    {
        var_70 = ((/* implicit */long long int) min((var_70), (((var_17) / (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
        var_71 = ((/* implicit */signed char) max((var_71), (((/* implicit */signed char) ((short) arr_65 [i_31] [i_31])))));
    }
    var_72 = var_18;
}
