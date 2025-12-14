/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216923
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
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_3 [i_0 + 1])))) + (((10179256763579181825ULL) & (((/* implicit */unsigned long long int) arr_1 [i_1] [i_0]))))));
                var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) arr_0 [i_0 - 2]))) ? (((14028750563425752194ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1] [(signed char)20] [i_0]))))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_0 [i_1]))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_2 = 0; i_2 < 24; i_2 += 3) 
    {
        for (short i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            for (long long int i_4 = 0; i_4 < 24; i_4 += 3) 
            {
                {
                    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */int) arr_7 [i_2])) << (((((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_8 [i_2] [i_3]))) + (14420LL))))) : (((/* implicit */int) ((short) ((((/* implicit */_Bool) (signed char)-1)) ? (4417993510283799420ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7936)))))))));
                    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)55)) << (((((/* implicit */int) (signed char)109)) - (96)))))) ? (18398188U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_10 [i_2] [i_2] [i_4] [i_4])) == (((/* implicit */int) arr_10 [i_2] [i_3] [i_4] [i_4]))))))));
                    var_17 = ((/* implicit */short) (~((-(((-6760418883756595760LL) | (((/* implicit */long long int) arr_9 [i_3] [i_2] [i_2]))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) (short)-19539)) ? (-2147483634) : (((/* implicit */int) (short)-7936)))))), (13908755187022880472ULL)));
}
