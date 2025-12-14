/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53021
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_10 [i_0] [i_1] [i_1] = (~((~(((/* implicit */int) (unsigned char)142)))));
                    arr_11 [i_0] [i_1] [i_0] [i_2 + 2] = ((/* implicit */long long int) ((unsigned long long int) max(((short)(-32767 - 1)), ((short)32755))));
                }
            } 
        } 
    } 
    var_15 += ((/* implicit */_Bool) (short)32755);
    /* LoopSeq 4 */
    for (int i_3 = 0; i_3 < 17; i_3 += 3) 
    {
        arr_14 [i_3] [i_3] = ((949700981U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_3] [i_3]))));
        arr_15 [i_3] [i_3] = ((/* implicit */unsigned int) (signed char)86);
        var_16 = ((/* implicit */unsigned short) (signed char)120);
    }
    for (signed char i_4 = 0; i_4 < 23; i_4 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 23; i_5 += 4) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    var_17 *= ((/* implicit */int) (((!(((/* implicit */_Bool) (signed char)-86)))) ? (arr_16 [i_4] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 3345266314U)) == (arr_16 [i_4] [i_4])))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (long long int i_7 = 0; i_7 < 23; i_7 += 1) /* same iter space */
                    {
                        arr_26 [i_4] [i_4] [i_4] [i_6] [i_7] = ((/* implicit */signed char) arr_17 [i_4] [i_5]);
                        var_18 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_22 [i_4] [i_4] [i_4]))));
                    }
                    /* vectorizable */
                    for (long long int i_8 = 0; i_8 < 23; i_8 += 1) /* same iter space */
                    {
                        var_19 = arr_28 [i_4] [i_5] [i_8] [i_8] [i_8] [i_5];
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1337184031)) && (((/* implicit */_Bool) arr_22 [i_4] [i_4] [i_6]))));
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_23 [i_4] [i_4] [i_6])) != (arr_16 [i_6] [i_5])));
                    }
                    for (long long int i_9 = 0; i_9 < 23; i_9 += 1) /* same iter space */
                    {
                        arr_33 [i_4] [(signed char)0] [(signed char)0] [i_9] [i_6] [i_4] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned long long int) 3878606961U)) : (min((3864427558833678843ULL), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_21 [i_4])), (arr_18 [i_5] [i_9])))))));
                        arr_34 [i_6] = ((/* implicit */signed char) 3345266314U);
                        var_22 = ((/* implicit */int) max((arr_24 [i_5]), (((/* implicit */long long int) min(((+(3015441093U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_4] [i_5] [i_4])) ? (1366534343) : (((/* implicit */int) (unsigned char)255))))))))));
                        var_23 *= ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) 1279526203U)) || (((/* implicit */_Bool) (unsigned short)65535))))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)64))) - (arr_22 [i_9] [i_6] [i_4])))));
                    }
                    for (long long int i_10 = 2; i_10 < 22; i_10 += 4) 
                    {
                        arr_37 [i_4] [i_4] [i_4] = min((((((/* implicit */_Bool) arr_27 [i_10 - 2] [i_5] [i_4] [i_10 - 2])) ? (((/* implicit */unsigned long long int) 5358423329079742807LL)) : (min((((/* implicit */unsigned long long int) arr_19 [i_4] [i_6] [i_10])), (arr_31 [i_4]))))), (((/* implicit */unsigned long long int) max((1279526203U), (416360335U)))));
                        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) min((arr_21 [i_4]), (((/* implicit */signed char) (!(((/* implicit */_Bool) (-(949700984U))))))))))));
                    }
                    var_25 = min((min((arr_20 [i_4]), (arr_20 [i_5]))), (((/* implicit */unsigned short) ((((/* implicit */int) arr_20 [i_4])) != (((/* implicit */int) arr_20 [i_4]))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_11 = 1; i_11 < 22; i_11 += 2) 
                    {
                        var_26 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)54648)))))));
                        arr_42 [i_6] = ((/* implicit */unsigned char) (signed char)79);
                    }
                    for (int i_12 = 0; i_12 < 23; i_12 += 1) 
                    {
                        arr_45 [i_12] = ((/* implicit */signed char) arr_27 [i_4] [i_5] [i_12] [i_12]);
                        var_27 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_6])) ? (((/* implicit */int) arr_21 [i_4])) : (((/* implicit */int) arr_21 [i_4]))))), (((long long int) ((((/* implicit */int) arr_28 [i_4] [i_4] [i_12] [i_4] [(short)19] [(_Bool)0])) * (((/* implicit */int) (short)32767)))))));
                        var_28 = ((/* implicit */unsigned short) max((((((((/* implicit */_Bool) arr_35 [i_4] [(signed char)15] [i_5] [i_6] [i_12])) ? (((/* implicit */long long int) ((/* implicit */int) (short)32755))) : (9223372036854775807LL))) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1))))), (((/* implicit */long long int) (~(((/* implicit */int) (short)32747)))))));
                        var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) max((max((arr_35 [i_4] [i_5] [i_4] [i_12] [i_12]), (((/* implicit */long long int) (short)29070)))), (((/* implicit */long long int) 0U)))))));
                    }
                }
            } 
        } 
        /* LoopSeq 3 */
        for (long long int i_13 = 0; i_13 < 23; i_13 += 4) 
        {
            arr_49 [i_4] = ((/* implicit */unsigned short) (signed char)-77);
            var_30 = ((/* implicit */unsigned char) (signed char)-77);
            var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_40 [i_4] [i_13] [i_13]), (((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)5)), (arr_32 [i_4] [i_4] [i_4]))))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_19 [i_4] [i_4] [i_4])), ((~(arr_38 [i_4] [i_13] [i_4] [i_13])))))) : (((((/* implicit */_Bool) arr_48 [i_13] [i_4])) ? (min((arr_31 [i_4]), (((/* implicit */unsigned long long int) arr_41 [(_Bool)1] [i_13] [i_4] [i_4] [i_4])))) : (((/* implicit */unsigned long long int) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) arr_27 [i_4] [i_4] [i_4] [i_4])))))))));
            arr_50 [i_4] [i_13] [i_13] = 450617488U;
            var_32 = ((/* implicit */long long int) ((int) min((arr_48 [i_4] [i_13]), (((/* implicit */long long int) 4294967289U)))));
        }
        /* vectorizable */
        for (unsigned int i_14 = 0; i_14 < 23; i_14 += 2) 
        {
            var_33 = (!(((/* implicit */_Bool) (+(780483031U)))));
            /* LoopNest 3 */
            for (unsigned char i_15 = 3; i_15 < 21; i_15 += 3) 
            {
                for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
                {
                    for (short i_17 = 0; i_17 < 23; i_17 += 3) 
                    {
                        {
                            arr_60 [i_4] [i_14] [i_15] [i_15] [i_16 + 1] [i_16] [i_17] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_14] [i_14] [i_16 + 1])) ? (((/* implicit */int) arr_57 [i_4] [i_14] [i_14] [i_14] [i_17] [i_14])) : (((/* implicit */int) (short)2071))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_39 [i_4] [i_4] [i_15] [i_16 + 1])))) : (arr_38 [i_16 + 1] [i_16 + 1] [i_16] [i_16])));
                            var_34 = ((/* implicit */_Bool) arr_46 [i_15 - 3]);
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (long long int i_18 = 0; i_18 < 23; i_18 += 4) 
            {
                var_35 = ((/* implicit */int) arr_36 [i_18]);
                arr_65 [i_4] [i_4] [i_14] [i_4] = ((/* implicit */unsigned int) (-9223372036854775807LL - 1LL));
                var_36 -= (~(arr_16 [i_4] [i_4]));
            }
        }
        /* vectorizable */
        for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
        {
            arr_68 [i_4] [(unsigned short)4] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_28 [i_4] [i_19 - 1] [i_4] [i_19 - 1] [i_4] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [14] [i_19 - 1] [i_4] [i_19] [i_19 - 1] [i_19]))) : (6300795974425907801ULL)));
            var_37 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_28 [i_4] [i_4] [i_4] [i_4] [i_4] [i_19 - 1])) : (((/* implicit */int) (unsigned short)16183)))));
            var_38 = ((/* implicit */unsigned long long int) arr_48 [i_4] [i_4]);
        }
        /* LoopNest 2 */
        for (long long int i_20 = 2; i_20 < 21; i_20 += 4) 
        {
            for (unsigned short i_21 = 0; i_21 < 23; i_21 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) 
                    {
                        arr_77 [i_4] [i_4] [i_20] [i_21] [i_22] = ((/* implicit */unsigned short) (-(((((/* implicit */int) (unsigned short)65525)) - (((/* implicit */int) arr_41 [i_4] [(short)7] [i_22 - 1] [i_22] [(short)7]))))));
                        var_39 |= ((/* implicit */signed char) (-(min((((/* implicit */int) (!(((/* implicit */_Bool) arr_43 [i_4] [i_20 - 2] [i_21] [i_21]))))), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)32767))))))));
                    }
                    arr_78 [i_4] [i_4] [i_21] [i_4] = ((/* implicit */unsigned char) max(((-(((/* implicit */int) arr_18 [i_20 - 1] [i_20])))), (((int) ((((/* implicit */int) arr_74 [22] [i_4] [22] [22] [i_20] [i_21])) * (arr_51 [i_4] [i_4] [i_4]))))));
                    var_40 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) 4294967294U)) ? (2835763515U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_57 [i_4] [i_20] [i_21] [i_20 + 1] [i_20] [i_20])))))), ((((_Bool)1) ? (((/* implicit */long long int) 997764880)) : (6038147468235867633LL)))))) > (min((min((1ULL), (((/* implicit */unsigned long long int) arr_18 [(unsigned char)17] [i_20])))), (((/* implicit */unsigned long long int) (unsigned short)1792))))));
                }
            } 
        } 
        var_41 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(-6038147468235867646LL)))) ? (max((((/* implicit */unsigned long long int) arr_70 [i_4])), (12145948099283643814ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_59 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]), ((signed char)-65)))))));
    }
    for (int i_23 = 0; i_23 < 20; i_23 += 1) 
    {
        arr_81 [i_23] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)42)) <= (((int) (+(((/* implicit */int) arr_29 [i_23])))))));
        var_42 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) 2443133746U)) ? (((arr_66 [i_23]) ? (arr_16 [i_23] [i_23]) : (arr_31 [i_23]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_76 [i_23] [i_23] [i_23] [i_23] [i_23] [i_23]))))));
        var_43 = ((/* implicit */long long int) max((var_43), (((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) arr_44 [i_23] [i_23] [i_23] [i_23])) ? (((/* implicit */int) arr_62 [i_23] [i_23])) : (((/* implicit */int) (_Bool)1))))))));
        arr_82 [i_23] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) -2147483647)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (8795556151296LL))))) && (((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_16 [15ULL] [i_23])) ? (2147483641) : (((/* implicit */int) (short)(-32767 - 1))))), (((/* implicit */int) ((_Bool) arr_36 [i_23]))))))));
        arr_83 [4U] [(unsigned char)10] &= ((((/* implicit */_Bool) max((((/* implicit */int) ((_Bool) (_Bool)1))), (((((/* implicit */_Bool) (unsigned char)246)) ? (((/* implicit */int) (short)32764)) : (((/* implicit */int) (_Bool)1))))))) ? (min((((int) arr_67 [i_23] [i_23])), (((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_23] [i_23] [i_23]))))))) : (min((((/* implicit */int) (short)27777)), (arr_43 [i_23] [i_23] [(unsigned short)4] [i_23]))));
    }
    for (unsigned long long int i_24 = 3; i_24 < 19; i_24 += 4) 
    {
        arr_86 [i_24] = ((/* implicit */unsigned short) ((signed char) ((unsigned char) (_Bool)1)));
        arr_87 [i_24] = ((/* implicit */short) min((((/* implicit */unsigned short) max(((unsigned char)63), (((/* implicit */unsigned char) (!((_Bool)1))))))), ((unsigned short)44977)));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_25 = 2; i_25 < 10; i_25 += 3) 
    {
        var_44 = ((/* implicit */_Bool) max((var_44), (((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_89 [i_25]))))))))));
        var_45 = ((/* implicit */long long int) min((var_45), ((-((-(arr_4 [i_25 + 1] [0LL] [i_25])))))));
        var_46 = ((/* implicit */unsigned int) min((var_46), (((/* implicit */unsigned int) (-((+(((/* implicit */int) arr_54 [i_25] [i_25])))))))));
    }
    var_47 = ((/* implicit */_Bool) var_3);
}
