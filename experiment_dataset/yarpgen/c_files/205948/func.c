/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205948
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
    var_15 = ((/* implicit */short) (!((!(((/* implicit */_Bool) (~(((/* implicit */int) var_0)))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned short i_2 = 3; i_2 < 8; i_2 += 2) 
            {
                {
                    var_16 *= ((/* implicit */signed char) arr_9 [i_0] [i_2] [i_0]);
                    arr_10 [i_2] [(unsigned char)0] = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65517)))))));
                    arr_11 [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) var_3)) - (((/* implicit */int) (short)-32762))));
                }
            } 
        } 
        var_17 = var_5;
    }
    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 4) 
    {
        var_18 = ((/* implicit */_Bool) (+(arr_12 [i_3])));
        var_19 = ((/* implicit */_Bool) ((((/* implicit */int) (!((!(((/* implicit */_Bool) 1594139315U))))))) % (((((/* implicit */_Bool) 2502606167214563915LL)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (short)-4140))))));
        var_20 = ((/* implicit */long long int) arr_13 [6LL] [i_3]);
        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (short)-32767))));
    }
    for (short i_4 = 0; i_4 < 24; i_4 += 3) 
    {
        var_22 = ((/* implicit */short) arr_14 [i_4] [i_4]);
        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_14 [i_4] [i_4])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(var_13))))) : (arr_15 [22LL]))))));
        var_24 = ((/* implicit */signed char) arr_15 [i_4]);
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 3) 
        {
            for (unsigned int i_6 = 0; i_6 < 24; i_6 += 4) 
            {
                {
                    var_25 *= ((/* implicit */short) arr_15 [i_4]);
                    var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-((~(((/* implicit */int) var_9))))))) ? ((~(((/* implicit */int) (short)32767)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2700827987U)) ? (((/* implicit */int) (unsigned short)38910)) : (((/* implicit */int) (short)-12696))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_4] [i_4]))))) : ((~(((/* implicit */int) (unsigned char)255))))))));
                }
            } 
        } 
    }
    var_27 |= ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) ((((((/* implicit */int) var_2)) * (((/* implicit */int) var_2)))) > (((/* implicit */int) ((((/* implicit */int) (unsigned short)41698)) >= (((/* implicit */int) var_0)))))))));
}
