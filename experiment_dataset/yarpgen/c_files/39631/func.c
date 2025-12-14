/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39631
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
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-29)) ? (((/* implicit */int) (signed char)-13)) : (((/* implicit */int) (short)-15727))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 17; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */signed char) (~(((/* implicit */int) ((unsigned short) var_6)))));
                            var_16 -= var_5;
                        }
                    } 
                } 
                var_17 += ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_0 - 2] [i_1] [i_0] [10LL])) ? ((((~(((/* implicit */int) var_13)))) * (((/* implicit */int) ((unsigned short) arr_8 [i_0] [(short)17] [8U] [i_1]))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [(unsigned char)14])) ^ (((/* implicit */int) arr_7 [i_1] [i_0] [i_0])))) : ((~(((/* implicit */int) arr_10 [2] [i_1] [i_1] [(unsigned short)12]))))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 19; i_4 += 4) 
                {
                    for (int i_5 = 0; i_5 < 19; i_5 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)-99))));
                            /* LoopSeq 4 */
                            /* vectorizable */
                            for (unsigned short i_6 = 4; i_6 < 17; i_6 += 4) 
                            {
                                var_19 = ((((/* implicit */long long int) ((/* implicit */int) var_3))) + (((((/* implicit */_Bool) (signed char)12)) ? (var_12) : (-4986575386863925028LL))));
                                var_20 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-13))) : ((+(809035707147145848ULL)))));
                                var_21 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 442095924935206661LL))));
                                var_22 = ((/* implicit */short) (signed char)-17);
                                var_23 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_9 [i_1] [i_4] [(unsigned char)0] [i_0])) ? (((/* implicit */int) arr_16 [i_6] [i_5] [i_4] [i_1] [i_0])) : (((/* implicit */int) arr_12 [i_0] [(unsigned short)8] [i_6]))))));
                            }
                            for (short i_7 = 0; i_7 < 19; i_7 += 4) 
                            {
                                var_24 ^= ((/* implicit */unsigned short) min(((~(((((/* implicit */_Bool) var_5)) ? (17637708366562405767ULL) : (((/* implicit */unsigned long long int) 6381353655010799290LL)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) 11015105234869231149ULL))) && (((/* implicit */_Bool) (unsigned char)180)))))));
                                var_25 = ((/* implicit */int) arr_12 [i_0] [i_4] [i_0]);
                            }
                            /* vectorizable */
                            for (int i_8 = 0; i_8 < 19; i_8 += 2) 
                            {
                                var_26 = -304087533;
                                arr_27 [i_0] [i_1] [i_4] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) (-(((var_9) ? (304087533) : (304087533)))));
                                var_27 = ((/* implicit */signed char) min((var_27), (var_3)));
                                var_28 = ((/* implicit */long long int) max((var_28), (((((/* implicit */_Bool) ((int) (unsigned char)142))) ? (((-4045939963535398417LL) + (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)0)))))))));
                                var_29 = ((/* implicit */int) (unsigned short)6020);
                            }
                            for (unsigned short i_9 = 0; i_9 < 19; i_9 += 1) 
                            {
                                var_30 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_2))));
                                var_31 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)241)) ? (((/* implicit */int) arr_1 [i_1])) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)224)) : (((/* implicit */int) arr_3 [i_5]))))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) <= (((((/* implicit */_Bool) (signed char)-10)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)59515)))))))) : (((/* implicit */int) arr_6 [i_0] [i_4] [i_9]))));
                                var_32 *= ((/* implicit */unsigned char) (+((+(((/* implicit */int) (short)-1))))));
                            }
                            arr_31 [i_1] [i_0] [i_5] = ((/* implicit */unsigned short) (~(min((((/* implicit */int) ((unsigned char) (short)4081))), (((var_9) ? (((/* implicit */int) arr_12 [i_1] [i_1] [i_0])) : (((/* implicit */int) arr_22 [i_5] [i_0] [i_4] [i_1] [i_0] [i_0 + 1]))))))));
                            var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0 - 1] [(signed char)12] [(unsigned char)12])) ? (-74684231) : (((/* implicit */int) (unsigned char)119))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 0U)) && (((/* implicit */_Bool) var_2))))) : (((((/* implicit */_Bool) arr_17 [i_5] [i_1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)-48)))))))))));
                            var_34 = ((/* implicit */signed char) ((-1875051483) & (386603656)));
                        }
                    } 
                } 
                var_35 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)-84)) ? (((/* implicit */int) arr_7 [i_0 + 1] [i_0] [i_1])) : (((/* implicit */int) (short)28445)))), (((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_1] [i_1] [i_0])) ? (((/* implicit */int) (short)2964)) : (-304087533))))))));
            }
        } 
    } 
}
