/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33116
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
    for (short i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (signed char i_3 = 2; i_3 < 20; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                arr_15 [i_0 + 2] [i_4] [i_0 + 2] [i_0 + 2] [i_1] = ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) arr_6 [i_1] [i_0 + 2] [i_0 - 2]))))));
                                var_11 -= ((unsigned int) min((var_10), (((/* implicit */unsigned short) var_8))));
                            }
                            for (unsigned int i_5 = 0; i_5 < 22; i_5 += 4) 
                            {
                                arr_18 [i_1] [i_1] [i_1] = (-(((unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_0 - 1] [3ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (926739346U)))));
                                arr_19 [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) / (3368227951U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) - (4294967290U)))) : (max((((/* implicit */unsigned long long int) var_2)), (var_9))))) - (((/* implicit */unsigned long long int) var_7))));
                                var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_0 + 2] [i_0 + 1]))))) ? (((((/* implicit */int) arr_7 [i_0 + 2] [i_0 - 1])) / (((/* implicit */int) arr_7 [i_0 - 2] [i_0 + 1])))) : (((/* implicit */int) min((arr_7 [i_0 + 1] [i_0 - 2]), (var_10))))));
                            }
                            /* LoopSeq 4 */
                            for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 2) /* same iter space */
                            {
                                var_13 = ((/* implicit */unsigned long long int) (_Bool)1);
                                arr_22 [i_1] [i_0] [i_1] [i_1] [(_Bool)1] [i_3 - 1] [i_6] = ((/* implicit */short) var_1);
                                arr_23 [i_1] [i_1] [5U] [(short)1] [i_6] = ((/* implicit */short) -377381153);
                            }
                            for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 2) /* same iter space */
                            {
                                arr_27 [i_0 - 1] [i_1] = ((/* implicit */unsigned long long int) ((((var_3) - (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) == (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 8276967431652251354ULL))))));
                                var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((-398003762405281025LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */long long int) ((unsigned int) var_1))) : (min((((/* implicit */long long int) arr_4 [i_1] [i_2] [i_1])), (var_7)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)58987)) ? (4294967290U) : (3368227945U))))));
                            }
                            /* vectorizable */
                            for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 2) /* same iter space */
                            {
                                arr_30 [i_0] [i_1] [i_0] [i_0] [i_0 + 1] [(signed char)1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-26862)) && (((/* implicit */_Bool) 7107588778771454619ULL))));
                                arr_31 [i_0] [i_0] [1ULL] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((unsigned int) arr_1 [i_3 + 2]));
                            }
                            for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 2) /* same iter space */
                            {
                                var_15 -= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_0)), (var_1)));
                                arr_35 [(_Bool)1] [i_2] [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)11239)))))))) << (((/* implicit */int) arr_24 [i_0] [i_0 - 1] [i_1] [i_1] [i_3] [i_3] [17ULL]))));
                                arr_36 [i_0] [i_1] [i_1] [i_9] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((unsigned int) (!(((/* implicit */_Bool) arr_8 [(_Bool)1] [i_2] [i_1] [i_0])))))), (((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned short) arr_20 [i_0] [i_1] [14ULL] [i_2] [15ULL] [i_1] [i_0]))))) ? (var_9) : (var_9)))));
                                arr_37 [i_0] [i_1] [i_1] [i_1] [i_9] = ((/* implicit */short) var_6);
                            }
                            var_16 ^= (!(((/* implicit */_Bool) 4294967286U)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                {
                    for (unsigned int i_11 = 0; i_11 < 22; i_11 += 1) 
                    {
                        {
                            arr_44 [i_0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_0))))), (max((((/* implicit */unsigned int) (unsigned short)38938)), ((((_Bool)1) ? (3368227970U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
                            var_17 &= ((/* implicit */int) ((_Bool) 2852311077886639375ULL));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_12 = 0; i_12 < 17; i_12 += 2) 
    {
        for (short i_13 = 0; i_13 < 17; i_13 += 1) 
        {
            {
                var_18 = ((/* implicit */int) var_10);
                /* LoopNest 2 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    for (short i_15 = 1; i_15 < 16; i_15 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 2111062325329920LL)) ? (-1950064711) : (((/* implicit */int) var_5))))), (4294967281U)));
                            var_20 ^= ((/* implicit */unsigned long long int) var_2);
                            arr_55 [(unsigned char)16] [(signed char)6] [i_14] = ((/* implicit */short) 1950064710);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_16 = 4; i_16 < 15; i_16 += 2) 
                {
                    for (int i_17 = 4; i_17 < 15; i_17 += 2) 
                    {
                        for (signed char i_18 = 0; i_18 < 17; i_18 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */short) min((max((((/* implicit */unsigned int) var_0)), (var_2))), (((/* implicit */unsigned int) ((signed char) (short)-1)))));
                                var_22 = ((short) ((unsigned long long int) var_9));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
