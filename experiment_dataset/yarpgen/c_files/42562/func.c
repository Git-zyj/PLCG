/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42562
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_15 ^= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_2 [i_0] [(signed char)17])) : (((/* implicit */int) (signed char)125)))), (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (signed char)-97)) : (((/* implicit */int) (_Bool)1))))));
                var_16 = ((/* implicit */unsigned int) min((var_5), (((/* implicit */unsigned char) ((arr_0 [i_1] [i_0]) != (arr_0 [i_1] [i_1]))))));
                var_17 *= ((/* implicit */unsigned short) ((short) (!(((/* implicit */_Bool) min((var_14), (((/* implicit */unsigned long long int) arr_1 [i_0]))))))));
                arr_5 [(signed char)1] [(signed char)1] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) << (((((((/* implicit */int) (signed char)-119)) + (139))) - (20)))))) ? ((+(var_10))) : (((int) var_5)))) == (((/* implicit */int) ((signed char) (signed char)(-127 - 1))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned char i_3 = 0; i_3 < 12; i_3 += 1) 
        {
            {
                var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_9)), (var_12)))) ? (((((/* implicit */int) var_11)) >> (((arr_1 [i_2]) + (700093778))))) : ((~(((/* implicit */int) (signed char)(-127 - 1)))))))) ? (((((/* implicit */_Bool) (-(var_7)))) ? (((/* implicit */int) ((_Bool) var_11))) : ((-(((/* implicit */int) (short)(-32767 - 1))))))) : (((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) 841232682))))), ((signed char)115))))));
                arr_12 [i_2] [i_2] [(unsigned char)0] = ((unsigned int) (_Bool)1);
                arr_13 [i_3] [i_2] = ((/* implicit */unsigned long long int) ((((unsigned int) arr_0 [(signed char)23] [i_3])) & (((/* implicit */unsigned int) ((var_7) | (((/* implicit */int) (signed char)(-127 - 1))))))));
                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967288U)) ? (((/* implicit */int) (unsigned short)7)) : (((/* implicit */int) var_0))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) min(((-(((/* implicit */int) var_13)))), (((/* implicit */int) max((var_5), (((/* implicit */unsigned char) min(((signed char)-118), ((signed char)127)))))))));
    /* LoopNest 2 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) arr_16 [i_5 - 1] [i_4] [i_4]))));
                arr_20 [i_4] [i_5] [i_4] = (~(((16U) << (((arr_0 [i_4] [i_4]) - (781568495))))));
                arr_21 [(unsigned char)0] [(unsigned char)0] = ((/* implicit */unsigned short) var_2);
                arr_22 [i_5] = ((/* implicit */short) (~(((min((((/* implicit */unsigned long long int) 4294967275U)), (2293134497273824274ULL))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)156)) ? (((/* implicit */int) (unsigned short)19817)) : (var_10))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) var_2);
}
