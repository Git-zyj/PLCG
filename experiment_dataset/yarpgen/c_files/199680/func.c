/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199680
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
    var_20 &= ((/* implicit */short) var_4);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_21 |= (-(12014842250042856132ULL));
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 17; i_2 += 2) 
            {
                {
                    var_22 *= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [i_2 - 2] [i_1 - 1]) == (max((6431901823666695499ULL), (arr_5 [i_0] [i_0] [i_0]))))))) == (max((6431901823666695491ULL), (6431901823666695478ULL)))));
                    var_23 |= ((((/* implicit */long long int) ((/* implicit */int) max(((!(((/* implicit */_Bool) (signed char)-126)))), ((!(((/* implicit */_Bool) (signed char)-17)))))))) ^ (((((/* implicit */_Bool) (signed char)123)) ? (((/* implicit */long long int) ((/* implicit */int) (short)17024))) : (max((var_13), (var_8))))));
                    var_24 = ((/* implicit */int) min((((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) (unsigned short)61440)) ? (((/* implicit */int) (short)-4)) : (((/* implicit */int) var_2)))))), ((unsigned short)46785)));
                }
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 11; i_3 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 2) 
        {
            arr_13 [i_3] [i_4] [i_4] = ((/* implicit */short) ((((((/* implicit */_Bool) (signed char)-45)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_18))) ^ (arr_10 [i_4] [i_4] [i_3])));
            var_25 = ((short) arr_1 [i_3] [i_4]);
            var_26 = ((/* implicit */long long int) arr_9 [i_3]);
        }
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 2) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    var_27 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (arr_5 [i_3] [i_3] [i_3]) : (((/* implicit */unsigned long long int) (~(5541960085269648310LL))))));
                    var_28 = ((/* implicit */unsigned int) ((arr_5 [i_3] [i_5] [i_6]) >= (arr_5 [i_3] [i_5] [i_6])));
                    arr_19 [i_3] [i_5] [i_5] [i_6] = ((/* implicit */signed char) ((arr_8 [i_5] [i_3]) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-50)))));
                    var_29 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 13583007282023890449ULL))));
                }
            } 
        } 
    }
    for (unsigned int i_7 = 0; i_7 < 16; i_7 += 3) 
    {
        var_30 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */int) var_2)) << (((arr_3 [i_7] [i_7] [i_7]) - (855922920U)))))) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_5 [i_7] [i_7] [i_7]))) : (((/* implicit */unsigned long long int) (~(4051168314U)))))) | (max((((/* implicit */unsigned long long int) min((-5541960085269648311LL), (((/* implicit */long long int) (short)12320))))), (arr_20 [i_7] [i_7])))));
        var_31 = ((/* implicit */unsigned char) (signed char)-50);
        var_32 = arr_20 [i_7] [i_7];
    }
}
