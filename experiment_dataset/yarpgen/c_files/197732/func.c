/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197732
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
    for (unsigned short i_0 = 4; i_0 < 14; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */short) (((+(((/* implicit */int) min((((/* implicit */unsigned char) var_12)), ((unsigned char)1)))))) * (((/* implicit */int) arr_2 [i_0]))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_2 = 2; i_2 < 17; i_2 += 2) 
                {
                    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) || (var_5)));
                    var_15 = (signed char)-125;
                }
                for (int i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    var_16 = ((/* implicit */long long int) min((arr_6 [i_3] [i_3] [i_1]), (((/* implicit */unsigned int) var_5))));
                    var_17 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_2 [i_0 + 2]))))), (min((((/* implicit */unsigned long long int) arr_3 [i_0 - 1] [i_0 + 4])), (2161727821137838080ULL)))));
                    arr_12 [i_0 + 1] [i_3] [i_3] &= ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) var_4)) : ((-2147483647 - 1))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 2) 
                    {
                        var_18 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_14 [i_0 + 4]))));
                        var_19 = ((/* implicit */_Bool) (+((+(((/* implicit */int) var_2))))));
                        var_20 ^= ((((/* implicit */_Bool) ((unsigned long long int) 2161727821137838097ULL))) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) var_1)));
                    }
                    for (long long int i_5 = 4; i_5 < 14; i_5 += 3) 
                    {
                        var_21 += var_11;
                        arr_18 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_9 [i_5])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [6])))))))) ? (min((min((-359273185), (arr_10 [i_5 - 2]))), (((/* implicit */int) (!(((/* implicit */_Bool) 16285016252571713536ULL))))))) : (min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (signed char)125)) : (((/* implicit */int) (unsigned char)190)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1] [14LL] [i_1])))))))));
                    }
                    arr_19 [i_1] = min((arr_3 [i_0] [i_0]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) arr_9 [9ULL])))))));
                }
                var_22 = ((/* implicit */unsigned long long int) (unsigned char)126);
                arr_20 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_1 [12LL])) ? (arr_7 [i_0] [i_1 - 1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))) ? (((int) ((((/* implicit */_Bool) 34359738367ULL)) ? (((/* implicit */int) (unsigned short)32768)) : (((/* implicit */int) var_4))))) : (((/* implicit */int) (_Bool)1))));
                arr_21 [i_0 + 1] [i_0] [i_0] &= ((/* implicit */signed char) var_4);
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 25; i_6 += 2) 
    {
        for (unsigned short i_7 = 0; i_7 < 25; i_7 += 3) 
        {
            {
                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) << (((((/* implicit */int) var_13)) + (10)))))) ? (((/* implicit */int) ((unsigned char) 82638722))) : (((((((/* implicit */int) var_13)) + (2147483647))) << (((18446744039349813248ULL) - (18446744039349813248ULL)))))))) ? (((/* implicit */int) var_1)) : ((+(((/* implicit */int) (signed char)-114))))));
                var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (~(82638726))))));
            }
        } 
    } 
}
