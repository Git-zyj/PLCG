/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40901
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
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_12 |= ((/* implicit */unsigned short) (~(((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) * (arr_2 [i_0])))));
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 3; i_2 < 18; i_2 += 4) 
            {
                {
                    var_13 -= ((/* implicit */long long int) (-(((var_7) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                    var_14 += ((/* implicit */long long int) (+((-(((/* implicit */int) var_11))))));
                }
            } 
        } 
        var_15 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_7)))))))) ^ (((5581671865340559468ULL) | (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_16 = ((/* implicit */short) ((-9223372036854775798LL) * (((((/* implicit */long long int) 1094745774U)) / (-1567889342258042467LL)))));
        var_17 = ((/* implicit */unsigned short) ((var_6) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_3] [i_3])))));
        var_18 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_9 [i_3]))));
    }
    for (int i_4 = 1; i_4 < 23; i_4 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_5 = 2; i_5 < 21; i_5 += 2) 
        {
            for (short i_6 = 0; i_6 < 24; i_6 += 4) 
            {
                {
                    var_19 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_10) << (((var_1) + (2396959496209254333LL)))))) || ((!(((/* implicit */_Bool) var_11))))));
                    var_20 += ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_4 - 1] [i_5] [i_6]))) * (2801559918U))) * (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)10)) / (((/* implicit */int) var_11)))))))) * (((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned char)22))))) / (((1567889342258042467LL) / (((/* implicit */long long int) arr_16 [i_6] [i_4] [i_4]))))))));
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned char) (+(((((/* implicit */unsigned int) ((/* implicit */int) var_0))) * (0U)))));
        var_22 |= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_13 [i_4 + 1])) * (((/* implicit */int) var_2))))) / ((+((+(var_6)))))));
    }
    /* vectorizable */
    for (unsigned char i_7 = 0; i_7 < 19; i_7 += 4) 
    {
        var_23 -= ((/* implicit */unsigned int) ((((var_4) + (2147483647))) << (((arr_2 [i_7]) * (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))))));
        /* LoopNest 2 */
        for (unsigned char i_8 = 0; i_8 < 19; i_8 += 4) 
        {
            for (long long int i_9 = 0; i_9 < 19; i_9 += 2) 
            {
                {
                    var_24 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_7] [i_7] [i_7]))) % (var_1)));
                    arr_26 [i_7] [i_8] [i_9] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((arr_10 [i_7]) | (((/* implicit */long long int) -449262012))))) | (var_5)));
                    var_25 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) - (var_8)));
                }
            } 
        } 
    }
    var_26 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) - ((-(((var_5) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))));
}
