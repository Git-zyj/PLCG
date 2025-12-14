/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208366
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
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        {
                            arr_10 [i_0] [i_0] [i_0] [8LL] &= ((/* implicit */int) (-(min((((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0] [i_1] [i_3])) + (((/* implicit */int) (unsigned short)19687))))), ((-(-9174319671825987708LL)))))));
                            var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) min((arr_3 [i_0] [i_0] [i_0]), ((signed char)-56))))))) ? (((/* implicit */int) (signed char)-104)) : (max((arr_8 [i_2] [i_2 - 1] [i_2 - 1] [i_3]), (arr_8 [i_1] [i_2 - 1] [i_3] [i_3])))));
                            arr_11 [i_0] [i_0] [i_2 - 1] [i_2 - 1] [i_3] [i_3] = ((/* implicit */unsigned int) arr_0 [i_0]);
                            var_14 = ((/* implicit */_Bool) (signed char)56);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_4 = 3; i_4 < 8; i_4 += 3) 
                {
                    for (short i_5 = 0; i_5 < 10; i_5 += 1) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (long long int i_6 = 0; i_6 < 10; i_6 += 4) 
                            {
                                var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) max(((((~(arr_16 [i_0] [i_0] [i_0] [i_5]))) / (((/* implicit */int) min((((/* implicit */unsigned short) var_1)), (arr_18 [i_1] [i_4 - 1] [i_1] [i_0])))))), (((((/* implicit */_Bool) 6894563155706102318ULL)) ? (((/* implicit */int) (signed char)13)) : ((+(((/* implicit */int) arr_3 [0LL] [i_4] [i_6])))))))))));
                                var_16 -= ((/* implicit */short) max((min((((/* implicit */unsigned int) (short)-10820)), (3523867165U))), (((/* implicit */unsigned int) var_5))));
                            }
                            for (unsigned short i_7 = 0; i_7 < 10; i_7 += 4) /* same iter space */
                            {
                                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((short) ((((/* implicit */int) (short)-9819)) / ((-(((/* implicit */int) (signed char)27))))))))));
                                var_18 = min(((-(((/* implicit */int) max((((/* implicit */short) (_Bool)0)), (var_10)))))), (((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) >> (((((/* implicit */int) min((arr_0 [i_0]), (((/* implicit */short) arr_25 [(short)6] [i_1] [i_4 - 1] [i_7]))))) + (26857))))));
                            }
                            for (unsigned short i_8 = 0; i_8 < 10; i_8 += 4) /* same iter space */
                            {
                                var_19 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_16 [i_0] [i_4 + 1] [i_4 + 1] [i_4 + 2])) || (((/* implicit */_Bool) ((int) (unsigned short)19990))))) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_14 [i_1])) && (var_11))) ? (((/* implicit */int) (signed char)96)) : (((((/* implicit */_Bool) arr_0 [i_5])) ? (((/* implicit */int) (unsigned short)37926)) : (((/* implicit */int) arr_14 [i_5])))))))));
                                var_20 = ((/* implicit */signed char) (((((!(((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_4] [i_8])))) && (((/* implicit */_Bool) min((arr_21 [i_0] [(signed char)2] [i_4 - 1] [i_0]), (((/* implicit */unsigned int) var_5))))))) ? (((/* implicit */int) min(((short)10815), (((/* implicit */short) (signed char)-113))))) : ((((-(((/* implicit */int) (signed char)-113)))) << (((((int) arr_1 [i_0])) + (2130212791)))))));
                                var_21 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_5 [i_4 + 2] [i_1] [i_4] [i_1])) || (((/* implicit */_Bool) arr_15 [(unsigned short)6] [i_4] [i_1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -615996373252344461LL))))) : (((/* implicit */int) min((arr_15 [i_4 + 1] [i_4 + 1] [7ULL]), (((/* implicit */short) arr_5 [i_4 + 2] [i_1] [(_Bool)1] [i_1])))))));
                            }
                            var_22 = ((/* implicit */unsigned int) (+(arr_22 [i_0] [i_0] [i_1] [i_1] [(signed char)5] [i_5])));
                            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) (short)-22389)) ? (((arr_24 [i_0] [i_0] [i_0] [i_0] [i_0]) & (min((var_12), (((/* implicit */int) (_Bool)0)))))) : (((/* implicit */int) arr_13 [i_4 - 1])))))));
                            var_24 = ((/* implicit */short) ((unsigned long long int) min((min((((/* implicit */unsigned int) (short)(-32767 - 1))), (0U))), (((/* implicit */unsigned int) (signed char)-45)))));
                        }
                    } 
                } 
                var_25 ^= ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned short)45848)))) < (((14248853887862908322ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)100))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_10 = 3; i_10 < 17; i_10 += 4) 
        {
            var_26 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_29 [i_9 - 1] [i_10 - 1])) / (((/* implicit */int) arr_29 [i_9 - 1] [i_10 - 3]))));
            var_27 = ((/* implicit */short) ((((/* implicit */int) arr_30 [i_9 - 1] [i_9 - 1])) - (((/* implicit */int) (signed char)96))));
        }
        var_28 -= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) 1123560624027326135LL)))) ? ((-(((/* implicit */int) var_0)))) : (((/* implicit */int) arr_32 [i_9 - 1] [i_9 - 1] [i_9]))));
    }
    for (signed char i_11 = 0; i_11 < 23; i_11 += 1) 
    {
        var_29 ^= ((/* implicit */signed char) max((4239675970769060832LL), (((/* implicit */long long int) (short)-783))));
        var_30 = ((/* implicit */int) ((long long int) (!(((/* implicit */_Bool) (signed char)119)))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_12 = 0; i_12 < 23; i_12 += 3) 
        {
            var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) ((((/* implicit */_Bool) arr_37 [(unsigned short)10])) ? (((/* implicit */long long int) arr_33 [i_12] [i_12])) : (8965240527536351689LL))))));
            var_32 = ((long long int) (!(((/* implicit */_Bool) arr_33 [i_12] [i_12]))));
            arr_38 [0] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_37 [(unsigned short)4]))));
            /* LoopSeq 1 */
            for (unsigned short i_13 = 0; i_13 < 23; i_13 += 2) 
            {
                arr_41 [i_11] [i_11] [i_13] = ((/* implicit */signed char) var_10);
                arr_42 [i_11] [i_12] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (arr_40 [i_13]) : (((/* implicit */unsigned long long int) 5U))));
                var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)36977)) / (((/* implicit */int) (signed char)4))))) ? (((/* implicit */int) arr_37 [i_11])) : (((((/* implicit */int) (short)-15074)) & (((/* implicit */int) (unsigned short)27603))))));
                var_34 &= ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned short) arr_35 [i_11] [i_13])))));
            }
            /* LoopNest 2 */
            for (signed char i_14 = 0; i_14 < 23; i_14 += 3) 
            {
                for (long long int i_15 = 0; i_15 < 23; i_15 += 1) 
                {
                    {
                        var_35 = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_37 [i_11])) ? (((/* implicit */int) arr_45 [i_14] [i_12] [i_14] [i_15])) : (((/* implicit */int) arr_34 [i_11]))))));
                        var_36 = ((/* implicit */long long int) ((arr_40 [i_11]) + (((/* implicit */unsigned long long int) 2532233520418265892LL))));
                        var_37 = ((((/* implicit */_Bool) 13676009179324521576ULL)) ? (((/* implicit */int) (signed char)-54)) : (((/* implicit */int) (signed char)59)));
                        var_38 = ((/* implicit */int) ((((/* implicit */_Bool) 4294967292U)) ? (6357138084361038334ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-113)))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned long long int i_16 = 1; i_16 < 21; i_16 += 4) 
        {
            var_39 += ((arr_39 [i_11] [20ULL] [i_16 - 1] [i_16 + 2]) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5152))));
            var_40 = ((/* implicit */unsigned short) ((arr_44 [i_16 - 1] [i_16] [i_16 - 1] [i_16 - 1]) >> (((((/* implicit */int) (unsigned short)65534)) - (65507)))));
            /* LoopSeq 3 */
            for (short i_17 = 0; i_17 < 23; i_17 += 3) 
            {
                var_41 = ((/* implicit */signed char) max((var_41), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-29186)) ? (((/* implicit */int) arr_46 [8LL] [8LL] [i_17])) : (((/* implicit */int) var_6))))))))));
                var_42 = ((/* implicit */_Bool) max((var_42), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_53 [(short)0] [(short)0])) ? (((/* implicit */int) arr_34 [i_11])) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)-31923)) || (((/* implicit */_Bool) 3231229232U))))) : (((/* implicit */int) arr_51 [i_11] [14U] [i_17] [i_17])))))));
                var_43 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_46 [i_11] [(short)0] [i_17]))));
                /* LoopSeq 2 */
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    arr_56 [i_18] [(unsigned short)12] [i_17] [(unsigned short)12] [i_11] &= ((/* implicit */unsigned long long int) ((arr_45 [(unsigned short)16] [i_16] [i_16 + 1] [i_16 + 1]) ? (((/* implicit */int) arr_45 [i_16] [i_16] [i_16 + 1] [i_16 + 1])) : (((/* implicit */int) arr_45 [i_16] [i_16 + 1] [i_16 - 1] [i_16 + 1]))));
                    var_44 |= ((/* implicit */_Bool) ((signed char) arr_52 [i_16 - 1] [i_16 - 1] [i_16] [(short)8]));
                }
                for (unsigned int i_19 = 1; i_19 < 19; i_19 += 3) 
                {
                    var_45 += ((/* implicit */short) (signed char)83);
                    var_46 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-29179)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) - (((/* implicit */int) (signed char)-83))))) : (((14210000634600571089ULL) - (((/* implicit */unsigned long long int) 8474821605384352135LL))))));
                }
            }
            for (short i_20 = 0; i_20 < 23; i_20 += 3) 
            {
                var_47 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) -1547920755))) ? (((unsigned int) (_Bool)1)) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1594688695))))))));
                var_48 -= ((/* implicit */unsigned long long int) arr_62 [i_11] [i_11] [(short)4]);
                var_49 = ((/* implicit */signed char) max((var_49), (((/* implicit */signed char) ((((/* implicit */int) arr_35 [(signed char)2] [(signed char)2])) > (((/* implicit */int) arr_35 [(short)4] [(short)4])))))));
            }
            for (int i_21 = 2; i_21 < 22; i_21 += 3) 
            {
                arr_67 [i_11] [i_11] [(short)13] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_63 [i_16 - 1] [i_16 + 2] [i_11] [i_21]))));
                var_50 = ((/* implicit */unsigned short) (signed char)77);
            }
        }
        for (long long int i_22 = 0; i_22 < 23; i_22 += 1) 
        {
            arr_71 [i_11] [i_11] [i_22] = ((/* implicit */short) arr_66 [(short)13] [i_22] [i_22] [i_11]);
            arr_72 [i_11] [i_11] = ((/* implicit */unsigned long long int) ((long long int) ((long long int) (signed char)81)));
        }
        var_51 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) min((((/* implicit */long long int) arr_49 [i_11] [i_11])), (arr_39 [i_11] [i_11] [i_11] [i_11])))) ? (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)67)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_46 [i_11] [i_11] [i_11])))))))));
    }
    var_52 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
    var_53 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 1063738063U)) ? (12089605989348513267ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) var_8))))))) : (min((((/* implicit */int) var_10)), ((-(((/* implicit */int) (signed char)-93))))))));
}
