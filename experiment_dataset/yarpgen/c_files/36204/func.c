/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36204
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
    for (unsigned short i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */long long int) (((+(((/* implicit */int) arr_1 [i_0 + 1])))) << (((/* implicit */int) (_Bool)1))));
                arr_7 [i_0] = ((/* implicit */_Bool) ((((long long int) ((((/* implicit */int) (unsigned short)16128)) - (((/* implicit */int) var_8))))) + (((/* implicit */long long int) max(((-(((/* implicit */int) (short)-26674)))), (((/* implicit */int) min(((unsigned short)16114), ((unsigned short)9691)))))))));
                var_10 = ((/* implicit */_Bool) min((var_10), (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */int) (short)3840)) : (((/* implicit */int) arr_1 [i_0 - 1])))) - (((/* implicit */int) ((_Bool) (unsigned short)2654))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 16; i_2 += 1) 
    {
        for (long long int i_3 = 0; i_3 < 16; i_3 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned int) ((((/* implicit */int) var_1)) << (((/* implicit */int) ((_Bool) arr_9 [i_2] [i_3])))));
                var_12 -= ((/* implicit */_Bool) (+(max((((/* implicit */unsigned int) var_1)), (arr_14 [i_2])))));
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 16; i_4 += 4) 
                {
                    for (unsigned short i_5 = 0; i_5 < 16; i_5 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned int) min((var_13), (((arr_18 [15U] [i_2]) * (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)49408)) << (((((/* implicit */int) var_6)) - (60))))))))));
                            arr_21 [i_5] [(_Bool)1] [(_Bool)1] [(_Bool)1] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_5] [i_5] [(short)3] [i_5] [i_5]))));
                            var_14 = ((/* implicit */unsigned int) (_Bool)1);
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 -= ((/* implicit */long long int) (short)17804);
    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) var_2))));
}
