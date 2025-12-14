/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22547
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
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 24; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 24; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    arr_8 [i_2] [i_0] [i_0] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_0 [i_0 - 2] [i_1 - 1])) ? (arr_4 [i_0 - 2]) : (((/* implicit */unsigned long long int) arr_0 [i_0 - 2] [i_1 + 1]))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 23; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                var_10 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_2 [(signed char)13])))) : (3899203632U)))) ? (((/* implicit */unsigned long long int) min((arr_0 [i_0] [i_3]), (((/* implicit */int) ((short) 17343658830974601960ULL)))))) : (((18407339519356267960ULL) | (((/* implicit */unsigned long long int) 17317308137472LL)))));
                                var_11 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((short) (short)(-32767 - 1))))));
                                arr_14 [i_4] = ((/* implicit */short) (signed char)-109);
                                var_12 = ((/* implicit */unsigned int) max((var_12), ((~(((((/* implicit */_Bool) (signed char)-68)) ? (1403086136U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))));
                                var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) min((((/* implicit */int) var_8)), ((((+(((/* implicit */int) var_6)))) & ((-(((/* implicit */int) (signed char)70)))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_5 = 1; i_5 < 14; i_5 += 1) 
    {
        arr_17 [i_5] [i_5] = ((/* implicit */unsigned int) var_2);
        var_14 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) min((((/* implicit */short) var_8)), (arr_9 [i_5] [i_5] [i_5] [i_5])))))) ? (var_3) : (((/* implicit */unsigned long long int) ((unsigned int) arr_1 [i_5 + 1])))));
    }
    var_15 = (signed char)67;
}
