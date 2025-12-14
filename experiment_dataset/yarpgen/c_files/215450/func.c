/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215450
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
    /* vectorizable */
    for (unsigned long long int i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        arr_2 [i_0 + 1] = ((((/* implicit */_Bool) ((108086391056891904ULL) | (var_4)))) ? (((arr_1 [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 1]))));
        var_14 = ((/* implicit */unsigned long long int) max((var_14), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_2)) * (arr_1 [i_0])))) ? (((arr_1 [i_0]) % (var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))))))));
        arr_3 [i_0] [i_0 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) 6LL))) ? (arr_1 [i_0 - 1]) : (var_3)));
    }
    /* LoopSeq 1 */
    for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        var_15 &= var_13;
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) arr_5 [8ULL]))));
        var_17 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) -1056027750480554472LL))) << (((((((/* implicit */_Bool) var_2)) ? (arr_1 [i_1]) : (arr_4 [17ULL] [i_1]))) - (9045520227495659549ULL)))))), (((-1056027750480554472LL) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))));
        var_18 += ((/* implicit */long long int) min((((unsigned long long int) arr_5 [(_Bool)1])), (((unsigned long long int) var_10))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            for (long long int i_3 = 1; i_3 < 14; i_3 += 3) 
            {
                {
                    arr_13 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */long long int) var_8);
                    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)200)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [8ULL]))) : (min((((arr_5 [6ULL]) ? (arr_1 [i_2]) : (9311943926450250604ULL))), (((/* implicit */unsigned long long int) arr_9 [i_2] [i_3 + 1] [i_3 + 1])))))))));
                    arr_14 [0ULL] [i_2] [0ULL] [i_3] |= ((/* implicit */long long int) max(((!(((/* implicit */_Bool) ((var_3) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)36)))))))), (arr_5 [16LL])));
                    arr_15 [i_1] = ((/* implicit */unsigned char) var_11);
                    var_20 = ((/* implicit */unsigned long long int) (+(((long long int) var_11))));
                }
            } 
        } 
    }
    /* LoopSeq 2 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_21 -= ((((((-7886819671037698830LL) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) | (((/* implicit */long long int) ((/* implicit */int) max(((_Bool)0), (arr_18 [i_4]))))))) - (arr_17 [i_4] [i_4]));
        var_22 = ((/* implicit */unsigned long long int) (+(((((long long int) arr_1 [i_4])) << (((min((arr_1 [i_4]), (((/* implicit */unsigned long long int) (_Bool)1)))) - (1ULL)))))));
    }
    for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 3) 
    {
        arr_22 [i_5] [i_5] = ((/* implicit */_Bool) ((long long int) arr_21 [i_5]));
        var_23 = ((/* implicit */_Bool) ((((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (arr_19 [i_5]))) >= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_5])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_19 [i_5]) : (arr_17 [i_5] [i_5])))))))) : (((((12805617866405255569ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_5]))))) - (min((arr_21 [i_5]), (((/* implicit */unsigned long long int) var_10))))))));
        /* LoopNest 2 */
        for (long long int i_6 = 0; i_6 < 17; i_6 += 3) 
        {
            for (unsigned long long int i_7 = 2; i_7 < 15; i_7 += 2) 
            {
                {
                    var_24 = ((/* implicit */_Bool) (((!(arr_9 [i_5] [i_6] [i_7 + 1]))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 18446744073709551615ULL)))) : (1056027750480554443LL)));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 2) 
                    {
                        var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((arr_8 [i_7 + 2] [i_7] [i_7 + 2]) == (min((min((((/* implicit */unsigned long long int) (unsigned char)255)), (var_1))), ((~(9134800147259301011ULL))))))))));
                        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((_Bool) min((((/* implicit */long long int) (_Bool)0)), (arr_6 [i_7 - 1])))))));
                        var_27 = ((/* implicit */unsigned long long int) min((var_27), (min(((-(18374686479671623680ULL))), (((unsigned long long int) max((((/* implicit */unsigned char) arr_0 [i_7])), (arr_12 [i_7]))))))));
                        var_28 = ((/* implicit */unsigned long long int) max((var_28), (max((var_5), (((/* implicit */unsigned long long int) ((((8927218866632173126ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)212))))) ? (((((/* implicit */_Bool) (unsigned char)17)) ? (var_10) : (arr_11 [(_Bool)0] [i_8] [i_7] [i_8]))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_26 [i_5] [i_6]) < (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_6] [i_8]))))))))))))));
                        var_29 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_9 [i_7 - 2] [i_7] [i_7]) && (arr_9 [i_7 - 2] [i_7] [i_7 - 1]))))) ^ (((unsigned long long int) (_Bool)1))));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        arr_34 [i_5] [i_5] = ((/* implicit */long long int) var_3);
                        var_30 = ((/* implicit */_Bool) arr_4 [i_5] [i_6]);
                        var_31 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)35))));
                        var_32 = ((/* implicit */unsigned long long int) ((((long long int) 3607675407921836764ULL)) <= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_27 [i_5] [3LL]), (((/* implicit */unsigned long long int) (unsigned char)220)))))))))));
                        var_33 = ((/* implicit */unsigned long long int) var_12);
                    }
                    var_34 = ((/* implicit */unsigned char) arr_6 [i_5]);
                    arr_35 [i_5] [i_6] [i_6] = ((/* implicit */long long int) ((_Bool) (+(((((/* implicit */_Bool) (unsigned char)0)) ? (arr_1 [i_7]) : (((/* implicit */unsigned long long int) var_2)))))));
                    var_35 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((arr_30 [i_5] [i_7 + 1]) % (((/* implicit */unsigned long long int) -7886819671037698830LL)))), (((/* implicit */unsigned long long int) ((long long int) 9257796189082010765ULL)))))) ? ((-((+(var_2))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_32 [i_7 + 2] [i_6] [i_5] [i_5]), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (((/* implicit */int) arr_29 [i_7 + 2] [i_5])) : (((/* implicit */int) ((_Bool) (_Bool)1))))))));
                }
            } 
        } 
    }
    /* LoopSeq 3 */
    for (unsigned long long int i_10 = 3; i_10 < 9; i_10 += 2) 
    {
        var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_10 - 3])) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (arr_17 [i_10 + 1] [i_10 - 2]) : (arr_6 [i_10 - 3]))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        var_37 ^= ((/* implicit */unsigned char) (-(var_11)));
    }
    /* vectorizable */
    for (unsigned char i_11 = 0; i_11 < 18; i_11 += 2) 
    {
        var_38 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_8))) && (((/* implicit */_Bool) (+(var_1))))));
        /* LoopSeq 2 */
        for (long long int i_12 = 3; i_12 < 16; i_12 += 3) 
        {
            var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)95)) ? (arr_7 [i_12 + 2] [i_12]) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned char)205))))));
            /* LoopSeq 2 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                var_40 = ((/* implicit */long long int) min((var_40), (((/* implicit */long long int) arr_1 [i_11]))));
                var_41 = ((/* implicit */unsigned char) (((_Bool)0) ? (((((/* implicit */unsigned long long int) var_9)) / (arr_4 [i_11] [4ULL]))) : (((/* implicit */unsigned long long int) (+(arr_11 [i_11] [i_12] [i_11] [i_13]))))));
                /* LoopSeq 1 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    arr_50 [i_12] [i_14] [i_14] [i_13] [i_12] [i_12] = ((((/* implicit */_Bool) 10979849441278751870ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_12 - 2]))) : (((unsigned long long int) arr_12 [i_12])));
                    arr_51 [i_11] [i_12] [i_12] [i_13] [i_14] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_12 [i_12]))));
                    arr_52 [i_11] [i_11] [i_13] |= (unsigned char)60;
                }
            }
            for (unsigned long long int i_15 = 0; i_15 < 18; i_15 += 3) 
            {
                var_42 = ((/* implicit */long long int) min((var_42), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_42 [i_11])))) ? (arr_39 [i_12] [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)72)))))))))));
                arr_56 [i_12] = ((/* implicit */_Bool) ((var_5) + (arr_39 [i_11] [i_15])));
            }
        }
        for (unsigned char i_16 = 0; i_16 < 18; i_16 += 3) 
        {
            var_43 ^= ((/* implicit */unsigned char) ((unsigned long long int) (-(((/* implicit */int) arr_43 [i_11])))));
            /* LoopSeq 2 */
            for (unsigned char i_17 = 3; i_17 < 17; i_17 += 3) 
            {
                arr_62 [i_11] [i_16] [i_16] [i_16] = ((var_3) - (16852063128214805027ULL));
                arr_63 [i_16] [i_16] [i_17] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_44 [i_17 + 1] [i_17 - 1] [i_17 - 2]))));
            }
            for (unsigned long long int i_18 = 0; i_18 < 18; i_18 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned char i_19 = 2; i_19 < 15; i_19 += 3) 
                {
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        {
                            var_44 = ((((var_9) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) << (((/* implicit */int) ((var_3) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_16])))))));
                            var_45 |= ((/* implicit */long long int) ((var_8) << (((((((/* implicit */_Bool) arr_69 [i_11] [i_16] [i_18] [i_19] [i_20] [i_11])) ? (arr_67 [i_11] [i_18] [i_11]) : (7019477211028037283ULL))) - (15682109234182498178ULL)))));
                            arr_73 [i_16] [i_11] [i_16] [i_16] [i_11] = ((/* implicit */long long int) ((((/* implicit */int) arr_43 [i_16])) % (((/* implicit */int) arr_70 [i_11] [i_11] [i_18] [i_19] [i_20]))));
                        }
                    } 
                } 
                var_46 += ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)109))) / (arr_54 [i_16])));
            }
        }
    }
    for (long long int i_21 = 0; i_21 < 10; i_21 += 3) 
    {
        arr_76 [(_Bool)1] [i_21] = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(arr_19 [i_21])))), (((((/* implicit */_Bool) (unsigned char)40)) ? (((/* implicit */unsigned long long int) var_2)) : (arr_20 [i_21])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (-(var_0)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_46 [i_21] [i_21])) ? (arr_65 [(unsigned char)0] [i_21] [(unsigned char)0]) : (7019477211028037283ULL)))))))) : (((unsigned long long int) 7148940315800709383ULL)));
        var_47 = min((min((((((/* implicit */_Bool) arr_26 [i_21] [i_21])) ? (-20LL) : (-7031282456947192906LL))), (max((((/* implicit */long long int) (_Bool)0)), (var_13))))), (((/* implicit */long long int) (((-(arr_57 [i_21] [i_21] [i_21]))) != (((/* implicit */long long int) ((/* implicit */int) arr_70 [i_21] [i_21] [i_21] [i_21] [i_21])))))));
        arr_77 [(unsigned char)0] [(_Bool)1] = arr_32 [4ULL] [i_21] [i_21] [i_21];
    }
    var_48 = (~((+(((var_8) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)156))))))));
}
