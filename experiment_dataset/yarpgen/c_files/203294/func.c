/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203294
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
    var_14 *= (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_13)), ((unsigned short)16))))) > (max((((/* implicit */unsigned int) (_Bool)1)), (var_5)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 21; i_1 += 2) 
        {
            {
                var_15 += ((/* implicit */signed char) (-(((/* implicit */int) ((short) ((((/* implicit */_Bool) -1900266332)) && (((/* implicit */_Bool) var_8))))))));
                arr_4 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)16))))))) ? (((/* implicit */int) (signed char)-77)) : (((/* implicit */int) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)13628))) / (8951127509715928651LL)))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 18; i_2 += 1) 
                {
                    for (int i_3 = 2; i_3 < 20; i_3 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) (unsigned char)74)) ? (-1) : (((/* implicit */int) (_Bool)1)))))) ? ((-(5814475936306530206LL))) : (min(((+(var_1))), (((/* implicit */long long int) var_10))))));
                            arr_10 [i_0] [i_1 - 3] [i_2 + 1] [i_3 + 1] = ((/* implicit */signed char) (short)-5241);
                            arr_11 [3LL] [i_2] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */long long int) 479482532)), (8951127509715928652LL))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
