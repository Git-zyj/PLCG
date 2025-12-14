/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209155
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
    var_13 = ((/* implicit */short) var_1);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    arr_9 [i_0] [i_1] [i_2] [19LL] = ((/* implicit */unsigned short) ((short) max((((/* implicit */long long int) ((int) arr_5 [19] [i_1 + 2]))), (var_12))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        arr_13 [i_0] [i_3] [i_3] = (+(((/* implicit */int) ((((/* implicit */int) (unsigned char)162)) < (((/* implicit */int) var_3))))));
                        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)28559)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)504)))))) : (((long long int) -272237906))));
                        var_15 -= ((/* implicit */unsigned short) (signed char)-114);
                        var_16 = ((/* implicit */long long int) 285045225);
                    }
                    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) min(((unsigned short)65512), (((/* implicit */unsigned short) (short)-32749))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) : (arr_1 [i_0])));
                    arr_14 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(var_7)))) ? (((arr_5 [i_1 - 3] [(unsigned short)18]) ^ (-13LL))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned short)51931))))));
                }
                arr_15 [6LL] = var_8;
            }
        } 
    } 
    var_18 = ((long long int) (unsigned char)29);
    /* LoopNest 2 */
    for (short i_4 = 0; i_4 < 20; i_4 += 1) 
    {
        for (unsigned char i_5 = 0; i_5 < 20; i_5 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned short) ((-5962045342777824466LL) & (((/* implicit */long long int) 808101918))));
                var_20 = ((/* implicit */int) arr_8 [i_4] [i_5] [i_5] [i_4]);
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) var_0);
}
