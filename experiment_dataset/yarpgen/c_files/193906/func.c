/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193906
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
    var_16 = ((/* implicit */short) max((((/* implicit */long long int) (short)448)), (-9223372036854775804LL)));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_0])))) > (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned short)34392))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_17 = ((/* implicit */unsigned long long int) (~(arr_3 [i_1] [i_1] [i_0])));
            var_18 = ((/* implicit */_Bool) (~((((_Bool)1) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (_Bool)1))))));
        }
        for (long long int i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_15);
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 24; i_3 += 1) 
            {
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_19 = ((/* implicit */short) ((long long int) var_14));
                        var_20 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((min(((unsigned short)1), ((unsigned short)12))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_0 [i_2])))))))) && (((/* implicit */_Bool) ((unsigned char) arr_13 [i_0] [i_0] [i_0] [(short)12])))));
                        arr_16 [i_0] [i_2] [i_0] [i_3] [i_4] = (unsigned short)65535;
                        var_21 = ((((/* implicit */_Bool) ((((long long int) (unsigned short)6)) + (((/* implicit */long long int) (-(var_12))))))) ? (((long long int) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) var_3))))) : (((/* implicit */long long int) arr_3 [(short)16] [i_3] [i_4])));
                    }
                } 
            } 
            var_22 = ((/* implicit */int) ((((/* implicit */_Bool) max((max((arr_11 [i_0] [i_2] [i_0] [i_2]), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) max(((-2147483647 - 1)), (((/* implicit */int) arr_6 [i_0])))))))) || (((/* implicit */_Bool) (-(((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [i_2])), (arr_1 [i_0])))))))));
        }
        for (short i_5 = 2; i_5 < 22; i_5 += 1) 
        {
            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_11 [i_0] [i_0] [i_5 - 2] [i_5 - 1]), (arr_11 [i_0] [1ULL] [i_0] [i_5])))) ? (((/* implicit */unsigned long long int) (-(var_6)))) : (min((arr_11 [i_5] [i_5 + 2] [i_5 - 1] [22LL]), (arr_11 [i_0] [i_0] [i_0] [i_5 + 1])))));
            var_24 = ((/* implicit */unsigned long long int) arr_6 [i_0]);
            var_25 = ((/* implicit */signed char) ((arr_12 [i_0] [i_0] [i_5]) / (((((/* implicit */_Bool) (short)-8316)) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_5 - 1]))) : (arr_18 [i_5] [i_5] [i_5])))));
            arr_21 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((long long int) arr_20 [i_5]));
            /* LoopNest 2 */
            for (short i_6 = 1; i_6 < 22; i_6 += 4) 
            {
                for (short i_7 = 0; i_7 < 24; i_7 += 1) 
                {
                    {
                        var_26 = ((/* implicit */unsigned char) arr_24 [i_0] [i_0] [i_0]);
                        var_27 ^= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_15)), (max(((unsigned short)1984), ((unsigned short)65535)))));
                        var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)60)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0)))))) : (((((((/* implicit */unsigned long long int) 477203870)) % (18446744073709551615ULL))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (short)-599))))))));
                        var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)214))) ^ (18446744073709551615ULL))), (((/* implicit */unsigned long long int) arr_4 [(_Bool)1] [i_5 + 1])))))));
                    }
                } 
            } 
        }
        var_30 = ((/* implicit */short) -3525444466294937895LL);
        /* LoopNest 2 */
        for (unsigned short i_8 = 1; i_8 < 20; i_8 += 1) 
        {
            for (short i_9 = 0; i_9 < 24; i_9 += 4) 
            {
                {
                    var_31 *= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((arr_5 [i_0]) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)184))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_20 [i_0])) : (((/* implicit */int) (_Bool)1))))))))) < (max(((~(5U))), (((/* implicit */unsigned int) ((short) var_10)))))));
                    arr_32 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)127))));
                    arr_33 [i_9] [i_8 + 3] [i_9] [i_9] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (var_14))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [(signed char)6] [(_Bool)1] [i_9] [i_9] [i_8])))));
                    arr_34 [i_0] [i_8 + 2] [i_0] [i_0] = arr_3 [i_8 + 4] [i_8 + 3] [i_8 + 2];
                }
            } 
        } 
    }
    for (short i_10 = 0; i_10 < 18; i_10 += 4) /* same iter space */
    {
        var_32 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-19980)) ? (2147483647) : (((/* implicit */int) (unsigned short)1))))), (((((/* implicit */_Bool) arr_12 [i_10] [i_10] [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_12 [i_10] [i_10] [i_10])))));
        arr_38 [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_11)), (343132469U)))) ? (arr_29 [i_10] [i_10]) : (((((/* implicit */_Bool) arr_36 [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((-7397269488501360581LL) == (arr_19 [i_10] [i_10] [i_10]))))) : (var_14)))));
        var_33 = ((((/* implicit */int) (!((_Bool)1)))) & (((/* implicit */int) (unsigned short)1)));
        arr_39 [i_10] [i_10] = ((/* implicit */signed char) (unsigned short)1);
    }
    for (short i_11 = 0; i_11 < 18; i_11 += 4) /* same iter space */
    {
        var_34 += ((/* implicit */signed char) min((max((arr_26 [i_11] [i_11] [i_11]), (arr_26 [i_11] [i_11] [i_11]))), (((/* implicit */int) (short)-24412))));
        arr_42 [i_11] = ((/* implicit */unsigned short) var_15);
    }
    for (short i_12 = 0; i_12 < 10; i_12 += 4) 
    {
        arr_46 [i_12] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)65535))));
        var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(var_0)))) && (((/* implicit */_Bool) ((522468021) % (arr_3 [i_12] [(unsigned short)7] [i_12]))))));
        /* LoopSeq 1 */
        for (unsigned char i_13 = 3; i_13 < 8; i_13 += 2) 
        {
            var_36 |= ((/* implicit */unsigned short) var_7);
            var_37 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)53559))) < (9692317720684984387ULL)));
            arr_50 [i_13] [i_13] [i_13] = ((/* implicit */signed char) ((((/* implicit */int) arr_15 [i_13] [(unsigned short)16] [i_13 + 1] [(unsigned short)16])) / (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)96)), ((unsigned short)65535))))));
            /* LoopSeq 1 */
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                var_38 &= ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_7 [i_13 + 2] [i_14] [i_14])) ? (8498874841602880852LL) : (arr_7 [i_13 - 1] [(short)13] [i_13]))));
                var_39 = ((/* implicit */short) max((max((((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) ((/* implicit */int) (short)32767))) : (-15LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_20 [i_14]))))))), (((((/* implicit */_Bool) ((short) 11553013226451227381ULL))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)78)), (arr_31 [i_13]))))) : (min((((/* implicit */long long int) (unsigned short)65534)), (var_6)))))));
            }
            var_40 = ((/* implicit */long long int) min((var_40), (((/* implicit */long long int) arr_10 [i_12] [i_12] [i_13 - 1]))));
        }
        var_41 = ((/* implicit */short) (signed char)57);
    }
    var_42 = ((/* implicit */signed char) (~(var_0)));
    /* LoopNest 2 */
    for (unsigned char i_15 = 2; i_15 < 21; i_15 += 1) 
    {
        for (long long int i_16 = 1; i_16 < 21; i_16 += 4) 
        {
            {
                var_43 = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) var_10)), (arr_31 [i_16])));
                arr_58 [i_16] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) & (((((/* implicit */_Bool) arr_29 [i_16] [i_16])) ? ((-(5206751545895771487ULL))) : (((/* implicit */unsigned long long int) arr_14 [i_15 - 2] [i_16 - 1] [i_15 - 2] [i_15 - 1] [(signed char)10]))))));
                arr_59 [i_16] [i_16 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_12 [i_15 - 1] [i_16] [i_16 - 1]), (4238157428738264658LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -3905699113301517968LL)) ? (((/* implicit */int) arr_31 [i_16])) : (((/* implicit */int) arr_1 [i_16 - 1])))))))) : (((/* implicit */int) ((signed char) (_Bool)1)))));
                var_44 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [(signed char)23] [i_16] [i_15 + 1])) ? (((((/* implicit */_Bool) arr_20 [i_15])) ? (672630663U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)86))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) arr_6 [i_16])) : (((/* implicit */int) (unsigned short)7)))))))), (max((((/* implicit */unsigned long long int) arr_26 [i_15] [i_15 + 1] [i_15 - 2])), (((((/* implicit */_Bool) var_1)) ? (arr_11 [(unsigned short)17] [i_16] [i_16 + 1] [i_16]) : (18446744073709551615ULL)))))));
            }
        } 
    } 
}
