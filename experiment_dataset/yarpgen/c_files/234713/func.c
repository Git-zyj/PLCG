/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234713
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 3; i_2 < 18; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 19; i_3 += 4) 
                    {
                        {
                            arr_9 [i_0] [i_0] [i_2 - 1] [i_3] = ((/* implicit */long long int) var_16);
                            arr_10 [i_0] [i_1] [i_2 + 1] [(_Bool)1] [i_3 - 2] = ((((var_16) >> (((((arr_7 [i_2] [i_2 - 2] [i_2] [i_2] [i_2] [i_2]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))) - (6929570909776008648ULL))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_7)) << (((arr_1 [i_2]) - (6936837093144453375LL)))))))));
                            arr_11 [i_2] [i_2] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)101))) : (12286447961439544202ULL))), (((/* implicit */unsigned long long int) ((signed char) arr_8 [i_0] [i_1] [i_0] [i_3 - 2])))));
                            /* LoopSeq 2 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                arr_14 [i_4] [i_4] [i_4] [i_4] [i_0] = ((/* implicit */_Bool) min((((/* implicit */int) var_14)), (var_15)));
                                var_18 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((min((var_15), (((/* implicit */int) arr_3 [(unsigned short)1] [i_1])))), (((/* implicit */int) max((arr_5 [i_3 + 1] [i_2] [12ULL] [i_0]), (var_3))))))), (min((min((((/* implicit */unsigned long long int) -6765866444579727261LL)), (4398046511088ULL))), (((/* implicit */unsigned long long int) ((unsigned int) arr_4 [i_0] [i_0])))))));
                                arr_15 [i_4] [(unsigned short)15] [i_2] [i_1] [i_1] [i_4] = ((/* implicit */unsigned char) min((((/* implicit */signed char) ((((((/* implicit */_Bool) arr_3 [i_1] [(_Bool)1])) && (((/* implicit */_Bool) arr_0 [(signed char)2])))) && (((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_1] [i_4]))))), (var_7)));
                            }
                            for (unsigned short i_5 = 0; i_5 < 20; i_5 += 4) 
                            {
                                var_19 = ((/* implicit */_Bool) var_11);
                                var_20 = ((/* implicit */_Bool) var_12);
                                var_21 = ((/* implicit */long long int) max((((/* implicit */short) (_Bool)1)), ((short)26672)));
                            }
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((long long int) ((short) arr_16 [(unsigned short)12] [i_1]))) > (((/* implicit */long long int) ((/* implicit */int) var_4))))))));
                var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((unsigned char) arr_0 [i_0]))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) * (var_2)))))) ? (arr_13 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1] [i_1]) : (max((((/* implicit */unsigned long long int) min(((short)-26655), ((short)26667)))), (arr_7 [i_0] [i_0] [i_0] [i_0] [2ULL] [2U])))));
            }
        } 
    } 
    var_24 = ((/* implicit */long long int) ((unsigned long long int) 0U));
}
