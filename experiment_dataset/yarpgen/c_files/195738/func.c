/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195738
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
    var_18 -= ((/* implicit */signed char) ((var_9) ? (min((358969194U), (((((/* implicit */_Bool) 358969194U)) ? (3998303963U) : (296663346U))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
    var_19 = ((/* implicit */_Bool) var_4);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            {
                var_20 ^= ((/* implicit */_Bool) 2596716093U);
                arr_4 [i_0] [9U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 358969194U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (3998303985U)));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    var_21 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((signed char) arr_0 [i_0]))), (((((/* implicit */_Bool) 296663364U)) ? (1586266588U) : (1827087068U)))));
                    var_22 = ((/* implicit */signed char) max(((~(max((1506498085U), (3935998102U))))), (((((1619141732U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)115))))) << (((1698251202U) - (1698251190U)))))));
                    arr_7 [i_0] [i_0] [i_2] [i_0] = ((unsigned int) 759619541U);
                    var_23 -= ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 2596716098U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)76))) : (2467880228U)))) ? (((/* implicit */int) (signed char)-62)) : (((var_14) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1))))))));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 11; i_4 += 1) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 11; i_5 += 2) 
                        {
                            {
                                var_24 += ((((/* implicit */_Bool) ((unsigned int) ((var_13) && (((/* implicit */_Bool) var_4)))))) ? (((((/* implicit */_Bool) 1698251202U)) ? (((unsigned int) var_16)) : (((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)-118), (((/* implicit */signed char) (_Bool)1)))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)113)) && (((/* implicit */_Bool) (signed char)-103)))))));
                                var_25 = ((/* implicit */signed char) arr_11 [i_0] [0U] [i_4] [i_3] [i_1] [i_0]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 1; i_6 < 9; i_6 += 4) 
                    {
                        for (signed char i_7 = 0; i_7 < 11; i_7 += 1) 
                        {
                            {
                                var_26 = ((var_5) ? ((-(((arr_12 [i_6] [i_6] [i_0] [i_6] [i_6 + 1] [i_6]) << (((var_8) - (3496033912U))))))) : (min((min((((/* implicit */unsigned int) arr_17 [i_0] [i_1 - 2] [i_3] [7U] [(signed char)10])), (3479063516U))), (arr_2 [i_1]))));
                                var_27 = arr_23 [i_6 - 1] [i_1 + 1] [i_0] [i_6];
                            }
                        } 
                    } 
                    arr_25 [i_0] [2U] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (3844369236U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0] [i_1 + 2] [i_1 + 2] [(_Bool)1])))))) ? ((~(((((/* implicit */_Bool) arr_0 [i_0])) ? (var_2) : (arr_2 [i_3]))))) : (((((_Bool) 1827087070U)) ? (((((/* implicit */_Bool) arr_15 [i_0] [(signed char)3] [i_0] [i_0])) ? (var_8) : (arr_20 [i_0] [i_0] [(signed char)1] [i_1] [i_0]))) : (((arr_24 [i_3] [i_3] [i_0] [i_0] [i_0] [5U]) ? (var_16) : (var_17))))));
                    var_28 = 358969198U;
                    var_29 -= ((/* implicit */unsigned int) var_1);
                }
            }
        } 
    } 
}
