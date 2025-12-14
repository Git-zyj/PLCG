/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24896
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
    var_19 = ((((/* implicit */long long int) var_8)) >= (max((var_17), (((/* implicit */long long int) var_0)))));
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            /* LoopSeq 4 */
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_3 = 0; i_3 < 25; i_3 += 4) 
                {
                    var_20 = ((/* implicit */long long int) (-(min((((/* implicit */unsigned int) (-(((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))))), (328310874U)))));
                    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(var_12)))) ? (arr_4 [i_0] [i_0 + 1] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_4 [i_1] [i_0 + 3] [i_2]) >= (arr_4 [i_3] [i_0 + 2] [i_0 + 2]))))))))));
                    var_22 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_0 [i_0 + 1])), (((0ULL) % (((/* implicit */unsigned long long int) -980710258))))));
                    arr_10 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */int) ((_Bool) var_17))), ((+(((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0 + 3]))))));
                    arr_11 [i_0] [i_0] [i_0] [i_2] [i_3] = ((/* implicit */int) (_Bool)1);
                }
                var_23 ^= ((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) 8191U)), (var_14))) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2] [i_0 + 1] [i_2])))));
                var_24 = ((/* implicit */unsigned int) (-(var_3)));
                var_25 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) 18446744073709551607ULL)) ? (((/* implicit */long long int) 4294959104U)) : (1073741823LL)));
            }
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_26 = 1099444518912ULL;
                var_27 ^= ((/* implicit */signed char) var_11);
            }
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                var_28 = ((/* implicit */int) (short)20219);
                arr_17 [i_5] = ((/* implicit */long long int) ((((_Bool) (unsigned short)19689)) ? (4294959105U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
            }
            /* vectorizable */
            for (unsigned long long int i_6 = 1; i_6 < 23; i_6 += 3) 
            {
                var_29 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) 1073741823LL)) ? (((/* implicit */int) (_Bool)0)) : (arr_12 [i_0 + 3] [i_1] [i_1] [i_6 + 2])));
                var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_0 + 3] [i_6 + 2])) ? (arr_15 [i_0 - 1] [i_6 - 1]) : (arr_15 [i_0 + 2] [i_6 - 1]))))));
            }
            var_31 = (-2147483647 - 1);
            var_32 ^= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned short)62018)), (1073741823LL)));
            var_33 ^= ((/* implicit */signed char) (short)0);
        }
        var_34 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) min((1020376321), (((/* implicit */int) (unsigned short)1)))))) ? (((/* implicit */int) max((((unsigned short) arr_1 [i_0] [i_0])), (((/* implicit */unsigned short) arr_0 [i_0 + 1]))))) : (((((/* implicit */_Bool) 1073741823LL)) ? (((/* implicit */int) (_Bool)0)) : (629374042)))));
        var_35 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (max((((/* implicit */unsigned long long int) 1073741823LL)), (arr_19 [i_0 + 1] [i_0] [i_0] [i_0]))) : (((unsigned long long int) -780088444))));
        var_36 ^= (_Bool)1;
    }
    /* vectorizable */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_37 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) arr_19 [i_7] [i_7] [i_7] [i_7]))) ? (((/* implicit */unsigned long long int) (-(-1073741797LL)))) : (arr_4 [i_7] [i_7] [i_7])));
        var_38 &= arr_12 [i_7] [i_7] [i_7] [i_7];
    }
    for (unsigned short i_8 = 0; i_8 < 18; i_8 += 1) 
    {
        /* LoopSeq 3 */
        for (signed char i_9 = 0; i_9 < 18; i_9 += 4) /* same iter space */
        {
            var_39 = ((/* implicit */unsigned int) min((var_39), (((/* implicit */unsigned int) min((max((arr_23 [i_8]), (arr_23 [i_9]))), (((((/* implicit */_Bool) arr_23 [i_8])) ? (arr_23 [i_9]) : (arr_23 [i_8]))))))));
            var_40 = ((/* implicit */int) min((max((((/* implicit */long long int) arr_24 [i_8] [i_8])), (((-1073741806LL) ^ (1073741823LL))))), (((/* implicit */long long int) 780088444))));
        }
        for (signed char i_10 = 0; i_10 < 18; i_10 += 4) /* same iter space */
        {
            arr_32 [i_8] [i_10] [i_8] = min((-1073741788LL), (((/* implicit */long long int) min((((((/* implicit */_Bool) arr_5 [i_8] [i_8] [i_10])) ? (-780088444) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_21 [i_8] [i_8]))))));
            var_41 = ((/* implicit */unsigned short) arr_7 [i_8] [i_8] [i_8]);
            var_42 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_10), (((/* implicit */signed char) arr_31 [i_8]))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_10)), (8188U)))) ? (((((/* implicit */_Bool) arr_23 [i_8])) ? (-971682204) : (arr_20 [i_8] [i_10] [i_8]))) : (((/* implicit */int) var_2)))) : (((/* implicit */int) (signed char)127))));
        }
        for (signed char i_11 = 0; i_11 < 18; i_11 += 4) /* same iter space */
        {
            arr_35 [i_8] [i_8] [i_11] = ((/* implicit */unsigned short) (-((-(0ULL)))));
            /* LoopSeq 4 */
            for (unsigned short i_12 = 0; i_12 < 18; i_12 += 4) 
            {
                /* LoopSeq 4 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    var_43 += ((/* implicit */long long int) ((_Bool) max((5381679568548316722LL), (-1073741824LL))));
                    arr_42 [i_8] [i_8] [i_12] [i_8] [i_8] [i_12] = ((/* implicit */unsigned short) arr_9 [i_11] [i_11] [i_13]);
                }
                for (unsigned long long int i_14 = 0; i_14 < 18; i_14 += 4) 
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_15 = 0; i_15 < 18; i_15 += 2) 
                    {
                        arr_50 [i_8] [i_11] [i_11] [i_12] [i_8] [i_11] = ((/* implicit */short) arr_47 [i_12] [i_8] [i_12] [i_14] [i_15]);
                        var_44 = ((/* implicit */unsigned long long int) 3117206127256117792LL);
                    }
                    for (unsigned long long int i_16 = 2; i_16 < 15; i_16 += 4) 
                    {
                        var_45 = ((/* implicit */int) ((((arr_23 [i_8]) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (8185U) : (((/* implicit */unsigned int) 780088432))))))) ^ (((/* implicit */long long int) (-(((/* implicit */int) arr_16 [i_8] [i_11])))))));
                        var_46 = min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_9 [i_8] [i_11] [i_12]))))), (((((((/* implicit */_Bool) var_17)) ? (8ULL) : (((/* implicit */unsigned long long int) arr_41 [i_8] [i_8] [i_12] [i_8] [i_8])))) ^ (((/* implicit */unsigned long long int) arr_33 [i_8])))));
                    }
                    /* vectorizable */
                    for (signed char i_17 = 1; i_17 < 16; i_17 += 1) 
                    {
                        var_47 += ((/* implicit */unsigned char) arr_43 [i_8] [i_8] [i_12] [i_8]);
                        var_48 = ((/* implicit */long long int) (short)512);
                        var_49 = ((/* implicit */signed char) ((((/* implicit */_Bool) 6415587332638248164LL)) ? (2018999144273276841ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_17 - 1])))));
                        var_50 = ((/* implicit */int) min((var_50), (((((/* implicit */_Bool) arr_8 [i_17 - 1] [i_17 + 2] [i_17 - 1] [i_17 - 1] [i_17 - 1])) ? (((/* implicit */int) arr_8 [i_17 - 1] [i_17 + 2] [i_17 - 1] [i_17 + 2] [i_17 - 1])) : (((/* implicit */int) arr_8 [i_17 - 1] [i_17 + 2] [i_17 - 1] [i_17 - 1] [i_17 - 1]))))));
                    }
                    arr_57 [i_8] [i_8] [i_11] &= ((((((/* implicit */_Bool) 444342843)) ? (arr_49 [i_11] [i_11] [i_11] [i_14] [i_11]) : (((/* implicit */int) (signed char)-3)))) >= (arr_49 [i_8] [i_8] [i_8] [i_11] [i_8]));
                }
                /* vectorizable */
                for (unsigned short i_18 = 3; i_18 < 17; i_18 += 1) 
                {
                    var_51 ^= arr_27 [i_8] [i_12] [i_18 + 1];
                    arr_60 [i_8] [i_8] [i_12] [i_8] = ((/* implicit */unsigned int) (-(arr_7 [i_8] [i_11] [i_8])));
                }
                for (long long int i_19 = 2; i_19 < 16; i_19 += 2) 
                {
                    var_52 += ((/* implicit */unsigned short) min((((var_8) >> (((/* implicit */int) (_Bool)1)))), ((+(((/* implicit */int) ((((/* implicit */_Bool) 1073741819LL)) && (((/* implicit */_Bool) (signed char)89)))))))));
                    arr_63 [i_8] [i_8] [i_12] [i_12] [i_19] = ((/* implicit */long long int) (_Bool)1);
                    var_53 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) var_16)), (1152919305583591424LL))) * (((/* implicit */long long int) ((/* implicit */int) arr_45 [i_8] [i_8])))))), (((((/* implicit */_Bool) min((1997522776U), (((/* implicit */unsigned int) 780088443))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1073741806LL)) ? (-5779742115268033608LL) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))) : (((((/* implicit */_Bool) arr_53 [i_11] [i_11] [i_12] [i_11] [i_19])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_19]))) : (arr_39 [i_8] [i_8] [i_8])))))));
                }
                var_54 |= var_5;
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_20 = 0; i_20 < 18; i_20 += 1) 
                {
                    arr_66 [i_8] [i_11] [i_12] [i_8] &= ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)55156))));
                    arr_67 [i_8] [i_8] [i_11] [i_8] [i_8] [i_8] = ((/* implicit */unsigned long long int) arr_55 [i_8]);
                    var_55 *= ((((/* implicit */_Bool) arr_29 [i_8] [i_12] [i_11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_20] [i_11] [i_20] [i_20]))) : (5453726264380892411ULL));
                    var_56 = ((/* implicit */signed char) (((-(((/* implicit */int) arr_61 [i_8])))) >= ((-(((/* implicit */int) var_18))))));
                }
            }
            /* vectorizable */
            for (unsigned char i_21 = 1; i_21 < 16; i_21 += 3) 
            {
                var_57 ^= ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-1))));
                var_58 = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
            }
            /* vectorizable */
            for (long long int i_22 = 3; i_22 < 15; i_22 += 3) 
            {
                var_59 = ((/* implicit */_Bool) 9223372036854775804LL);
                /* LoopNest 2 */
                for (short i_23 = 0; i_23 < 18; i_23 += 3) 
                {
                    for (unsigned short i_24 = 1; i_24 < 17; i_24 += 4) 
                    {
                        {
                            var_60 = ((/* implicit */unsigned int) (signed char)-118);
                            arr_78 [i_8] [i_11] [i_22] [i_11] [i_8] &= ((/* implicit */signed char) ((((/* implicit */int) (signed char)-1)) >= (-1917484545)));
                            var_61 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_64 [i_22 + 3] [i_22 - 2] [i_22 - 1] [i_11]))));
                        }
                    } 
                } 
            }
            for (long long int i_25 = 0; i_25 < 18; i_25 += 3) 
            {
                arr_81 [i_8] [i_8] [i_25] [i_11] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_75 [i_8] [i_11] [i_8] [i_8] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_8] [i_11] [i_11]))) : (((((/* implicit */_Bool) (unsigned short)56213)) ? (919347210640276149ULL) : (arr_15 [i_8] [i_25]))))) << (((var_6) - (4706585480863908293LL)))));
                var_62 = ((/* implicit */_Bool) arr_26 [i_8] [i_8]);
                var_63 = ((/* implicit */long long int) (short)15);
            }
            var_64 += ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) min(((unsigned short)29716), (((/* implicit */unsigned short) (short)-24055))))) * (((/* implicit */int) ((((/* implicit */int) (signed char)119)) > (((/* implicit */int) (unsigned short)18437)))))))) % (min((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */_Bool) arr_44 [i_11] [i_11] [i_11] [i_11] [i_8] [i_11])) ? (arr_5 [i_8] [i_8] [i_8]) : (((/* implicit */unsigned long long int) arr_23 [i_11]))))))));
        }
        var_65 ^= ((/* implicit */int) (_Bool)1);
        var_66 = ((/* implicit */int) max((var_66), (((/* implicit */int) ((((/* implicit */_Bool) 7951810646840797171LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) -1LL)) && ((_Bool)1))))) : (127U))))));
    }
    /* LoopSeq 1 */
    for (unsigned int i_26 = 0; i_26 < 11; i_26 += 3) 
    {
        var_67 = ((/* implicit */int) var_15);
        arr_85 [i_26] [i_26] = ((/* implicit */short) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_71 [i_26] [i_26])), (-1073741846LL)))) < (min((arr_39 [i_26] [i_26] [i_26]), ((+(15620499003767420033ULL)))))));
        arr_86 [i_26] = ((((/* implicit */_Bool) ((unsigned char) arr_23 [i_26]))) ? (((max((var_4), (arr_30 [i_26]))) % (((/* implicit */int) (signed char)87)))) : (((/* implicit */int) ((short) ((0ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16699))))))));
    }
}
