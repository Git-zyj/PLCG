/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197080
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
    for (unsigned short i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0 + 3] &= ((/* implicit */unsigned int) (~(((/* implicit */int) min(((short)17843), (((/* implicit */short) arr_3 [i_0 + 2] [i_0 + 2] [i_1])))))));
                var_14 = ((/* implicit */short) ((unsigned short) (~((-(((/* implicit */int) (short)-17848)))))));
                var_15 = ((/* implicit */unsigned long long int) ((unsigned short) (+(((((/* implicit */int) (unsigned char)40)) ^ (((/* implicit */int) arr_2 [i_1])))))));
            }
        } 
    } 
    var_16 = ((/* implicit */short) var_10);
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        arr_9 [i_2] = ((/* implicit */unsigned char) var_9);
        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((int) (short)-9098)))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_3 = 0; i_3 < 17; i_3 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */long long int) (+(573062770U)));
        /* LoopNest 3 */
        for (long long int i_4 = 1; i_4 < 15; i_4 += 4) 
        {
            for (unsigned int i_5 = 1; i_5 < 16; i_5 += 1) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 4) 
                {
                    {
                        arr_20 [i_3] [i_4 + 1] [i_4 + 1] &= ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) arr_3 [i_3] [i_4] [i_6]))))));
                        arr_21 [i_3] [i_3] [i_4] [i_6] [i_5 + 1] [i_6] &= ((/* implicit */unsigned short) ((arr_4 [i_5 - 1] [i_4 + 1]) >= (arr_4 [i_5 + 1] [i_4 + 2])));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned int i_7 = 0; i_7 < 17; i_7 += 1) 
        {
            for (unsigned char i_8 = 0; i_8 < 17; i_8 += 2) 
            {
                for (signed char i_9 = 0; i_9 < 17; i_9 += 2) 
                {
                    {
                        var_19 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)158))) < (4188264654385698160LL)));
                        var_20 = ((/* implicit */unsigned char) ((arr_19 [i_3] [i_3]) >> (((arr_19 [i_3] [i_3]) - (463782677835397238ULL)))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (short i_10 = 0; i_10 < 17; i_10 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_27 [i_10]))));
        arr_34 [12U] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)46)) / (arr_23 [i_10] [i_10] [i_10])));
    }
}
