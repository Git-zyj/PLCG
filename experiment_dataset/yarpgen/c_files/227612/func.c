/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227612
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
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) arr_5 [(_Bool)1] [i_0] [9] [i_2]);
                    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)89)) ? (((/* implicit */int) (unsigned char)29)) : (((/* implicit */int) (_Bool)1))))) < (((unsigned int) min((arr_6 [i_0] [(_Bool)1]), (((/* implicit */unsigned char) arr_2 [i_1])))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (unsigned long long int i_4 = 1; i_4 < 21; i_4 += 2) 
        {
            {
                var_16 = ((/* implicit */int) arr_5 [i_3] [i_3] [i_4 - 1] [i_4 + 1]);
                arr_13 [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */int) arr_4 [i_3] [i_4 - 1])) - (((/* implicit */int) (_Bool)1))))))) ? (((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_10 [i_3] [i_4 - 1])) : (((/* implicit */int) (_Bool)1)))) + (((/* implicit */int) ((unsigned short) arr_0 [20U] [i_3]))))) : (((/* implicit */int) (_Bool)1))));
                arr_14 [i_4] = ((/* implicit */unsigned char) var_3);
            }
        } 
    } 
    var_17 = ((((/* implicit */long long int) (((-(((/* implicit */int) var_4)))) & (((int) 1187234902))))) & (((long long int) ((1081021056) == (19)))));
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 24; i_5 += 2) 
    {
        for (int i_6 = 0; i_6 < 24; i_6 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) ((unsigned char) arr_2 [i_5])))))));
                /* LoopNest 2 */
                for (unsigned char i_7 = 0; i_7 < 24; i_7 += 2) 
                {
                    for (long long int i_8 = 0; i_8 < 24; i_8 += 1) 
                    {
                        {
                            var_19 = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)2424))))), (var_10)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) min((arr_18 [i_5] [i_6]), (((/* implicit */int) arr_24 [i_5]))))) <= (1141811623683703260ULL)))) : (313322639));
                            var_20 = ((/* implicit */int) arr_5 [(short)8] [(short)8] [(_Bool)1] [(short)8]);
                            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((min((((/* implicit */int) (short)-14783)), (var_14))) ^ (((/* implicit */int) (_Bool)1))))) : (var_8))))));
                            arr_25 [i_6] [i_8] = ((/* implicit */_Bool) max(((~(((/* implicit */int) (short)32767)))), (((/* implicit */int) (!((_Bool)1))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
