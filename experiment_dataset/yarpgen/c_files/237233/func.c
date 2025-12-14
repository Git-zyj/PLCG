/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237233
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
    var_10 = ((/* implicit */int) var_0);
    var_11 = ((/* implicit */signed char) (-(((unsigned int) ((((/* implicit */int) var_4)) * (((/* implicit */int) (unsigned short)65535)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_12 = max((((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) (_Bool)1)))), ((!(((/* implicit */_Bool) (signed char)-61)))));
                arr_5 [i_0] [i_0] = ((/* implicit */signed char) (~(((1168701430039670645LL) << (((((/* implicit */int) arr_4 [i_0])) - (116)))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (int i_4 = 1; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned long long int) (+(((int) ((((/* implicit */_Bool) arr_3 [(unsigned short)15] [(unsigned short)15] [(unsigned short)15])) ? (((/* implicit */int) (short)-23889)) : (((/* implicit */int) (short)-23889)))))));
                                var_14 = ((/* implicit */unsigned short) (signed char)-1);
                                var_15 = ((max((((/* implicit */unsigned long long int) arr_2 [i_4 - 1])), ((-(var_8))))) == (((/* implicit */unsigned long long int) (+(-1384278296)))));
                                var_16 = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_3]))) > (((((/* implicit */_Bool) -1117016282)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0] [4] [(signed char)1]))))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])))))) <= ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_6)))))) : (((/* implicit */int) (!(((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_2 [i_0])))))))));
                                arr_13 [(signed char)16] [(signed char)16] [i_2] [5] [i_2] [(signed char)16] [i_2] = ((/* implicit */unsigned int) arr_8 [i_0] [i_0] [(_Bool)1]);
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) max(((short)12084), (((/* implicit */short) (_Bool)0))))), ((-(arr_10 [i_0] [i_0] [7ULL] [(_Bool)1] [i_1] [i_1])))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_12 [i_0] [i_1] [(unsigned short)2] [i_1] [(unsigned short)2])) ? (((/* implicit */int) var_9)) : (866719740))) >= ((+(((/* implicit */int) arr_6 [i_1] [i_0] [4] [12U]))))))) : (((/* implicit */int) arr_4 [i_0]))));
            }
        } 
    } 
}
