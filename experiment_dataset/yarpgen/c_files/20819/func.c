/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20819
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
    var_17 = ((/* implicit */unsigned long long int) (unsigned short)59428);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_18 |= ((/* implicit */int) ((unsigned long long int) -7192288512058074959LL));
                /* LoopSeq 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_0])) / ((((((~(((/* implicit */int) var_7)))) + (2147483647))) >> (((((arr_4 [i_1]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_2]))))) - (2768870715044179048LL)))))));
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65535)) & (((/* implicit */int) arr_6 [i_0] [i_1] [i_2]))))) & (arr_4 [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) arr_0 [i_1])), (arr_7 [i_0] [i_1] [i_1] [i_2]))))) : (min((((/* implicit */unsigned long long int) arr_1 [i_2])), (arr_3 [i_1])))));
                    var_21 = ((/* implicit */unsigned char) (((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))))) + (-1118856712)));
                    var_22 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) arr_1 [6ULL])), (max((var_8), (((/* implicit */short) arr_0 [9])))))))) : (max((((arr_3 [2ULL]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))), (max((arr_3 [i_0]), (((/* implicit */unsigned long long int) arr_1 [i_0]))))))));
                    var_23 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (_Bool)1)))) <= (arr_3 [i_2]))) ? (max((514721882795696071ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_7 [i_0] [i_0] [i_0] [i_0]), ((signed char)-101)))))));
                }
                /* vectorizable */
                for (int i_3 = 3; i_3 < 6; i_3 += 1) 
                {
                    var_24 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_3 + 4])) >= (((/* implicit */int) ((((/* implicit */int) (unsigned short)6118)) <= (((/* implicit */int) arr_0 [i_1])))))));
                    var_25 = ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_3 + 3])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_0 [i_1]))))) : (arr_4 [i_3 + 1])));
                }
                /* vectorizable */
                for (unsigned char i_4 = 3; i_4 < 9; i_4 += 2) 
                {
                    var_26 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_8 [i_4 - 2] [i_4 - 1] [i_4] [i_4 - 3]))));
                    var_27 = ((/* implicit */unsigned long long int) max((var_27), (((((/* implicit */unsigned long long int) var_5)) & (((((/* implicit */_Bool) arr_3 [i_0])) ? (var_4) : (((/* implicit */unsigned long long int) 486573222))))))));
                }
            }
        } 
    } 
}
