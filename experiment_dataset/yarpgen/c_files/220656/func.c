/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220656
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        for (long long int i_4 = 3; i_4 < 23; i_4 += 1) 
                        {
                            {
                                arr_12 [i_1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) (unsigned char)144)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) min(((unsigned char)140), (((/* implicit */unsigned char) (_Bool)1))))))));
                                var_14 |= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_4 [(unsigned char)24] [i_2] [(unsigned char)24]))));
                                var_15 *= ((/* implicit */short) ((unsigned int) arr_2 [i_4]));
                                var_16 += ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)144)) | (((((/* implicit */int) (unsigned char)112)) - (((/* implicit */int) (unsigned char)101))))));
                                arr_13 [i_0] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_9 [i_2] [i_4] [i_4 - 2] [i_0] [i_4 - 3] [i_4 - 2])) : (((((/* implicit */int) (unsigned char)101)) | (((/* implicit */int) arr_1 [i_3]))))))) ? (((long long int) (~(((/* implicit */int) arr_10 [(unsigned char)23] [i_0] [(unsigned char)13] [i_2] [i_3] [24]))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)116)), (-1105373855))))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_5 = 3; i_5 < 23; i_5 += 4) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 25; i_7 += 1) 
                        {
                            {
                                var_17 = var_5;
                                var_18 = ((/* implicit */unsigned char) ((var_1) + (max((-4169155828767815509LL), (((/* implicit */long long int) arr_16 [i_5 + 2] [i_5 + 2] [i_5] [i_5 - 3]))))));
                                var_19 += ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned char)154)) : (-2136660698)))) < (max((((/* implicit */long long int) arr_2 [i_0])), (5243539330959749193LL)))))) <= (((int) -4169155828767815514LL))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) 2119652355U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)144))) : (1578600649U))))));
    var_21 = ((unsigned short) min((max(((unsigned char)208), (((/* implicit */unsigned char) (signed char)127)))), (((/* implicit */unsigned char) ((var_11) >= (((/* implicit */long long int) var_4)))))));
    var_22 = ((/* implicit */signed char) ((long long int) ((((/* implicit */int) (unsigned char)132)) == (((/* implicit */int) (unsigned char)3)))));
}
