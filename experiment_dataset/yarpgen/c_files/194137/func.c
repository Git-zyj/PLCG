/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194137
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
    var_14 |= ((/* implicit */short) max((((/* implicit */long long int) var_13)), ((~(var_5)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [i_0 + 2] [i_0 + 2]))))), (min(((~(13011717618714948709ULL))), (((/* implicit */unsigned long long int) var_0))))));
                var_15 = ((/* implicit */unsigned char) arr_3 [i_0] [i_1]);
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 13; i_2 += 4) 
                {
                    for (short i_3 = 2; i_3 < 13; i_3 += 2) 
                    {
                        {
                            arr_13 [i_0] [i_1] [i_2 - 1] [i_3 + 1] [i_3 + 1] [i_3 - 2] = ((/* implicit */signed char) ((short) 0ULL));
                            var_16 = var_5;
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */short) min((((/* implicit */long long int) var_8)), (max((((/* implicit */long long int) var_6)), (((((/* implicit */_Bool) var_1)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (short)32754)))))))));
    var_18 &= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3))))))) || (((/* implicit */_Bool) ((signed char) (!(((/* implicit */_Bool) var_9))))))));
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 15; i_4 += 1) 
    {
        for (short i_5 = 2; i_5 < 14; i_5 += 1) 
        {
            for (unsigned short i_6 = 0; i_6 < 15; i_6 += 4) 
            {
                {
                    var_19 = ((/* implicit */short) ((long long int) (((_Bool)1) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_14 [i_4]))) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_4] [i_6]))))));
                    arr_21 [i_4] [i_4] [i_6] = arr_15 [i_4];
                    /* LoopNest 2 */
                    for (short i_7 = 2; i_7 < 12; i_7 += 3) 
                    {
                        for (unsigned short i_8 = 2; i_8 < 14; i_8 += 3) 
                        {
                            {
                                arr_26 [i_4] [(_Bool)0] [(_Bool)0] [(_Bool)0] [(_Bool)0] [i_4] [i_4] = ((/* implicit */signed char) min((max((arr_25 [i_5 - 2] [i_8 + 1] [i_4] [i_4] [i_7 - 1]), (((/* implicit */unsigned int) (unsigned short)26527)))), (((((/* implicit */_Bool) arr_15 [i_4])) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) ^ (3301841489U))) : (((unsigned int) arr_23 [i_4] [9LL] [i_6] [i_7] [i_8 - 1]))))));
                                var_20 = ((/* implicit */long long int) arr_22 [(signed char)5] [i_4] [i_4] [i_4]);
                                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) 1553725170U))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_16 [i_6]), (((/* implicit */signed char) min((arr_17 [i_4] [i_7] [(unsigned short)5]), ((_Bool)0)))))))) : ((+(((((/* implicit */_Bool) var_3)) ? (11003311047730280194ULL) : (((/* implicit */unsigned long long int) 993125811U))))))));
                                var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (~(min((((/* implicit */long long int) var_12)), (var_5))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
