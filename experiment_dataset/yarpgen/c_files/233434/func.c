/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233434
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
    var_12 = ((/* implicit */signed char) max((min((((-5528503707806257805LL) / (((/* implicit */long long int) var_4)))), (((/* implicit */long long int) var_0)))), (((((-5528503707806257805LL) / (-5528503707806257805LL))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) -5528503707806257805LL)) ? (((/* implicit */int) var_9)) : (var_2))))))));
    var_13 = ((/* implicit */short) var_8);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_3 [i_0] [i_0] [4LL])))) + (max((arr_4 [i_0]), (((/* implicit */unsigned int) (unsigned short)2748))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned char) arr_13 [i_0] [i_0] [i_2]);
                                var_15 = (i_2 % 2 == 0) ? (((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_2] [i_2] [i_2] [i_4 - 1]))))) >> (((((int) arr_11 [i_4 - 1] [i_2] [i_4 - 1])) + (27)))))) : (((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_2] [i_2] [i_2] [i_4 - 1]))))) >> (((((((int) arr_11 [i_4 - 1] [i_2] [i_4 - 1])) + (27))) - (100))))));
                                var_16 = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) var_6)) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2748))))))) : (max((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) arr_13 [i_0] [12ULL] [i_2])) : (1748393287435088490ULL))), (((/* implicit */unsigned long long int) ((-5528503707806257805LL) | (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_2] [(unsigned char)3]))))))))));
                                arr_15 [i_2] [i_2] = (signed char)50;
                                var_17 = ((unsigned short) ((((/* implicit */_Bool) arr_14 [i_4] [i_4 - 1] [i_4] [i_4] [i_4])) ? (((/* implicit */int) arr_12 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4 - 1])) : (((/* implicit */int) (unsigned char)206))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_5 = 0; i_5 < 15; i_5 += 4) 
    {
        for (unsigned short i_6 = 0; i_6 < 15; i_6 += 1) 
        {
            {
                var_18 = ((/* implicit */int) arr_7 [i_5] [i_5] [i_5] [i_6]);
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 15; i_7 += 1) 
                {
                    for (int i_8 = 0; i_8 < 15; i_8 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)62788))) ^ (-7102288285222147414LL))))));
                            arr_29 [i_5] [i_6] [i_5] [i_7] [i_7] [i_8] = ((/* implicit */short) min((((((/* implicit */_Bool) (short)-4511)) ? (1718159966799678445ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-106))))), (((/* implicit */unsigned long long int) arr_4 [i_5]))));
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) + (5132449485700990124ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_6] [i_8])))))) ? (max((((/* implicit */unsigned long long int) arr_13 [i_5] [i_5] [i_7])), (((((/* implicit */_Bool) 5132449485700990124ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_7] [i_7] [i_7]))) : (1718159966799678445ULL))))) : (((1718159966799678445ULL) * (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_7] [i_7] [i_7]))) : (16728584106909873170ULL)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)60)) ? (((/* implicit */unsigned long long int) var_1)) : (16728584106909873170ULL))), (((/* implicit */unsigned long long int) (-(-947281322))))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (signed char)117)) : (((/* implicit */int) (short)0))))), (((unsigned int) (short)6473)))))));
}
