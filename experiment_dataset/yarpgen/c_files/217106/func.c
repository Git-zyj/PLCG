/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217106
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
    var_13 ^= ((/* implicit */short) ((((/* implicit */unsigned long long int) var_2)) ^ ((-(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) * (var_10)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                arr_6 [i_0] [(short)11] [i_0] = ((/* implicit */unsigned int) (_Bool)1);
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */_Bool) min((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) | (var_10))) & (((/* implicit */unsigned long long int) arr_2 [i_3])))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1)))))));
                            arr_13 [i_0] [i_0] [(signed char)9] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0] [i_0])) | (((/* implicit */int) arr_0 [i_0] [i_0]))))) ^ (((((arr_10 [i_0] [i_1] [i_0] [i_1] [i_3]) ? (8612468675351109010ULL) : (arr_1 [i_3]))) & (((/* implicit */unsigned long long int) (~(arr_2 [i_0]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
