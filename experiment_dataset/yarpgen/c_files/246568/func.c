/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246568
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
    var_11 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_3)))))));
    var_12 |= ((/* implicit */int) (~((-9223372036854775807LL - 1LL))));
    var_13 ^= ((((/* implicit */_Bool) ((signed char) var_4))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_9));
    var_14 *= ((/* implicit */signed char) (+(((/* implicit */int) var_8))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned char)19)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL))))) : (((((/* implicit */_Bool) (unsigned short)65534)) ? (((/* implicit */int) (unsigned short)65534)) : (((/* implicit */int) var_2))))))) || ((!(((/* implicit */_Bool) (unsigned short)1)))))))));
                /* LoopSeq 3 */
                for (long long int i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    var_16 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 929770176741279197LL)) ? ((~(min((-3544558733590953687LL), (((/* implicit */long long int) arr_6 [i_0] [6LL] [10])))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [0] [i_1 + 1])) ? (((/* implicit */int) (unsigned short)30115)) : (((/* implicit */int) arr_2 [i_2] [i_1 - 1])))))));
                    arr_7 [i_1] [10ULL] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-98)) ? (15217967940769627926ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65534)))))))))));
                    var_17 -= ((/* implicit */unsigned short) max((((/* implicit */int) ((_Bool) ((arr_0 [i_2]) < (((/* implicit */long long int) ((/* implicit */int) arr_2 [(unsigned char)13] [i_1]))))))), ((-(((((/* implicit */int) var_3)) & (((/* implicit */int) var_10))))))));
                    arr_8 [i_1] [12ULL] [i_1] [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)4))));
                    var_18 = ((/* implicit */signed char) min((var_18), (min((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_3 [i_1 - 1] [(unsigned short)14]))))), (arr_2 [i_1 - 1] [i_1 + 1])))));
                }
                for (unsigned int i_3 = 1; i_3 < 13; i_3 += 2) 
                {
                    arr_11 [6ULL] |= ((/* implicit */unsigned short) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)2))) ^ (arr_9 [i_0] [0LL] [5U])))));
                    arr_12 [i_1] [i_1] [i_0] = ((/* implicit */signed char) (_Bool)1);
                }
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    arr_17 [15ULL] [15ULL] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15827154737420321111ULL)) ? (((/* implicit */long long int) 2672862954U)) : (3544558733590953708LL)));
                    var_19 |= ((/* implicit */unsigned char) arr_0 [i_0]);
                }
            }
        } 
    } 
}
