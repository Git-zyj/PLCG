/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208365
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
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (long long int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                arr_8 [i_0] [i_1] [i_0] = ((((/* implicit */_Bool) 6510706146787853422LL)) ? (arr_2 [i_0]) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_7 [i_2] [i_0] [i_0]) : (arr_0 [i_0]))));
                arr_9 [i_0] [i_1] [i_2] = ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) -6821980458394432817LL)) ? (17592169267200LL) : (-1369760331470138090LL))) : (((long long int) var_0)));
            }
            arr_10 [i_0] = ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (arr_5 [i_0 + 1] [i_0]) : (arr_5 [i_0] [i_0]));
            arr_11 [i_0] = arr_2 [i_0 + 1];
        }
        for (long long int i_3 = 1; i_3 < 15; i_3 += 2) 
        {
            var_16 = ((long long int) 7313688112658126942LL);
            arr_14 [i_0] = ((long long int) ((((/* implicit */_Bool) arr_7 [i_0 + 1] [17LL] [i_3 + 4])) && (((((/* implicit */_Bool) 5218407743597176896LL)) && (((/* implicit */_Bool) 18014398509477888LL))))));
        }
        /* vectorizable */
        for (long long int i_4 = 1; i_4 < 17; i_4 += 2) 
        {
            /* LoopNest 3 */
            for (long long int i_5 = 0; i_5 < 19; i_5 += 2) 
            {
                for (long long int i_6 = 3; i_6 < 18; i_6 += 4) 
                {
                    for (long long int i_7 = 0; i_7 < 19; i_7 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */long long int) max((var_17), ((+(arr_19 [i_6 - 3] [i_6 - 1] [i_6] [i_6])))));
                            arr_25 [15LL] [i_4] [i_0] [1LL] = ((((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_5] [i_4 + 1] [i_0] [i_0])) ? (arr_24 [i_4] [i_4 - 1] [i_7] [i_4 + 2] [i_0] [i_5]) : (arr_5 [i_0] [i_0]));
                            arr_26 [i_0] [15LL] = arr_6 [i_0 - 1] [i_0 - 1] [i_5] [i_0 - 1];
                        }
                    } 
                } 
            } 
            arr_27 [i_0] = arr_1 [i_0];
            arr_28 [i_0] = arr_16 [i_0] [i_0];
            /* LoopSeq 3 */
            for (long long int i_8 = 0; i_8 < 19; i_8 += 2) 
            {
                arr_32 [i_8] [i_4] [i_8] |= arr_22 [i_0] [i_4 + 1] [3LL] [i_4 + 2];
                arr_33 [i_0] [i_8] [i_8] |= ((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 - 1] [i_0])) ? (arr_17 [i_8]) : (arr_17 [i_8]));
            }
            for (long long int i_9 = 0; i_9 < 19; i_9 += 3) 
            {
                arr_36 [i_9] [0LL] [0LL] [i_0] |= (((!(((/* implicit */_Bool) -4384157596342448685LL)))) ? (((((/* implicit */_Bool) arr_5 [i_0] [14LL])) ? (arr_23 [i_0 + 1] [7LL] [i_4 + 1] [i_9]) : (-4384157596342448716LL))) : (((((/* implicit */_Bool) arr_23 [i_0] [i_4 - 1] [i_9] [i_9])) ? (arr_1 [16LL]) : (2817730716953906849LL))));
                arr_37 [i_0] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_23 [i_0] [i_4] [i_9] [15LL])))) || (((/* implicit */_Bool) arr_3 [i_0]))));
                /* LoopSeq 1 */
                for (long long int i_10 = 2; i_10 < 17; i_10 += 1) 
                {
                    var_18 = ((/* implicit */long long int) min((var_18), ((~(((((/* implicit */_Bool) arr_2 [i_0])) ? (-3572152224440974457LL) : (arr_16 [i_4] [i_0])))))));
                    arr_41 [i_0 + 1] [18LL] [i_0 + 1] [i_0 + 1] |= ((((/* implicit */_Bool) arr_3 [10LL])) ? (arr_3 [0LL]) : (-336984022240224312LL));
                }
            }
            for (long long int i_11 = 1; i_11 < 18; i_11 += 3) 
            {
                arr_45 [i_0] [i_0] [i_0] = arr_42 [i_0] [i_0] [i_0];
                var_19 = -1292191008346727832LL;
            }
            arr_46 [i_0] [4LL] |= ((/* implicit */long long int) ((((/* implicit */_Bool) -1369760331470138090LL)) || (((/* implicit */_Bool) ((long long int) 3136738708206283206LL)))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_12 = 3; i_12 < 17; i_12 += 2) 
        {
            /* LoopSeq 1 */
            for (long long int i_13 = 1; i_13 < 17; i_13 += 2) 
            {
                var_20 = arr_39 [i_0] [i_0] [i_0] [0LL];
                arr_51 [i_0] [i_0] [i_13] [i_0] = ((((/* implicit */_Bool) arr_50 [i_0] [i_12 - 2])) ? (arr_22 [i_0 + 1] [i_0 + 1] [i_0 + 1] [9LL]) : (var_10));
                arr_52 [i_0] [i_12 + 2] [i_12 + 2] = ((((/* implicit */_Bool) arr_50 [i_0] [i_12 - 2])) ? (((long long int) arr_21 [16LL] [12LL] [10LL] [i_0])) : (var_3));
                /* LoopSeq 3 */
                for (long long int i_14 = 0; i_14 < 19; i_14 += 1) 
                {
                    arr_56 [12LL] [i_12] [12LL] [i_14] |= 6808837395580764532LL;
                    var_21 = ((/* implicit */long long int) max((var_21), (arr_0 [0LL])));
                    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) 8589934591LL))));
                }
                for (long long int i_15 = 0; i_15 < 19; i_15 += 1) 
                {
                    arr_60 [8LL] [8LL] |= (((+(9223371761976868864LL))) / (((arr_12 [i_12] [i_12]) - (arr_1 [16LL]))));
                    var_23 = ((/* implicit */long long int) max((var_23), (((arr_35 [i_0] [i_13 + 1] [14LL]) - (var_0)))));
                    arr_61 [i_15] [i_12] [i_15] [i_0] = arr_0 [i_0];
                    arr_62 [i_0] [i_0] = arr_47 [i_13] [i_12];
                    arr_63 [i_0] [i_0] [i_0] [i_0] [i_15] = ((((/* implicit */_Bool) (-(var_8)))) ? (1589158986339329062LL) : (9223372036854775807LL));
                }
                for (long long int i_16 = 0; i_16 < 19; i_16 += 2) 
                {
                    arr_66 [i_0] [i_13 - 1] [i_13 + 2] [i_12] [i_0] [i_0] = (((+(var_10))) - (((((/* implicit */_Bool) arr_22 [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_12])) ? (arr_47 [i_0] [i_0]) : ((-9223372036854775807LL - 1LL)))));
                    var_24 = (~(((arr_22 [i_13] [i_13] [7LL] [i_16]) | (arr_58 [i_0] [i_16]))));
                }
                arr_67 [i_0] = (i_0 % 2 == zero) ? (((((/* implicit */_Bool) var_0)) ? (((((arr_48 [i_0] [i_0]) + (9223372036854775807LL))) >> (((var_13) - (8421638283103547914LL))))) : (arr_38 [5LL] [i_12] [i_13] [i_12 + 2]))) : (((((/* implicit */_Bool) var_0)) ? (((((((arr_48 [i_0] [i_0]) - (9223372036854775807LL))) + (9223372036854775807LL))) >> (((var_13) - (8421638283103547914LL))))) : (arr_38 [5LL] [i_12] [i_13] [i_12 + 2])));
            }
            arr_68 [i_0] [i_0] = ((((/* implicit */_Bool) arr_19 [i_12] [i_12 - 2] [i_12] [i_12])) ? (arr_18 [i_0]) : (arr_54 [i_12 - 1] [i_12 + 1] [i_0]));
            /* LoopNest 2 */
            for (long long int i_17 = 0; i_17 < 19; i_17 += 1) 
            {
                for (long long int i_18 = 1; i_18 < 17; i_18 += 4) 
                {
                    {
                        var_25 = ((/* implicit */long long int) max((var_25), ((~(arr_21 [i_0] [i_0 - 1] [17LL] [i_0 - 1])))));
                        var_26 = arr_38 [i_18] [i_17] [i_12 - 3] [i_0];
                        arr_73 [i_0] [i_12] [i_0] [7LL] = (i_0 % 2 == 0) ? (((((((/* implicit */_Bool) 4134170211187796864LL)) ? (arr_24 [i_18] [i_0] [i_17] [i_12] [i_0] [i_0]) : (arr_70 [i_0 + 1] [i_0]))) - (((((/* implicit */_Bool) arr_49 [11LL] [10LL] [i_17] [i_18 + 1])) ? (arr_65 [i_0] [i_12] [8LL] [i_18 + 1]) : (arr_16 [i_0] [i_0]))))) : (((((((/* implicit */_Bool) 4134170211187796864LL)) ? (arr_24 [i_18] [i_0] [i_17] [i_12] [i_0] [i_0]) : (arr_70 [i_0 + 1] [i_0]))) + (((((/* implicit */_Bool) arr_49 [11LL] [10LL] [i_17] [i_18 + 1])) ? (arr_65 [i_0] [i_12] [8LL] [i_18 + 1]) : (arr_16 [i_0] [i_0])))));
                        arr_74 [1LL] [i_12] [1LL] [i_0] [i_0] [i_12 + 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_40 [i_0] [i_0] [i_0] [i_0 + 1] [16LL])) || (((/* implicit */_Bool) -1589158986339329048LL))));
                        arr_75 [i_0] [i_0 - 1] [i_0] [2LL] [i_18 + 1] = ((long long int) ((8561213971632300296LL) >> (((7066022756757319431LL) - (7066022756757319394LL)))));
                    }
                } 
            } 
        }
    }
    var_27 = var_5;
    var_28 -= (+(3575591968719282524LL));
}
