/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5298
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
    var_10 = 8361952127566705504LL;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            {
                arr_8 [i_1] = ((/* implicit */_Bool) (((((~(((/* implicit */int) (_Bool)1)))) != (((arr_6 [i_1 + 1]) ? (((/* implicit */int) arr_4 [i_0] [(unsigned char)10])) : (((/* implicit */int) var_7)))))) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) var_8))));
                var_11 ^= ((/* implicit */signed char) ((arr_2 [i_0] [i_0]) ? (((/* implicit */int) (unsigned short)48024)) : (((/* implicit */int) var_3))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((~(((/* implicit */int) arr_12 [i_0] [i_0])))), (((/* implicit */int) min(((_Bool)1), (arr_2 [(unsigned short)7] [i_2]))))))) ? ((-(((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_2 [(_Bool)1] [(_Bool)1])) : (((((/* implicit */_Bool) (short)-27045)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)-12))))))));
                            arr_16 [i_0] [i_1] [i_0] [i_2] [i_1] [(short)11] |= ((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (min((((((/* implicit */int) (signed char)-9)) + (((/* implicit */int) (signed char)-87)))), (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (arr_13 [i_0] [i_0] [i_2]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_4 = 0; i_4 < 12; i_4 += 4) 
    {
        for (signed char i_5 = 3; i_5 < 11; i_5 += 1) 
        {
            {
                arr_22 [i_4] [i_4] = ((/* implicit */long long int) (+(((var_9) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)230)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) var_7))))));
                var_13 ^= ((/* implicit */long long int) (_Bool)1);
                var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_4] [(signed char)9])) * (((/* implicit */int) (signed char)-6))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (max((((/* implicit */long long int) (unsigned char)57)), (-1LL)))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)-6))))), (min(((unsigned short)64057), (((/* implicit */unsigned short) var_1))))))))))));
            }
        } 
    } 
}
