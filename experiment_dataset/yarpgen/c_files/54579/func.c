/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54579
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
    var_16 ^= ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1)));
    var_17 += ((/* implicit */_Bool) min((min((((var_15) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2)))), (((/* implicit */int) max(((unsigned short)65535), (var_3)))))), (((/* implicit */int) (!((_Bool)1))))));
    var_18 = var_1;
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)37355))))) ? ((+(((/* implicit */int) arr_2 [i_0 - 1] [i_0])))) : (((var_2) ? (((/* implicit */int) arr_1 [i_0 - 1] [i_0])) : (((/* implicit */int) var_13)))))) / (max((((/* implicit */int) max((arr_0 [i_1]), ((_Bool)1)))), (((arr_0 [i_0 - 1]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0))))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_10 [i_0] [i_0] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) min(((_Bool)1), (var_6)))) & (((/* implicit */int) min((arr_3 [i_0] [i_2]), (((/* implicit */unsigned short) (_Bool)1)))))))) ? (((/* implicit */int) (!(((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */int) var_11))));
                                var_20 = ((/* implicit */_Bool) ((((min((arr_4 [i_2] [i_2] [i_0]), (arr_4 [i_0 - 1] [i_0 - 1] [i_0]))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)4174)))) : (((((/* implicit */_Bool) arr_7 [i_0] [i_2] [i_0] [i_4])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)31)))))) / (((max(((_Bool)1), ((_Bool)1))) ? (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_12)))) : (((/* implicit */int) ((unsigned short) (unsigned short)31107)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_5 = 1; i_5 < 9; i_5 += 4) 
                {
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_21 -= ((/* implicit */_Bool) max((max(((unsigned short)7), (((/* implicit */unsigned short) (_Bool)1)))), (((/* implicit */unsigned short) (_Bool)1))));
                            arr_17 [i_1] [i_1] [(unsigned short)2] |= ((/* implicit */_Bool) max((((/* implicit */int) arr_3 [(_Bool)1] [(_Bool)1])), (((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned short) (_Bool)1))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_1 [i_0] [(unsigned short)2]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) min((var_13), (var_8)))), ((unsigned short)36114)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_10))));
}
