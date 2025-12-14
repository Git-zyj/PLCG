/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208590
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
    for (long long int i_0 = 0; i_0 < 23; i_0 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) 
                {
                    {
                        var_16 ^= ((/* implicit */signed char) (+(max((2991048566U), (((/* implicit */unsigned int) arr_7 [i_0] [i_1] [i_2]))))));
                        var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((unsigned int) (-(-3780639237531187985LL)))))));
                    }
                } 
            } 
        } 
        arr_10 [i_0] = ((/* implicit */int) (unsigned char)228);
        arr_11 [i_0] = ((/* implicit */signed char) 3780639237531187985LL);
    }
    for (long long int i_4 = 0; i_4 < 23; i_4 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((arr_0 [i_4] [i_4]) != (((/* implicit */unsigned long long int) -3780639237531187985LL)))))));
        arr_15 [i_4] = ((/* implicit */signed char) max((((/* implicit */unsigned int) (_Bool)0)), (2198992701U)));
        arr_16 [i_4] [i_4] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((-5489360758991020767LL), (895780181456173307LL)))), (0ULL)));
        arr_17 [i_4] = ((/* implicit */unsigned int) ((int) arr_7 [i_4] [i_4] [i_4]));
    }
    for (long long int i_5 = 0; i_5 < 23; i_5 += 4) /* same iter space */
    {
        /* LoopSeq 3 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            /* LoopSeq 2 */
            for (signed char i_7 = 0; i_7 < 23; i_7 += 2) 
            {
                var_19 *= ((/* implicit */unsigned int) max((((/* implicit */long long int) -2147483633)), ((((_Bool)1) ? (((/* implicit */long long int) arr_27 [i_5] [i_6] [i_7])) : (3780639237531187973LL)))));
                var_20 = ((/* implicit */unsigned int) (_Bool)0);
                var_21 = ((/* implicit */long long int) max(((short)2016), ((short)2252)));
            }
            for (signed char i_8 = 1; i_8 < 22; i_8 += 4) 
            {
                var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((int) max((arr_30 [i_5] [i_6] [i_8 + 1]), (18446744073709551611ULL)))))));
                /* LoopNest 2 */
                for (long long int i_9 = 0; i_9 < 23; i_9 += 4) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) max(((~(1303918730U))), (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)63)), ((-(((/* implicit */int) (_Bool)1))))))))))));
                            arr_36 [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-4))))), (min((arr_30 [i_6] [i_6] [i_8 - 1]), (arr_30 [i_8] [i_8] [i_8 - 1])))));
                        }
                    } 
                } 
                var_24 *= ((/* implicit */unsigned long long int) (~(max((2198992679U), (((/* implicit */unsigned int) (short)2252))))));
            }
            /* LoopNest 3 */
            for (short i_11 = 0; i_11 < 23; i_11 += 2) 
            {
                for (long long int i_12 = 0; i_12 < 23; i_12 += 4) 
                {
                    for (unsigned int i_13 = 0; i_13 < 23; i_13 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) (~(((max((3094768029679566243ULL), (((/* implicit */unsigned long long int) 4294967295U)))) >> (min((((/* implicit */unsigned int) (_Bool)1)), (524287U))))))))));
                            var_26 = (!(((/* implicit */_Bool) max((arr_19 [i_11]), (((/* implicit */unsigned short) (short)28990))))));
                        }
                    } 
                } 
            } 
        }
        for (int i_14 = 1; i_14 < 22; i_14 += 4) 
        {
            /* LoopSeq 2 */
            for (int i_15 = 0; i_15 < 23; i_15 += 4) 
            {
                arr_52 [i_5] [i_14] [i_14] [i_15] = ((/* implicit */_Bool) max((3747644960211942827ULL), (((/* implicit */unsigned long long int) max((4294442985U), (((((/* implicit */_Bool) (short)-15243)) ? (879107458U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
                var_27 = ((/* implicit */unsigned short) ((short) ((short) ((((/* implicit */_Bool) (unsigned char)56)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-3780639237531187985LL)))));
                /* LoopNest 2 */
                for (unsigned int i_16 = 0; i_16 < 23; i_16 += 2) 
                {
                    for (unsigned char i_17 = 0; i_17 < 23; i_17 += 2) 
                    {
                        {
                            var_28 = ((/* implicit */int) max((14699099113497608776ULL), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))));
                            var_29 = ((/* implicit */unsigned char) arr_55 [i_5] [i_14] [i_15] [i_16] [i_17]);
                            var_30 ^= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((((/* implicit */int) ((unsigned char) 4294442985U))), (0)))), (14699099113497608776ULL)));
                            var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_56 [i_14 + 1]), (arr_56 [i_14 - 1])))) ? (max((3747644960211942830ULL), (((/* implicit */unsigned long long int) arr_56 [i_14 + 1])))) : (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned long long int i_18 = 0; i_18 < 23; i_18 += 4) 
            {
                var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-92)))))));
                arr_61 [i_18] [i_14] [i_5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 879107458U))));
                var_33 = ((/* implicit */unsigned short) max((var_33), (((unsigned short) 2117763407U))));
            }
            /* LoopNest 2 */
            for (unsigned short i_19 = 0; i_19 < 23; i_19 += 4) 
            {
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    {
                        arr_68 [i_5] |= ((/* implicit */unsigned int) ((((/* implicit */int) max((arr_32 [i_14 + 1] [i_14] [i_20]), ((unsigned char)0)))) / (106843926)));
                        var_34 = ((/* implicit */unsigned char) min((-1LL), (((/* implicit */long long int) (signed char)-92))));
                    }
                } 
            } 
            var_35 -= ((/* implicit */_Bool) (-(max((((((/* implicit */_Bool) (signed char)91)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (524278U))), (((/* implicit */unsigned int) (signed char)92))))));
            arr_69 [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) (unsigned char)146))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)255)))))) : (min((arr_53 [i_5] [i_5] [i_14 + 1] [i_14 + 1] [i_14] [i_14]), (((/* implicit */unsigned long long int) (unsigned short)23342))))));
        }
        for (unsigned short i_21 = 0; i_21 < 23; i_21 += 4) 
        {
            arr_73 [i_5] [i_5] [i_21] = ((/* implicit */long long int) (short)(-32767 - 1));
            arr_74 [i_5] [i_5] [i_5] &= ((arr_21 [i_5] [i_21]) >= (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)60)))));
        }
        var_36 += ((/* implicit */int) min((min((4162698839U), (((/* implicit */unsigned int) (unsigned char)58)))), (((/* implicit */unsigned int) 499860843))));
        /* LoopNest 3 */
        for (unsigned char i_22 = 0; i_22 < 23; i_22 += 2) 
        {
            for (short i_23 = 0; i_23 < 23; i_23 += 4) 
            {
                for (long long int i_24 = 0; i_24 < 23; i_24 += 2) 
                {
                    {
                        arr_83 [i_22] [i_5] = ((/* implicit */short) (-(-1301035778)));
                        arr_84 [i_5] [i_22] [i_22] [i_22] [i_24] = ((/* implicit */unsigned short) max((((3133166846370852243ULL) ^ (((/* implicit */unsigned long long int) -6663170967348457708LL)))), (((/* implicit */unsigned long long int) ((arr_44 [i_5] [i_5] [i_5] [i_22] [i_5] [i_24] [i_5]) | (arr_44 [i_5] [i_22] [i_22] [i_23] [i_23] [i_22] [i_24]))))));
                        var_37 = ((((/* implicit */_Bool) (signed char)-21)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) ((((/* implicit */int) (unsigned short)49152)) <= (((/* implicit */int) (unsigned char)146))))), ((short)22061))))) : (0U));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_25 = 0; i_25 < 23; i_25 += 2) 
        {
            for (unsigned char i_26 = 0; i_26 < 23; i_26 += 2) 
            {
                {
                    var_38 = ((/* implicit */unsigned long long int) max(((!(arr_67 [i_5] [i_5] [i_5] [i_5]))), (((arr_67 [i_5] [i_26] [i_26] [i_25]) && (((/* implicit */_Bool) 4294967271U))))));
                    var_39 = ((/* implicit */unsigned int) min((var_39), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) -1553498972657848995LL)))))));
                    var_40 = ((/* implicit */unsigned long long int) (~(((long long int) arr_6 [i_5] [i_25] [i_26] [i_26]))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned char i_27 = 1; i_27 < 19; i_27 += 4) 
        {
            var_41 = ((/* implicit */unsigned int) (~((+(arr_48 [i_5])))));
            var_42 = ((/* implicit */unsigned short) max((var_42), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 7016766515645103502LL)) ? (((((/* implicit */_Bool) (short)-22076)) ? (((/* implicit */int) (short)17326)) : (((/* implicit */int) arr_22 [i_5] [i_5])))) : (((/* implicit */int) arr_70 [i_5]))))))))));
            var_43 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)149)) >> (((((/* implicit */int) (short)22069)) - (22060)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (max((arr_88 [i_27] [i_27 + 1]), (((/* implicit */unsigned long long int) 3663154292U))))));
        }
        /* vectorizable */
        for (short i_28 = 2; i_28 < 19; i_28 += 2) 
        {
            var_44 = ((/* implicit */signed char) (((~(((/* implicit */int) (short)-4400)))) & (((((/* implicit */int) (_Bool)1)) << (((3747644960211942827ULL) - (3747644960211942809ULL)))))));
            /* LoopNest 2 */
            for (unsigned long long int i_29 = 0; i_29 < 23; i_29 += 4) 
            {
                for (signed char i_30 = 0; i_30 < 23; i_30 += 4) 
                {
                    {
                        arr_100 [i_5] [i_5] = ((/* implicit */unsigned char) 3443109590886572690LL);
                        /* LoopSeq 3 */
                        for (int i_31 = 1; i_31 < 22; i_31 += 2) 
                        {
                            arr_104 [i_5] [i_28] [i_5] [i_30] [i_28] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_54 [i_5] [i_28] [i_29] [i_31 - 1])) ? (((/* implicit */int) (short)-27172)) : (((/* implicit */int) (signed char)-114))));
                            var_45 = (-(((/* implicit */int) arr_91 [i_31 - 1] [i_28 - 1])));
                            var_46 = ((/* implicit */short) (unsigned char)142);
                            arr_105 [i_30] [i_28] [i_31] = ((/* implicit */unsigned short) arr_86 [i_28 + 3]);
                            var_47 = ((/* implicit */unsigned short) ((-625197681) & (((/* implicit */int) (_Bool)1))));
                        }
                        for (short i_32 = 0; i_32 < 23; i_32 += 4) 
                        {
                            arr_108 [i_28] = ((/* implicit */unsigned int) arr_31 [i_28 - 1] [i_28 - 1] [i_28 + 4] [i_32]);
                            var_48 = ((/* implicit */unsigned char) min((var_48), (((/* implicit */unsigned char) ((unsigned int) (short)-17153)))));
                            arr_109 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)127))));
                            var_49 += ((/* implicit */short) arr_48 [i_5]);
                        }
                        for (short i_33 = 0; i_33 < 23; i_33 += 4) 
                        {
                            var_50 = ((((/* implicit */_Bool) arr_4 [i_28 + 2] [i_28 + 4])) ? (3653777228U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)3))));
                            var_51 = ((/* implicit */signed char) (unsigned short)32813);
                        }
                        arr_113 [i_5] [i_28] [i_28] [i_30] = ((/* implicit */short) ((unsigned short) arr_88 [i_5] [i_29]));
                        var_52 = ((/* implicit */int) ((_Bool) arr_95 [i_5] [i_28 + 4] [i_29]));
                        var_53 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) 2513113654U))) ? (((25U) + (arr_85 [i_5] [i_5]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_5] [i_28 - 1] [i_28 + 1])))));
                    }
                } 
            } 
            arr_114 [i_28] [i_28] [i_5] = ((/* implicit */long long int) ((((/* implicit */int) arr_67 [i_28] [i_28 - 2] [i_28 + 1] [i_28 - 2])) << (((/* implicit */int) arr_67 [i_28] [i_28 - 2] [i_28 - 1] [i_28 + 4]))));
            var_54 = ((/* implicit */unsigned char) (short)22047);
        }
    }
    var_55 |= ((/* implicit */unsigned short) ((((/* implicit */int) (short)22857)) == (((/* implicit */int) (unsigned short)2509))));
    var_56 = ((/* implicit */unsigned int) var_7);
    var_57 = ((/* implicit */_Bool) min((var_57), (((/* implicit */_Bool) var_13))));
}
