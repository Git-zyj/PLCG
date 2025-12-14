/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205237
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
    for (long long int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [i_1] [i_0 + 1] [i_0] = (i_0 % 2 == zero) ? (((/* implicit */unsigned int) (+((+(((var_1) << (((((/* implicit */int) arr_3 [i_0])) - (39861)))))))))) : (((/* implicit */unsigned int) (+((+(((var_1) << (((((((/* implicit */int) arr_3 [i_0])) - (39861))) + (27837))))))))));
                    var_11 -= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)25887)) * ((+(((/* implicit */int) (short)-19692))))))), (((max((0ULL), (6811929187173697784ULL))) * (arr_1 [i_2 - 4] [i_0 - 1])))));
                    arr_7 [i_0 - 1] [i_0 - 1] [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)14))))) ? (arr_0 [i_0 - 1] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) != (var_3))))))), (((/* implicit */unsigned long long int) ((unsigned short) arr_1 [i_0 - 1] [i_2 - 4])))));
                    var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) (unsigned short)60249)), (arr_5 [6LL] [i_1] [6LL]))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_3 = 2; i_3 < 10; i_3 += 3) 
        {
            for (unsigned long long int i_4 = 3; i_4 < 13; i_4 += 1) 
            {
                {
                    var_13 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)12569)) != (((/* implicit */int) arr_3 [i_0]))))) != (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)15360)) * (((/* implicit */int) var_4))))) > (0ULL))))));
                    var_14 = ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) var_2)), (arr_10 [i_0 - 1] [i_0] [i_3 - 1] [i_3 - 1]))), (((18446744073709551615ULL) - (arr_8 [i_0 - 1])))));
                    var_15 -= ((/* implicit */unsigned long long int) var_0);
                    var_16 = ((/* implicit */short) ((min((var_7), (((/* implicit */unsigned long long int) arr_9 [i_0])))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (short i_5 = 0; i_5 < 14; i_5 += 4) 
        {
            for (long long int i_6 = 3; i_6 < 13; i_6 += 3) 
            {
                for (unsigned short i_7 = 1; i_7 < 12; i_7 += 4) 
                {
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 3) 
                        {
                            var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (11634814886535853831ULL) : (var_1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (arr_19 [i_7 + 2] [i_0] [i_7 - 1] [i_7 - 1])));
                            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) 1249441587777476036ULL))));
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 4) 
                        {
                            arr_25 [i_0 - 1] [i_7 - 1] [i_7 - 1] [i_0] [i_9] = 18308265728743968510ULL;
                            var_19 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_0] [i_9] [i_9] [i_9] [i_0])) ? (((/* implicit */int) (unsigned short)11093)) : (((/* implicit */int) arr_12 [i_0 - 1] [i_6 - 3] [i_7 + 1] [i_0])))));
                        }
                        for (short i_10 = 2; i_10 < 13; i_10 += 4) 
                        {
                            arr_29 [i_10] [i_10 + 1] [i_7] [i_6] [i_6 + 1] [i_5] [i_10] &= 6119706832784874522ULL;
                            arr_30 [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */int) arr_9 [i_0])) == (((/* implicit */int) arr_4 [i_0] [i_7 + 1] [i_10 + 1]))))), ((+((-(((/* implicit */int) var_0))))))));
                            arr_31 [i_0] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((0ULL) > (6119706832784874522ULL)))), (var_1))))));
                        }
                        for (short i_11 = 0; i_11 < 14; i_11 += 3) 
                        {
                            var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (((((-(((/* implicit */int) ((((/* implicit */_Bool) arr_26 [i_0 - 1] [i_5] [i_6 - 1] [i_7 - 1] [i_7 + 1] [i_7 + 2] [i_5])) && (((/* implicit */_Bool) 18446744073709551615ULL))))))) + (2147483647))) >> ((((-(((/* implicit */int) ((short) var_2))))) + (1173))))))));
                            arr_35 [i_0 + 1] [i_5] [i_0] [i_7 - 1] [i_11] [i_0] [i_5] = ((/* implicit */long long int) min((((((/* implicit */_Bool) 5854777317230482218ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0]))) : (2205228049907578269ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_4)), (arr_26 [i_0] [i_0 + 1] [i_6 - 3] [i_7 + 1] [i_5] [i_7 - 1] [i_0]))))));
                        }
                        var_21 &= ((/* implicit */unsigned int) arr_32 [i_5] [i_5]);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_12 = 2; i_12 < 13; i_12 += 3) 
        {
            for (unsigned int i_13 = 3; i_13 < 12; i_13 += 4) 
            {
                {
                    var_22 = ((/* implicit */short) var_1);
                    var_23 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)6842)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57045))) : (var_7)))) ? (((2934221164U) << (((5705770455654614938ULL) - (5705770455654614907ULL))))) : (((1526489834U) << (((-5825383899292530962LL) + (5825383899292530988LL)))))));
                    arr_43 [i_0] [i_12 - 1] [i_0] = ((max((((11634814886535853832ULL) >> (((arr_1 [i_12 - 2] [i_0 - 1]) - (13131513936195039527ULL))))), (((/* implicit */unsigned long long int) arr_12 [i_0] [i_0 - 1] [i_0 - 1] [i_0])))) ^ (8869511713861825395ULL));
                }
            } 
        } 
        arr_44 [(short)8] [(short)8] &= ((/* implicit */unsigned long long int) var_10);
    }
    for (unsigned short i_14 = 0; i_14 < 25; i_14 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_15 = 0; i_15 < 25; i_15 += 4) 
        {
            for (unsigned long long int i_16 = 2; i_16 < 24; i_16 += 3) 
            {
                {
                    var_24 = var_5;
                    var_25 = ((/* implicit */unsigned short) max((6811929187173697784ULL), (14267798498894215271ULL)));
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned short) (-((-(var_8)))));
    }
    for (unsigned short i_17 = 0; i_17 < 25; i_17 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_18 = 2; i_18 < 22; i_18 += 1) 
        {
            for (unsigned long long int i_19 = 1; i_19 < 24; i_19 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_20 = 0; i_20 < 25; i_20 += 4) 
                    {
                        arr_62 [i_20] [i_20] [i_19 - 1] [i_18 - 2] [i_18 - 2] [i_20] |= ((/* implicit */unsigned int) var_8);
                        var_27 += ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 3426749072U)) == (arr_61 [i_18 + 3] [i_20] [i_17] [i_19 + 1]))))) | (((((/* implicit */_Bool) (unsigned short)11093)) ? (arr_61 [i_18 - 1] [i_20] [i_19 + 1] [i_19 + 1]) : (arr_61 [i_18 - 2] [i_20] [i_19] [i_19 + 1])))));
                        arr_63 [i_17] [i_18] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_51 [i_19 - 1] [i_19] [i_19 - 1] [i_20]))))), (((((/* implicit */_Bool) arr_51 [i_18 + 2] [i_19 + 1] [i_19 + 1] [i_20])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1))))))));
                    }
                    for (long long int i_21 = 0; i_21 < 25; i_21 += 3) 
                    {
                        var_28 -= ((/* implicit */unsigned short) max((((arr_54 [i_17] [22ULL] [i_19 + 1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_51 [i_17] [i_18 - 1] [i_19 + 1] [i_21]))))), (((/* implicit */unsigned long long int) arr_51 [i_21] [i_19 - 1] [i_18 - 1] [i_17]))));
                        arr_66 [i_21] [i_18] [i_18 - 1] [i_18] [i_17] = ((/* implicit */unsigned char) max(((-(((((/* implicit */_Bool) 0ULL)) ? (var_5) : (11634814886535853832ULL))))), (var_3)));
                    }
                    arr_67 [i_19 - 1] [i_18] [i_17] = ((/* implicit */unsigned int) var_7);
                }
            } 
        } 
        var_29 &= ((/* implicit */unsigned long long int) ((signed char) 6811929187173697785ULL));
    }
    /* LoopNest 3 */
    for (unsigned short i_22 = 2; i_22 < 17; i_22 += 4) 
    {
        for (unsigned int i_23 = 4; i_23 < 18; i_23 += 4) 
        {
            for (unsigned long long int i_24 = 0; i_24 < 19; i_24 += 3) 
            {
                {
                    var_30 = ((/* implicit */unsigned long long int) max((var_30), (((((10047943526659934822ULL) | (((/* implicit */unsigned long long int) 2934221164U)))) | (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2)))))))));
                    var_31 &= ((/* implicit */long long int) (unsigned short)11093);
                    var_32 = ((/* implicit */unsigned short) (~(((unsigned long long int) ((((/* implicit */_Bool) 55883382U)) || (((/* implicit */_Bool) 8869511713861825395ULL)))))));
                    var_33 = ((/* implicit */long long int) (signed char)(-127 - 1));
                }
            } 
        } 
    } 
}
