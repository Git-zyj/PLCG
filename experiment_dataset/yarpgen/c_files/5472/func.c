/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5472
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
    var_15 = var_14;
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 3; i_2 < 18; i_2 += 4) 
                {
                    for (unsigned char i_3 = 4; i_3 < 17; i_3 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned char) (unsigned short)27238);
                            var_17 -= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -462105038)))))) != (var_0)))) << (((/* implicit */int) ((((var_3) | (((/* implicit */int) arr_7 [i_0])))) >= (((/* implicit */int) (unsigned short)21615)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 19; i_4 += 1) 
                {
                    for (unsigned char i_5 = 0; i_5 < 19; i_5 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((unsigned char) ((((/* implicit */int) arr_5 [i_5])) / (arr_10 [i_0] [i_5] [i_4] [i_5])))))));
                            arr_17 [i_0] [i_5] [i_4] [12] [2] [2] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((unsigned short) (unsigned short)21593))) ? (((((/* implicit */int) arr_9 [i_5] [6ULL] [(unsigned short)16] [(unsigned short)12] [i_0])) % (-648012304))) : (((/* implicit */int) ((unsigned char) var_8)))))));
                            arr_18 [i_0] [i_0] = ((/* implicit */long long int) arr_11 [3] [i_4] [i_1] [i_0]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */int) var_11)) > (((/* implicit */int) (unsigned short)21609)))));
    var_20 -= ((/* implicit */unsigned char) ((var_9) * (((/* implicit */int) (unsigned short)0))));
}
