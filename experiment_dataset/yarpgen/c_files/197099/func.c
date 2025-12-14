/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197099
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
    var_16 |= ((/* implicit */unsigned short) ((var_7) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_0) != (((/* implicit */unsigned long long int) var_14)))))) : (var_2)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (unsigned char i_1 = 4; i_1 < 16; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) min((var_17), (((((/* implicit */_Bool) (((~(arr_3 [i_0] [i_0] [i_1]))) ^ (((/* implicit */unsigned long long int) (~(var_1))))))) ? (((var_5) ? (max((((/* implicit */unsigned long long int) -1)), (var_10))) : (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0] [i_1])))) : (((((/* implicit */_Bool) arr_2 [i_0 + 2] [i_1 - 1] [i_0 - 1])) ? (((/* implicit */unsigned long long int) var_8)) : (var_11)))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0] [(signed char)14] [i_1] [i_3] = ((/* implicit */unsigned int) (~((-(((/* implicit */int) var_7))))));
                            /* LoopSeq 3 */
                            for (int i_4 = 0; i_4 < 19; i_4 += 1) /* same iter space */
                            {
                                arr_15 [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */signed char) max((max((var_2), (((/* implicit */unsigned long long int) arr_10 [i_1] [i_0 - 2] [i_1 - 4])))), ((-(min((var_0), (var_11)))))));
                                var_18 += ((/* implicit */short) 2537906768243218271LL);
                            }
                            for (int i_5 = 0; i_5 < 19; i_5 += 1) /* same iter space */
                            {
                                arr_18 [i_0] [i_1 - 1] [i_1] [i_1] [i_2] [i_0] [i_5] = ((/* implicit */short) var_1);
                                var_19 -= ((/* implicit */unsigned char) max(((-(((unsigned int) var_3)))), (((/* implicit */unsigned int) min((0), ((-(((/* implicit */int) (_Bool)0)))))))));
                                arr_19 [i_2] [i_1] [i_2] [i_2] [i_2] = ((/* implicit */short) var_10);
                                var_20 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_5] [i_2] [i_2] [i_0])) ? (((/* implicit */long long int) (~((~(((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */_Bool) ((int) 4194272))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) 4194261)), (1442295909U)))) : (((((/* implicit */_Bool) arr_12 [i_2] [i_2] [i_2] [i_3] [i_5] [i_2] [i_3])) ? (arr_4 [i_2] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))))));
                            }
                            for (int i_6 = 0; i_6 < 19; i_6 += 1) /* same iter space */
                            {
                                var_21 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((+(var_0))) ^ (max((arr_20 [i_1] [i_1] [i_3] [i_1] [6LL] [i_6]), (var_2)))))) ? (((((/* implicit */_Bool) ((signed char) -2537906768243218283LL))) ? (arr_17 [6ULL] [i_0] [i_1 + 2] [i_1] [i_2] [i_2] [i_6]) : ((~(arr_14 [i_1] [i_1] [i_2] [i_6] [i_6]))))) : (((/* implicit */int) arr_0 [i_0 - 2] [i_1 - 4]))));
                                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) arr_10 [i_1] [i_0 + 1] [i_1]))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) -1463549357097515724LL)) : (arr_22 [i_0] [i_0 + 1] [i_2] [i_0] [i_1] [i_2]))) : ((~(arr_20 [i_0] [i_0 + 1] [i_0] [i_3] [i_6] [i_6])))));
                            }
                            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) var_14))));
                            arr_23 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((unsigned char) max((arr_22 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1]), (((/* implicit */unsigned long long int) 2537906768243218274LL)))));
                            var_24 -= ((/* implicit */long long int) arr_17 [i_3] [i_1 - 3] [i_2] [i_3] [i_1] [i_2] [i_3]);
                        }
                    } 
                } 
                arr_24 [i_1] [i_1] = ((/* implicit */signed char) (((!((!(((/* implicit */_Bool) var_4)))))) ? (var_14) : (min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0] [i_0] [i_1 - 4] [i_0]))))), (((((/* implicit */_Bool) arr_5 [i_0] [8])) ? (arr_6 [i_0] [i_1] [i_1 - 4] [i_1]) : (((/* implicit */unsigned int) -6))))))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_9))));
}
