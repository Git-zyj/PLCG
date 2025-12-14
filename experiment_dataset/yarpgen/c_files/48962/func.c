/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48962
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
    var_10 = ((/* implicit */short) var_9);
    /* LoopNest 3 */
    for (short i_0 = 4; i_0 < 18; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_6 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)30720)) ? (-7090632069992525816LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_0]))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                arr_11 [i_1] = ((/* implicit */int) (unsigned short)21305);
                                var_11 = ((/* implicit */unsigned char) (((((((~(((/* implicit */int) var_4)))) | (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1)))))) + (2147483647))) << (((((min((var_6), (((((/* implicit */int) arr_8 [i_0] [i_2] [i_3] [i_4])) | (((/* implicit */int) arr_3 [i_1] [i_1])))))) + (2141783189))) - (6)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
