/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45229
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((6630930094278239329ULL), (((/* implicit */unsigned long long int) var_5))))) || (((/* implicit */_Bool) 4261412864U))));
            var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_4)), (23ULL)))) || (((/* implicit */_Bool) 9331479743455185200ULL)))))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 1) 
        {
            arr_9 [i_0] [i_0] [i_0] = ((18446744073709551615ULL) << (((max((8524305551138511244ULL), (((/* implicit */unsigned long long int) 4U)))) - (8524305551138511219ULL))));
            var_16 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 4294967291U)))))));
        }
        for (unsigned int i_3 = 0; i_3 < 19; i_3 += 2) 
        {
            var_17 = arr_2 [i_0] [i_3];
            /* LoopSeq 3 */
            for (unsigned int i_4 = 0; i_4 < 19; i_4 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 1; i_5 < 18; i_5 += 2) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 2) 
                    {
                        {
                            var_18 &= var_1;
                            var_19 = ((/* implicit */unsigned long long int) (((~(var_11))) | (var_3)));
                            arr_20 [i_5] [i_5] [i_0] [i_5] = ((((/* implicit */_Bool) 144115170895986688ULL)) ? (((unsigned int) 1831137984322435448ULL)) : (2366294208U));
                            arr_21 [i_3] [i_3] [i_3] [i_0] [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) : ((~(arr_7 [i_0]))))))));
                            var_20 = ((/* implicit */unsigned int) var_12);
                        }
                    } 
                } 
                var_21 ^= ((((/* implicit */_Bool) max((arr_10 [i_4]), (arr_10 [i_3])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) arr_10 [i_4])))))) : ((~(9908504112414493738ULL))));
                var_22 = max((arr_6 [i_4]), (((/* implicit */unsigned long long int) (!(((0ULL) < (((/* implicit */unsigned long long int) 1710672694U))))))));
            }
            for (unsigned int i_7 = 0; i_7 < 19; i_7 += 1) 
            {
                arr_24 [i_0] [i_3] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_0] [12ULL] [i_7] [7U])) ? (858538851U) : (2584294601U)));
                var_23 = ((/* implicit */unsigned long long int) ((4063232U) << (((((unsigned long long int) 5112450051807050736ULL)) - (5112450051807050733ULL)))));
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 3; i_8 < 18; i_8 += 2) 
                {
                    for (unsigned int i_9 = 2; i_9 < 17; i_9 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned long long int) min((var_24), ((-(arr_4 [i_3] [i_7] [i_9 + 2])))));
                            var_25 ^= ((((((/* implicit */_Bool) arr_0 [i_0])) ? ((~(4889081288981031917ULL))) : (((((/* implicit */unsigned long long int) var_2)) | (var_0))))) | (((/* implicit */unsigned long long int) var_7)));
                            arr_30 [i_0] [i_3] [i_7] [i_3] [i_9] = (((!(((/* implicit */_Bool) min((arr_12 [11U] [i_0]), (arr_16 [i_0] [i_0] [i_7] [i_0] [i_9])))))) ? (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 47158591U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((1553780880U) == (2366294210U))))) : ((+(4290904063U)))))) : (((unsigned long long int) arr_12 [i_0] [i_0])));
                            arr_31 [i_0] [i_9] [i_0] [i_7] [12ULL] [i_0] = ((unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_0] [i_9 - 1] [i_0])) ? ((-(var_0))) : (((/* implicit */unsigned long long int) min((var_7), (var_5))))));
                        }
                    } 
                } 
                var_26 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) 1710672705U))) ? (((/* implicit */unsigned long long int) var_7)) : ((((!(((/* implicit */_Bool) 3843353867U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_3])) || (((/* implicit */_Bool) arr_17 [i_0] [i_0] [1ULL] [i_3] [0ULL] [i_7] [i_7])))))) : (arr_2 [10ULL] [i_7])))));
            }
            /* vectorizable */
            for (unsigned int i_10 = 2; i_10 < 18; i_10 += 1) 
            {
                var_27 ^= ((/* implicit */unsigned int) (-(1458484351663890315ULL)));
                var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 2584294615U)))))));
            }
        }
        arr_35 [i_0] = (((~(((var_1) ^ (12811136607494542807ULL))))) | (((unsigned long long int) 1831137984322435448ULL)));
        var_29 = (i_0 % 2 == 0) ? (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_2)) ? (arr_14 [i_0] [i_0] [i_0]) : (arr_10 [i_0])))))) % (((((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_34 [i_0] [i_0] [i_0] [5ULL]) : (var_13))) << ((((~(arr_13 [i_0] [i_0] [i_0] [16ULL]))) - (1470855686U)))))))) : (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_2)) ? (arr_14 [i_0] [i_0] [i_0]) : (arr_10 [i_0])))))) % (((((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_34 [i_0] [i_0] [i_0] [5ULL]) : (var_13))) << ((((((~(arr_13 [i_0] [i_0] [i_0] [16ULL]))) - (1470855686U))) - (1840285150U))))))));
        var_30 *= ((/* implicit */unsigned int) (+(1831137984322435448ULL)));
    }
    for (unsigned long long int i_11 = 3; i_11 < 19; i_11 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_12 = 0; i_12 < 21; i_12 += 3) 
        {
            var_31 = ((/* implicit */unsigned long long int) var_2);
            arr_40 [i_12] = ((1686216140649181604ULL) << (((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_11)) : (var_8))) < (var_8)))));
        }
        for (unsigned long long int i_13 = 0; i_13 < 21; i_13 += 2) 
        {
            arr_44 [i_11 - 2] [i_13] = ((((/* implicit */_Bool) (-(((/* implicit */int) ((var_11) < (var_9))))))) ? (((((/* implicit */_Bool) ((arr_39 [i_11] [i_11] [i_11]) - (var_11)))) ? (min((1831137984322435447ULL), (arr_43 [i_11] [i_11] [i_11]))) : (arr_41 [i_11 + 1] [i_11 - 1]))) : (((/* implicit */unsigned long long int) ((unsigned int) (-(13334294021902500879ULL))))));
            var_32 = ((/* implicit */unsigned long long int) (!(((17179867136ULL) == (0ULL)))));
            var_33 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_9)))) ? (arr_36 [i_11 - 3] [i_11 - 3]) : (max((18446744073709551615ULL), (arr_36 [i_11 + 2] [i_11 + 2])))))) || (((/* implicit */_Bool) (~(arr_42 [i_13] [i_11 - 1]))))));
            arr_45 [14ULL] = ((/* implicit */unsigned int) arr_36 [i_11] [i_11]);
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_14 = 4; i_14 < 19; i_14 += 1) 
        {
            arr_50 [9U] [9U] = ((/* implicit */unsigned int) arr_48 [i_11] [i_11]);
            var_34 += ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_42 [i_11] [i_11 + 1])) ? (arr_42 [i_11] [i_11 + 1]) : (arr_42 [i_11] [i_11 - 2]))) << (((arr_42 [i_11] [i_11 - 2]) - (3182017109U)))));
            var_35 ^= ((max((((arr_48 [13ULL] [i_11]) | (var_8))), (min((((/* implicit */unsigned long long int) 1985285284U)), (3ULL))))) << ((((-((+(13779718001284592626ULL))))) - (4667026072424958984ULL))));
            var_36 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (arr_43 [i_11] [i_14] [i_14]) : (((/* implicit */unsigned long long int) var_9)))) < (((4667026072424958989ULL) * (((/* implicit */unsigned long long int) var_11)))))))));
            var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 12811136607494542819ULL)) ? (4667026072424958990ULL) : (3436542516963975440ULL)));
        }
    }
    var_38 = ((/* implicit */unsigned long long int) min((var_38), (((((/* implicit */_Bool) var_6)) ? (min((6423153468893100569ULL), (18446744073709551595ULL))) : (((/* implicit */unsigned long long int) var_3))))));
    /* LoopNest 2 */
    for (unsigned long long int i_15 = 1; i_15 < 15; i_15 += 2) 
    {
        for (unsigned long long int i_16 = 0; i_16 < 18; i_16 += 3) 
        {
            {
                var_39 = ((unsigned long long int) (-(((/* implicit */int) ((801579271360658146ULL) == (1831137984322435432ULL))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_17 = 2; i_17 < 16; i_17 += 1) /* same iter space */
                {
                    arr_60 [i_17 - 2] [i_16] [i_15] = ((((/* implicit */_Bool) min((arr_7 [i_15 + 3]), (arr_28 [i_15 + 3] [i_15 + 3] [i_16] [i_16] [i_17 - 2] [i_17] [i_17])))) ? (((((/* implicit */_Bool) 12453201430420146815ULL)) ? (1511801185326539152ULL) : (var_13))) : (((arr_7 [i_15 + 3]) & (6423153468893100542ULL))));
                    arr_61 [i_15 - 1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((3406197646U) < (arr_38 [i_15 - 1] [i_15 - 1])))) < (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) == (var_10))))));
                    var_40 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_17] [i_17 - 2] [i_17] [i_16] [i_15 + 3] [i_15 + 2] [i_15 + 2])) ? (arr_46 [i_15 + 3]) : (arr_46 [i_15 - 1])))), (min((arr_28 [i_17 - 2] [i_17 - 2] [i_15 + 1] [i_15 + 2] [i_15 - 1] [i_15 + 2] [i_15 + 2]), (arr_28 [i_17] [i_17 + 2] [13ULL] [i_15] [i_15 + 1] [i_15 + 3] [i_15 + 3])))));
                }
                for (unsigned long long int i_18 = 2; i_18 < 16; i_18 += 1) /* same iter space */
                {
                    arr_66 [9U] [i_16] [0U] [0U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(min((var_5), (var_11)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_34 [i_15 + 3] [i_15 + 3] [i_15 - 1] [i_18])) || (((/* implicit */_Bool) arr_34 [i_15] [i_15] [i_15 - 1] [i_18 + 1]))))) : (((/* implicit */int) ((((unsigned long long int) 16830438531416548872ULL)) <= (0ULL))))));
                    var_41 = ((/* implicit */unsigned int) max((var_41), ((~(1710672678U)))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_19 = 0; i_19 < 18; i_19 += 1) 
                    {
                        arr_69 [i_16] [i_19] = ((/* implicit */unsigned int) ((281474976710655ULL) == (((/* implicit */unsigned long long int) arr_14 [i_15 + 3] [i_15] [i_15 + 1]))));
                        arr_70 [i_15] [4U] = ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((var_7) << (((134217726ULL) - (134217697ULL)))))) : (((((/* implicit */_Bool) arr_5 [i_18 + 2] [i_16] [i_18])) ? (((/* implicit */unsigned long long int) 2142522135U)) : (var_13))));
                    }
                }
                /* LoopNest 2 */
                for (unsigned int i_20 = 0; i_20 < 18; i_20 += 1) 
                {
                    for (unsigned long long int i_21 = 0; i_21 < 18; i_21 += 2) 
                    {
                        {
                            var_42 = ((/* implicit */unsigned long long int) (~(((max((var_4), (var_4))) << (((((unsigned long long int) arr_15 [i_15] [i_15] [i_15] [i_15])) - (2657509036ULL)))))));
                            /* LoopSeq 1 */
                            for (unsigned long long int i_22 = 0; i_22 < 18; i_22 += 2) 
                            {
                                var_43 *= ((/* implicit */unsigned int) 1831137984322435448ULL);
                                var_44 = ((/* implicit */unsigned int) 1831137984322435432ULL);
                                var_45 = ((/* implicit */unsigned int) (+(max((((/* implicit */unsigned long long int) ((var_8) == (arr_19 [i_15] [i_16] [2U] [i_21] [i_22])))), (((17645164802348893499ULL) & (((/* implicit */unsigned long long int) arr_42 [i_15 + 3] [i_15 + 3]))))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_46 = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))) << (((((((/* implicit */unsigned long long int) var_9)) ^ ((~(var_10))))) - (10554430442529135472ULL)))));
}
