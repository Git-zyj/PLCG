/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193300
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
    var_11 += max((((((/* implicit */unsigned int) ((/* implicit */int) var_4))) != (max((((/* implicit */unsigned int) var_7)), (var_9))))), (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (var_7))) < (((/* implicit */int) var_8)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        {
                            arr_8 [i_1] [i_1 + 2] = ((/* implicit */short) (-(((((/* implicit */_Bool) 4749452639458636014LL)) ? (12283640249740241422ULL) : (max((12283640249740241412ULL), (((/* implicit */unsigned long long int) var_7))))))));
                            /* LoopSeq 4 */
                            for (long long int i_4 = 0; i_4 < 13; i_4 += 4) 
                            {
                                var_12 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((long long int) -4749452639458636015LL)))));
                                var_13 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) arr_7 [i_0] [i_2] [i_2] [i_1] [i_4])))));
                                var_14 -= ((/* implicit */unsigned short) ((int) 6163103823969310190ULL));
                            }
                            for (short i_5 = 0; i_5 < 13; i_5 += 2) 
                            {
                                var_15 -= ((/* implicit */signed char) max((((/* implicit */int) (signed char)101)), (arr_16 [i_1 + 4] [i_1 + 2] [i_2] [i_3] [i_1 + 4])));
                                var_16 = ((/* implicit */signed char) (+(((/* implicit */int) max((((/* implicit */unsigned short) arr_9 [i_5] [i_1 + 4] [i_2] [i_1 + 4] [i_0])), (var_5))))));
                            }
                            for (int i_6 = 0; i_6 < 13; i_6 += 4) /* same iter space */
                            {
                                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [(signed char)11] [(signed char)11] [(signed char)11] [(signed char)11] [i_0])) ? (((max((((/* implicit */long long int) arr_0 [i_0])), (-4749452639458636003LL))) & (((/* implicit */long long int) arr_1 [i_2])))) : (((long long int) (~(var_7))))));
                                arr_19 [i_3] [i_3] [i_1] = ((/* implicit */unsigned short) arr_10 [i_1]);
                                arr_20 [i_1] [i_2] [i_1] = ((/* implicit */_Bool) max((min((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-512)) ? (((/* implicit */int) arr_10 [(unsigned char)4])) : (((/* implicit */int) arr_10 [12]))))), (((long long int) arr_13 [i_0])))), (((/* implicit */long long int) ((unsigned char) 12283640249740241422ULL)))));
                            }
                            for (int i_7 = 0; i_7 < 13; i_7 += 4) /* same iter space */
                            {
                                var_18 = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) arr_1 [i_1 + 2])) ? (arr_1 [i_1 + 1]) : (arr_1 [i_1 + 1]))));
                                var_19 ^= ((/* implicit */signed char) ((((/* implicit */int) (signed char)86)) >> ((((-(((/* implicit */int) ((signed char) arr_17 [i_7] [i_3] [i_2] [i_1 + 4] [i_0]))))) + (31)))));
                                arr_23 [i_2] [i_1 + 2] [i_1] [i_3] [i_7] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_3 [i_2] [i_1] [i_0])) ? (arr_3 [i_1] [i_1] [i_1 + 4]) : (arr_3 [i_2] [i_1] [i_0])))));
                            }
                        }
                    } 
                } 
                arr_24 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_1 + 3] [i_1] [i_0] [i_1] [i_1 + 3] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_7)))) : (((-4749452639458636022LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_5)))))))) ? ((~(arr_17 [i_0] [i_1] [i_0] [i_1 - 1] [i_0]))) : (((((/* implicit */_Bool) arr_6 [i_1] [i_1 + 3] [i_1] [i_0] [i_1])) ? ((~(arr_17 [i_1 + 4] [i_1] [i_1 + 2] [i_1 - 1] [i_1 + 3]))) : (((/* implicit */unsigned int) ((((((/* implicit */int) var_2)) + (2147483647))) >> (((((/* implicit */int) arr_11 [i_1 + 1] [i_1 + 1] [i_0] [i_1])) - (88))))))))));
                arr_25 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_9)))) ? ((-(((((/* implicit */_Bool) var_4)) ? (arr_15 [i_1] [i_1]) : (((/* implicit */unsigned long long int) var_0)))))) : (((((/* implicit */_Bool) (+(1346879637)))) ? (((/* implicit */unsigned long long int) arr_1 [i_1 + 2])) : (max((6163103823969310175ULL), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_1] [i_1] [i_1]))))))));
                var_20 &= ((/* implicit */_Bool) (+(((((((/* implicit */int) (unsigned char)90)) / (-1941790506))) / ((+(((/* implicit */int) var_8))))))));
                var_21 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) 3686060411U)) : (arr_12 [i_0] [i_0] [i_0] [i_1] [i_1]))) > (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)512))))))) ? ((-(((/* implicit */int) var_3)))) : (((/* implicit */int) (unsigned short)38947))));
            }
        } 
    } 
}
