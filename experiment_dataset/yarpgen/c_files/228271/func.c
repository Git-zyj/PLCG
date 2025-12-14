/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228271
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
    var_10 = ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)1))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_11 &= ((/* implicit */unsigned long long int) arr_0 [(signed char)11]);
        arr_3 [i_0] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)205)))))));
        var_12 ^= (+(((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (signed char)-127)) : (((/* implicit */int) var_7)))) - (min((((/* implicit */int) (signed char)76)), (2136653528))))));
    }
    var_13 |= ((/* implicit */unsigned long long int) (((+(((/* implicit */int) ((unsigned short) var_6))))) >= (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) var_9))) && (((/* implicit */_Bool) var_7)))))));
    /* LoopNest 2 */
    for (unsigned short i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            {
                var_14 -= ((/* implicit */unsigned int) arr_7 [i_1] [i_2]);
                /* LoopNest 2 */
                for (long long int i_3 = 0; i_3 < 15; i_3 += 1) 
                {
                    for (int i_4 = 0; i_4 < 15; i_4 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */int) (_Bool)1);
                            var_16 = ((/* implicit */long long int) (+(((/* implicit */int) max((var_3), (arr_5 [i_1]))))));
                            var_17 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) (unsigned char)44)))) ? (((((/* implicit */_Bool) arr_11 [i_1] [10] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (((long long int) (signed char)66)))) : (((/* implicit */long long int) ((unsigned int) (-(arr_8 [11ULL] [i_2] [i_4])))))));
                            var_18 ^= min((((/* implicit */int) (short)8)), (((((/* implicit */int) var_7)) | (((/* implicit */int) arr_4 [i_3])))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 15; i_5 += 4) 
                {
                    for (unsigned long long int i_6 = 2; i_6 < 12; i_6 += 2) 
                    {
                        {
                            arr_23 [i_1] [i_1] [i_5] [i_6] [i_5] [i_5] = ((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) var_2)), (var_6))), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)109))) != (arr_14 [i_1] [i_6] [i_1] [i_6] [i_6 + 3]))))));
                            arr_24 [i_1] [4U] [4U] [i_6] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((((/* implicit */_Bool) arr_14 [i_1] [i_6] [i_5] [i_6] [i_6])) ? (arr_7 [i_1] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
