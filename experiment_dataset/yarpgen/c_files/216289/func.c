/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216289
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */signed char) max((((/* implicit */int) max((arr_4 [i_1 - 1] [i_1 - 1]), (arr_4 [i_1 + 1] [i_1 + 1])))), (((arr_4 [i_1 + 1] [i_1 - 1]) ? (((/* implicit */int) arr_4 [i_1 - 1] [i_1 + 1])) : (((/* implicit */int) var_10))))));
                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((((/* implicit */int) (signed char)-74)) == ((-(((/* implicit */int) (unsigned char)132)))))) ? (((/* implicit */unsigned int) min(((+(((/* implicit */int) (signed char)-65)))), (((/* implicit */int) (signed char)-24))))) : (((((/* implicit */_Bool) 18)) ? (((arr_4 [i_0] [i_1]) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)132))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_3 [i_0]) && (((/* implicit */_Bool) (unsigned char)132)))))))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 4; i_2 < 13; i_2 += 1) 
    {
        for (unsigned char i_3 = 3; i_3 < 14; i_3 += 1) 
        {
            {
                arr_10 [i_3] [i_3 - 1] [i_3] = (unsigned char)122;
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 15; i_4 += 1) 
                {
                    for (long long int i_5 = 0; i_5 < 15; i_5 += 1) 
                    {
                        {
                            arr_15 [i_3] = ((/* implicit */unsigned int) (+(((-18) & ((~(2147483647)))))));
                            var_20 = ((/* implicit */long long int) arr_6 [i_2] [(signed char)0]);
                        }
                    } 
                } 
                arr_16 [i_3] = ((/* implicit */long long int) (signed char)117);
                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (-(((unsigned int) (_Bool)1)))))));
            }
        } 
    } 
    var_22 -= (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) != (((var_11) ? (7ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))));
}
