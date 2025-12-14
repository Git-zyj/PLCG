/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239863
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
    var_13 = ((/* implicit */short) var_8);
    var_14 += ((/* implicit */long long int) (-(max((((/* implicit */unsigned long long int) (unsigned char)56)), (max((((/* implicit */unsigned long long int) -5222983961315560208LL)), (9ULL)))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) /* same iter space */
    {
        var_15 |= ((/* implicit */long long int) arr_0 [i_0]);
        arr_2 [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? (((/* implicit */int) (signed char)-91)) : (((/* implicit */int) (unsigned short)0))))), (((((/* implicit */_Bool) (signed char)107)) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
    }
    for (signed char i_1 = 0; i_1 < 23; i_1 += 2) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (signed char)79)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32765))) : (arr_0 [i_1]))) ^ (((((/* implicit */_Bool) arr_4 [i_1])) ? (2001869348U) : (var_8)))));
        arr_6 [i_1] = ((/* implicit */unsigned long long int) var_4);
        var_16 = ((/* implicit */int) min(((((-(arr_3 [i_1]))) - (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_2)))))), (((/* implicit */long long int) var_2))));
    }
    for (signed char i_2 = 0; i_2 < 23; i_2 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 23; i_3 += 2) 
        {
            for (signed char i_4 = 0; i_4 < 23; i_4 += 3) 
            {
                {
                    arr_16 [i_2] [i_4] = ((/* implicit */unsigned int) -4766464440190700897LL);
                    var_17 = ((/* implicit */unsigned int) arr_3 [i_4]);
                    var_18 = ((/* implicit */unsigned char) max((((unsigned long long int) var_7)), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (~(((/* implicit */int) (signed char)70))))), (((((/* implicit */_Bool) arr_10 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-91))) : (576460743713488896LL))))))));
                }
            } 
        } 
        arr_17 [i_2] = ((/* implicit */unsigned int) ((max((arr_13 [i_2] [i_2]), (arr_13 [i_2] [i_2]))) < (arr_13 [i_2] [i_2])));
    }
    var_19 = ((/* implicit */short) max((((/* implicit */long long int) -1192781968)), (576460743713488908LL)));
    var_20 = ((/* implicit */int) var_10);
}
