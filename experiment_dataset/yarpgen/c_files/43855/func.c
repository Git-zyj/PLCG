/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43855
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
    var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_6)), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (-5253409484496494544LL)))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_0)))), ((-(var_5))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            {
                var_13 *= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? ((-(((/* implicit */int) (unsigned char)248)))) : (((/* implicit */int) arr_1 [i_1 - 2] [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)99)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 4167905773988843405ULL)) ? (((/* implicit */int) (short)127)) : (((/* implicit */int) (short)31881))))))))) : (max((((/* implicit */unsigned int) arr_1 [i_1 - 1] [i_1 - 1])), (((((/* implicit */_Bool) (unsigned char)243)) ? (arr_3 [i_0] [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))));
                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) (signed char)114)), ((+(((/* implicit */int) (unsigned char)240))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)21))) : ((-(var_8)))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    for (long long int i_3 = 3; i_3 < 19; i_3 += 1) 
                    {
                        {
                            var_15 -= ((/* implicit */unsigned int) var_5);
                            var_16 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_1] [i_3 - 2])) ? (15ULL) : (((/* implicit */unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) ((arr_5 [i_0] [i_1]) | (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1] [i_1]))))))))) || (((/* implicit */_Bool) min((arr_6 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */int) arr_1 [i_1 + 1] [i_3 + 2])))))));
                            arr_10 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((1116681567U) & (((/* implicit */unsigned int) ((/* implicit */int) (short)-31885)))))) ? (((/* implicit */int) arr_1 [i_1 + 1] [i_1 + 1])) : ((~(((/* implicit */int) (_Bool)1))))));
                            var_17 = ((/* implicit */int) 14710068941484902477ULL);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_4 = 1; i_4 < 22; i_4 += 3) 
    {
        for (short i_5 = 3; i_5 < 23; i_5 += 2) 
        {
            for (int i_6 = 1; i_6 < 21; i_6 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)16)) ? (((((/* implicit */_Bool) (-(3178285749U)))) ? (min((((/* implicit */unsigned int) var_4)), (arr_17 [(unsigned char)10]))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_13 [i_4] [(_Bool)1]), (((/* implicit */unsigned char) (signed char)-115)))))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)26734))))))))));
                    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_15 [(signed char)16] [(signed char)16] [18LL])), (arr_11 [i_4 + 1] [22ULL])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_4] [i_4 + 2] [(unsigned char)6]))) : (((arr_11 [i_5] [(short)8]) + (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_4 - 1] [i_5] [(_Bool)1]))))))))));
                }
            } 
        } 
    } 
}
