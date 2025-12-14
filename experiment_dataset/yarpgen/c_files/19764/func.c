/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19764
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
    var_16 ^= ((/* implicit */unsigned short) var_10);
    var_17 = ((/* implicit */_Bool) min((var_6), (((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned short) (_Bool)0))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_12)) < (((/* implicit */int) var_3)))))) : ((((_Bool)1) ? (((/* implicit */long long int) 247400696U)) : (3771276855166842698LL)))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) var_12)), (-3771276855166842698LL))))))) + (((/* implicit */int) ((arr_1 [i_0]) < (((/* implicit */unsigned long long int) min((3771276855166842702LL), (((/* implicit */long long int) (_Bool)1))))))))));
        arr_2 [i_0] |= ((/* implicit */int) ((((/* implicit */_Bool) ((short) max((arr_0 [i_0]), (arr_0 [i_0]))))) ? (((unsigned long long int) arr_0 [i_0])) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (_Bool)1))))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((int) (_Bool)0)))))))))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                for (signed char i_3 = 0; i_3 < 21; i_3 += 3) 
                {
                    for (signed char i_4 = 0; i_4 < 21; i_4 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned int) (unsigned short)27108);
                            var_21 = 23555798U;
                            var_22 = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
            } 
            arr_15 [i_1] = ((/* implicit */unsigned short) var_3);
        }
    }
    for (int i_5 = 2; i_5 < 13; i_5 += 3) 
    {
        var_23 = ((/* implicit */signed char) max((max((arr_19 [i_5] [i_5]), (((/* implicit */unsigned long long int) -3766485311774396152LL)))), (max(((-(var_1))), (((/* implicit */unsigned long long int) ((-3771276855166842699LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)54405))))))))));
        arr_20 [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)0))));
        /* LoopSeq 2 */
        for (long long int i_6 = 0; i_6 < 15; i_6 += 4) /* same iter space */
        {
            arr_25 [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_6])) == (((((/* implicit */int) arr_14 [(unsigned short)6] [14ULL] [i_5 - 2] [i_5 + 1])) % (((/* implicit */int) (_Bool)1))))));
            /* LoopNest 2 */
            for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 3) 
            {
                for (unsigned char i_8 = 4; i_8 < 14; i_8 += 3) 
                {
                    {
                        var_24 -= ((/* implicit */unsigned short) var_14);
                        arr_30 [i_5] [i_5] [i_7] [i_5] = ((/* implicit */signed char) ((((/* implicit */int) (((-(((/* implicit */int) arr_22 [13U] [4ULL] [13U])))) < (arr_28 [i_5 - 2] [i_5 - 1] [i_5] [i_8])))) < (((/* implicit */int) var_11))));
                        arr_31 [i_5 - 2] [i_8 - 3] [i_5 - 2] [i_8 + 1] [i_5] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (short)24062)), (max((arr_19 [i_5 + 2] [i_6]), (((/* implicit */unsigned long long int) 3779993204283896453LL))))));
                        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) min((var_3), (((/* implicit */signed char) (_Bool)0)))))))) ? (((/* implicit */long long int) ((((/* implicit */int) (signed char)109)) << ((((((-(arr_0 [i_5]))) + (1873951148))) - (25)))))) : (max((var_6), (((/* implicit */long long int) max((var_15), (var_11))))))));
                    }
                } 
            } 
            var_26 -= ((/* implicit */unsigned long long int) 9133245598205201232LL);
        }
        /* vectorizable */
        for (long long int i_9 = 0; i_9 < 15; i_9 += 4) /* same iter space */
        {
            var_27 = ((/* implicit */long long int) arr_4 [i_5 - 2] [i_9] [10U]);
            arr_34 [i_5] [i_9] = ((/* implicit */_Bool) var_13);
        }
        var_28 = ((/* implicit */int) ((((/* implicit */int) (signed char)-19)) == (-1916130648)));
    }
    /* vectorizable */
    for (unsigned short i_10 = 0; i_10 < 15; i_10 += 3) 
    {
        arr_37 [i_10] = ((/* implicit */unsigned long long int) arr_24 [i_10]);
        var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)11138))))))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_11 = 0; i_11 < 15; i_11 += 4) 
        {
            var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -5942968603031209571LL)))))) % (arr_36 [i_10]))))));
            /* LoopNest 3 */
            for (unsigned int i_12 = 1; i_12 < 13; i_12 += 1) 
            {
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    for (int i_14 = 0; i_14 < 15; i_14 += 1) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned short) (~(1916130647)));
                            arr_51 [i_10] [i_10] [i_10] [i_13] [i_14] = ((/* implicit */unsigned char) (signed char)19);
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_15 = 1; i_15 < 13; i_15 += 4) 
        {
            /* LoopNest 3 */
            for (int i_16 = 0; i_16 < 15; i_16 += 4) 
            {
                for (signed char i_17 = 0; i_17 < 15; i_17 += 2) 
                {
                    for (int i_18 = 3; i_18 < 12; i_18 += 4) 
                    {
                        {
                            var_32 = ((/* implicit */int) ((((/* implicit */_Bool) arr_54 [i_15 - 1] [i_15 - 1] [i_18 + 3])) ? (arr_54 [4LL] [i_15 + 2] [i_16]) : (((/* implicit */long long int) ((/* implicit */int) (short)24062)))));
                            var_33 = ((/* implicit */unsigned char) arr_44 [i_10] [i_15 - 1] [i_16] [i_17]);
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned long long int i_19 = 1; i_19 < 13; i_19 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned char i_20 = 2; i_20 < 13; i_20 += 4) 
                {
                    for (short i_21 = 0; i_21 < 15; i_21 += 3) 
                    {
                        {
                            var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-39))))) ? (((((/* implicit */_Bool) (signed char)83)) ? (((/* implicit */int) arr_64 [i_10] [i_10] [i_20] [i_10])) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) (signed char)-19)) ? (((/* implicit */int) (unsigned short)3)) : (((/* implicit */int) var_4))))));
                            var_35 = ((/* implicit */signed char) (((~(var_1))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_12)) < (((/* implicit */int) arr_24 [i_10]))))))));
                            arr_70 [1LL] [i_20 - 2] [i_10] [i_15 + 2] [i_10] = ((/* implicit */unsigned short) var_11);
                        }
                    } 
                } 
                var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) ((unsigned int) arr_23 [i_10] [i_19 - 1])))));
                var_37 ^= ((/* implicit */short) (!(((/* implicit */_Bool) ((var_6) | (-6771248607339013420LL))))));
            }
            var_38 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (signed char)112)))) * (((arr_69 [i_10] [i_10] [i_10] [i_10] [i_10]) << (((var_13) - (261718484)))))));
        }
    }
    var_39 = ((/* implicit */signed char) ((var_15) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_2)) <= (((/* implicit */int) var_2)))) ? (var_14) : (((/* implicit */long long int) (-(23555815U))))))) : (((min((2926019191057758969ULL), (((/* implicit */unsigned long long int) (signed char)30)))) << (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) == (var_10))))))));
}
