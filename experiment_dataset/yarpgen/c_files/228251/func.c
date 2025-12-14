/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228251
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
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        var_16 = ((/* implicit */int) (((!(((/* implicit */_Bool) (short)21569)))) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21569)))));
        var_17 = ((/* implicit */long long int) var_2);
        var_18 = ((/* implicit */short) arr_2 [i_0]);
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_2] = ((/* implicit */short) min((((/* implicit */unsigned long long int) arr_0 [i_2])), (((((/* implicit */_Bool) ((var_9) % (((/* implicit */long long int) ((/* implicit */int) var_15)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (((16611321272479470040ULL) ^ (arr_7 [i_0] [i_1] [i_2])))))));
                    var_19 *= ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0] [1ULL])) && (((/* implicit */_Bool) arr_7 [i_2] [i_1] [i_0]))));
                    arr_10 [i_2] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -2071001165977304115LL))))), (((unsigned long long int) arr_4 [i_1 + 2] [i_0 - 1]))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_3 = 4; i_3 < 16; i_3 += 2) 
        {
            for (unsigned int i_4 = 3; i_4 < 16; i_4 += 1) 
            {
                {
                    arr_17 [i_0] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_7 [i_4 + 1] [i_3] [i_0])) ? (var_4) : (3803861378U)))))) : (((((/* implicit */_Bool) 2550041054U)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)10195))))) : (min((((/* implicit */unsigned long long int) -2071001165977304115LL)), (1835422801230081589ULL)))))));
                    var_20 &= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 2071001165977304129LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_4] [9]))) : (arr_3 [i_0] [i_3])))))) == (((((/* implicit */_Bool) arr_4 [i_0 - 2] [i_0 + 1])) ? (8456589990030875091ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)48)))))));
                }
            } 
        } 
    }
    var_21 = ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_14)) : (var_11));
    /* LoopSeq 2 */
    for (signed char i_5 = 2; i_5 < 15; i_5 += 1) /* same iter space */
    {
        var_22 *= ((/* implicit */unsigned int) ((((unsigned long long int) ((((/* implicit */_Bool) -2071001165977304115LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)21537))))) != (((/* implicit */unsigned long long int) arr_11 [i_5] [i_5]))));
        /* LoopNest 2 */
        for (int i_6 = 4; i_6 < 16; i_6 += 3) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    arr_27 [i_5] [i_6 - 4] [i_7] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_15))));
                    arr_28 [i_7] = ((/* implicit */_Bool) (-(2071001165977304135LL)));
                }
            } 
        } 
    }
    for (signed char i_8 = 2; i_8 < 15; i_8 += 1) /* same iter space */
    {
        var_23 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-97)) ? (-2071001165977304115LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        var_24 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) var_8))))))) != (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_9)) : (arr_24 [i_8 + 2] [(_Bool)1] [(_Bool)1] [i_8])))));
        var_25 = ((/* implicit */unsigned short) ((arr_4 [i_8] [i_8]) & ((-(arr_16 [i_8] [i_8] [i_8])))));
    }
    var_26 = ((/* implicit */short) 1835422801230081576ULL);
}
