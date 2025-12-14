/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52774
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
    /* LoopSeq 2 */
    for (signed char i_0 = 4; i_0 < 17; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 15; i_2 += 4) 
            {
                {
                    var_12 += ((/* implicit */unsigned char) (+(((/* implicit */int) min((((unsigned short) var_11)), (((/* implicit */unsigned short) arr_1 [i_1 + 1])))))));
                    var_13 = ((/* implicit */unsigned long long int) arr_4 [i_0] [i_0]);
                    var_14 = ((/* implicit */unsigned short) ((((3740457919320516971ULL) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)138)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-1)))))))) + (((/* implicit */unsigned long long int) ((unsigned int) ((long long int) var_1))))));
                }
            } 
        } 
        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0 - 4] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)69))) : (var_9)))), (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_5 [i_0 - 2] [i_0] [i_0] [i_0]))))))) ? (((/* implicit */int) ((min((1585269779U), (((/* implicit */unsigned int) (signed char)0)))) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)16629)) : (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))))))) : (((((((/* implicit */_Bool) arr_2 [i_0] [8LL] [i_0 - 2])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4)))) & (((/* implicit */int) var_2))))));
    }
    for (unsigned char i_3 = 2; i_3 < 19; i_3 += 4) 
    {
        var_16 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65535)) & (((/* implicit */int) (_Bool)1))))) >= (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_3)) == (((/* implicit */int) var_2)))))) : (arr_7 [i_3 + 1] [i_3 + 1])))));
        /* LoopNest 3 */
        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 2) 
        {
            for (unsigned char i_5 = 0; i_5 < 21; i_5 += 1) 
            {
                for (unsigned char i_6 = 0; i_6 < 21; i_6 += 2) 
                {
                    {
                        var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((((/* implicit */unsigned long long int) var_6)) & (19ULL))) <= (((/* implicit */unsigned long long int) min((1827944102), (((/* implicit */int) (unsigned short)32760)))))))) >= (((/* implicit */int) (unsigned char)10))));
                        /* LoopSeq 3 */
                        for (unsigned char i_7 = 0; i_7 < 21; i_7 += 2) /* same iter space */
                        {
                            var_18 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_0))) / (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))));
                            var_19 = ((/* implicit */unsigned int) arr_13 [i_3] [i_4] [i_3]);
                            var_20 = ((/* implicit */_Bool) max((((/* implicit */unsigned short) ((short) -3999994290345635618LL))), (arr_11 [i_4] [i_7])));
                        }
                        for (unsigned char i_8 = 0; i_8 < 21; i_8 += 2) /* same iter space */
                        {
                            var_21 = ((/* implicit */unsigned char) var_10);
                            var_22 &= ((/* implicit */unsigned char) (-(211304094582865646ULL)));
                        }
                        for (unsigned char i_9 = 0; i_9 < 21; i_9 += 2) /* same iter space */
                        {
                            var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (unsigned short)65509))));
                            var_24 = ((/* implicit */short) min((((/* implicit */long long int) ((unsigned int) arr_15 [i_3] [i_3] [i_3] [i_3 - 2] [i_3] [i_3 - 2]))), (max((var_8), (((/* implicit */long long int) (signed char)0))))));
                            var_25 *= ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)39056)) / (((/* implicit */int) (signed char)-10))));
                            var_26 = ((/* implicit */unsigned long long int) (~(1749522680U)));
                        }
                        var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2892337471U)) ? (((/* implicit */int) (unsigned char)140)) : (((/* implicit */int) (signed char)15)))))));
                        var_28 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) - (11808831142623250528ULL)));
                        var_29 = (unsigned short)65535;
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 4) 
        {
            for (unsigned long long int i_11 = 0; i_11 < 21; i_11 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_12 = 0; i_12 < 21; i_12 += 4) 
                    {
                        for (long long int i_13 = 0; i_13 < 21; i_13 += 3) 
                        {
                            {
                                var_30 = (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_10] [i_11] [i_10])))))) & ((+(var_6)))))));
                                var_31 = ((/* implicit */unsigned int) 5165482084932098360ULL);
                                var_32 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_23 [i_3] [i_3 + 2] [i_3 + 2] [i_3] [i_10] [i_11])) ? (arr_23 [(unsigned char)7] [i_3 + 2] [i_11] [(unsigned char)7] [(unsigned char)7] [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_14 = 0; i_14 < 21; i_14 += 3) 
                    {
                        for (unsigned char i_15 = 0; i_15 < 21; i_15 += 3) 
                        {
                            {
                                var_33 = ((((/* implicit */_Bool) arr_25 [i_3])) ? (((((/* implicit */_Bool) var_7)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_15] [i_15] [i_15] [i_15] [i_3 - 2] [i_3 + 1]))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_3])))))));
                                var_34 = ((/* implicit */unsigned char) var_5);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
    {
        for (short i_17 = 0; i_17 < 18; i_17 += 3) 
        {
            for (unsigned int i_18 = 0; i_18 < 18; i_18 += 4) 
            {
                {
                    var_35 = ((/* implicit */short) (~(max((arr_19 [i_16] [i_16] [i_16] [i_16] [i_16]), (((/* implicit */unsigned int) arr_42 [i_18]))))));
                    /* LoopNest 2 */
                    for (long long int i_19 = 0; i_19 < 18; i_19 += 4) 
                    {
                        for (unsigned short i_20 = 2; i_20 < 17; i_20 += 4) 
                        {
                            {
                                var_36 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (_Bool)0))));
                                var_37 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) -70543765)) ? (((/* implicit */int) (short)32759)) : (((/* implicit */int) arr_21 [i_16] [i_17]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_38 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) >> (((((/* implicit */int) var_2)) - (20997)))))) ? (min((7831768871986988162ULL), (((/* implicit */unsigned long long int) (short)(-32767 - 1))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(((/* implicit */int) var_1))))) % (var_10))))));
    var_39 = ((/* implicit */_Bool) max((var_9), (min((((/* implicit */unsigned int) ((unsigned char) var_10))), (((unsigned int) var_10))))));
}
