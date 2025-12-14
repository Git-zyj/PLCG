/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194963
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 2; i_2 < 16; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_3] [6] [6] = ((/* implicit */unsigned char) max((var_0), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -908025418)))))));
                                var_10 = ((var_0) << ((((~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)7)) : (var_1))))) + (68))));
                                var_11 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((7658240364437471325ULL) <= (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)12612))) % (7658240364437471325ULL)))))), (((((/* implicit */_Bool) arr_11 [i_2 - 1] [i_3] [i_3] [i_2 + 1] [i_4] [i_4])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2 - 1] [i_3] [i_3] [i_3] [i_2 - 1] [i_1])))))));
                            }
                        } 
                    } 
                } 
                var_12 = ((/* implicit */unsigned long long int) ((int) max((max((((/* implicit */unsigned int) (signed char)-51)), (3749507046U))), (((/* implicit */unsigned int) 3)))));
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 17; i_5 += 2) 
                {
                    for (unsigned int i_6 = 0; i_6 < 17; i_6 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned char) arr_5 [(unsigned char)11] [(unsigned char)11]);
                            var_14 = ((/* implicit */unsigned long long int) max((var_2), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 16)) ? (((/* implicit */int) (unsigned short)18567)) : (arr_7 [i_5] [i_5] [i_1] [(unsigned char)1]))) == (((/* implicit */int) (unsigned char)243)))))));
                        }
                    } 
                } 
                var_15 += ((/* implicit */unsigned long long int) ((signed char) ((4727610593112935508ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_8) < (((/* implicit */unsigned long long int) 16383U)))))))));
            }
        } 
    } 
    var_16 = (unsigned char)255;
}
