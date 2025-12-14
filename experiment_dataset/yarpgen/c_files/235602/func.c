/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235602
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned char) arr_2 [i_1] [i_0]);
                var_14 -= ((/* implicit */signed char) min((((((/* implicit */_Bool) (unsigned short)51404)) ? (var_1) : (((/* implicit */long long int) arr_2 [i_1] [i_1 - 3])))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1 + 1])) ? (arr_2 [i_1] [i_1 + 1]) : (arr_2 [i_1] [i_1 - 3]))))));
            }
        } 
    } 
    var_15 -= ((/* implicit */signed char) 3583920034670293971ULL);
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -740793449)) ? (var_12) : ((~(((/* implicit */int) var_3))))))) ? (min((((/* implicit */long long int) ((5045028168521838589ULL) == (((/* implicit */unsigned long long int) var_6))))), (((((/* implicit */_Bool) -9223372036854775802LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_1))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (!(((/* implicit */_Bool) -867371803))))))))));
    /* LoopSeq 4 */
    for (int i_2 = 0; i_2 < 12; i_2 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_3 = 1; i_3 < 10; i_3 += 2) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_4 = 2; i_4 < 8; i_4 += 2) 
            {
                var_17 = ((/* implicit */short) ((((((/* implicit */_Bool) (signed char)81)) ? (((/* implicit */long long int) var_12)) : (-573912969960878084LL))) + (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))));
                arr_16 [i_4] [i_3] [i_3] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_3] [(signed char)2])) && (((/* implicit */_Bool) (unsigned char)14))));
            }
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_5 = 0; i_5 < 12; i_5 += 2) 
            {
                arr_19 [4ULL] [i_3] [0LL] [i_3] = ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_8 [i_3 + 1] [i_3 - 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))));
                var_18 += ((/* implicit */unsigned char) (+(-6320799078997964815LL)));
            }
            arr_20 [i_3] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)4))) != (3086831048067796939LL)));
            var_19 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) 2147483634)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)15)))), (((((/* implicit */_Bool) arr_4 [i_3 + 1])) ? (((/* implicit */int) ((((/* implicit */int) var_10)) >= (((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) (unsigned char)6)) ? (((/* implicit */int) (_Bool)0)) : (arr_3 [i_3])))))));
        }
        var_20 = ((/* implicit */signed char) 733792239U);
        arr_21 [i_2] [i_2] = ((/* implicit */_Bool) (-((((!(((/* implicit */_Bool) var_1)))) ? ((+(((/* implicit */int) (unsigned char)251)))) : (((/* implicit */int) ((short) var_1)))))));
    }
    for (int i_6 = 0; i_6 < 12; i_6 += 2) /* same iter space */
    {
        arr_24 [i_6] = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) arr_8 [i_6] [i_6])) ? (((/* implicit */int) arr_8 [i_6] [i_6])) : (((/* implicit */int) arr_8 [i_6] [i_6])))));
        arr_25 [i_6] = var_0;
        /* LoopSeq 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            var_21 -= ((/* implicit */long long int) (signed char)44);
            arr_30 [i_6] [(_Bool)1] [i_7] = ((/* implicit */unsigned short) (-(var_12)));
            var_22 = ((/* implicit */unsigned long long int) var_4);
        }
        for (long long int i_8 = 2; i_8 < 11; i_8 += 1) 
        {
            var_23 = ((/* implicit */int) var_8);
            arr_34 [(short)11] [i_8] [i_8 + 1] = ((/* implicit */signed char) ((max((arr_32 [i_8] [i_8 - 2]), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)184)) : (((/* implicit */int) arr_1 [i_8]))))))) >= (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) 1366937573)) ? (arr_33 [i_6] [i_8] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))))));
            /* LoopNest 3 */
            for (unsigned int i_9 = 0; i_9 < 12; i_9 += 1) 
            {
                for (int i_10 = 1; i_10 < 11; i_10 += 2) 
                {
                    for (int i_11 = 0; i_11 < 12; i_11 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(15607063735904292313ULL)))) ? ((+(arr_23 [i_10]))) : (((/* implicit */long long int) var_6))))) ? (((/* implicit */unsigned long long int) var_6)) : ((~(((((/* implicit */_Bool) -1631188465)) ? (((/* implicit */unsigned long long int) arr_41 [i_6] [i_8] [5LL] [2] [i_11])) : (arr_6 [i_11])))))));
                            arr_44 [i_6] [i_8] [i_8] [i_9] [i_10] [i_8] [i_11] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_13 [i_8 + 1] [i_8] [i_10 + 1])) ? (((/* implicit */int) arr_13 [i_8 - 2] [i_8] [i_10 - 1])) : (((/* implicit */int) arr_13 [i_8 - 1] [i_8] [i_10 - 1])))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)115))) == (3649429360U))))));
                            arr_45 [i_8] [i_10] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_29 [i_9])))) ? ((((-(((/* implicit */int) (unsigned char)232)))) & (-408016141))) : (((/* implicit */int) (_Bool)1))));
                            var_25 = ((/* implicit */unsigned long long int) arr_9 [(signed char)10] [(_Bool)1]);
                        }
                    } 
                } 
            } 
        }
        var_26 = ((((/* implicit */_Bool) (-(2095451025)))) ? (((((/* implicit */_Bool) 4236593871U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]))) : (min((((/* implicit */long long int) 3101501404U)), (9223372036854775807LL))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)242))));
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 12; i_12 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_13 = 1; i_13 < 9; i_13 += 1) 
        {
            for (unsigned long long int i_14 = 0; i_14 < 12; i_14 += 2) 
            {
                {
                    arr_54 [i_13] [i_13] = ((/* implicit */long long int) (+(((/* implicit */int) arr_42 [i_12] [i_13] [i_14]))));
                    var_27 = ((/* implicit */long long int) var_7);
                }
            } 
        } 
        arr_55 [i_12] [6] = ((/* implicit */unsigned int) ((unsigned long long int) (+(var_7))));
        /* LoopNest 2 */
        for (unsigned int i_15 = 1; i_15 < 11; i_15 += 2) 
        {
            for (long long int i_16 = 2; i_16 < 11; i_16 += 1) 
            {
                {
                    var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) (short)-1))));
                    var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_10) ? (arr_10 [i_15]) : (((/* implicit */unsigned long long int) var_8))))) ? ((+(((/* implicit */int) (short)-20651)))) : ((-(((/* implicit */int) arr_47 [i_12]))))));
                    var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-20747)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))) ? (((int) -3224760601619597973LL)) : (((((/* implicit */_Bool) 6320799078997964815LL)) ? (((/* implicit */int) (unsigned char)71)) : (((/* implicit */int) (short)-20399))))));
                }
            } 
        } 
        arr_61 [(short)6] = ((/* implicit */unsigned char) ((int) var_11));
    }
    /* vectorizable */
    for (signed char i_17 = 0; i_17 < 12; i_17 += 2) 
    {
        var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_14 [i_17] [i_17] [i_17]))))) : (((arr_6 [11ULL]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45261)))))));
        var_32 = ((/* implicit */int) arr_6 [i_17]);
    }
    var_33 = ((/* implicit */signed char) var_4);
}
