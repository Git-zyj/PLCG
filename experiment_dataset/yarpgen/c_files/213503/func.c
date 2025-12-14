/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213503
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_2] [i_2] [(unsigned char)7] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 140703128616960ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (7177781664846656587ULL))) : (((/* implicit */unsigned long long int) 539113477844478383LL))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((539113477844478383LL) + (5898467707843300518LL)))))))) : (((min((8205336440421691035LL), (arr_1 [0U]))) >> (((((((/* implicit */_Bool) 12228257033257156191ULL)) ? (((/* implicit */unsigned long long int) 539113477844478395LL)) : (196707356982382578ULL))) - (539113477844478364ULL)))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_15 *= ((/* implicit */_Bool) (short)21762);
                                arr_15 [i_4] [i_3] [i_3] [i_1] [i_0] = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_2 [i_3 + 1] [i_3 + 1] [i_3 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_8 [i_4] [i_3] [i_0])) <= (((/* implicit */int) (_Bool)1)))))) : (((-539113477844478383LL) % (-539113477844478383LL)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 *= ((/* implicit */signed char) ((((((/* implicit */int) ((var_3) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) * (((((/* implicit */_Bool) 0U)) ? (var_8) : (((/* implicit */int) (unsigned char)195)))))) * (((((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) var_7)))) >> (((((var_10) + (((/* implicit */unsigned long long int) 127U)))) - (6996595258907316667ULL)))))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 12; i_5 += 4) 
    {
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            {
                var_17 = ((/* implicit */int) max((2411008229040633355ULL), (((/* implicit */unsigned long long int) ((((3277291683598859967ULL) * (12389248435426614370ULL))) <= (((arr_7 [i_5] [i_6] [i_5] [i_5]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))))));
                var_18 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (536870911LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)46753)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 8220989491056435818ULL)) ? (((/* implicit */int) (short)-11427)) : (((/* implicit */int) (_Bool)1))))) : (297750274U)))) * (((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-11427)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)11441))) : (arr_11 [i_6] [i_5] [i_5] [i_5])))) % (((((/* implicit */_Bool) arr_19 [i_6] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_6 - 1] [i_5] [(short)2]))) : (536870911LL)))))));
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                {
                    for (signed char i_8 = 1; i_8 < 9; i_8 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) * (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-26464))))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (9346793608861543289ULL)))))));
                            arr_25 [i_7] [i_7] [i_6] [i_7] = (i_7 % 2 == zero) ? (((/* implicit */int) (((~(((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_8] [i_7] [i_7] [i_5])) && (((/* implicit */_Bool) 1299399861936543172ULL))))))) < (((((/* implicit */int) (signed char)95)) >> (((arr_9 [i_7] [i_7] [i_7 + 1] [i_6 - 1] [i_7] [(signed char)7]) + (5641583436692248303LL)))))))) : (((/* implicit */int) (((~(((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_8] [i_7] [i_7] [i_5])) && (((/* implicit */_Bool) 1299399861936543172ULL))))))) < (((((/* implicit */int) (signed char)95)) >> (((((arr_9 [i_7] [i_7] [i_7 + 1] [i_6 - 1] [i_7] [(signed char)7]) - (5641583436692248303LL))) + (1361124972463263429LL))))))));
                            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) -539113477844478383LL)) ? (((/* implicit */unsigned long long int) 7349203123613427213LL)) : (0ULL)));
                        }
                    } 
                } 
            }
        } 
    } 
}
