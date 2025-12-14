/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231932
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
    var_15 = ((/* implicit */int) var_2);
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((min((var_8), (var_7))) << (((((/* implicit */int) var_2)) + (9654)))))) && (((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)10))) & (10588081550131532526ULL))), (((/* implicit */unsigned long long int) var_4)))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) 1073741823U)) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_2])) : (((/* implicit */int) arr_6 [i_0] [(unsigned short)21] [i_2])))) : (((((/* implicit */int) (_Bool)0)) << (((((/* implicit */int) (unsigned char)68)) - (58))))));
                    arr_7 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */long long int) arr_6 [i_0] [i_1 - 1] [i_2]);
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 8796093022208LL)) ? (17286488601760098133ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8161))) : (11028635441520189548ULL)))) ? (2590395082U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))))));
        arr_8 [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_3 [i_0] [i_0] [22])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))) : (3926461521975107199ULL))) <= (((/* implicit */unsigned long long int) 1704572207U))));
        var_19 = ((/* implicit */int) arr_4 [i_0] [(unsigned short)13] [i_0]);
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 23; i_3 += 3) 
        {
            for (long long int i_4 = 4; i_4 < 20; i_4 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 23; i_5 += 4) 
                    {
                        for (int i_6 = 0; i_6 < 23; i_6 += 4) 
                        {
                            {
                                var_20 |= ((/* implicit */unsigned int) ((((/* implicit */int) ((arr_3 [i_4] [i_4 - 4] [i_4]) <= (((/* implicit */unsigned long long int) arr_12 [i_4] [i_4 - 4] [i_4] [i_4]))))) >> (((((int) 4194288)) - (4194283)))));
                                arr_17 [i_6] [i_3] [10ULL] [i_3] [(signed char)2] = ((/* implicit */_Bool) arr_10 [i_6] [i_6] [i_6]);
                                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) arr_14 [i_4 + 2] [i_4 + 2] [i_4 - 4] [i_4 - 4] [i_4 - 3] [i_4]))));
                                arr_18 [i_6] [(unsigned short)21] [(unsigned short)21] [i_0] [i_0] = min((((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_12 [i_4] [i_4 - 4] [i_4 + 1] [3U])) <= (arr_16 [i_4] [i_4 - 1] [i_4 - 4] [i_4] [(unsigned short)18])))), (min((arr_13 [i_4 - 1] [i_4] [i_4 - 1] [i_4] [8U] [i_4 - 1]), (arr_13 [i_4] [i_4 + 1] [i_4 - 4] [i_4] [i_4] [i_4]))));
                                var_22 = ((/* implicit */unsigned int) (+(-1918699200790948616LL)));
                            }
                        } 
                    } 
                    var_23 *= ((/* implicit */int) ((((/* implicit */int) ((short) min((((/* implicit */unsigned long long int) 1704572203U)), (14520282551734444427ULL))))) <= ((~(((/* implicit */int) arr_15 [i_4 + 1] [i_4 + 1] [i_4] [i_4 + 3] [i_4 + 1] [i_4 + 1] [i_4]))))));
                }
            } 
        } 
    }
}
