/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248532
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
    var_15 = ((/* implicit */short) (~(((((/* implicit */_Bool) (signed char)-94)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((arr_2 [i_1] [i_1] [i_0]), (((/* implicit */unsigned int) (unsigned short)14143))))), (max((((/* implicit */unsigned long long int) arr_2 [i_1] [i_1] [i_0])), (var_9)))));
                arr_4 [16U] [16U] [i_1] = ((/* implicit */unsigned int) ((((var_13) >> (((((unsigned int) (unsigned char)238)) - (192U))))) << ((((~(-3217841085791777169LL))) - (3217841085791777115LL)))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 3; i_2 < 18; i_2 += 1) 
                {
                    for (unsigned short i_3 = 3; i_3 < 17; i_3 += 3) 
                    {
                        {
                            var_17 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 975726870U))));
                            var_18 -= ((/* implicit */unsigned short) (~(-1081261525)));
                            var_19 = ((/* implicit */unsigned short) max((max((arr_6 [8ULL] [i_3] [i_3] [i_2]), (((/* implicit */unsigned long long int) arr_8 [6LL] [i_0] [i_0] [(_Bool)1])))), ((+(var_9)))));
                            var_20 ^= ((/* implicit */_Bool) max((min((((/* implicit */long long int) max(((unsigned char)17), (((/* implicit */unsigned char) (signed char)-53))))), (min((arr_5 [(unsigned char)16] [i_2] [i_0] [11U]), (((/* implicit */long long int) arr_2 [i_0] [i_1] [i_2])))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)238)))))))));
                            /* LoopSeq 1 */
                            for (short i_4 = 0; i_4 < 20; i_4 += 3) 
                            {
                                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) min((1550674180U), (((/* implicit */unsigned int) (unsigned char)18)))))));
                                var_22 = ((/* implicit */signed char) ((long long int) (~(642155262U))));
                            }
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 3) 
                {
                    for (unsigned int i_6 = 1; i_6 < 17; i_6 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */long long int) ((_Bool) (+(((/* implicit */int) arr_11 [i_6 - 1] [i_6 + 1] [i_6 + 3] [i_6 + 3] [i_6 - 1] [i_6 + 2])))));
                            var_24 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)87)) - (((/* implicit */int) arr_16 [(unsigned char)16] [i_1] [i_1] [i_5] [i_6] [i_6]))))) | ((-(var_13)))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [13ULL])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_1] [(short)11] [13U] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : ((~(((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [(unsigned short)1]))))))) : (max((((/* implicit */long long int) min((arr_0 [4U] [i_1]), (((/* implicit */short) arr_1 [3LL] [i_0]))))), (((((/* implicit */long long int) var_14)) - (arr_5 [i_0] [i_0] [(unsigned short)7] [i_1]))))))))));
            }
        } 
    } 
}
