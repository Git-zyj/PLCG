/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217237
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 14; i_2 += 1) 
                {
                    for (signed char i_3 = 3; i_3 < 13; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (short i_4 = 0; i_4 < 16; i_4 += 4) 
                            {
                                var_14 = ((/* implicit */long long int) ((1125899906842624ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)75))))), (arr_3 [i_1 - 2] [i_1 + 2] [i_1 - 1])))))));
                                var_15 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) -1099068763)) > (18445618173802708991ULL)));
                                var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (-(((/* implicit */int) (unsigned char)180)))))));
                                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)180)) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (18445618173802708986ULL)));
                            }
                            for (short i_5 = 0; i_5 < 16; i_5 += 4) 
                            {
                                var_18 = ((/* implicit */unsigned char) 18446744073709551586ULL);
                                var_19 = (((!(((/* implicit */_Bool) ((unsigned long long int) 2132644032))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 13378508542922194995ULL)) ? (arr_10 [i_3 + 1] [i_3 + 1]) : (18445618173802708986ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)103)) : (((/* implicit */int) (short)25957))))) : (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-88)) > (((int) 3460058841664884384LL)))))));
                                var_20 = ((/* implicit */int) ((8989607068696576ULL) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (-6698592763386106880LL) : (((/* implicit */long long int) arr_15 [5ULL] [i_2 + 1] [i_2] [i_2 + 1] [i_2])))))));
                            }
                            arr_16 [i_0] = ((/* implicit */signed char) (((-(9449876694665236767ULL))) < (((((/* implicit */unsigned long long int) max((((/* implicit */long long int) 1383932481)), (-3460058841664884404LL)))) * ((-(8996867379044314848ULL)))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (short i_6 = 3; i_6 < 14; i_6 += 3) 
                {
                    var_21 = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) 1125899906842629ULL))) ? ((+(4994204276013604549LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)206)))))), ((~(((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0])) ? (2666154926480272671ULL) : (arr_10 [i_0] [i_1]))))));
                    var_22 = ((((/* implicit */_Bool) 480U)) ? (8996867379044314848ULL) : (((/* implicit */unsigned long long int) -7669677691589677769LL)));
                    var_23 = ((/* implicit */int) min((max((9449876694665236762ULL), (((/* implicit */unsigned long long int) (signed char)-31)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((7819018153130352709ULL), (((/* implicit */unsigned long long int) (signed char)-1))))) && (((/* implicit */_Bool) 2025020911953825410LL)))))));
                    var_24 += ((/* implicit */unsigned char) max((min((((/* implicit */long long int) (short)-6322)), (4528594488113850536LL))), (min((4953671825395018454LL), (4953671825395018454LL)))));
                }
                for (int i_7 = 0; i_7 < 16; i_7 += 1) 
                {
                    var_25 += ((/* implicit */short) max((((((/* implicit */_Bool) arr_12 [i_1 + 2] [i_1 - 1] [i_1 - 2])) ? (var_4) : (((/* implicit */int) arr_12 [i_1 + 1] [i_1 + 2] [i_1 + 2])))), (((/* implicit */int) arr_12 [i_1 + 1] [i_1 + 2] [i_1 + 2]))));
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 16; i_8 += 3) 
                    {
                        for (unsigned long long int i_9 = 1; i_9 < 12; i_9 += 3) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned long long int) (signed char)17);
                                var_27 = ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-31246))) <= (((long long int) (unsigned short)65526))))) << (((((/* implicit */int) ((short) (short)4206))) - (4193))));
                                var_28 = ((/* implicit */int) ((((/* implicit */long long int) ((arr_15 [i_1 - 1] [i_9 - 1] [i_9] [i_9 + 3] [i_9]) | (arr_15 [i_1 - 1] [i_9 + 3] [i_9 + 3] [i_9 + 4] [i_9])))) != (-5611109752547059473LL)));
                                arr_27 [i_7] [i_7] [i_7] [i_7] [i_1] [i_7] [i_7] &= (-((~(563644323))));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */_Bool) ((long long int) ((short) -2147483644)));
                    arr_28 [i_1] [i_1] [i_7] [i_1] = ((/* implicit */int) ((unsigned long long int) var_12));
                    var_30 = ((/* implicit */_Bool) (+(var_8)));
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 16; i_10 += 3) 
                {
                    for (int i_11 = 3; i_11 < 15; i_11 += 4) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned long long int) (~(-4891857405327245363LL)));
                            arr_33 [i_11] = ((/* implicit */int) ((((((arr_14 [i_0] [i_1] [i_1 - 2] [i_1] [i_10] [i_11 - 3]) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)81))))) + (9223372036854775807LL))) << (((((((/* implicit */_Bool) -1037748880)) ? (((/* implicit */int) (unsigned short)41321)) : (((/* implicit */int) (short)4063)))) - (41321)))));
                            arr_34 [i_0] [i_11] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(max((var_12), (((/* implicit */unsigned long long int) (_Bool)1))))))) ? (min((((/* implicit */long long int) -2147483644)), (arr_2 [13ULL]))) : (((/* implicit */long long int) (-(((/* implicit */int) (short)-4056)))))));
                            arr_35 [i_1] [i_11] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) / (2147483647)))) : (arr_24 [i_11] [i_1] [i_1] [i_1] [i_1 + 2])))), ((-(((((/* implicit */_Bool) var_3)) ? (arr_29 [i_0] [i_1 - 2]) : (((/* implicit */unsigned long long int) 3153919395U))))))));
                        }
                    } 
                } 
                var_32 = ((((/* implicit */unsigned long long int) (-(arr_4 [i_1 + 2] [i_1 - 2] [i_1 + 2])))) < (((3711896921490075694ULL) >> (((18446744073709551613ULL) - (18446744073709551574ULL))))));
            }
        } 
    } 
    var_33 = ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_13)) ? (18446744073709551601ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)18034))))) : (var_6))) : (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) (unsigned char)224)) ? (((/* implicit */int) var_7)) : (-2137874478))))));
}
