/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243922
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
    var_12 = ((unsigned int) var_7);
    var_13 = ((/* implicit */_Bool) ((unsigned char) (_Bool)0));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned int) min((var_14), (var_6)));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 2; i_2 < 13; i_2 += 4) 
                {
                    var_15 -= ((/* implicit */_Bool) max((max((((/* implicit */unsigned int) (signed char)7)), (var_9))), (((/* implicit */unsigned int) max((((/* implicit */unsigned char) var_0)), ((unsigned char)16))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) max((((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))), (max((((/* implicit */unsigned int) -1317182637)), (var_6))))))));
                                arr_14 [i_0 - 1] [i_1] [i_2] [i_3] [9] [i_4] [i_0] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) 96U))))));
                                var_17 = ((/* implicit */unsigned int) max((var_17), (min((((/* implicit */unsigned int) var_10)), (((var_7) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
                                arr_15 [i_0] = ((/* implicit */unsigned char) min(((!(((/* implicit */_Bool) ((unsigned int) (_Bool)0))))), ((_Bool)1)));
                            }
                        } 
                    } 
                }
                var_18 ^= ((/* implicit */unsigned int) -1697322587);
                /* LoopSeq 2 */
                for (unsigned char i_5 = 2; i_5 < 14; i_5 += 2) 
                {
                    arr_19 [i_0] [i_0] = ((/* implicit */int) ((unsigned int) 753310280U));
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (~(-1604279820)))) != ((~((~(var_6)))))));
                    var_20 = ((((/* implicit */_Bool) (-(((unsigned int) 96U))))) || (((/* implicit */_Bool) -1883873111)));
                }
                /* vectorizable */
                for (unsigned int i_6 = 1; i_6 < 15; i_6 += 3) 
                {
                    arr_24 [i_0] [i_0] [i_6] = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 16; i_7 += 3) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 16; i_8 += 1) 
                        {
                            {
                                var_21 = ((unsigned char) (_Bool)1);
                                arr_30 [i_0] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((_Bool) (signed char)6)))));
                                arr_31 [i_0] [i_1] [i_6 + 1] [i_7] [i_8] = ((/* implicit */int) ((2330613455U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)119)))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
