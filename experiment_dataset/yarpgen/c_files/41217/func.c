/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41217
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
    var_14 &= ((/* implicit */unsigned int) var_0);
    var_15 = ((/* implicit */long long int) ((((/* implicit */unsigned int) (-((+(((/* implicit */int) var_0))))))) <= (((unsigned int) (~(((/* implicit */int) var_7)))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            arr_4 [i_1 + 1] [i_0] = ((/* implicit */unsigned long long int) (~(((arr_2 [i_0 + 2]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127)))))));
            arr_5 [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((arr_3 [i_1] [i_1 + 1] [i_1 - 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) && ((!(((/* implicit */_Bool) 7436008866191497356ULL)))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-127))) ^ (((7436008866191497352ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))));
        }
        for (short i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) var_7))));
            var_17 = ((/* implicit */unsigned short) min(((((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_7 [i_2] [i_2] [i_0]))), ((+(min((arr_7 [i_2] [i_2] [i_0]), (((/* implicit */unsigned long long int) (signed char)-119))))))));
            var_18 = ((unsigned long long int) (signed char)118);
        }
        for (unsigned int i_3 = 0; i_3 < 20; i_3 += 4) 
        {
            var_19 = ((/* implicit */short) var_3);
            var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((unsigned int) var_9)))));
        }
        arr_10 [(unsigned short)2] = ((/* implicit */unsigned long long int) var_0);
        /* LoopNest 3 */
        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 4) 
        {
            for (unsigned char i_5 = 0; i_5 < 20; i_5 += 2) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 2) 
                {
                    {
                        var_21 = ((/* implicit */signed char) var_4);
                        arr_18 [i_0] [i_4] [i_4] [i_6] [i_0] = ((/* implicit */short) min((((/* implicit */unsigned short) (signed char)-124)), (min((((/* implicit */unsigned short) var_4)), (var_9)))));
                        arr_19 [i_0] = ((/* implicit */unsigned char) ((arr_9 [i_4] [i_0]) <= (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0 + 3] [i_0 + 3] [i_6])) & (((/* implicit */int) var_3))))) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))));
                    }
                } 
            } 
        } 
    }
    var_22 |= ((/* implicit */unsigned char) var_11);
}
