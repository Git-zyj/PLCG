/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47217
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            arr_6 [i_0] [i_0] = ((((/* implicit */_Bool) var_9)) ? (((unsigned long long int) 7942463784497404131ULL)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
            arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */int) var_6)) % (((/* implicit */int) (signed char)-70)))) ^ (((/* implicit */int) ((unsigned short) 18446744073709551595ULL)))));
            var_12 = (((-(((/* implicit */int) (short)-13175)))) + ((+(((/* implicit */int) (signed char)89)))));
        }
        var_13 ^= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (short)-4336)) ? (((/* implicit */int) (unsigned short)28150)) : (((/* implicit */int) (short)-4313))))));
        arr_8 [i_0] [i_0] = ((/* implicit */short) ((unsigned short) ((((/* implicit */int) var_3)) >> (((((/* implicit */int) var_2)) + (29725))))));
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            arr_11 [i_0] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) (_Bool)1));
            var_14 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_5))));
        }
        arr_12 [i_0] = ((/* implicit */unsigned long long int) (short)4316);
    }
    /* vectorizable */
    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 2) 
    {
        arr_15 [i_3] [i_3] = ((((/* implicit */int) (_Bool)1)) ^ (-1562623961));
        arr_16 [i_3] [i_3] = ((/* implicit */signed char) (~(44223451U)));
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (arr_14 [i_3]) : (2665745682U)));
        arr_17 [i_3] [i_3] = ((/* implicit */unsigned long long int) var_1);
    }
    /* LoopSeq 2 */
    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
    {
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))) == (max((((/* implicit */unsigned int) (short)4332)), (((2350677804U) - (((/* implicit */unsigned int) ((/* implicit */int) (short)-4309)))))))));
        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_19 [i_4 + 1]) ? (((/* implicit */int) (unsigned short)47537)) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_19 [i_4 + 1]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2623239836358309947ULL)) ? (((/* implicit */int) (short)4313)) : (((/* implicit */int) arr_19 [i_4]))))) ? ((~(((/* implicit */int) var_9)))) : (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (var_2))))))) : ((-(((((/* implicit */_Bool) var_8)) ? (4294967295U) : (((/* implicit */unsigned int) 1073741312)))))))))));
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_11)))) ? (((/* implicit */int) ((((/* implicit */int) var_6)) >= (((/* implicit */int) (short)-4333))))) : (((/* implicit */int) var_1)))) - ((+((-(((/* implicit */int) (short)4332)))))))))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_19 = min((var_7), (min((((((/* implicit */_Bool) arr_21 [i_5])) ? (arr_21 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-126))))))));
        arr_22 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)4341)) & ((~(((/* implicit */int) (unsigned short)3467))))));
        arr_23 [i_5] [i_5] |= ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_20 [i_5])) : (((/* implicit */int) arr_20 [i_5]))))) : (arr_21 [i_5])))));
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) (-((~(((/* implicit */int) (signed char)31))))))) && (((/* implicit */_Bool) (+(((/* implicit */int) var_1))))))))));
    }
}
