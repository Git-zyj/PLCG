/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40078
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = (-(((min((arr_5 [i_0]), ((_Bool)0))) ? (((/* implicit */int) max(((unsigned char)11), (var_6)))) : ((-(((/* implicit */int) (unsigned char)251)))))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_7)))) ? (((/* implicit */int) ((unsigned char) ((unsigned short) (unsigned char)5)))) : (((((/* implicit */_Bool) var_3)) ? ((-(((/* implicit */int) (unsigned short)6031)))) : ((-(((/* implicit */int) (unsigned char)124))))))));
                                var_19 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */int) (signed char)64)) >= (((/* implicit */int) arr_14 [i_1] [i_1 - 1] [i_1] [i_1] [i_1])))));
                                var_20 = ((/* implicit */unsigned long long int) (unsigned short)32766);
                                arr_15 [i_0] [i_0] [i_1 - 1] [i_1] [i_3] [i_4] [i_4] = ((/* implicit */unsigned char) min((3413637463504177065ULL), (((/* implicit */unsigned long long int) -1600632511))));
                                var_21 *= ((/* implicit */signed char) max((15033106610205374555ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])) == (((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) var_14))));
                var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)106)) ? (((/* implicit */int) arr_8 [i_1] [i_0] [i_1] [i_1 - 1])) : (((/* implicit */int) arr_8 [i_1] [i_0] [i_1] [i_1]))))), (((((/* implicit */_Bool) var_9)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8718)))))))) ? (((((/* implicit */_Bool) (+(var_13)))) ? (17179869176ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) arr_9 [i_0] [i_0] [i_0] [i_0])), (arr_7 [i_0] [i_0] [i_0] [i_1 - 1]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_8)) ? (((((/* implicit */int) var_9)) / (((/* implicit */int) var_9)))) : (((/* implicit */int) var_0))))));
    /* LoopNest 2 */
    for (unsigned short i_5 = 0; i_5 < 17; i_5 += 3) 
    {
        for (unsigned short i_6 = 0; i_6 < 17; i_6 += 2) 
        {
            {
                var_25 *= ((/* implicit */unsigned short) (unsigned char)11);
                var_26 = ((/* implicit */unsigned short) arr_16 [i_5]);
                var_27 = ((/* implicit */unsigned short) ((short) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_6] [i_5] [i_5] [i_6]))))), (-209577462))));
            }
        } 
    } 
}
