/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193667
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
    for (short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */signed char) 6U);
                    var_16 = ((/* implicit */unsigned int) (-(((/* implicit */int) min((arr_0 [i_0] [(_Bool)1]), (arr_0 [i_2] [i_1]))))));
                    arr_6 [i_0] [i_1] [i_1] = ((((/* implicit */_Bool) -3224858821578987185LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (((unsigned int) ((((/* implicit */int) (_Bool)1)) >> (((arr_1 [i_2] [i_2]) - (4480696518667162503ULL)))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                arr_14 [i_1] [i_1] [i_1] [i_1] = (!((!(((/* implicit */_Bool) arr_12 [i_1] [i_1] [(unsigned short)4] [i_1] [i_1])))));
                                var_17 = ((/* implicit */unsigned short) (((-(((/* implicit */int) arr_10 [7ULL] [7ULL] [0ULL] [7ULL] [i_1] [i_1] [i_1])))) + ((-(((/* implicit */int) (_Bool)1))))));
                                arr_15 [i_0] [i_1] [(unsigned short)1] [(unsigned short)1] [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_9))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_0])) - (((/* implicit */int) (_Bool)1))))) : (4294967290U)))));
                                arr_16 [i_0] [i_1] [i_1] [11ULL] [i_1] [(short)6] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_9 [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_9 [i_1] [i_2] [(unsigned short)10])) : (((/* implicit */int) arr_9 [11ULL] [6LL] [(unsigned short)3]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_5)), (var_4)))) ? ((-(var_4))) : (((/* implicit */unsigned long long int) ((var_7) ^ (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)65515))))))))));
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 4) 
                {
                    for (unsigned int i_8 = 1; i_8 < 11; i_8 += 4) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 12; i_9 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) min(((~(((/* implicit */int) arr_7 [i_5] [i_8 - 1] [i_8 - 1])))), (((((/* implicit */int) arr_8 [i_5] [i_5] [i_8] [i_8] [3U] [(unsigned short)4])) << (((((unsigned long long int) var_2)) - (27881ULL)))))));
                                arr_31 [i_5] [i_5] [i_5] [i_5] [i_5] [i_8] [i_5] = ((/* implicit */unsigned long long int) arr_2 [i_6] [i_6]);
                                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_21 [i_5])) ? (((((/* implicit */_Bool) arr_21 [i_5])) ? (arr_21 [i_5]) : (arr_21 [i_5]))) : (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))));
                                var_21 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_7] [i_7]))))) && (((/* implicit */_Bool) max(((unsigned short)65511), (((/* implicit */unsigned short) (_Bool)0))))))))));
                                var_22 *= ((/* implicit */unsigned long long int) 4294967289U);
                            }
                        } 
                    } 
                } 
                arr_32 [i_5] [i_5] = ((/* implicit */unsigned int) ((((arr_27 [i_6] [i_5] [i_5] [i_5] [i_5]) * (arr_1 [i_5] [i_5]))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) * (arr_1 [i_5] [i_5])))));
            }
        } 
    } 
}
