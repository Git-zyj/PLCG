/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199565
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
    for (signed char i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        /* LoopSeq 4 */
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            /* LoopNest 3 */
            for (short i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 21; i_3 += 3) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            arr_15 [i_0] [(unsigned char)18] [i_2] [i_2] [i_2] [(unsigned char)18] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) arr_4 [i_0] [(unsigned char)6] [i_2]))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_4] [i_0] [i_0 - 1] [i_0] [i_0 - 1])))));
                            var_19 = ((/* implicit */unsigned int) ((((long long int) ((-3833774387299713578LL) + (((/* implicit */long long int) 4294967274U))))) <= (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_18))))));
                            var_20 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((unsigned char) min((arr_0 [i_0] [(short)4]), (var_15))))), (((unsigned int) min((((/* implicit */unsigned long long int) var_2)), (var_8))))));
                        }
                    } 
                } 
            } 
            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((min((arr_0 [(_Bool)1] [(unsigned short)0]), (((/* implicit */unsigned int) var_18)))) << (((((/* implicit */int) var_17)) - (20968))))))));
            var_22 ^= ((/* implicit */unsigned int) min((((/* implicit */short) min((arr_9 [i_1] [16] [i_0] [i_0] [16] [0LL]), (arr_9 [i_0] [6LL] [i_1] [i_1] [(_Bool)1] [(_Bool)1])))), (min((((/* implicit */short) ((arr_4 [i_0] [i_1] [8U]) > (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))), (var_1)))));
            var_23 -= ((/* implicit */_Bool) max((arr_0 [4LL] [4LL]), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_11 [i_1] [6U] [i_0] [8U] [i_0] [6U] [i_0])))))));
            arr_16 [18U] [i_0] [i_1] = ((/* implicit */unsigned char) ((arr_5 [i_0 - 1] [i_0 + 1] [i_0 - 2]) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_1] [i_1] [i_0]))))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_12))))))) : (((unsigned int) arr_2 [i_0 - 1] [i_0 + 1]))));
        }
        for (unsigned char i_5 = 0; i_5 < 21; i_5 += 3) /* same iter space */
        {
            var_24 = ((/* implicit */short) var_4);
            /* LoopNest 2 */
            for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 4) 
            {
                for (short i_7 = 0; i_7 < 21; i_7 += 2) 
                {
                    {
                        var_25 = ((/* implicit */unsigned int) arr_21 [i_0 - 1] [i_5] [(unsigned short)15] [i_0] [i_7]);
                        var_26 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_16), (arr_7 [i_0] [i_0])))) ? (((/* implicit */int) ((short) var_2))) : (((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [(signed char)16])) == (((/* implicit */int) arr_17 [i_5] [i_0])))))))) ? (((/* implicit */unsigned int) max((((/* implicit */int) var_12)), ((~(((/* implicit */int) var_16))))))) : (((unsigned int) ((4187014793U) != (4187014785U)))));
                        var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))), (((((/* implicit */_Bool) min((var_15), (4187014793U)))) ? ((~(((/* implicit */int) var_10)))) : (((/* implicit */int) ((unsigned char) var_7))))))))));
                        var_28 += ((/* implicit */long long int) min((((/* implicit */unsigned long long int) arr_5 [i_5] [i_5] [i_0])), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)0)), (2315434885U)))) ? (((unsigned long long int) arr_6 [i_0] [i_6] [16U] [i_7])) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_18), (var_12)))))))));
                        var_29 = ((unsigned char) ((((/* implicit */_Bool) arr_2 [i_5] [i_5])) ? (((/* implicit */int) ((short) arr_22 [i_0 - 2] [i_5] [i_5]))) : ((~(((/* implicit */int) (unsigned char)162))))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (signed char i_8 = 0; i_8 < 21; i_8 += 4) 
            {
                for (unsigned char i_9 = 0; i_9 < 21; i_9 += 1) 
                {
                    for (unsigned int i_10 = 0; i_10 < 21; i_10 += 3) 
                    {
                        {
                            var_30 = ((/* implicit */_Bool) var_0);
                            var_31 = ((/* implicit */unsigned int) max((((long long int) arr_2 [2U] [12LL])), (((/* implicit */long long int) arr_28 [i_10] [i_10] [i_0] [i_8] [i_0] [i_0]))));
                        }
                    } 
                } 
            } 
            var_32 = ((unsigned int) min((((/* implicit */unsigned int) var_6)), (arr_8 [i_0] [i_0] [i_0])));
        }
        for (unsigned char i_11 = 0; i_11 < 21; i_11 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned int i_12 = 0; i_12 < 21; i_12 += 2) 
            {
                for (signed char i_13 = 0; i_13 < 21; i_13 += 1) 
                {
                    for (short i_14 = 0; i_14 < 21; i_14 += 3) 
                    {
                        {
                            var_33 = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0 - 2] [i_0] [i_0 - 2])) ? (((/* implicit */int) arr_11 [i_0 + 1] [i_0] [i_11] [(short)18] [(unsigned short)13] [i_0] [i_14])) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_11] [i_11] [7LL] [i_0] [(short)17])))));
                            var_34 = (~(((((/* implicit */_Bool) 4187014793U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-35))) : (107952494U))));
                        }
                    } 
                } 
            } 
            var_35 = ((/* implicit */long long int) ((((/* implicit */int) ((short) arr_32 [i_0] [i_0 - 1]))) << (((var_11) - (2901408378U)))));
        }
        for (unsigned char i_15 = 0; i_15 < 21; i_15 += 3) /* same iter space */
        {
            var_36 = ((/* implicit */unsigned char) arr_8 [i_15] [i_0] [i_0]);
            var_37 -= ((/* implicit */long long int) (~(((/* implicit */int) var_1))));
            var_38 = ((/* implicit */unsigned int) ((unsigned char) ((unsigned int) arr_1 [i_0])));
            var_39 = ((/* implicit */signed char) var_3);
        }
        var_40 ^= ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)41974))));
    }
    /* LoopNest 2 */
    for (long long int i_16 = 0; i_16 < 14; i_16 += 1) 
    {
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            {
                var_41 = ((/* implicit */long long int) arr_2 [i_16] [i_17]);
                var_42 = ((/* implicit */unsigned int) min((var_42), (((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) min((var_12), (var_4)))), (((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_16] [i_17] [(unsigned char)1]))) : (var_8))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))));
                /* LoopNest 2 */
                for (unsigned int i_18 = 0; i_18 < 14; i_18 += 2) 
                {
                    for (signed char i_19 = 4; i_19 < 11; i_19 += 4) 
                    {
                        {
                            var_43 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_48 [i_16] [i_17] [i_16])) ? (arr_39 [17U] [17U] [17U] [17U]) : (((/* implicit */long long int) max((var_11), (((/* implicit */unsigned int) min((((/* implicit */short) arr_13 [i_16] [i_17] [i_18] [i_19] [i_18] [i_17] [i_16])), (var_17)))))))));
                            var_44 = ((/* implicit */unsigned int) min((var_44), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) (-(var_13)))) != (((((_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (((2201698487U) ^ (arr_2 [16U] [i_16]))))))))));
                            var_45 = ((/* implicit */short) max(((~(arr_35 [i_18] [i_18]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_35 [i_16] [i_16])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_46 = ((/* implicit */unsigned int) min((var_46), (var_11)));
}
