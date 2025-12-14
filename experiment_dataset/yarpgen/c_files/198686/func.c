/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198686
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_14 &= max(((_Bool)1), ((_Bool)1));
                    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) arr_0 [(signed char)12] [i_0]))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_6) : (((/* implicit */int) var_12)))))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_3 = 1; i_3 < 7; i_3 += 4) 
    {
        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) || ((_Bool)0))))));
        arr_12 [i_3] = ((/* implicit */_Bool) ((unsigned int) arr_4 [i_3 + 2] [i_3]));
        arr_13 [(signed char)0] |= ((/* implicit */unsigned char) ((unsigned int) arr_10 [i_3 + 1]));
    }
    /* vectorizable */
    for (unsigned short i_4 = 0; i_4 < 10; i_4 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */long long int) ((_Bool) var_0));
        arr_17 [(short)1] [i_4] = ((/* implicit */unsigned short) (!(arr_4 [i_4] [i_4])));
        /* LoopNest 3 */
        for (unsigned char i_5 = 1; i_5 < 9; i_5 += 2) 
        {
            for (unsigned char i_6 = 0; i_6 < 10; i_6 += 2) 
            {
                for (unsigned short i_7 = 1; i_7 < 8; i_7 += 2) 
                {
                    {
                        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (((!(((/* implicit */_Bool) var_6)))) || (((/* implicit */_Bool) ((int) 4131700348252211849LL))))))));
                        arr_27 [i_6] [i_6] [i_7] [i_6] = ((/* implicit */_Bool) ((var_13) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-18153)))));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_8 = 0; i_8 < 10; i_8 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((unsigned int) min((((/* implicit */unsigned short) var_13)), (arr_15 [i_8] [i_8])))))));
        var_20 = ((/* implicit */unsigned int) ((short) min((var_5), (((/* implicit */unsigned long long int) arr_5 [i_8] [i_8])))));
    }
}
