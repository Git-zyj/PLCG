/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210429
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
    var_17 = ((/* implicit */unsigned char) var_16);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 3 */
            for (short i_2 = 2; i_2 < 8; i_2 += 2) 
            {
                var_18 = ((/* implicit */unsigned int) arr_5 [i_0] [i_0] [i_2]);
                arr_8 [i_0] = ((/* implicit */long long int) max((((((arr_6 [i_0] [i_2]) + (((/* implicit */unsigned long long int) arr_4 [i_0])))) | (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_12), (var_12))))))), (((/* implicit */unsigned long long int) -703812082))));
                var_19 -= ((/* implicit */_Bool) (~(((/* implicit */int) var_12))));
                arr_9 [i_0] [i_2] = ((/* implicit */unsigned char) min((((/* implicit */long long int) (short)-20096)), (((long long int) var_7))));
                arr_10 [i_0] = ((/* implicit */unsigned char) arr_4 [i_0]);
            }
            for (unsigned int i_3 = 0; i_3 < 10; i_3 += 4) 
            {
                arr_14 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) (unsigned short)16756)) ? (8LL) : (4447339731460419267LL))) : (((/* implicit */long long int) min(((~(var_6))), ((~(((/* implicit */int) var_5)))))))));
                arr_15 [i_0] [i_1] [i_0] = (i_0 % 2 == 0) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_11 [i_1] [i_3])) && (((/* implicit */_Bool) ((var_4) >> (((arr_4 [i_0]) - (1813422252U)))))))) ? (((/* implicit */int) (((!(((/* implicit */_Bool) var_9)))) && (((/* implicit */_Bool) var_8))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((-3231393626391049117LL) - (((/* implicit */long long int) var_13))))))))))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_11 [i_1] [i_3])) && (((/* implicit */_Bool) ((var_4) >> (((((arr_4 [i_0]) - (1813422252U))) - (589917310U)))))))) ? (((/* implicit */int) (((!(((/* implicit */_Bool) var_9)))) && (((/* implicit */_Bool) var_8))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((-3231393626391049117LL) - (((/* implicit */long long int) var_13)))))))))));
                var_20 -= ((/* implicit */short) max((((var_4) ^ (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))), (((/* implicit */long long int) var_5))));
                arr_16 [i_0] [i_0] = ((/* implicit */int) arr_1 [i_0]);
            }
            for (long long int i_4 = 1; i_4 < 8; i_4 += 3) 
            {
                var_21 = max((((/* implicit */int) arr_3 [i_4 - 1] [i_0] [i_4])), ((((_Bool)1) ? (((/* implicit */int) (short)-31532)) : (((/* implicit */int) arr_19 [i_4 + 2] [i_0] [i_4 + 2] [i_4 - 1])))));
                var_22 = ((/* implicit */int) max(((short)-10934), (((/* implicit */short) (_Bool)1))));
            }
            /* LoopNest 2 */
            for (signed char i_5 = 0; i_5 < 10; i_5 += 3) 
            {
                for (long long int i_6 = 0; i_6 < 10; i_6 += 3) 
                {
                    {
                        var_23 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) min(((short)25018), (((/* implicit */short) arr_21 [i_6] [i_5] [i_0] [i_0]))))), (min((((((/* implicit */_Bool) -7736288068420547971LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_15))), (((/* implicit */unsigned long long int) (~(4447339731460419267LL))))))));
                        var_24 += var_14;
                    }
                } 
            } 
            arr_26 [i_0] = ((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)151)) << (((-1851313897) + (1851313898))))) << (((((/* implicit */int) var_0)) - (41)))));
            arr_27 [i_0] = ((/* implicit */unsigned int) (~(max((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)35)) : (var_8)))), (((((/* implicit */_Bool) var_4)) ? (-6815427708236245794LL) : (arr_1 [i_0])))))));
        }
        arr_28 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)(-32767 - 1))) + (2147483647))) >> (((((/* implicit */int) (short)-27478)) + (27499)))))) ^ (min((((/* implicit */unsigned long long int) arr_13 [i_0] [8LL])), (var_15)))));
    }
    var_25 = ((/* implicit */int) ((((/* implicit */int) var_16)) > (var_6)));
    /* LoopNest 3 */
    for (unsigned char i_7 = 2; i_7 < 17; i_7 += 1) 
    {
        for (short i_8 = 3; i_8 < 17; i_8 += 4) 
        {
            for (long long int i_9 = 2; i_9 < 15; i_9 += 3) 
            {
                {
                    arr_37 [i_7] [i_8] &= ((((/* implicit */int) ((unsigned short) arr_36 [i_7 - 2]))) << ((((((-(arr_36 [i_7 + 1]))) + (1421758477709619780LL))) - (17LL))));
                    var_26 |= ((/* implicit */long long int) ((((/* implicit */int) (short)-1)) + (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
    } 
}
