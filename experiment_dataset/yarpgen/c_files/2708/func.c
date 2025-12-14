/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2708
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_20 = min((max((-1336598851), (((/* implicit */int) arr_0 [i_0] [i_0])))), (((/* implicit */int) arr_0 [i_0] [i_0])));
        var_21 = ((/* implicit */unsigned short) var_13);
        var_22 *= ((/* implicit */signed char) ((((/* implicit */int) ((short) arr_2 [i_0]))) == (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) >= (((/* implicit */int) arr_2 [i_0])))))));
        arr_3 [(_Bool)1] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0])))));
    }
    /* LoopNest 2 */
    for (unsigned char i_1 = 3; i_1 < 17; i_1 += 2) 
    {
        for (short i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_3 = 0; i_3 < 19; i_3 += 2) 
                {
                    for (short i_4 = 0; i_4 < 19; i_4 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)41))));
                            var_24 = ((/* implicit */short) (~(max((((/* implicit */unsigned long long int) (signed char)-16)), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) * (var_11)))))));
                            var_25 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (unsigned short)26965)), (((((/* implicit */_Bool) (~(var_11)))) ? (((/* implicit */unsigned long long int) arr_9 [i_1 - 1])) : (var_1)))));
                            /* LoopSeq 2 */
                            for (signed char i_5 = 0; i_5 < 19; i_5 += 2) 
                            {
                                arr_17 [i_1 - 3] [(signed char)11] [i_2] [i_3] [i_4] [16ULL] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_1 - 3] [i_1 - 3] [i_4])) ? (((/* implicit */int) min((var_10), (var_18)))) : (((/* implicit */int) max((arr_8 [i_1 - 3] [i_1 - 3] [(short)10]), (arr_8 [i_1 - 3] [(unsigned char)10] [(unsigned char)10]))))));
                                var_26 = ((/* implicit */unsigned char) ((max(((~(arr_16 [i_1] [i_2] [i_3] [14LL] [i_4] [i_5] [i_5]))), (((/* implicit */unsigned long long int) max((arr_6 [i_1 - 2]), (((/* implicit */long long int) var_3))))))) >> (((long long int) ((((/* implicit */int) (unsigned short)26949)) >> (((arr_12 [i_1 - 1] [i_1 - 1]) - (1915400694554227412LL))))))));
                            }
                            for (int i_6 = 0; i_6 < 19; i_6 += 2) 
                            {
                                var_27 = ((/* implicit */short) arr_12 [i_6] [17ULL]);
                                var_28 -= ((/* implicit */unsigned short) arr_8 [i_1 - 3] [(short)15] [i_6]);
                                var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) arr_6 [i_4])) ? (((var_1) << (((arr_16 [i_6] [(unsigned short)0] [i_3] [i_1] [i_2] [i_1] [i_1]) - (15496679057920644070ULL))))) : (((/* implicit */unsigned long long int) arr_6 [i_4])))) : (((/* implicit */unsigned long long int) min((((var_12) ^ (((/* implicit */long long int) ((/* implicit */int) var_13))))), (((/* implicit */long long int) (unsigned short)38571)))))));
                            }
                        }
                    } 
                } 
                var_30 = ((/* implicit */_Bool) (+(((/* implicit */int) max((var_10), (arr_18 [i_1] [i_1 - 1] [i_1] [i_1] [i_1]))))));
                var_31 = ((/* implicit */int) max((((((/* implicit */_Bool) min(((unsigned short)38591), (((/* implicit */unsigned short) (signed char)-31))))) || ((_Bool)1))), ((!(((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), (arr_8 [i_1] [i_1 - 3] [i_1]))))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_7 = 1; i_7 < 20; i_7 += 2) /* same iter space */
    {
        var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)9)) ? (2864335886U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)26964)))));
        /* LoopSeq 4 */
        for (short i_8 = 0; i_8 < 22; i_8 += 2) 
        {
            var_33 = ((/* implicit */long long int) var_19);
            var_34 = ((/* implicit */unsigned char) var_18);
            /* LoopNest 3 */
            for (unsigned char i_9 = 0; i_9 < 22; i_9 += 2) 
            {
                for (short i_10 = 1; i_10 < 20; i_10 += 1) 
                {
                    for (unsigned short i_11 = 0; i_11 < 22; i_11 += 2) 
                    {
                        {
                            var_35 = (short)20499;
                            var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_31 [i_10 + 1] [i_7] [i_9])) ? (((/* implicit */int) arr_30 [i_7] [i_10 - 1] [i_9] [i_7 - 1] [i_9] [i_9])) : (((/* implicit */int) arr_30 [i_7] [i_10 + 1] [5] [i_7 + 2] [i_10 + 1] [i_7 + 2]))));
                            var_37 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_8))));
                            var_38 = ((/* implicit */signed char) arr_33 [i_7]);
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_12 = 0; i_12 < 22; i_12 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_13 = 0; i_13 < 22; i_13 += 2) 
            {
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_15 = 2; i_15 < 20; i_15 += 1) 
                        {
                            arr_47 [i_7] [i_15] = ((arr_32 [i_15 + 1] [i_12] [i_7] [i_14] [i_15] [i_14] [i_15]) ? (((/* implicit */int) arr_32 [i_15 + 1] [i_12] [i_7] [i_14] [i_13] [i_14] [i_7 - 1])) : (((/* implicit */int) arr_32 [i_15 + 1] [i_15 + 1] [i_7] [i_15 + 1] [i_15 + 1] [i_13] [i_15 + 1])));
                            var_39 = ((/* implicit */unsigned short) max((var_39), (((/* implicit */unsigned short) ((((/* implicit */int) arr_23 [i_7 + 1])) < (((/* implicit */int) arr_23 [i_7 + 2])))))));
                            var_40 = ((/* implicit */short) ((((/* implicit */_Bool) arr_23 [i_7 - 1])) && (((/* implicit */_Bool) arr_23 [i_7 + 1]))));
                        }
                        var_41 = ((/* implicit */_Bool) ((arr_25 [i_7] [i_7 - 1]) >> (((/* implicit */int) (unsigned char)60))));
                        arr_48 [i_7] [i_7] [i_7] [i_7] = ((((/* implicit */_Bool) 3116725216U)) ? (((/* implicit */int) (short)18905)) : (((/* implicit */int) (signed char)-1)));
                    }
                } 
            } 
            var_42 = ((/* implicit */_Bool) min((var_42), (((/* implicit */_Bool) arr_35 [(unsigned char)18] [i_7 + 2] [(unsigned char)18]))));
        }
        for (unsigned long long int i_16 = 1; i_16 < 20; i_16 += 4) /* same iter space */
        {
            var_43 = var_4;
            /* LoopNest 2 */
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                for (unsigned long long int i_18 = 0; i_18 < 22; i_18 += 2) 
                {
                    {
                        arr_56 [i_18] [(short)14] [i_7] [i_7] [i_16] [i_7] = var_5;
                        var_44 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_49 [i_7])) ? (-3395175756245000607LL) : (((/* implicit */long long int) ((/* implicit */int) arr_49 [i_7])))));
                        /* LoopSeq 1 */
                        for (long long int i_19 = 0; i_19 < 22; i_19 += 1) 
                        {
                            arr_59 [i_7] [(unsigned char)0] [i_7] [i_18] [i_19] [i_7] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_52 [i_16] [i_7] [i_16 + 1] [i_16 + 1]))) >= (var_11)));
                            var_45 = ((/* implicit */short) 1823422520);
                        }
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (_Bool i_20 = 0; i_20 < 0; i_20 += 1) 
            {
                var_46 *= ((/* implicit */long long int) ((((/* implicit */int) arr_32 [i_20] [i_20 + 1] [(short)14] [i_7 + 1] [(short)14] [i_7 + 1] [i_7 + 1])) != (arr_53 [(signed char)20] [i_20 + 1] [i_20])));
                arr_62 [i_7] = ((/* implicit */unsigned short) arr_35 [i_7] [i_16 + 2] [i_7]);
            }
            for (short i_21 = 0; i_21 < 22; i_21 += 2) 
            {
                var_47 = ((/* implicit */long long int) ((arr_58 [i_16] [i_16 + 1] [i_16] [i_16 + 1]) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)70)))));
                var_48 -= ((/* implicit */long long int) (~(arr_55 [i_7] [i_7 - 1] [i_7] [i_7 - 1] [i_7 + 1] [i_16 + 1])));
            }
        }
        for (unsigned long long int i_22 = 1; i_22 < 20; i_22 += 4) /* same iter space */
        {
            arr_69 [i_7 + 2] [i_7] [i_7 - 1] = ((/* implicit */signed char) (+(((((/* implicit */int) var_9)) / (((/* implicit */int) (signed char)-64))))));
            var_49 = ((/* implicit */signed char) arr_43 [i_7] [(_Bool)1] [i_7] [i_22 - 1]);
        }
    }
    /* vectorizable */
    for (long long int i_23 = 1; i_23 < 20; i_23 += 2) /* same iter space */
    {
        var_50 = ((/* implicit */signed char) (~(((/* implicit */int) arr_65 [i_23]))));
        var_51 = ((/* implicit */signed char) ((arr_61 [i_23] [(short)19] [(unsigned char)19]) ? (((/* implicit */int) arr_21 [i_23 + 2] [i_23])) : (((/* implicit */int) ((signed char) var_8)))));
        var_52 = ((/* implicit */unsigned short) ((short) var_11));
    }
    for (long long int i_24 = 1; i_24 < 20; i_24 += 2) /* same iter space */
    {
        var_53 = ((/* implicit */unsigned char) min((((/* implicit */int) max((arr_64 [i_24 + 2]), (arr_64 [i_24 - 1])))), (((((/* implicit */int) arr_64 [i_24 + 2])) + (((/* implicit */int) arr_45 [i_24 + 1] [12ULL] [12ULL]))))));
        var_54 = max((((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) <= (arr_33 [i_24])))) % (((/* implicit */int) (short)5964)))), (((/* implicit */int) var_9)));
    }
}
