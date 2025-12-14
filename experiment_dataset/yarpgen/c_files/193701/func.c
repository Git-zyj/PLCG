/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193701
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
    var_15 *= ((/* implicit */signed char) ((_Bool) (short)(-32767 - 1)));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */int) (short)(-32767 - 1));
                arr_7 [i_0] [(signed char)3] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((int) (short)(-32767 - 1)))))) ? (var_7) : (((/* implicit */long long int) (-(arr_1 [i_0 + 1]))))));
                arr_8 [i_0] [i_0] = ((/* implicit */int) ((signed char) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) > (var_1)))));
                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (+(((((/* implicit */int) (signed char)-8)) - (((/* implicit */int) arr_6 [i_1] [i_1] [i_0 + 1]))))))), (((((/* implicit */_Bool) ((var_5) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)30))) : (var_11)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4444526931563476460ULL)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (signed char)7))))) : (max((6529386412134156903ULL), (((/* implicit */unsigned long long int) var_9)))))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) var_3))));
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 18; i_2 += 1) 
    {
        for (short i_3 = 3; i_3 < 14; i_3 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 18; i_4 += 4) 
                {
                    for (int i_5 = 0; i_5 < 18; i_5 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((unsigned long long int) max((var_6), (((/* implicit */unsigned int) ((unsigned short) arr_9 [i_5])))))))));
                            var_20 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_1)) ? (arr_16 [i_2] [(_Bool)1] [i_4]) : (arr_18 [i_2] [i_4] [i_4] [i_4] [i_4] [(signed char)14])))))) ? (((long long int) (short)32767)) : (((/* implicit */long long int) (~((~(((/* implicit */int) var_9)))))))));
                        }
                    } 
                } 
                arr_21 [i_2] [i_2] = ((/* implicit */short) (~(max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_2]))) * (arr_13 [2U] [i_2]))), (((/* implicit */unsigned long long int) ((unsigned char) (short)-1546)))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_21 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_17 [(unsigned char)2])) ? (arr_22 [i_6]) : (arr_17 [(unsigned short)2]))) & (((arr_17 [(signed char)16]) ^ (arr_22 [i_6])))));
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)47)) ? (((/* implicit */int) (short)-32741)) : (((/* implicit */int) (unsigned char)225))));
        var_23 = ((/* implicit */unsigned long long int) (((((_Bool)1) || (((/* implicit */_Bool) (short)32767)))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (short)-1))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)32767)))))));
    }
}
