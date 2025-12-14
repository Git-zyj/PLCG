/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200763
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
    var_19 = ((/* implicit */unsigned char) var_10);
    var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_15))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 23; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */short) min((((((/* implicit */_Bool) max((arr_2 [i_1]), (((/* implicit */unsigned short) (short)192))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_10)))) : (((arr_11 [i_0] [i_0]) - (arr_11 [i_0] [(_Bool)1]))))), (((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) var_17)) ? (263949717769939926ULL) : (var_6)))))));
                                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (!((!(((/* implicit */_Bool) var_16)))))))));
                                var_22 -= ((/* implicit */short) var_5);
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */short) ((signed char) var_15));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_5 = 2; i_5 < 12; i_5 += 4) /* same iter space */
    {
        arr_15 [i_5] = ((/* implicit */unsigned long long int) arr_7 [i_5] [(unsigned char)22]);
        var_24 ^= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 131071)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_1)))))));
        arr_16 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!((!(((/* implicit */_Bool) 131074)))))))) | (arr_1 [i_5 + 1])));
        var_25 = ((/* implicit */signed char) arr_6 [i_5] [i_5] [i_5 + 1]);
    }
    for (unsigned int i_6 = 2; i_6 < 12; i_6 += 4) /* same iter space */
    {
        var_26 *= ((/* implicit */unsigned char) min((arr_17 [(unsigned char)10]), (((/* implicit */unsigned long long int) var_1))));
        arr_21 [i_6 - 2] = max((arr_7 [i_6 - 1] [i_6 - 1]), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) -131079)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (var_17))) > (((/* implicit */unsigned long long int) ((long long int) var_6)))))));
    }
}
