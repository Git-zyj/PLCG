/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233972
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)1))))) ^ (((/* implicit */int) var_7))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_5 [8U] [(_Bool)0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) arr_4 [i_1])), (arr_1 [i_0] [i_1])))), (((((/* implicit */unsigned long long int) arr_2 [i_0])) + (arr_0 [i_0])))))) ? (0U) : (((/* implicit */unsigned int) (+((+(((/* implicit */int) arr_1 [i_0] [i_1])))))))));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 4; i_2 < 21; i_2 += 2) 
                {
                    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)26)) ^ (((/* implicit */int) arr_1 [i_0] [i_1]))))) ? (((/* implicit */int) max((arr_1 [i_1] [(unsigned short)13]), (((/* implicit */unsigned short) var_2))))) : (((/* implicit */int) max((arr_6 [i_2 - 2]), (((/* implicit */short) (unsigned char)0)))))));
                    arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) max((((((/* implicit */int) (unsigned short)32438)) * ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))), (((((/* implicit */int) (_Bool)1)) >> (((((((/* implicit */_Bool) 1522875030U)) ? (((/* implicit */unsigned int) -767863566)) : (934660711U))) - (3527103721U)))))));
                    arr_11 [(_Bool)1] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) (unsigned char)208)) : (((/* implicit */int) arr_9 [i_0] [(short)21] [i_0]))))) <= (((((/* implicit */_Bool) (unsigned char)217)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (14677228202180779578ULL))))))));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    arr_14 [i_0] [9ULL] [i_1] [i_0] = ((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3439))) % (((((/* implicit */_Bool) (unsigned short)38008)) ? (var_9) : (((/* implicit */unsigned int) 536870911)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 22; i_4 += 1) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 22; i_5 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_3))));
                                var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_3] [i_1] [19ULL] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_5] [(signed char)1] [i_4] [i_0] [i_1] [i_0] [i_0]))) : (arr_13 [i_0] [0] [i_5])))) ? (((/* implicit */int) ((signed char) arr_1 [i_0] [i_0]))) : (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) ((((((((/* implicit */int) arr_16 [i_0] [i_0] [i_3] [i_4])) - (((/* implicit */int) (unsigned short)44807)))) + (2147483647))) >> (((((/* implicit */int) ((signed char) arr_9 [(signed char)10] [8] [i_5]))) - (77)))))))))));
                            }
                        } 
                    } 
                    arr_22 [i_0] [i_0] [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [20]))))) == (289405435)));
                    var_18 ^= ((/* implicit */int) ((((((/* implicit */_Bool) arr_12 [i_3] [i_0] [i_3])) ? (var_6) : (arr_12 [i_0] [(unsigned char)15] [i_3]))) <= (((((/* implicit */_Bool) (unsigned char)20)) ? (arr_12 [i_0] [i_1] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_6 = 0; i_6 < 22; i_6 += 1) 
                    {
                        arr_25 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) max((arr_23 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (short)(-32767 - 1))), ((unsigned short)54886))))));
                        arr_26 [21] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)16)) ? (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_1 [i_0] [i_6])) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_2)) >> (((((/* implicit */int) arr_20 [i_0] [i_1] [i_1] [i_1] [i_6] [i_6] [i_6])) - (94)))))))))));
                    }
                }
            }
        } 
    } 
}
