/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32541
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
    var_10 = ((/* implicit */unsigned long long int) ((((((var_0) + (((/* implicit */long long int) ((/* implicit */int) var_2))))) >= (((((/* implicit */_Bool) var_9)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))) || (max((((8053894919762894968ULL) > (((/* implicit */unsigned long long int) 0LL)))), (((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_9))))))));
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) (unsigned short)65535)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (unsigned short)59956)) : ((-(((/* implicit */int) var_2)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            var_12 &= ((/* implicit */short) (!(((/* implicit */_Bool) arr_3 [i_0 + 4]))));
            var_13 = ((/* implicit */unsigned short) ((signed char) 9223372036854775807LL));
            var_14 = ((/* implicit */unsigned long long int) arr_2 [i_0 + 4]);
            var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [i_0 + 4])) ^ (((/* implicit */int) arr_3 [i_0 + 1]))));
        }
        arr_4 [i_0] = ((((/* implicit */_Bool) 10392849153946656647ULL)) || (((/* implicit */_Bool) 10817735787989677700ULL)));
        /* LoopNest 3 */
        for (unsigned int i_2 = 1; i_2 < 17; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 1) 
                {
                    {
                        var_16 = ((/* implicit */long long int) var_9);
                        arr_11 [i_0] [i_0] [i_0] [(unsigned short)14] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (signed char)-4))));
                    }
                } 
            } 
        } 
        arr_12 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) var_2)) * (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
    }
    /* LoopSeq 1 */
    for (unsigned short i_5 = 0; i_5 < 16; i_5 += 2) 
    {
        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_14 [i_5])))) ? (((((/* implicit */_Bool) (signed char)8)) ? (10392849153946656647ULL) : (((/* implicit */unsigned long long int) -4364112224465387683LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_7) == (((/* implicit */int) (signed char)16))))))))) ? (var_9) : (((/* implicit */unsigned int) ((((/* implicit */int) max((((/* implicit */unsigned short) arr_2 [(unsigned short)2])), (arr_13 [i_5])))) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)79))))))))));
        var_18 += ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_13 [i_5])) ? (((/* implicit */int) arr_13 [i_5])) : (((/* implicit */int) arr_13 [i_5])))), (((/* implicit */int) arr_7 [i_5] [i_5] [i_5]))));
    }
}
