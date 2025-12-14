/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192124
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
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_16 = 3458936383302005539ULL;
                    arr_7 [i_1] [i_0 - 1] [(short)20] [i_2] = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)12))));
                    var_17 += ((/* implicit */unsigned long long int) ((short) 3458936383302005515ULL));
                }
            } 
        } 
        var_18 *= max((((/* implicit */unsigned long long int) arr_3 [14ULL])), (max((3458936383302005508ULL), (3458936383302005515ULL))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 4) 
    {
        var_19 = ((/* implicit */short) 18446744073709551595ULL);
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 3) 
        {
            for (signed char i_5 = 2; i_5 < 18; i_5 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_6 = 4; i_6 < 18; i_6 += 4) 
                    {
                        arr_17 [i_3] [i_4] [i_3] [i_3] [9ULL] = ((signed char) (~(((/* implicit */int) var_0))));
                        var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 9450554262403997233ULL))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 20; i_7 += 2) 
                    {
                        for (short i_8 = 1; i_8 < 17; i_8 += 2) 
                        {
                            {
                                arr_25 [i_4] = ((/* implicit */short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((14987807690407546055ULL), (9450554262403997256ULL))))))), (max((((/* implicit */unsigned long long int) (signed char)-123)), (3458936383302005514ULL)))));
                                var_21 = (-(8842095642974679174ULL));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (short i_9 = 2; i_9 < 18; i_9 += 4) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 3) 
                        {
                            var_22 = ((/* implicit */unsigned long long int) min((var_22), ((+(arr_23 [i_10] [i_9] [i_9 - 1] [i_9 + 2] [i_9 - 2] [i_5 + 1] [i_3])))));
                            arr_32 [i_4] = ((/* implicit */short) ((arr_9 [i_3] [i_3]) <= (arr_9 [i_3] [i_3])));
                        }
                        var_23 += ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) 8996189811305554366ULL)) ? (9450554262403997247ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)11956))))));
                        var_24 -= ((/* implicit */signed char) 3458936383302005539ULL);
                        var_25 *= ((unsigned long long int) 9450554262403997245ULL);
                        arr_33 [i_4] [(signed char)7] [i_4] = ((unsigned long long int) var_10);
                    }
                    /* vectorizable */
                    for (signed char i_11 = 4; i_11 < 16; i_11 += 2) 
                    {
                        arr_36 [i_4] = arr_3 [i_5 + 2];
                        arr_37 [i_3] [i_3] [i_4] [i_3] = ((/* implicit */signed char) ((3458936383302005561ULL) % (8996189811305554361ULL)));
                        arr_38 [i_3] [i_3] [i_5] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((9450554262403997209ULL) ^ (9604648430734872431ULL)))) || (((/* implicit */_Bool) 8842095642974679201ULL))));
                        arr_39 [i_3] [i_3] [i_3] [i_4] [16ULL] = ((/* implicit */unsigned long long int) ((9450554262403997245ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_5 + 2] [i_11 - 1] [(signed char)20])))));
                        arr_40 [i_4] = ((/* implicit */short) (!(((/* implicit */_Bool) var_8))));
                    }
                    var_26 ^= ((/* implicit */short) max(((((!(((/* implicit */_Bool) 9604648430734872460ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31470))) != (18446744073709551615ULL))))) : (max((((/* implicit */unsigned long long int) (signed char)40)), (10972073935418890211ULL))))), (((11194140447506271278ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)42)))))));
                    arr_41 [i_5 + 1] [i_4] [i_3] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (short)28129)), (7252603626203280347ULL)));
                }
            } 
        } 
        arr_42 [11ULL] = ((/* implicit */signed char) max(((~(8996189811305554366ULL))), (max((3535451520998279611ULL), (((/* implicit */unsigned long long int) var_14))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_12 = 0; i_12 < 20; i_12 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_13 = 0; i_13 < 20; i_13 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_14 = 0; i_14 < 20; i_14 += 2) 
                {
                    for (signed char i_15 = 2; i_15 < 18; i_15 += 2) 
                    {
                        {
                            var_27 = arr_44 [(short)14] [i_15 + 1];
                            var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((unsigned long long int) (!(((/* implicit */_Bool) 5184705416563071981ULL))))))));
                            var_29 = ((/* implicit */unsigned long long int) max((var_29), (((unsigned long long int) ((unsigned long long int) 4294959104ULL)))));
                            var_30 = ((/* implicit */unsigned long long int) min((var_30), (((1028335276076099278ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_3] [i_12] [i_3] [i_15 + 1] [i_15 + 1] [i_12])))))));
                        }
                    } 
                } 
                arr_56 [(short)13] [i_12] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)11)) > (((/* implicit */int) (short)-19589))));
            }
            /* LoopSeq 1 */
            for (unsigned long long int i_16 = 1; i_16 < 17; i_16 += 4) 
            {
                arr_59 [i_16] [i_12] [i_16] = ((/* implicit */unsigned long long int) arr_16 [i_3] [i_3] [i_12] [i_16 - 1]);
                arr_60 [(short)9] [i_16] [i_16 + 3] [i_16] = (signed char)-42;
            }
            arr_61 [i_3] [i_3] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_48 [i_12] [i_3] [i_3] [(signed char)14])) ? (((/* implicit */int) arr_48 [i_12] [i_12] [i_12] [i_3])) : (((/* implicit */int) arr_48 [8ULL] [i_3] [17ULL] [i_12]))));
            var_31 = 18446744069414592506ULL;
        }
    }
    for (unsigned long long int i_17 = 0; i_17 < 12; i_17 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_18 = 0; i_18 < 12; i_18 += 3) 
        {
            for (signed char i_19 = 1; i_19 < 11; i_19 += 3) 
            {
                {
                    var_32 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)-41)) && (((/* implicit */_Bool) var_0))))) / (((/* implicit */int) (short)19583))))), (max((max((arr_4 [i_17] [i_17] [i_17]), (var_15))), (max((((/* implicit */unsigned long long int) var_13)), (12698914730015670820ULL)))))));
                    var_33 -= (signed char)0;
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_20 = 1; i_20 < 11; i_20 += 4) 
        {
            for (short i_21 = 0; i_21 < 12; i_21 += 3) 
            {
                {
                    var_34 = ((/* implicit */signed char) var_7);
                    var_35 = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_43 [i_20 + 1] [i_20 - 1] [i_20 - 1])))) + (((/* implicit */int) arr_46 [i_20 + 1] [i_20 + 1] [i_20 + 1]))));
                    var_36 |= (~(((((/* implicit */_Bool) (+(arr_4 [i_17] [i_21] [(short)20])))) ? ((-(var_4))) : (max((9730472480191067358ULL), (9450554262403997223ULL))))));
                    arr_74 [i_21] [i_17] [i_17] [i_17] = (-(((((/* implicit */_Bool) (signed char)-23)) ? (9450554262403997226ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1963))))));
                    var_37 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (signed char)-64)), (6859446478404834549ULL)));
                }
            } 
        } 
        var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) ((max((8836452356323466750ULL), (arr_57 [i_17] [i_17]))) / (var_2))))));
        var_39 += ((/* implicit */unsigned long long int) var_13);
    }
    for (short i_22 = 2; i_22 < 13; i_22 += 3) 
    {
        var_40 = ((/* implicit */unsigned long long int) arr_14 [(short)7] [(signed char)3] [i_22] [(signed char)3]);
        arr_77 [(short)9] [i_22] = ((/* implicit */short) ((signed char) ((unsigned long long int) (!(((/* implicit */_Bool) 6062123381404166697ULL))))));
    }
    var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 140737488355327ULL)) ? (((/* implicit */int) (short)31196)) : (((/* implicit */int) (signed char)11))))) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 17117694438042622450ULL)) ? (9450554262403997233ULL) : (var_5))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)-65)), (15015169711928723630ULL)))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_23 = 0; i_23 < 23; i_23 += 2) 
    {
        var_42 = ((/* implicit */short) (~(((/* implicit */int) (signed char)-40))));
        var_43 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_78 [i_23])) & (((/* implicit */int) arr_78 [i_23]))))), (9139243729592686030ULL)));
        arr_82 [i_23] = ((signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-4))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_80 [i_23] [i_23])) | (((/* implicit */int) (short)-22142))))) : (((unsigned long long int) 0ULL))));
    }
}
