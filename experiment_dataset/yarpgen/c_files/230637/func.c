/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230637
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) 390501499689235759ULL))));
                                var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) min((((((/* implicit */int) arr_5 [i_0] [i_1] [i_3])) % (((/* implicit */int) arr_5 [i_0] [i_1] [i_0])))), (((/* implicit */int) min((((/* implicit */unsigned short) ((var_11) <= (((/* implicit */long long int) ((/* implicit */int) var_0)))))), (arr_3 [i_0] [i_1] [i_2])))))))));
                                var_14 = ((signed char) arr_5 [2ULL] [i_4] [2ULL]);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_5 = 2; i_5 < 16; i_5 += 4) 
                {
                    for (unsigned char i_6 = 0; i_6 < 18; i_6 += 2) 
                    {
                        {
                            var_15 += ((/* implicit */_Bool) (-((~(18056242574020315866ULL)))));
                            var_16 = ((/* implicit */long long int) ((15816133802705966105ULL) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((16), (((/* implicit */int) (unsigned char)144))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 390501499689235749ULL)) || (((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_5] [i_0]))))) : (min((arr_1 [i_6] [i_0]), (((/* implicit */int) (unsigned char)97)))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_7 = 4; i_7 < 16; i_7 += 4) 
                {
                    for (long long int i_8 = 3; i_8 < 15; i_8 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((signed char) 2054643936)))));
                            var_18 = ((/* implicit */unsigned short) min((-379114355), (((/* implicit */int) ((_Bool) (short)-22629)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_9 = 4; i_9 < 17; i_9 += 1) 
                {
                    for (unsigned int i_10 = 0; i_10 < 18; i_10 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned long long int) 0);
                            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) var_0))));
                            var_21 *= ((/* implicit */_Bool) -6084150128671762959LL);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_11 = 0; i_11 < 16; i_11 += 2) 
    {
        for (unsigned long long int i_12 = 0; i_12 < 16; i_12 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_13 = 2; i_13 < 13; i_13 += 3) 
                {
                    for (unsigned short i_14 = 1; i_14 < 14; i_14 += 4) 
                    {
                        for (long long int i_15 = 0; i_15 < 16; i_15 += 3) 
                        {
                            {
                                arr_37 [i_14] = 281529773;
                                var_22 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) % (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)46)) & (((/* implicit */int) arr_21 [i_11] [i_11] [i_14] [i_15]))))) ? (((var_2) + (((/* implicit */long long int) var_4)))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (short i_16 = 2; i_16 < 14; i_16 += 3) 
                {
                    for (unsigned long long int i_17 = 3; i_17 < 14; i_17 += 1) 
                    {
                        {
                            arr_43 [i_17] = ((/* implicit */unsigned short) (-(((long long int) 3084596213U))));
                            var_23 ^= ((/* implicit */unsigned char) min((var_6), (((/* implicit */int) min(((unsigned short)1276), (((/* implicit */unsigned short) (unsigned char)99)))))));
                            var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_17 + 1] [i_11] [(signed char)8] [i_17] [(signed char)8]))) % (arr_11 [i_17 + 1] [i_12] [i_16] [i_12] [i_12]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_17 + 1] [i_12] [i_11] [i_16 + 2] [(unsigned short)17])) ? (((/* implicit */int) arr_9 [i_17 + 1] [15LL] [i_16] [i_17] [i_11])) : (((/* implicit */int) (unsigned short)48493))))))))));
                            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((var_10) - (var_10))) << (((((((/* implicit */_Bool) var_8)) ? (2147483625) : (((/* implicit */int) arr_15 [i_11] [17LL] [(unsigned short)14] [i_17 - 1])))) - (2147483604)))))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_18 = 1; i_18 < 15; i_18 += 2) 
                {
                    for (unsigned char i_19 = 1; i_19 < 15; i_19 += 3) 
                    {
                        for (unsigned long long int i_20 = 4; i_20 < 15; i_20 += 4) 
                        {
                            {
                                var_26 = ((/* implicit */signed char) ((((/* implicit */int) arr_5 [i_11] [i_20] [i_18])) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_11) : (arr_26 [i_19])))) ? (((/* implicit */int) ((((/* implicit */long long int) arr_30 [i_11] [i_12] [i_18] [i_20])) <= (arr_44 [i_11] [i_11] [1ULL])))) : (((/* implicit */int) (_Bool)1))))));
                                arr_53 [i_11] [i_12] [i_18 - 1] [i_18] [i_20] = ((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_11] [i_12] [i_18 + 1] [i_19]))))), (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (((_Bool)0) || ((_Bool)1)))) : (((/* implicit */int) (unsigned short)64260))))));
                                arr_54 [i_11] [i_12] [i_18] [i_19 + 1] [i_20] = ((/* implicit */short) (signed char)65);
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_21 = 2; i_21 < 13; i_21 += 2) 
                {
                    for (unsigned char i_22 = 1; i_22 < 14; i_22 += 4) 
                    {
                        for (long long int i_23 = 0; i_23 < 16; i_23 += 4) 
                        {
                            {
                                arr_63 [(unsigned short)7] [i_23] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)47)) / (((/* implicit */int) (signed char)46))));
                                arr_64 [i_23] [i_23] [i_21] = ((/* implicit */short) 18056242574020315856ULL);
                                arr_65 [i_11] [i_11] [(unsigned char)15] [i_23] [i_11] = ((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-58))) % (((((/* implicit */_Bool) arr_16 [i_11] [(signed char)4] [i_21] [i_23])) ? (((/* implicit */unsigned long long int) 2189428967U)) : (arr_6 [i_21]))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_7 [i_21] [i_21])) || (((/* implicit */_Bool) var_8)))) || (((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)195)), (2147483647)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
